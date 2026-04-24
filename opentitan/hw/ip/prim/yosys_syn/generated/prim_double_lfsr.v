module prim_double_lfsr (
	clk_i,
	rst_ni,
	seed_en_i,
	seed_i,
	lfsr_en_i,
	entropy_i,
	state_o,
	err_o
);
	parameter LfsrType = "GAL_XOR";
	parameter [31:0] LfsrDw = 32;
	localparam [31:0] LfsrIdxDw = $clog2(LfsrDw);
	parameter [31:0] EntropyDw = 8;
	parameter [31:0] StateOutDw = 8;
	function automatic signed [LfsrDw - 1:0] sv2v_cast_C2EBB_signed;
		input reg signed [LfsrDw - 1:0] inp;
		sv2v_cast_C2EBB_signed = inp;
	endfunction
	parameter [LfsrDw - 1:0] DefaultSeed = sv2v_cast_C2EBB_signed(1);
	parameter [LfsrDw - 1:0] CustomCoeffs = 1'sb0;
	parameter [0:0] StatePermEn = 1'b0;
	parameter [(LfsrDw * LfsrIdxDw) - 1:0] StatePerm = 1'sb0;
	parameter [0:0] MaxLenSVA = 1'b1;
	parameter [0:0] LockupSVA = 1'b1;
	parameter [0:0] ExtSeedSVA = 1'b1;
	parameter [0:0] NonLinearOut = 1'b0;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input seed_en_i;
	input [LfsrDw - 1:0] seed_i;
	input lfsr_en_i;
	input [EntropyDw - 1:0] entropy_i;
	output wire [StateOutDw - 1:0] state_o;
	output wire err_o;
	wire [(2 * LfsrDw) - 1:0] lfsr_state;
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < 2; _gv_k_1 = _gv_k_1 + 1) begin : gen_double_lfsr
			localparam k = _gv_k_1;
			wire lfsr_en_buf;
			wire seed_en_buf;
			wire [EntropyDw - 1:0] entropy_buf;
			wire [LfsrDw - 1:0] seed_buf;
			wire [LfsrDw - 1:0] lfsr_state_unbuf;
			prim_buf #(.Width((EntropyDw + LfsrDw) + 2)) u_prim_buf_input(
				.in_i({seed_en_i, seed_i, lfsr_en_i, entropy_i}),
				.out_o({seed_en_buf, seed_buf, lfsr_en_buf, entropy_buf})
			);
			prim_lfsr #(
				.LfsrType(LfsrType),
				.LfsrDw(LfsrDw),
				.EntropyDw(EntropyDw),
				.StateOutDw(LfsrDw),
				.DefaultSeed(DefaultSeed),
				.CustomCoeffs(CustomCoeffs),
				.StatePermEn(StatePermEn),
				.StatePerm(StatePerm),
				.MaxLenSVA(MaxLenSVA),
				.LockupSVA(LockupSVA),
				.ExtSeedSVA(ExtSeedSVA),
				.NonLinearOut(NonLinearOut)
			) u_prim_lfsr(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.seed_en_i(seed_en_buf),
				.seed_i(seed_buf),
				.lfsr_en_i(lfsr_en_buf),
				.entropy_i(entropy_buf),
				.state_o(lfsr_state_unbuf)
			);
			prim_buf #(.Width(LfsrDw)) u_prim_buf_output(
				.in_i(lfsr_state_unbuf),
				.out_o(lfsr_state[k * LfsrDw+:LfsrDw])
			);
		end
	endgenerate
	assign state_o = lfsr_state[StateOutDw - 1-:StateOutDw];
	assign err_o = lfsr_state[0+:LfsrDw] != lfsr_state[LfsrDw+:LfsrDw];
endmodule
