module prim_lc_sync (
	clk_i,
	rst_ni,
	lc_en_i,
	lc_en_o
);
	parameter signed [31:0] NumCopies = 1;
	parameter [0:0] AsyncOn = 1;
	parameter [0:0] ResetValueIsOn = 0;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_en_i;
	output wire [(NumCopies * lc_ctrl_pkg_TxWidth) - 1:0] lc_en_o;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	localparam [3:0] LcResetValue = (ResetValueIsOn ? sv2v_cast_BE429(4'b0101) : sv2v_cast_BE429(4'b1010));
	wire [3:0] lc_en;
	function automatic [3:0] sv2v_cast_4;
		input reg [3:0] inp;
		sv2v_cast_4 = inp;
	endfunction
	generate
		if (AsyncOn) begin : gen_flops
			prim_flop_2sync #(
				.Width(lc_ctrl_pkg_TxWidth),
				.ResetValue(sv2v_cast_4(LcResetValue))
			) u_prim_flop_2sync(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(lc_en_i),
				.q_o(lc_en)
			);
		end
		else begin : gen_no_flops
			reg [3:0] unused_logic;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					unused_logic <= sv2v_cast_BE429(4'b1010);
				else
					unused_logic <= lc_en_i;
			assign lc_en = lc_en_i;
		end
	endgenerate
	genvar _gv_j_1;
	generate
		for (_gv_j_1 = 0; _gv_j_1 < NumCopies; _gv_j_1 = _gv_j_1 + 1) begin : gen_buffs
			localparam j = _gv_j_1;
			wire [3:0] lc_en_out;
			genvar _gv_k_1;
			for (_gv_k_1 = 0; _gv_k_1 < lc_ctrl_pkg_TxWidth; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
				localparam k = _gv_k_1;
				prim_sec_anchor_buf u_prim_buf(
					.in_i(lc_en[k]),
					.out_o(lc_en_out[k])
				);
			end
			assign lc_en_o[j * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth] = sv2v_cast_BE429(lc_en_out);
		end
	endgenerate
endmodule
