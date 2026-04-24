module prim_secded_inv_72_64_enc (
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
		data_o[64] = ^(data_o & 72'h00b9000000001fffff);
		data_o[65] = ^(data_o & 72'h005e00000fffe0003f);
		data_o[66] = ^(data_o & 72'h0067003ff003e007c1);
		data_o[67] = ^(data_o & 72'h00cd0fc0f03c207842);
		data_o[68] = ^(data_o & 72'h00b671c711c4438884);
		data_o[69] = ^(data_o & 72'h00b5b65926488c9108);
		data_o[70] = ^(data_o & 72'h00cbdaaa4a91152210);
		data_o[71] = ^(data_o & 72'h007aed348d221a4420);
		data_o = data_o ^ 72'haa0000000000000000;
	end
	initial _sv2v_0 = 0;
endmodule
