module prim_lc_and_hardened (
	clk_i,
	rst_ni,
	lc_en_a_i,
	lc_en_b_i,
	lc_en_o
);
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	parameter [3:0] ActVal = sv2v_cast_BE429(4'b0101);
	input clk_i;
	input rst_ni;
	input wire [3:0] lc_en_a_i;
	input wire [3:0] lc_en_b_i;
	output wire [3:0] lc_en_o;
	wire [(lc_ctrl_pkg_TxWidth * lc_ctrl_pkg_TxWidth) - 1:0] lc_en_a_copies;
	prim_lc_sync #(
		.NumCopies(lc_ctrl_pkg_TxWidth),
		.AsyncOn(0)
	) u_prim_lc_sync_a(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_en_a_i),
		.lc_en_o(lc_en_a_copies)
	);
	wire [(lc_ctrl_pkg_TxWidth * lc_ctrl_pkg_TxWidth) - 1:0] lc_en_b_copies;
	prim_lc_sync #(
		.NumCopies(lc_ctrl_pkg_TxWidth),
		.AsyncOn(0)
	) u_prim_lc_sync_b(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_en_b_i),
		.lc_en_o(lc_en_b_copies)
	);
	wire [3:0] lc_en_logic;
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < lc_ctrl_pkg_TxWidth; _gv_k_1 = _gv_k_1 + 1) begin : gen_hardened_or
			localparam k = _gv_k_1;
			assign lc_en_logic[k] = (lc_en_a_copies[k * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth] == ActVal) && (lc_en_b_copies[k * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth] == ActVal);
		end
	endgenerate
	function automatic [3:0] sv2v_cast_4;
		input reg [3:0] inp;
		sv2v_cast_4 = inp;
	endfunction
	function automatic [3:0] lc_ctrl_pkg_lc_tx_inv;
		input reg [3:0] a;
		lc_ctrl_pkg_lc_tx_inv = sv2v_cast_BE429(~sv2v_cast_4(a));
	endfunction
	assign lc_en_o = sv2v_cast_BE429(lc_en_logic ^ lc_ctrl_pkg_lc_tx_inv(ActVal));
endmodule
