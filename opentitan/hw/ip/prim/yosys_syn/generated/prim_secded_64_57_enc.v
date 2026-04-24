module prim_secded_64_57_enc (
	data_i,
	data_o
);
	reg _sv2v_0;
	input [56:0] data_i;
	output reg [63:0] data_o;
	function automatic [63:0] sv2v_cast_64;
		input reg [63:0] inp;
		sv2v_cast_64 = inp;
	endfunction
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		data_o = sv2v_cast_64(data_i);
		data_o[57] = ^(data_o & 64'h0103fff800007fff);
		data_o[58] = ^(data_o & 64'h017c1ff801ff801f);
		data_o[59] = ^(data_o & 64'h01bde1f87e0781e1);
		data_o[60] = ^(data_o & 64'h01deee3b8e388e22);
		data_o[61] = ^(data_o & 64'h01ef76cdb2c93244);
		data_o[62] = ^(data_o & 64'h01f7bb56d5525488);
		data_o[63] = ^(data_o & 64'h01fbdda769a46910);
	end
	initial _sv2v_0 = 0;
endmodule
