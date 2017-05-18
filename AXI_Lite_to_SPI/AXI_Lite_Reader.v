`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BME MIT
// Engineer: Mate Fucsko
// 
// Create Date:    12:58:06 03/13/2017 
// Design Name: 
// Module Name:    AXI_Lite_Reader 
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
module AXI_Lite_Reader(
	input ACLK,
	input ARESETn,
	output reg ARVALID,
	input ARREADY,
	output reg [31:0] ARADDR,
	input RVALID,
	output reg RREADY,
	input [31:0] RDATA,
	//Control:
	input R_Start,
	input [31:0] Read_from,
	output reg [31:0] R_Data,
	output reg Reader_Run
	);
	reg [1:0] state;
	reg started;
	
	always @ (posedge ACLK) begin
		if(ARESETn == 0) begin //Initialize signals
			ARVALID		<= 0;
			ARADDR		<= 0;
			RREADY		<= 0;
			R_Data		<= 0;
			Reader_Run	<= 0;
			started		<= 0;
			state			<= 2'b00;
			end
		else if(R_Start) begin
			started		<= 1;
			Reader_Run	<= 1;
			state			<= 2'b00;
			end
		if(started == 1) begin
			if(state == 2'b00) begin // Write ReadAddress to bus and flag it valid 
				ARADDR			<= Read_from;
				ARVALID			<= 1;
				RREADY			<= 0;
				state				<= 2'b01;
				end
			else if(state == 2'b01) begin
				if(ARREADY == 1) begin //ARVALID - ARREADY handshake
					ARVALID		<= 0;
					state 		<= 2'b10;
					end
				end
			else if(state == 2'b10) begin
				if(RVALID == 1) begin //Wait until RVALID, then read data from the bus and acknowledge it with RREADY 
					RREADY		<= 1;
					state 		<= 2'b11;
					R_Data		<= RDATA;
					end
				end
			else if(state == 2'b11) begin
				if(RVALID == 1) begin //RVALID-RREADY handshake and finish the reading routine. Now reader can be started again.
					RREADY		<= 0;
					state 		<= 2'b00;
					Reader_Run	<= 0;
					started		<= 0;
					end
				end
			end //started
		end //always
endmodule
