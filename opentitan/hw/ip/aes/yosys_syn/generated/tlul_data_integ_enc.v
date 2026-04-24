module tlul_data_integ_enc (
	data_i,
	data_intg_o
);
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	input [31:0] data_i;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	output wire [(tlul_pkg_DataMaxWidth + tlul_pkg_DataIntgWidth) - 1:0] data_intg_o;
	prim_secded_inv_39_32_enc u_data_gen(
		.data_i(data_i),
		.data_o(data_intg_o)
	);
endmodule
