// *******************************************************************************************************
// **                                                                                                   **
// **   25AA160C.v - 25AA160C 16K-BIT SPI SERIAL EEPROM (VCC = +1.8V TO +5.5V)                          **
// **                                                                                                   **
// *******************************************************************************************************
// **                                                                                                   **
// **                   This information is distributed under license from Young Engineering.           **
// **                              COPYRIGHT (c) 2009 YOUNG ENGINEERING                                 **
// **                                      ALL RIGHTS RESERVED                                          **
// **                                                                                                   **
// **                                                                                                   **
// **   Young Engineering provides design expertise for the digital world                               **
// **   Started in 1990, Young Engineering offers products and services for your electronic design      **
// **   project.  We have the expertise in PCB, FPGA, ASIC, firmware, and software design.              **
// **   From concept to prototype to production, we can help you.                                       **
// **                                                                                                   **
// **   http://www.young-engineering.com/                                                               **
// **                                                                                                   **
// *******************************************************************************************************
// **                                                                                                   **
// **   This information is provided to you for your convenience and use with Microchip products only.  **
// **   Microchip disclaims all liability arising from this information and its use.                    **
// **                                                                                                   **
// **   THIS INFORMATION IS PROVIDED "AS IS." MICROCHIP MAKES NO REPRESENTATION OR WARRANTIES OF        **
// **   ANY KIND WHETHER EXPRESS OR IMPLIED, WRITTEN OR ORAL, STATUTORY OR OTHERWISE, RELATED TO        **
// **   THE INFORMATION PROVIDED TO YOU, INCLUDING BUT NOT LIMITED TO ITS CONDITION, QUALITY,           **
// **   PERFORMANCE, MERCHANTABILITY, NON-INFRINGEMENT, OR FITNESS FOR PURPOSE.                         **
// **   MICROCHIP IS NOT LIABLE, UNDER ANY CIRCUMSTANCES, FOR SPECIAL, INCIDENTAL OR CONSEQUENTIAL      **
// **   DAMAGES, FOR ANY REASON WHATSOEVER.                                                             **
// **                                                                                                   **
// **   It is your responsibility to ensure that your application meets with your specifications.       **
// **                                                                                                   **
// *******************************************************************************************************
// **                                                                                                   **
// **   Revision       : 1.0                                                                            **
// **   Modified Date  : 06/22/2009                                                                     **
// **   Revision History:                                                                               **
// **                                                                                                   **
// **   06/22/2009:  Initial design                                                                     **
// **                                                                                                   **
// *******************************************************************************************************
// **                                       TABLE OF CONTENTS                                           **
// *******************************************************************************************************
// **---------------------------------------------------------------------------------------------------**
// **   DECLARATIONS                                                                                    **
// **---------------------------------------------------------------------------------------------------**
// **---------------------------------------------------------------------------------------------------**
// **   INITIALIZATION                                                                                  **
// **---------------------------------------------------------------------------------------------------**
// **---------------------------------------------------------------------------------------------------**
// **   CORE LOGIC                                                                                      **
// **---------------------------------------------------------------------------------------------------**
// **   1.01:  Internal Reset Logic                                                                     **
// **   1.02:  Input Data Shifter                                                                       **
// **   1.03:  Bit Clock Counter                                                                        **
// **   1.04:  Instruction Register                                                                     **
// **   1.05:  Address Register                                                                         **
// **   1.06:  Block Protect Bits                                                                       **
// **   1.07:  Write Protect Enable                                                                     **
// **   1.08:  Write Data Buffer                                                                        **
// **   1.09:  Write Enable Bit                                                                         **
// **   1.10:  Write Cycle Processor                                                                    **
// **   1.11:  Output Data Shifter                                                                      **
// **   1.12:  Output Data Buffer                                                                       **
// **                                                                                                   **
// **---------------------------------------------------------------------------------------------------**
// **   DEBUG LOGIC                                                                                     **
// **---------------------------------------------------------------------------------------------------**
// **   2.01:  Memory Data Bytes                                                                        **
// **   2.02:  Page Buffer Bytes                                                                        **
// **                                                                                                   **
// **---------------------------------------------------------------------------------------------------**
// **   TIMING CHECKS                                                                                   **
// **---------------------------------------------------------------------------------------------------**
// **                                                                                                   **
// *******************************************************************************************************


