/* verilator lint_off CASEINCOMPLETE */
`timescale 1ns/1ps

// 8 bit address, 8 bit data block
module SDRAM (
    input wire [3:0] partial_address_bus,
    input wire clock,
    input wire chip_enable_not,
    input wire write_not,
    input wire ras_not,
    input wire cas_not,
    inout wire [7:0] data
);

    localparam IS_IDLE          = 3'd0,
               IS_REFRESHING    = 3'd1,
               IS_ROW_SELECTED  = 3'd2,
               IS_COL_SELECTED  = 3'd3,
               IS_READING       = 3'd4,
               IS_WRITING       = 3'd5;

    localparam command_refresh       = 3'd0,
               command_select_row    = 3'd2,
               command_select_column = 3'd4;

    localparam BURST_LENGTH = 4;

    reg [7:0] memory [15:0][15:0];
    reg [16*8-1:0] selected_row;
    reg [7:0] remaining_bytes = 0;
    reg [2:0] state = IS_IDLE;
    reg [3:0] last_refreshed_row = -4'd1;

    reg [3:0] row_address;
    reg [3:0] col_address;

    reg [7:0] output_data_register;
    reg [7:0] input_data_register;

    wire [2:0] command;
    // assign command = {ras_not,cas_not,chip_enable_not,write_not};
    assign command = {ras_not,cas_not,chip_enable_not};

    assign data = (!chip_enable_not && write_not) ? output_data_register : 8'bz;



    always @(posedge clock) begin
        // $display("command is %4b" , command);
        case (state)
            IS_IDLE : begin
                // $display("IDLE");
                case (command)
                    command_refresh : begin
                        state = IS_REFRESHING;
                    end 
                    command_select_row : begin
                        row_address = partial_address_bus;                 
                        selected_row = get_row(memory[row_address]); 
                        state = IS_ROW_SELECTED;
                    end
                endcase
            end
            IS_REFRESHING : begin
                // $display("Refreshing");
                last_refreshed_row++;
                selected_row = get_row(memory[last_refreshed_row]);  
                put_row(selected_row , memory[last_refreshed_row]);  
                state = IS_IDLE; 
            end
            IS_ROW_SELECTED : begin
                // $display("Row is selected");
                if(command == command_select_column) begin
                    remaining_bytes = BURST_LENGTH;
                    col_address = partial_address_bus;
                    state = IS_COL_SELECTED;
                end
            end
            IS_COL_SELECTED : begin
                // $display("Column selected");
                if (write_not) begin // if read
                    state = IS_READING;
                end else begin       // if write
                    state = IS_WRITING;
                end
            end
            IS_READING : begin
                // $display("reading row: %0d , col %0d" , row_address , col_address);
                // output_data_register = selected_row[(col_address+1)*8:col_address*8];
                output_data_register = selected_row[col_address*8 +: 8];
                col_address++;
                remaining_bytes--;
                if (remaining_bytes == 0) 
                    state = IS_IDLE;
            end
            IS_WRITING : begin
                // $display("writing row: %0d , col %0d" , row_address , col_address);
                input_data_register = data;
                selected_row[col_address*8 +: 8] = input_data_register;
                // memory[row_address][col_address] = input_data_register;   
                col_address++;    
                remaining_bytes--;
                if (remaining_bytes == 0) begin
                    put_row(selected_row , memory[row_address]);  
                    state = IS_IDLE;    
                end
            end
        endcase
    end
    
endmodule

// module main;

//     wire [3:0] address;
//     reg clock = 0;
//     wire chip_enable_not;
//     wire write_not;
//     wire ras_not;
//     wire cas_not;
//     wire [7:0] data;

//     SDRAM ram(
//         .partial_address_bus(address),
//         .clock(clock),
//         .chip_enable_not(chip_enable_not),
//         .write_not(write_not),
//         .ras_not(ras_not),
//         .cas_not(cas_not),
//         .data(data)
//     );

//     integer write = 0;

//     initial begin
//         $dumpfile("wave.vcd");
//         $dumpvars(1,main);

//         forever #5 clock = ~clock;
//         #50;
//         //writing
//         write_not = 0; chip_enable_not = 0;
        
//         ras_not = 0; address = 0;
//         clock = ~clock;
//         $finish;
//     end

//     always @(posedge clock) begin
//         if (write) begin
            
//         end
//     end
// endmodule

// Credits: ChatGPT 
function [16*8-1:0] get_row;
    input [7:0] mem [15:0];
    integer i;
    begin
        for (i = 0; i < 16; i = i + 1)
            get_row[i*8 +: 8] = mem[i];
    end
endfunction

// Credits: ChatGPT (A task is like a function but it is capable of modifiying an external array)
task put_row;
    input [16*8-1:0] row_data;   // wide data to write
    output [7:0] mem [15:0];     // memory row to update
    integer i;
    begin
        for (i = 0; i < 16; i = i + 1)
            mem[i] = row_data[i*8 +: 8];
    end
endtask