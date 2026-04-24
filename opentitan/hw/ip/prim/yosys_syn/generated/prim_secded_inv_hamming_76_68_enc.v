module prim_secded_inv_hamming_76_68_enc (
	data_i,
	data_o
);
	reg _sv2v_0;
	input [67:0] data_i;
	output reg [75:0] data_o;
	function automatic [75:0] sv2v_cast_76;
		input reg [75:0] inp;
		sv2v_cast_76 = inp;
	endfunction
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		data_o = sv2v_cast_76(data_i);
		data_o[68] = ^(data_o & 76'h00aab55555556aaad5b);
		data_o[69] = ^(data_o & 76'h00ccd9999999b33366d);
		data_o[70] = ^(data_o & 76'h000f1e1e1e1e3c3c78e);
		data_o[71] = ^(data_o & 76'h00f01fe01fe03fc07f0);
		data_o[72] = ^(data_o & 76'h00001fffe0003fff800);
		data_o[73] = ^(data_o & 76'h00001fffffffc000000);
		data_o[74] = ^(data_o & 76'h00ffe00000000000000);
		data_o[75] = ^(data_o & 76'h7ffffffffffffffffff);
		data_o = data_o ^ 76'haa00000000000000000;
	end
	initial _sv2v_0 = 0;
endmodule
