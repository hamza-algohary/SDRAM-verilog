`timescale 1ns/1ps

module tb_sdram;

    reg         clock = 0;
    reg [3:0]   partial_address_bus = 0;
    reg         chip_enable_not = 1;
    reg         write_not = 1;
    reg         ras_not = 1;
    reg         cas_not = 1;

    // Bidirectional data bus
    reg  [7:0]  data_out;       // what testbench wants to drive
    wire [7:0]  data;           // connected to SDRAM module
    assign data = (drive_data) ? data_out : 8'bz;

    reg drive_data = 0;         // control TB driving of inout bus

    // Instantiate DUT
    SDRAM dut (
        .partial_address_bus(partial_address_bus),
        .clock(clock),
        .chip_enable_not(chip_enable_not),
        .write_not(write_not),
        .ras_not(ras_not),
        .cas_not(cas_not),
        .data(data)
    );

    // Clock generation
    always #5 clock = ~clock;   // 100 MHz

    // ===== Helper tasks =====

    // Issue a row select command
    task select_row(input [3:0] row);
    begin
        @(posedge clock);
        partial_address_bus = row;
        chip_enable_not = 0; write_not = 1; ras_not = 0; cas_not = 1;  // command = 4
        @(posedge clock);
        ras_not = 1; // return to idle
        partial_address_bus = 4'bz;
    end
    endtask

    // Issue a column select command
    task select_column(input [3:0] col, input is_read);
    begin
        @(posedge clock);
        partial_address_bus = col;
        chip_enable_not = 0;
        write_not = is_read;   // 1=read, 0=write
        ras_not = 1;
        cas_not = 0;           // command = 8
        @(posedge clock);
        cas_not = 1; // return to idle
        partial_address_bus = 4'bz;
        @(posedge clock);
    end
    endtask

    // Write one data byte
    task write_byte(input [7:0] value);
    begin
        drive_data = 1;
        data_out = value;
        @(posedge clock);
    end
    endtask

    // Read one data byte
    task read_byte;
    begin
        drive_data = 0;   // release bus
        @(posedge clock);
        $display("Read byte: %02x", data);
    end
    endtask


    // ===== Test sequence =====
    initial begin
        $dumpfile("wave.vcd");   // for waveform
        $dumpvars(1, testbench);

        $display("=== SDRAM TEST START ===");

        chip_enable_not = 1;
        write_not = 1;
        ras_not = 1;
        cas_not = 1;

        repeat(3) @(posedge clock);

        // ---- WRITE BURST ----
        $display("\nWriting 4 bytes to row 3, col 2...");
        select_row(4'h3);
        select_column(4'h2, /*read=*/0);

        write_byte(8'hAA);
        write_byte(8'hBB);
        write_byte(8'hCC);
        write_byte(8'hDD);

        repeat(2) @(posedge clock);

        // ---- READ BURST ----
        $display("\nReading 4 bytes from row 3, col 2...");
        select_row(4'h3);
        select_column(4'h2, /*read=*/1);

        read_byte();
        read_byte();
        read_byte();
        read_byte();

        repeat(5) @(posedge clock);

        $display("=== SDRAM TEST END ===");
        $finish;
    end

endmodule
