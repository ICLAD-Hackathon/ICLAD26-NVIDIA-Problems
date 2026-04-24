// Synthesizable version of NV_DW_lsd for Yosys
// Leading Sign Detector - counts leading sign bits
module NV_DW_lsd (a, dec, enc);
  parameter a_width = 8;
  parameter b_width = a_width-1;
  localparam enc_width = ((a_width>16)?((a_width>64)?((a_width>128)?8:7):((a_width>32)?6:5)):((a_width>4)?((a_width>8)?4:3):((a_width>2)?2:1)));
  input [a_width-1:0] a;
  output [a_width-1:0] dec;
  output [enc_width-1:0] enc;
// Generate the XOR pattern to find first bit difference from MSB
  wire [a_width-2:0] xor_bits;
  genvar i;
  generate
    for (i = 0; i < a_width-1; i = i + 1) begin : gen_xor
      assign xor_bits[i] = a[i] ^ a[i+1];
    end
  endgenerate
// Priority encoder to find first '1' in xor_bits (from MSB)
// This gives the position of first sign change
  reg [enc_width-1:0] enc_val;
  reg [a_width-1:0] dec_val;
  integer j;
  always @(*) begin
    enc_val = a_width - 1; // Default: all bits are same sign
    dec_val = {a_width{1'b0}};
    dec_val[0] = 1'b1; // Default position
// Scan from MSB to LSB
    for (j = a_width-2; j >= 0; j = j - 1) begin
      if (xor_bits[j]) begin
        enc_val = a_width - 2 - j;
        dec_val = {a_width{1'b0}};
        dec_val[j+1] = 1'b1;
      end
    end
  end
  assign enc = enc_val;
  assign dec = dec_val;
endmodule