`timescale 1ns/10ps

module M25AA160C (SI, SO, SCK, CS_N, WP_N, HOLD_N, RESET);

   input                SI;                             // serial data input
   input                SCK;                            // serial data clock

   input                CS_N;                           // chip select - active low
   input                WP_N;                           // write protect pin - active low

   input                HOLD_N;                         // interface suspend - active low

   input                RESET;                          // model reset/power-on reset

   output               SO;                             // serial data output


// *******************************************************************************************************
// **   DECLARATIONS                                                                                    **
// *******************************************************************************************************

   reg  [15:00]         DataShifterI;                   // serial input data shifter
   reg  [07:00]         DataShifterO;                   // serial output data shifter
   reg  [31:00]         BitCounter;                     // serial input bit counter
   reg  [07:00]         InstRegister;                   // instruction register
   reg  [15:00]         AddrRegister;                   // address register

   wire                 InstructionREAD;                // decoded instruction byte
   wire                 InstructionRDSR;                // decoded instruction byte
   wire                 InstructionWRSR;                // decoded instruction byte
   wire                 InstructionWRDI;                // decoded instruction byte
   wire                 InstructionWREN;                // decoded instruction byte
   wire                 InstructionWRITE;               // decoded instruction byte

   reg  [07:00]         WriteBuffer [0:15];             // 16-byte page write buffer
   reg  [03:00]         WritePointer;                   // page buffer pointer
   reg  [04:00]         WriteCounter;                   // byte write counter

   reg                  WriteEnable;                    // memory write enable bit
   wire                 RstWriteEnable;                 // asynchronous reset
   wire                 SetWriteEnable;                 // register set
   wire                 ClrWriteEnable;                 // register clear

   reg                  WriteActive;                    // write operation in progress

   reg                  BlockProtect0;                  // memory block write protect
   reg                  BlockProtect1;                  // memory block write protect
   reg                  BlockProtect0_New;              // memory data to be written
   reg                  BlockProtect1_New;              // memory data to be written

   reg                  WP_Enable;                      // write protect pin enable
   reg                  WP_Enable_New;                  // memory data to be written
   wire                 StatusWriteProtected;           // status register write protected

   reg  [03:00]         PageAddress;                    // page buffer address
   reg  [10:00]         BaseAddress;                    // memory write base address
   reg  [10:00]         MemWrAddress;                   // memory write address
   reg  [10:00]         MemRdAddress;                   // memory read address

   reg  [07:00]         MemoryBlock [0:2047];           // EEPROM data memory array (2048x8)

   reg                  SO_DO;                          // serial output data - data
   wire                 SO_OE;                          // serial output data - output enable

   reg                  SO_Enable;                      // serial data output enable

   wire                 OutputEnable1;                  // timing accurate output enable
   wire                 OutputEnable2;                  // timing accurate output enable
   wire                 OutputEnable3;                  // timing accurate output enable

   integer              LoopIndex;                      // iterative loop index

   integer              tWC;                            // timing parameter
   integer              tV;                             // timing parameter
   integer              tHZ;                            // timing parameter
   integer              tHV;                            // timing parameter
   integer              tDIS;                           // timing parameter

`define PAGE_SIZE 16                                    // 16-byte page size
`define WREN  8'b0000_0110                              // Write Enable instruction
`define READ  8'b0000_0011                              // Read instruction
`define WRDI  8'b0000_0100                              // Write Disable instruction
`define WRSR  8'b0000_0001                              // Write Status Register instruction
`define WRITE 8'b0000_0010                              // Write instruction
`define RDSR  8'b0000_0101                              // Read Status Register instruction

