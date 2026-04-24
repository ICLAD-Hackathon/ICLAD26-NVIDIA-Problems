module prim_sec_anchor_buf (
	in_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input [Width - 1:0] in_i;
	output wire [Width - 1:0] out_o;
	prim_buf #(.Width(Width)) u_secure_anchor_buf(
		.in_i(in_i),
		.out_o(out_o)
	);
endmodule
