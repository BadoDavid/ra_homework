`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BME MIT
// Engineer: Mate Fucsko
// 
// Create Date:    11:13:41 03/13/2017 
// Design Name: 
// Module Name:    AXI_Lite_Writer 
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
module AXI_Lite_Writer(
		 input ACLK,
		 input ARESETn,
		 output reg AWVALID,
		 input AWREADY,
		 output reg [31:0] AWADDR,
		 //output reg [2:0] AWPROT,
		 output reg WVALID,
		 input WREADY,
		 output reg [31:0] WDATA,
		 //output reg [3:0] WSTRB,
		 //input BVALID,
		 //input [1:0] BRESP,
		 //output reg BREADY,
		 //CONTROL:
		 input [31:0] Write_to,
		 input [31:0] W_Data,
		 //input [3:0] Strobe,
		 //input [2:0] W_Prot,
		 input W_Start,
		 output reg Writer_Run
		);
		
		reg [1:0] state;
		reg started;
		
		always @(posedge ACLK) begin
			if (ARESETn == 0) begin
				AWVALID		<= 0;
				WVALID		<= 0;
				WDATA			<= 0;
				AWADDR		<= 0;
				//WSTRB			<= 0;
				//BREADY		<= 0;
				//AWPROT		<= 0;
				state 		<= 2'b00;
				started		<= 0;
				Writer_Run	<= 0;
				end
			else if (W_Start) begin
				started		<= 1;
				Writer_Run	<= 1; 
				end
			if (started) begin 
				if (state == 2'b00) begin
						AWADDR 	<= Write_to;
						//AWPROT	<= W_Prot;
						AWVALID	<= 1;
						WVALID	<= 0;
						WDATA		<= 0;
						//WSTRB		<= 0;
						//BREADY	<= 0;
						state		<= 2'b01;
					end
				else if (state == 2'b01) begin
					if (AWREADY) begin
						AWVALID	<= 0;
						WDATA		<= W_Data; //Data to be written in AXI-SPI slave
						state		<= 2'b10;
						end
					end
				else if (state == 2'b10) begin //1 CLK cycle wait for WVALID
						WVALID		<= 1;
						state			<= 2'b11;
					end
				else if (state == 2'b11) begin
					if (WREADY) begin
						WVALID		<= 0;
						state			<= 2'b00;
						Writer_Run	<= 0;			//Can be started again
						started		<= 0;
						end
					end
				end
			end				
endmodule
