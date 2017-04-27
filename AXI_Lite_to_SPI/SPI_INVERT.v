`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:08 03/13/2017 
// Design Name: 
// Module Name:    SPI_INVERT 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Sends back the incoming SPI data inverte; just for testing.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SPI_INVERT(
    input SPI_MOSI,
	 input SPI_SS,
    output reg SPI_MISO,
    input SPI_SCK
    );
	always @ (posedge SPI_SCK) begin
		if(SPI_SS==1) SPI_MISO <= ~SPI_MOSI;
		end

endmodule