// *******************************************************************************************************
// **   INITIALIZATION                                                                                  **
// *******************************************************************************************************

   initial begin
      `ifdef VCC_1_8V_TO_2_5V
         tWC  = 5000000;                                // memory write cycle time
         tV   = 160;                                    // output valid from SCK low
         tHZ  = 160;                                    // HOLD_N low to output high-Z
         tHV  = 160;                                    // HOLD_N high to output valid
         tDIS = 160;                                    // CS_N high to output disable
      `else
      `ifdef VCC_2_5V_TO_4_5V
         tWC  = 5000000;                                // memory write cycle time
         tV   = 100;                                    // output valid from SCK low
         tHZ  = 60;                                     // HOLD_N low to output high-Z
         tHV  = 60;                                     // HOLD_N high to output valid
         tDIS = 80;                                     // CS_N high to output disable
      `else
      `ifdef VCC_4_5V_TO_5_5V
         tWC  = 5000000;                                // memory write cycle time
         tV   = 50;                                     // output valid from SCK low
         tHZ  = 30;                                     // HOLD_N low to output high-Z
         tHV  = 30;                                     // HOLD_N high to output valid
         tDIS = 40;                                     // CS_N high to output disable
      `else
         tWC  = 5000000;                                // memory write cycle time
         tV   = 50;                                     // output valid from SCK low
         tHZ  = 30;                                     // HOLD_N low to output high-Z
         tHV  = 30;                                     // HOLD_N high to output valid
         tDIS = 40;                                     // CS_N high to output disable
      `endif
      `endif
      `endif
   end

   initial begin
      BlockProtect0 = 0;
      BlockProtect1 = 0;

      WP_Enable = 0;

      WriteActive = 0;
      WriteEnable = 0;
   end


// *******************************************************************************************************
// **   CORE LOGIC                                                                                      **
// *******************************************************************************************************
// -------------------------------------------------------------------------------------------------------
//      1.01:  Internal Reset Logic
// -------------------------------------------------------------------------------------------------------

   always @(negedge CS_N) BitCounter   <= 0;
   always @(negedge CS_N) SO_Enable    <= 0;
   always @(negedge CS_N) if (!WriteActive) WritePointer <= 0;
   always @(negedge CS_N) if (!WriteActive) WriteCounter <= 0;

// -------------------------------------------------------------------------------------------------------
//      1.02:  Input Data Shifter
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if (CS_N == 0)         DataShifterI <= {DataShifterI[14:00],SI};
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.03:  Bit Clock Counter
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if (CS_N == 0)         BitCounter <= BitCounter + 1;
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.04:  Instruction Register
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if (BitCounter == 7)   InstRegister <= {DataShifterI[06:00],SI};
      end
   end

   assign InstructionREAD  = (InstRegister[7:0] == `READ);
   assign InstructionRDSR  = (InstRegister[7:0] == `RDSR);
   assign InstructionWRSR  = (InstRegister[7:0] == `WRSR);
   assign InstructionWRDI  = (InstRegister[7:0] == `WRDI);
   assign InstructionWREN  = (InstRegister[7:0] == `WREN);
   assign InstructionWRITE = (InstRegister[7:0] == `WRITE);

// -------------------------------------------------------------------------------------------------------
//      1.05:  Address Register
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if ((BitCounter == 23) & !WriteActive) AddrRegister <= {DataShifterI[14:00],SI};
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.06:  Block Protect Bits
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if ((BitCounter == 15) & InstructionWRSR & WriteEnable & !WriteActive & !StatusWriteProtected) begin
            BlockProtect1_New <= DataShifterI[02];
            BlockProtect0_New <= DataShifterI[01];
         end
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.07:  Write Protect Enable
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if ((BitCounter == 15) & InstructionWRSR & WriteEnable & !WriteActive & !StatusWriteProtected) begin
            WP_Enable_New <= DataShifterI[06];
         end
      end
   end

   assign StatusWriteProtected = WP_Enable & (WP_N == 0);

// -------------------------------------------------------------------------------------------------------
//      1.08:  Write Data Buffer
// -------------------------------------------------------------------------------------------------------

   always @(posedge SCK) begin
      if (HOLD_N == 1) begin
         if ((BitCounter >= 31) & (BitCounter[2:0] == 7) & InstructionWRITE & WriteEnable & !WriteActive) begin
            WriteBuffer[WritePointer] <= {DataShifterI[06:00],SI};

            WritePointer <= WritePointer + 1;
            if (WriteCounter < `PAGE_SIZE) WriteCounter <= WriteCounter + 1;
         end
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.09:  Write Enable Bit
// -------------------------------------------------------------------------------------------------------

   always @(posedge CS_N or posedge RstWriteEnable) begin
      if (RstWriteEnable)       WriteEnable <= 0;
      else if (SetWriteEnable)  WriteEnable <= 1;
      else if (ClrWriteEnable)  WriteEnable <= 0;
   end

   assign RstWriteEnable = RESET;

   assign SetWriteEnable = (BitCounter == 8) & InstructionWREN & !WriteActive;
   assign ClrWriteEnable = (BitCounter == 8) & InstructionWRDI & !WriteActive;

