module prim_sec_anchor_const (out_o);
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ConstVal = 1'sb0;
	output wire [Width - 1:0] out_o;
	prim_const_sec #(
		.Width(Width),
		.ConstVal(ConstVal)
	) u_secure_anchor_const(.out_o(out_o));
endmodule
