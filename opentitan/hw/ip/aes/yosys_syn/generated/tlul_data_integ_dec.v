module tlul_data_integ_dec (
	data_intg_i,
	data_err_o
);
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	input [(tlul_pkg_DataMaxWidth + tlul_pkg_DataIntgWidth) - 1:0] data_intg_i;
	output wire data_err_o;
	wire [1:0] data_err;
	prim_secded_inv_39_32_dec u_data_chk(
		.data_i(data_intg_i),
		.data_o(),
		.syndrome_o(),
		.err_o(data_err)
	);
	assign data_err_o = |data_err;
endmodule
