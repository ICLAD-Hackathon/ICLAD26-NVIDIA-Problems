module aes_prng_masking (
	clk_i,
	rst_ni,
	force_masks_i,
	data_update_i,
	data_o,
	reseed_req_i,
	reseed_ack_o,
	entropy_req_o,
	entropy_ack_i,
	entropy_i
);
	reg _sv2v_0;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	localparam [31:0] aes_pkg_WidthPRDData = 128;
	localparam [31:0] aes_pkg_WidthPRDKey = 32;
	localparam [31:0] aes_pkg_WidthPRDMasking = aes_pkg_WidthPRDData + aes_pkg_WidthPRDKey;
	parameter [31:0] Width = aes_pkg_WidthPRDMasking;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire force_masks_i;
	input wire data_update_i;
	output wire [Width - 1:0] data_o;
	input wire reseed_req_i;
	output wire reseed_ack_o;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	wire prng_seed_en;
	wire prng_seed_done;
	wire [Width - 1:0] prng_key;
	wire prng_err;
	localparam signed [31:0] AesSecAllowForcingMasksNonDefault = (SecAllowForcingMasks == 0 ? 1 : 2);
	function automatic [AesSecAllowForcingMasksNonDefault - 1:0] sv2v_cast_72C84;
		input reg [AesSecAllowForcingMasksNonDefault - 1:0] inp;
		sv2v_cast_72C84 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72C84(1'b1);
	end
	generate
		if (SecAllowForcingMasks == 0) begin : gen_unused_force_masks
			wire unused_force_masks;
			assign unused_force_masks = force_masks_i;
		end
	endgenerate
	localparam signed [31:0] AesSecSkipPRNGReseedingNonDefault = (SecSkipPRNGReseeding == 0 ? 1 : 2);
	function automatic [AesSecSkipPRNGReseedingNonDefault - 1:0] sv2v_cast_72EB8;
		input reg [AesSecSkipPRNGReseedingNonDefault - 1:0] inp;
		sv2v_cast_72EB8 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_2
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72EB8(1'b1);
	end
	generate
		if (SecSkipPRNGReseeding == 1) begin : gen_unused_prng_seed_done
			wire unused_prng_seed_done;
			assign unused_prng_seed_done = prng_seed_done;
		end
	endgenerate
	assign prng_seed_en = (SecSkipPRNGReseeding ? 1'b0 : reseed_req_i);
	assign reseed_ack_o = (SecSkipPRNGReseeding ? reseed_req_i : prng_seed_done);
	prim_trivium #(
		.BiviumVariant(1),
		.OutputWidth(Width),
		.StrictLockupProtection(!SecAllowForcingMasks),
		.SeedType(32'sd2),
		.PartialSeedWidth(EntropyWidth),
		.RndCnstTriviumLfsrSeed(RndCnstLfsrSeed)
	) u_prim_bivium(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(data_update_i),
		.allow_lockup_i(SecAllowForcingMasks & force_masks_i),
		.seed_en_i(prng_seed_en),
		.seed_done_o(prng_seed_done),
		.seed_req_o(entropy_req_o),
		.seed_ack_i(entropy_ack_i),
		.seed_key_i(1'sb0),
		.seed_iv_i(1'sb0),
		.seed_state_full_i(1'sb0),
		.seed_state_partial_i(entropy_i),
		.key_o(prng_key),
		.err_o(prng_err)
	);
	genvar _gv_b_1;
	generate
		for (_gv_b_1 = 0; _gv_b_1 < Width; _gv_b_1 = _gv_b_1 + 1) begin : gen_perm
			localparam b = _gv_b_1;
			assign data_o[b] = prng_key[RndCnstLfsrPerm[b * 8+:8]];
		end
	endgenerate
	wire unused_prng_err;
	assign unused_prng_err = prng_err;
	initial _sv2v_0 = 0;
endmodule