// -------------------------------------------------------------------------------------------------------
//      1.10:  Write Cycle Processor
// -------------------------------------------------------------------------------------------------------

   always @(posedge CS_N) begin
      if ((BitCounter == 16) & (BitCounter[2:0] == 0) & InstructionWRSR  & WriteEnable & !WriteActive) begin
         if (!StatusWriteProtected) begin
            WriteActive = 1;
            #(tWC);

            BlockProtect1 = BlockProtect1_New;
            BlockProtect0 = BlockProtect0_New;
            WP_Enable = WP_Enable_New;
         end

         WriteActive = 0;
         WriteEnable = 0;
      end
      if ((BitCounter >= 32) & (BitCounter[2:0] == 0) & InstructionWRITE & WriteEnable & !WriteActive) begin
         for (LoopIndex = 0; LoopIndex < WriteCounter; LoopIndex = LoopIndex + 1) begin
            BaseAddress = {AddrRegister[10:04],4'h0};
            PageAddress = (AddrRegister[03:00] + LoopIndex);

            MemWrAddress = {BaseAddress[10:04],PageAddress[03:00]};

            if ({BlockProtect1,BlockProtect0} == 2'b00) begin
               WriteActive = 1;
            end
            if ({BlockProtect1,BlockProtect0} == 2'b01) begin
               if ((MemWrAddress >= 11'h600) && (MemWrAddress <= 11'h7FF)) begin
                  // write protected region
               end
               else begin
                  WriteActive = 1;
               end
            end
            if ({BlockProtect1,BlockProtect0} == 2'b10) begin
               if ((MemWrAddress >= 11'h400) && (MemWrAddress <= 11'h7FF)) begin
                  // write protected region
               end
               else begin
                  WriteActive = 1;
               end
            end
            if ({BlockProtect1,BlockProtect0} == 2'b11) begin
               if ((MemWrAddress >= 11'h000) && (MemWrAddress <= 11'h7FF)) begin
                  // write protected region
               end
               else begin
                  WriteActive = 1;
               end
            end
         end

         if (WriteActive) begin
            #(tWC);

            for (LoopIndex = 0; LoopIndex < WriteCounter; LoopIndex = LoopIndex + 1) begin
               BaseAddress = {AddrRegister[10:04],4'h0};
               PageAddress = (AddrRegister[03:00] + LoopIndex);

               MemWrAddress = {BaseAddress[10:04],PageAddress[03:00]};

               if ({BlockProtect1,BlockProtect0} == 2'b00) begin
                  MemoryBlock[MemWrAddress] = WriteBuffer[LoopIndex];
               end
               if ({BlockProtect1,BlockProtect0} == 2'b01) begin
                  if ((MemWrAddress >= 11'h600) && (MemWrAddress <= 11'h7FF)) begin
                     // write protected region
                  end
                  else begin
                     MemoryBlock[MemWrAddress] = WriteBuffer[LoopIndex];
                  end
               end
               if ({BlockProtect1,BlockProtect0} == 2'b10) begin
                  if ((MemWrAddress >= 11'h400) && (MemWrAddress <= 11'h7FF)) begin
                     // write protected region
                  end
                  else begin
                     MemoryBlock[MemWrAddress] = WriteBuffer[LoopIndex];
                  end
               end
               if ({BlockProtect1,BlockProtect0} == 2'b11) begin
                  if ((MemWrAddress >= 11'h000) && (MemWrAddress <= 11'h7FF)) begin
                     // write protected region
                  end
                  else begin
                     MemoryBlock[MemWrAddress] = WriteBuffer[LoopIndex];
                  end
               end
            end
         end

         WriteActive = 0;
         WriteEnable = 0;
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.11:  Output Data Shifter
// -------------------------------------------------------------------------------------------------------

   always @(negedge SCK) begin
      if (HOLD_N == 1) begin
         if ((BitCounter >= 24) & (BitCounter[2:0] == 0) & InstructionREAD & !WriteActive) begin
            if (BitCounter == 24) begin
               DataShifterO <= MemoryBlock[AddrRegister[10:00]];
               MemRdAddress <= AddrRegister + 1;
               SO_Enable    <= 1;
            end
            else begin
               DataShifterO <= MemoryBlock[MemRdAddress[10:00]];
               MemRdAddress <= MemRdAddress + 1;
            end
         end
         else if ((BitCounter > 7) & (BitCounter[2:0] == 3'b000) & InstructionRDSR) begin
            DataShifterO <= {WP_Enable,3'b000,BlockProtect1,BlockProtect0,WriteEnable,WriteActive};
            SO_Enable    <= 1;
         end
         else begin
            DataShifterO <= DataShifterO << 1;
         end
      end
   end

// -------------------------------------------------------------------------------------------------------
//      1.12:  Output Data Buffer
// -------------------------------------------------------------------------------------------------------

   bufif1 (SO, SO_DO, SO_OE);

   always @(DataShifterO) SO_DO <= #(tV) DataShifterO[07];

   bufif1 #(tV,0)    (OutputEnable1, SO_Enable, 1);
   notif1 #(tDIS)    (OutputEnable2, CS_N,   1);
   bufif1 #(tHV,tHZ) (OutputEnable3, HOLD_N, 1);

   assign SO_OE = OutputEnable1 & OutputEnable2 & OutputEnable3;


// *******************************************************************************************************
// **   DEBUG LOGIC                                                                                     **
// *******************************************************************************************************
// -------------------------------------------------------------------------------------------------------
//      2.01:  Memory Data Bytes
// -------------------------------------------------------------------------------------------------------

   wire [07:00] MemoryByte000 = MemoryBlock[0000];
   wire [07:00] MemoryByte001 = MemoryBlock[0001];
   wire [07:00] MemoryByte002 = MemoryBlock[0002];
   wire [07:00] MemoryByte003 = MemoryBlock[0003];
   wire [07:00] MemoryByte004 = MemoryBlock[0004];
   wire [07:00] MemoryByte005 = MemoryBlock[0005];
   wire [07:00] MemoryByte006 = MemoryBlock[0006];
   wire [07:00] MemoryByte007 = MemoryBlock[0007];
   wire [07:00] MemoryByte008 = MemoryBlock[0008];
   wire [07:00] MemoryByte009 = MemoryBlock[0009];
   wire [07:00] MemoryByte00A = MemoryBlock[0010];
   wire [07:00] MemoryByte00B = MemoryBlock[0011];
   wire [07:00] MemoryByte00C = MemoryBlock[0012];
   wire [07:00] MemoryByte00D = MemoryBlock[0013];
   wire [07:00] MemoryByte00E = MemoryBlock[0014];
   wire [07:00] MemoryByte00F = MemoryBlock[0015];

   wire [07:00] MemoryByte070 = MemoryBlock[0112];
   wire [07:00] MemoryByte071 = MemoryBlock[0113];
   wire [07:00] MemoryByte072 = MemoryBlock[0114];
   wire [07:00] MemoryByte073 = MemoryBlock[0115];
   wire [07:00] MemoryByte074 = MemoryBlock[0116];
   wire [07:00] MemoryByte075 = MemoryBlock[0117];
   wire [07:00] MemoryByte076 = MemoryBlock[0118];
   wire [07:00] MemoryByte077 = MemoryBlock[0119];
   wire [07:00] MemoryByte078 = MemoryBlock[0120];
   wire [07:00] MemoryByte079 = MemoryBlock[0121];
   wire [07:00] MemoryByte07A = MemoryBlock[0122];
   wire [07:00] MemoryByte07B = MemoryBlock[0123];
   wire [07:00] MemoryByte07C = MemoryBlock[0124];
   wire [07:00] MemoryByte07D = MemoryBlock[0125];
   wire [07:00] MemoryByte07E = MemoryBlock[0126];
   wire [07:00] MemoryByte07F = MemoryBlock[0127];

   wire [07:00] MemoryByte0F0 = MemoryBlock[0240];
   wire [07:00] MemoryByte0F1 = MemoryBlock[0241];
   wire [07:00] MemoryByte0F2 = MemoryBlock[0242];
   wire [07:00] MemoryByte0F3 = MemoryBlock[0243];
   wire [07:00] MemoryByte0F4 = MemoryBlock[0244];
   wire [07:00] MemoryByte0F5 = MemoryBlock[0245];
   wire [07:00] MemoryByte0F6 = MemoryBlock[0246];
   wire [07:00] MemoryByte0F7 = MemoryBlock[0247];
   wire [07:00] MemoryByte0F8 = MemoryBlock[0248];
   wire [07:00] MemoryByte0F9 = MemoryBlock[0249];
   wire [07:00] MemoryByte0FA = MemoryBlock[0250];
   wire [07:00] MemoryByte0FB = MemoryBlock[0251];
   wire [07:00] MemoryByte0FC = MemoryBlock[0252];
   wire [07:00] MemoryByte0FD = MemoryBlock[0253];
   wire [07:00] MemoryByte0FE = MemoryBlock[0254];
   wire [07:00] MemoryByte0FF = MemoryBlock[0255];

   wire [07:00] MemoryByte1F0 = MemoryBlock[0496];
   wire [07:00] MemoryByte1F1 = MemoryBlock[0497];
   wire [07:00] MemoryByte1F2 = MemoryBlock[0498];
   wire [07:00] MemoryByte1F3 = MemoryBlock[0499];
   wire [07:00] MemoryByte1F4 = MemoryBlock[0500];
   wire [07:00] MemoryByte1F5 = MemoryBlock[0501];
   wire [07:00] MemoryByte1F6 = MemoryBlock[0502];
   wire [07:00] MemoryByte1F7 = MemoryBlock[0503];
   wire [07:00] MemoryByte1F8 = MemoryBlock[0504];
   wire [07:00] MemoryByte1F9 = MemoryBlock[0505];
   wire [07:00] MemoryByte1FA = MemoryBlock[0506];
   wire [07:00] MemoryByte1FB = MemoryBlock[0507];
   wire [07:00] MemoryByte1FC = MemoryBlock[0508];
   wire [07:00] MemoryByte1FD = MemoryBlock[0509];
   wire [07:00] MemoryByte1FE = MemoryBlock[0510];
   wire [07:00] MemoryByte1FF = MemoryBlock[0511];

   wire [07:00] MemoryByte3F0 = MemoryBlock[1008];
   wire [07:00] MemoryByte3F1 = MemoryBlock[1009];
   wire [07:00] MemoryByte3F2 = MemoryBlock[1010];
   wire [07:00] MemoryByte3F3 = MemoryBlock[1011];
   wire [07:00] MemoryByte3F4 = MemoryBlock[1012];
   wire [07:00] MemoryByte3F5 = MemoryBlock[1013];
   wire [07:00] MemoryByte3F6 = MemoryBlock[1014];
   wire [07:00] MemoryByte3F7 = MemoryBlock[1015];
   wire [07:00] MemoryByte3F8 = MemoryBlock[1016];
   wire [07:00] MemoryByte3F9 = MemoryBlock[1017];
   wire [07:00] MemoryByte3FA = MemoryBlock[1018];
   wire [07:00] MemoryByte3FB = MemoryBlock[1019];
   wire [07:00] MemoryByte3FC = MemoryBlock[1020];
   wire [07:00] MemoryByte3FD = MemoryBlock[1021];
   wire [07:00] MemoryByte3FE = MemoryBlock[1022];
   wire [07:00] MemoryByte3FF = MemoryBlock[1023];

   wire [07:00] MemoryByte7F0 = MemoryBlock[2032];
   wire [07:00] MemoryByte7F1 = MemoryBlock[2033];
   wire [07:00] MemoryByte7F2 = MemoryBlock[2034];
   wire [07:00] MemoryByte7F3 = MemoryBlock[2035];
   wire [07:00] MemoryByte7F4 = MemoryBlock[2036];
   wire [07:00] MemoryByte7F5 = MemoryBlock[2037];
   wire [07:00] MemoryByte7F6 = MemoryBlock[2038];
   wire [07:00] MemoryByte7F7 = MemoryBlock[2039];
   wire [07:00] MemoryByte7F8 = MemoryBlock[2040];
   wire [07:00] MemoryByte7F9 = MemoryBlock[2041];
   wire [07:00] MemoryByte7FA = MemoryBlock[2042];
   wire [07:00] MemoryByte7FB = MemoryBlock[2043];
   wire [07:00] MemoryByte7FC = MemoryBlock[2044];
   wire [07:00] MemoryByte7FD = MemoryBlock[2045];
   wire [07:00] MemoryByte7FE = MemoryBlock[2046];
   wire [07:00] MemoryByte7FF = MemoryBlock[2047];

// -------------------------------------------------------------------------------------------------------
//      2.02:  Page Buffer Bytes
// -------------------------------------------------------------------------------------------------------

   wire [07:00] PageBuffer00 = WriteBuffer[00];
   wire [07:00] PageBuffer01 = WriteBuffer[01];
   wire [07:00] PageBuffer02 = WriteBuffer[02];
   wire [07:00] PageBuffer03 = WriteBuffer[03];
   wire [07:00] PageBuffer04 = WriteBuffer[04];
   wire [07:00] PageBuffer05 = WriteBuffer[05];
   wire [07:00] PageBuffer06 = WriteBuffer[06];
   wire [07:00] PageBuffer07 = WriteBuffer[07];
   wire [07:00] PageBuffer08 = WriteBuffer[08];
   wire [07:00] PageBuffer09 = WriteBuffer[09];
   wire [07:00] PageBuffer0A = WriteBuffer[10];
   wire [07:00] PageBuffer0B = WriteBuffer[11];
   wire [07:00] PageBuffer0C = WriteBuffer[12];
   wire [07:00] PageBuffer0D = WriteBuffer[13];
   wire [07:00] PageBuffer0E = WriteBuffer[14];
   wire [07:00] PageBuffer0F = WriteBuffer[15];


// *******************************************************************************************************
// **   TIMING CHECKS                                                                                   **
// *******************************************************************************************************

   wire TimingCheckEnable = (RESET == 0) & (CS_N == 0);

   specify
      `ifdef VCC_1_8V_TO_2_5V
         specparam
            tHI  = 150,                                 // Clock high time
            tLO  = 150,                                 // Clock low time
            tSU  =  30,                                 // Data setup time
            tHD  =  50,                                 // Data hold time
            tHS  =  80,                                 // HOLD_N setup time
            tHH  =  80,                                 // HOLD_N hold time
            tCSD =  50,                                 // CS_N disable time
            tCSS = 150,                                 // CS_N setup time
            tCSH = 250,                                 // CS_N hold time
            tCLD = 50,                                  // Clock delay time
            tCLE = 50;                                  // Clock enable time
      `else
      `ifdef VCC_2_5V_TO_4_5V
         specparam
            tHI  = 100,                                 // Clock high time
            tLO  = 100,                                 // Clock low time
            tSU  =  20,                                 // Data setup time
            tHD  =  40,                                 // Data hold time
            tHS  =  40,                                 // HOLD_N setup time
            tHH  =  40,                                 // HOLD_N hold time
            tCSD =  50,                                 // CS_N disable time
            tCSS = 100,                                 // CS_N setup time
            tCSH = 200,                                 // CS_N hold time
            tCLD = 50,                                  // Clock delay time
            tCLE = 50;                                  // Clock enable time
      `else
      `ifdef VCC_4_5V_TO_5_5V
         specparam
            tHI  =  50,                                 // Clock high time
            tLO  =  50,                                 // Clock low time
            tSU  =  10,                                 // Data setup time
            tHD  =  20,                                 // Data hold time
            tHS  =  20,                                 // HOLD_N setup time
            tHH  =  20,                                 // HOLD_N hold time
            tCSD =  50,                                 // CS_N disable time
            tCSS =  50,                                 // CS_N setup time
            tCSH = 100,                                 // CS_N hold time
            tCLD = 50,                                  // Clock delay time
            tCLE = 50;                                  // Clock enable time
      `else
         specparam
            tHI  =  50,                                 // Clock high time
            tLO  =  50,                                 // Clock low time
            tSU  =  10,                                 // Data setup time
            tHD  =  20,                                 // Data hold time
            tHS  =  20,                                 // HOLD_N setup time
            tHH  =  20,                                 // HOLD_N hold time
            tCSD =  50,                                 // CS_N disable time
            tCSS =  50,                                 // CS_N setup time
            tCSH = 100,                                 // CS_N hold time
            tCLD = 50,                                  // Clock delay time
            tCLE = 50;                                  // Clock enable time
      `endif
      `endif
      `endif

      $width (posedge SCK,  tHI);
      $width (negedge SCK,  tLO);
      $width (posedge CS_N, tCSD);

      $setup (SI, posedge SCK &&& TimingCheckEnable, tSU);
      $setup (negedge CS_N, posedge SCK &&& TimingCheckEnable, tCSS);
      $setup (negedge SCK, negedge HOLD_N &&& TimingCheckEnable, tHS);
      $setup (posedge CS_N, posedge SCK &&& TimingCheckEnable, tCLD);

      $hold  (posedge SCK    &&& TimingCheckEnable, SI,   tHD);
      $hold  (posedge SCK    &&& TimingCheckEnable, posedge CS_N, tCSH);
      $hold  (posedge HOLD_N &&& TimingCheckEnable, posedge SCK,  tHH);
      $hold  (posedge SCK    &&& TimingCheckEnable, negedge CS_N, tCLE);
  endspecify

endmodule
