module prim_mubi32_sync (
	clk_i,
	rst_ni,
	mubi_i,
	mubi_o
);
	parameter signed [31:0] NumCopies = 1;
	parameter [0:0] AsyncOn = 1;
	parameter [0:0] StabilityCheck = 0;
	localparam signed [31:0] prim_mubi_pkg_MuBi32Width = 32;
	function automatic [31:0] sv2v_cast_594FE;
		input reg [31:0] inp;
		sv2v_cast_594FE = inp;
	endfunction
	parameter [31:0] ResetValue = sv2v_cast_594FE(32'h69696969);
	input clk_i;
	input rst_ni;
	input wire [31:0] mubi_i;
	output wire [(NumCopies * prim_mubi_pkg_MuBi32Width) - 1:0] mubi_o;
	wire [31:0] mubi;
	function automatic [31:0] sv2v_cast_32;
		input reg [31:0] inp;
		sv2v_cast_32 = inp;
	endfunction
	generate
		if (AsyncOn) begin : gen_flops
			wire [31:0] mubi_sync;
			prim_flop_2sync #(
				.Width(prim_mubi_pkg_MuBi32Width),
				.ResetValue(sv2v_cast_32(ResetValue))
			) u_prim_flop_2sync(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(sv2v_cast_32(mubi_i)),
				.q_o(mubi_sync)
			);
			if (StabilityCheck) begin : gen_stable_chks
				wire [31:0] mubi_q;
				prim_flop #(
					.Width(prim_mubi_pkg_MuBi32Width),
					.ResetValue(sv2v_cast_32(ResetValue))
				) u_prim_flop_3rd_stage(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i(mubi_sync),
					.q_o(mubi_q)
				);
				wire [31:0] sig_unstable;
				prim_xor2 #(.Width(prim_mubi_pkg_MuBi32Width)) u_mubi_xor(
					.in0_i(mubi_sync),
					.in1_i(mubi_q),
					.out_o(sig_unstable)
				);
				wire [31:0] reset_value;
				assign reset_value = ResetValue;
				genvar _gv_k_1;
				for (_gv_k_1 = 0; _gv_k_1 < prim_mubi_pkg_MuBi32Width; _gv_k_1 = _gv_k_1 + 1) begin : gen_bufs_muxes
					localparam k = _gv_k_1;
					wire [31:0] sig_unstable_buf;
					prim_sec_anchor_buf #(.Width(prim_mubi_pkg_MuBi32Width)) u_sig_unstable_buf(
						.in_i(sig_unstable),
						.out_o(sig_unstable_buf)
					);
					assign mubi[k] = (|sig_unstable_buf ? reset_value[k] : mubi_q[k]);
				end
			end
			else begin : gen_no_stable_chks
				assign mubi = mubi_sync;
			end
		end
		else begin : gen_no_flops
			reg [31:0] unused_logic;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					unused_logic <= sv2v_cast_594FE(32'h69696969);
				else
					unused_logic <= mubi_i;
			assign mubi = sv2v_cast_32(mubi_i);
		end
	endgenerate
	genvar _gv_j_1;
	generate
		for (_gv_j_1 = 0; _gv_j_1 < NumCopies; _gv_j_1 = _gv_j_1 + 1) begin : gen_buffs
			localparam j = _gv_j_1;
			wire [31:0] mubi_out;
			genvar _gv_k_2;
			for (_gv_k_2 = 0; _gv_k_2 < prim_mubi_pkg_MuBi32Width; _gv_k_2 = _gv_k_2 + 1) begin : gen_bits
				localparam k = _gv_k_2;
				prim_buf u_prim_buf(
					.in_i(mubi[k]),
					.out_o(mubi_out[k])
				);
			end
			assign mubi_o[j * prim_mubi_pkg_MuBi32Width+:prim_mubi_pkg_MuBi32Width] = sv2v_cast_594FE(mubi_out);
		end
	endgenerate
endmodule
