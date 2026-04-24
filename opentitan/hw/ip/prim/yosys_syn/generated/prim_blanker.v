module prim_blanker (
	in_i,
	en_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input wire [Width - 1:0] in_i;
	input wire en_i;
	output wire [Width - 1:0] out_o;
	prim_and2 #(.Width(Width)) u_blank_and(
		.in0_i(in_i),
		.in1_i({Width {en_i}}),
		.out_o(out_o)
	);
endmodule
