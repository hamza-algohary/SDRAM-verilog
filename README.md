# SDRAM Design & Implementation Using System Verilog

## Prerequisites
1. Knowing the operation design of DRAM (using coincident selection).
2. Basice knoweledge of Verilog or System Verilog
## Steps
### 1. Get to know the SDRAM
**SDRAM** or **Synchronous Dynamic Random Access Memory** is any DRAM where the operation of its external pin interface is coordinated by an externally supplied clock signal. <sup>[Wikipedia](https://en.wikipedia.org/wiki/Synchronous_dynamic_random-access_memory)</sup>

Being synchronous implies two things:
1. It is a finite state machine (like any sequential circuit).
2. Synchronization requires registers for input, output and other stuff.

Another thing SDRAMs are capable of is what is know as **burst read** and **burst write**, each of which means reading or writing multiple consecutive bytes per one read/write commmand. The number of bytes is knows as **burst length**. Each consecutive byte is transferred at a new positive edge.

### 2. Define the behaviour of an SDRAM
Any module can be defined by its inputs and outputs, and how inputs map to outputs. Also in case of sequential circuits, we have to take timing (or sequence of operations) into account.

SDRAM's inputs:
- $Clk$ : clock
- $\overline{CS}$ : chip select (active low)
- $\overline{WE}$ : write enable (active low)
- $\overline{RAS}$ : Row Access Strobe (active low)
- $\overline{CAS}$ : Column Access Strobe (active low)
- Address bus
- Data bus (both input and output)

As for timing (or operations sequence) it is best represented as time diagram. 

So below is the time diagram for read operation in SDRAM.

![SDRAM Read Time Diagram](sdram-timing.png)

Notice that burst length here is four. Notice also that there should be an empty cycle between row address being sent, and column address, and the actual read/write operation. 

**Exercise: Try to make an exactly similar time diagram but for writing**

That being said SDRAM in addition to being able to read and write, it is able to refresh a row. 

SDRAM keeps track of the address of last refreshed row, and when it receives a refresh command it refreshes the next one.

As for how a refresh is signaled, we can assign it a signal that is not used by either read or write.

Read operation is triggerd by activating **RAS** then **CAS** all while **CS** is active and **WE** is unactive. Same goes for write operation except that **WE** is active.

With that in mind we may assign refresh to be triggered by activating **RAS** & **CAS** & **CS** simultaneously.

### 3. Identify the states of an SDRAM
**Exercise: Using the above understanding of SDRAM try to design a state machine that fullfills the above requirements. Use state diagram to represent your machine.**

We will go with the following state machine:
![SDRAM State Diagram](media/sdram-state-diagram-light.png)

From the state diagram, the SDRAM has 6 state. It also has 3 possible commands to drive it through the state, these commands are:
1. Select Row (RAS & CS active , CAS inactive)
2. Select Column (CAS & CS active , RAS inactive)
3. Refresh Next Row (RAS & CAS & CS active)

### 4. Translate the state diagram to code
**Important Note: Make sure your compiler supports System Verilog, because we will use features that are not available in Verilog**

In our design data bus is 8 bits, and address is 8 bits as well, therefore address bus is 4 bits (because address is sent in two parts)

First define the module `SDRAM`

```verilog
module SDRAM (
    input wire [3:0] partial_address_bus,
    input wire clock,
    input wire chip_enable_not,
    input wire write_not,
    input wire ras_not,
    input wire cas_not,
    inout wire [7:0] data
);
// Your logic goes here
endmodule
```

Then we add some useful constants
```verilog
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


endmodule
```

The first six constants are to define the states, and the three below are to define commands. The last one represents burst length of course.

Now let's define the memory cells matrix as a 2D array of registers (where a register represents a cell whose length is bits). Its dimensions are 16x16.

```verilog
    reg [7:0] memory [15:0][15:0];
```

> Note: In actual DRAMs, memory cells as you know are actually made with 1 transistor + 1 capacitor.

Now let's add a bunch of registers that represent the SDRAM's current state
```verilog
    reg [16*8-1:0] selected_row;
    reg [7:0] remaining_bytes = 0;
    reg [2:0] state = IS_IDLE;
    reg [3:0] last_refreshed_row = -4'd1;

    reg [3:0] row_address;
    reg [3:0] col_address;

    // The following two registers are both connected to data bus.
    reg [7:0] output_data_register;
    reg [7:0] input_data_register;
```

Now for convenience we may define a variable (wire) to represent current command
```verilog
    wire [2:0] command;
    assign command = {ras_not,cas_not,chip_enable_not};
```