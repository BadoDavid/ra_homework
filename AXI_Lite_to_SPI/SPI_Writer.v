`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:13:02 03/20/2017 
// Design Name: 
// Module Name:    SPI_Writer 
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
module SPI_Writer(
    input SCK,
	 input RST,
    output reg MOSI,
    output reg CS_N,
    input [7:0] DATA,
    input Start,
	 input After_W_CSN,
    output reg Running
    );
	 reg State;
	 reg [2:0] BitCNTR;
	 reg [7:0] W_DATA;
	 reg run;
	 
	 always @ (negedge SCK) begin
		if (RST) begin
			State		<= 0;
			CS_N		<= 1;
			Running	<= 0;
			BitCNTR	<= 0;
			run		<= 0;
			MOSI		<= 0;
			W_DATA	<= 0;
			end
		else if (Start) begin
			Running	<= 1;
			//State		<= 0;
			run		<= 1;
			//W_DATA			<= DATA;			
			end
		if (run) begin
			if(State == 0) begin
				CS_N 				<= 0;
				MOSI 				<= DATA[7];
				W_DATA			<= {DATA[6:0], DATA[7]};
				BitCNTR			<= 3'b111;
				State				<= 1;
				end
			else if(State == 1) begin
				MOSI	 					<= W_DATA[7];
				W_DATA					<= {W_DATA[6:0], W_DATA[7]};
				if( BitCNTR == 3'b001 ) begin
					State					<= 0;
					if(After_W_CSN) begin
						//Running			<= 0;
						run				<= 0;
						//CS_N				<= 1;
						end //after_w_csn					
					end
				BitCNTR					<= BitCNTR - 1;
				end // else if state 1
			end //if run
			else begin
				CS_N		<= 1;
				Running	<= 0;
			end
		end //always
endmodule
