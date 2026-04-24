module aes_prng_clearing (
	clk_i,
	rst_ni,
	data_update_i,
	data_o,
	reseed_req_i,
	reseed_ack_o,
	entropy_req_o,
	entropy_ack_i,
	entropy_i
);
	reg _sv2v_0;
	parameter [31:0] Width = 64;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam signed [31:0] aes_pkg_ClearingLfsrWidth = 64;
	localparam [63:0] aes_pkg_RndCnstClearingLfsrSeedDefault = 64'hc32d580f74f1713a;
	parameter [63:0] RndCnstLfsrSeed = aes_pkg_RndCnstClearingLfsrSeedDefault;
	localparam [383:0] aes_pkg_RndCnstClearingLfsrPermDefault = 384'hb33fdfc81deb6292c21f8a31025850679c2f4be1bbe937b4b7c9d7f4e57568d99c8ae291a899143e0d8459d31b143223;
	parameter [383:0] RndCnstLfsrPerm = aes_pkg_RndCnstClearingLfsrPermDefault;
	localparam [383:0] aes_pkg_RndCnstClearingSharePermDefault = 384'hf66fd61b27847edc2286706fb3a2e9009736b95ac3f3b5205caf8dc536aad73605d393c8dd94476e830e97891d4828d0;
	parameter [383:0] RndCnstSharePerm = aes_pkg_RndCnstClearingSharePermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire data_update_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	output wire [(aes_pkg_NumSharesKey * Width) - 1:0] data_o;
	input wire reseed_req_i;
	output wire reseed_ack_o;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	wire seed_valid;
	wire seed_en;
	wire [Width - 1:0] seed;
	wire lfsr_en;
	wire [Width - 1:0] lfsr_state;
	localparam signed [31:0] AesSecSkipPRNGReseedingNonDefault = (SecSkipPRNGReseeding == 0 ? 1 : 2);
	function automatic [AesSecSkipPRNGReseedingNonDefault - 1:0] sv2v_cast_72EB8;
		input reg [AesSecSkipPRNGReseedingNonDefault - 1:0] inp;
		sv2v_cast_72EB8 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72EB8(1'b1);
	end
	assign lfsr_en = data_update_i;
	assign seed_en = (SecSkipPRNGReseeding ? 1'b0 : seed_valid);
	generate
		if ((Width / 2) == EntropyWidth) begin : gen_buffer
			wire [EntropyWidth - 1:0] buffer_d;
			reg [EntropyWidth - 1:0] buffer_q;
			wire buffer_valid_d;
			reg buffer_valid_q;
			assign entropy_req_o = (SecSkipPRNGReseeding ? 1'b0 : reseed_req_i);
			assign reseed_ack_o = (SecSkipPRNGReseeding ? reseed_req_i : seed_valid);
			assign buffer_valid_d = (entropy_req_o && entropy_ack_i ? ~buffer_valid_q : buffer_valid_q);
			assign buffer_d = ((entropy_req_o && entropy_ack_i) && !buffer_valid_q ? entropy_i : buffer_q);
			always @(posedge clk_i or negedge rst_ni) begin : reg_buffer
				if (!rst_ni) begin
					buffer_q <= 1'sb0;
					buffer_valid_q <= 1'b0;
				end
				else begin
					buffer_q <= buffer_d;
					buffer_valid_q <= buffer_valid_d;
				end
			end
			assign seed = {buffer_q, entropy_i};
			assign seed_valid = (buffer_valid_q & entropy_req_o) & entropy_ack_i;
		end
		else begin : gen_packer
			assign entropy_req_o = (SecSkipPRNGReseeding ? 1'b0 : reseed_req_i & ~seed_valid);
			assign reseed_ack_o = (SecSkipPRNGReseeding ? reseed_req_i : seed_valid);
			prim_packer_fifo #(
				.InW(EntropyWidth),
				.OutW(Width),
				.ClearOnRead(1'b0)
			) u_prim_packer_fifo(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(1'b0),
				.wvalid_i(entropy_ack_i),
				.wdata_i(entropy_i),
				.wready_o(),
				.rvalid_o(seed_valid),
				.rdata_o(seed),
				.rready_i(1'b1),
				.depth_o()
			);
		end
	endgenerate
	prim_lfsr #(
		.LfsrType("GAL_XOR"),
		.LfsrDw(Width),
		.StateOutDw(Width),
		.DefaultSeed(RndCnstLfsrSeed),
		.StatePermEn(1'b1),
		.StatePerm(RndCnstLfsrPerm),
		.NonLinearOut(1'b1)
	) u_lfsr(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.seed_en_i(seed_en),
		.seed_i(seed),
		.lfsr_en_i(lfsr_en),
		.entropy_i(1'sb0),
		.state_o(lfsr_state)
	);
	assign data_o[1 * Width+:Width] = lfsr_state;
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < Width; _gv_i_1 = _gv_i_1 + 1) begin : gen_share_perm
			localparam i = _gv_i_1;
			assign data_o[0 + i] = lfsr_state[RndCnstSharePerm[i * 6+:6]];
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
