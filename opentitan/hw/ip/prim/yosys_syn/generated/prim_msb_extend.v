module prim_msb_extend (
	in_i,
	out_o
);
	parameter signed [31:0] InWidth = 2;
	parameter signed [31:0] OutWidth = 2;
	input [InWidth - 1:0] in_i;
	output wire [OutWidth - 1:0] out_o;
	localparam signed [31:0] WidthDiff = OutWidth - InWidth;
	generate
		if (WidthDiff == 0) begin : gen_feedthru
			assign out_o = in_i;
		end
		else begin : gen_tieoff
			assign out_o = {{WidthDiff {in_i[InWidth - 1]}}, in_i};
		end
	endgenerate
endmodule
