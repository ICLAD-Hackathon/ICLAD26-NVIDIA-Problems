module prim_secded_hamming_72_64_enc (
	data_i,
	data_o
);
	reg _sv2v_0;
	input [63:0] data_i;
	output reg [71:0] data_o;
	function automatic [71:0] sv2v_cast_72;
		input reg [71:0] inp;
		sv2v_cast_72 = inp;
	endfunction
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		data_o = sv2v_cast_72(data_i);
		data_o[64] = ^(data_o & 72'h00ab55555556aaad5b);
		data_o[65] = ^(data_o & 72'h00cd9999999b33366d);
		data_o[66] = ^(data_o & 72'h00f1e1e1e1e3c3c78e);
		data_o[67] = ^(data_o & 72'h0001fe01fe03fc07f0);
		data_o[68] = ^(data_o & 72'h0001fffe0003fff800);
		data_o[69] = ^(data_o & 72'h0001fffffffc000000);
		data_o[70] = ^(data_o & 72'h00fe00000000000000);
		data_o[71] = ^(data_o & 72'h7fffffffffffffffff);
	end
	initial _sv2v_0 = 0;
endmodule
