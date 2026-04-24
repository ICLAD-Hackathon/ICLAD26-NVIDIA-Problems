module prim_lc_dec (
	lc_en_i,
	lc_en_dec_o
);
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_en_i;
	output wire lc_en_dec_o;
	wire [3:0] lc_en;
	wire [3:0] lc_en_out;
	assign lc_en = lc_en_i;
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < lc_ctrl_pkg_TxWidth; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
			localparam k = _gv_k_1;
			prim_buf u_prim_buf(
				.in_i(lc_en[k]),
				.out_o(lc_en_out[k])
			);
		end
	endgenerate
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_strict;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_strict = sv2v_cast_BE429(4'b0101) == val;
	endfunction
	assign lc_en_dec_o = lc_ctrl_pkg_lc_tx_test_true_strict(sv2v_cast_BE429(lc_en_out));
endmodule
