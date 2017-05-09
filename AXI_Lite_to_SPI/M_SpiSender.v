`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: nagy.marton.donat
// 
// Create Date:    17:01:43 05/07/2017 
// Design Name: 
// Module Name:    M_SpiSender 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module M_SpiSender(
// system internal
    input clk,
	 input rst,
    input start,
	 input continued,
	 input [1:0] clkDiv,
    input [7:0] txData,
    output reg [7:0] rxData,
    output reg ready, // ready for instruction (idle)
	 output reg returnedValue, // shows if the data emitted is return from a read seq.
// SPI external
    output SCK,
    output reg CE,
    output reg MOSI,
    input MISO,
	 input CPOL,
    input CPHA
    );

initial begin
	CE <= 1;
	MOSI <= 0;
end

localparam
	SPI_CMD_READ  = 8'b0000_0011, // Read data from memory array beginning at selected address
	SPI_CMD_WRITE = 8'b0000_0010; // Write data to memory array beginning at selected address

	// following two are used for determining returnData
	reg returnValue = 0; // tells if the current long term sequence is expected to return a value
								// (e.g. as a read cycle returns read data
	reg [1:0] longSequenceStep = 0; 	// shows cycle number of the long term sequence
										// e.g. 	SPI_CMD_READ 	--> 0th
										//			ADDR0				--> 1st
										//			ADDR1				--> 2nd
										//			READ BYTE		--> 3rd

//**************** CLOCK DIVIDER ****************

	reg enableClk = 0;
	reg resetClk = 0;
	reg [3:0] clock_counter = 0;
   
   always @(posedge clk)
	begin
		if (resetClk)
		begin
			clock_counter <= 0;
			resetClk <= 0;
		end
		else if (enableClk)
			clock_counter <= clock_counter + 1;
	end

	//division selection based on REG_CMD
	reg divd_clk;
   always @(
		clkDiv[1:0],
		clock_counter[0],
		clock_counter[1],
		clock_counter[2],
		clock_counter[3]
		)
      case (clkDiv[1:0])
         2'b00: divd_clk <= clock_counter[0];
         2'b01: divd_clk <= clock_counter[1];
         2'b10: divd_clk <= clock_counter[2];
         2'b11: divd_clk <= clock_counter[3];
      endcase

	// CPOL inverts clk, hence idle clk is 1 if CPOL is 1
	assign SCK = CPOL ? ~divd_clk : divd_clk;

//**************** STATE MACHINE CONTROLLER ****************

	reg [7:0] txReg = 8'hFF;
	reg [7:0] rxReg = 8'hFF;
	reg [3:0] bitCount = 4'b0;
	reg [2:0] waitReg = 0;
	
	localparam
		s_idle 		= 4'b0000_0001,
		s_wait1		= 4'b0000_0010,
		s_working 	= 4'b0000_0100,
		s_wait2 		= 4'b0000_1000,
		s_finished 	= 4'b0001_0000,
		s_def 		= 4'b0010_0000,
		s_2 			= 4'b0100_0000,
		s_3 			= 4'b1000_0000;

	reg [7:0] state = s_def;

   always @(posedge clk)
      if (rst) begin
         state <= s_def;
			returnedValue <= 0;
			returnValue <= 0;
			longSequenceStep <= 4'b0;
      end
      else
			case (state)
            s_idle : begin
               if (start == 1'b1)
					begin
						enableClk <= 1'b1;
						
						// write data to tx register if CPHA=0
						// see 'initial data setup notes'
						if (CPHA == 1'b0)
							txReg <= txData;
						
						if (txData == SPI_CMD_READ)
						begin
							returnValue <= 1;
							longSequenceStep <= 4'b0;
						end
						else if (returnValue == 1)
							longSequenceStep <= longSequenceStep + 1;
												
						ready <= 0;
						returnedValue <= 0;
						
						if (CE == 1)
						begin
							CE <= 0;
							waitReg <= 0;
							state <= s_wait1;
						end
						else
							state <= s_working;
					end
					else
						ready <= 1;
            end
				s_wait1 : begin
					// T_CSS Chip Select Setup time should be waited out (150ns)
					// this is approximately 3 cycles of clk, which is 16MHz
					if (waitReg == 3)
						state <= s_working;
					else
						waitReg <= waitReg + 1;
            end
				s_working : begin
               if (bitCount == 4'h8)
					begin
						rxData <= rxReg;
						if (continued == 0)
						begin
							waitReg <= 0;
							state <= s_wait2;
						end
						else
							state <= s_finished;
					end
            end
				s_wait2 : begin
					// T_CSH Chip Select Hold time should be waited out (250ns)
					// this is approximately 5 cycles of clk, which is 16MHz
					if (waitReg == 5)
					begin
						state <= s_finished;
						CE <= 1;
					end
					else
						waitReg <= waitReg + 1;
				end
            s_finished : begin
					enableClk <= 0;
					resetClk = 1;
					bitCount <= 4'b0;				
					ready <= 1;
					state <= s_idle;
					
					if (returnValue == 1 && longSequenceStep == 2'b11)
						returnedValue <= 1;
					returnValue <= 0;
					longSequenceStep <= 4'b0;
            end
            s_def : begin
               resetClk <= 1;
					
					enableClk <= 0;
					bitCount <= 4'b0;	
					ready <= 1;
					state <= s_idle;
            end
            default: begin  // Fault Recovery
               state <= s_def;
				end
			endcase

// initial data setup notes
// if CPHA=0, tx data may be read at CE setup
// if CPHA=1, use the first setup clockbeat
// based on time diagrams: http://dlnware.com/theory/SPI-Transfer-Modes

//**************** DATA SAMPLE ****************

always @(divd_clk or posedge rst) 
begin
	if (rst == 1)
	begin	// reset
		bitCount = 0;
		rxReg = 8'hFF;  
	end
	else if (
		(CPHA == 0 && divd_clk == 1) ||
		(CPHA == 1 && divd_clk == 0) )
	begin
		rxReg = {rxReg[6:0], MISO}; // MSB always first
		bitCount = bitCount + 1;
	end
end

//**************** DATA SETUP ****************

always @(divd_clk or posedge rst) 
begin
	if (rst == 1)
	begin // reset
		txReg <= 8'hFF;
		MOSI <= 1; 
	end 
	else if (
		(CPHA == 0 && divd_clk == 0) ||
		(CPHA == 1 && divd_clk == 1) )
	begin
		// write data to tx register if CPHA=0
		// see 'initial data setup notes'
		if (CPHA == 1'b0 && bitCount == 4'h0)
			txReg <= txData;
		else if (bitCount != 8)
		begin // MSB first, as always on the selected chip
			txReg <= {txReg[6:0], 1'b1}; 
			MOSI <= txReg[7]; 
		end
	end
end


endmodule
