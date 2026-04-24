module kmac_reduced (
	clk_i,
	rst_ni,
	msg_i,
	msg_valid_i,
	msg_ready_o,
	start_i,
	process_i,
	run_i,
	done_i,
	absorbed_o,
	squeezing_o,
	block_processed_o,
	sha3_fsm_o,
	entropy_ready_i,
	entropy_refresh_req_i,
	entropy_i,
	entropy_req_o,
	entropy_ack_i,
	mode_i,
	strength_i,
	ns_prefix_i,
	msg_strb_i,
	msg_mask_en_i,
	entropy_mode_i,
	entropy_fast_process_i,
	entropy_in_keyblock_i,
	entropy_seed_update_i,
	entropy_seed_data_i,
	wait_timer_prescaler_i,
	wait_timer_limit_i,
	state_o,
	state_valid_o,
	entropy_configured_o,
	entropy_hash_threshold_i,
	entropy_hash_clr_i,
	entropy_hash_cnt_o,
	lc_escalate_en_i,
	err_o,
	err_processed_i
);
	reg _sv2v_0;
	parameter [0:0] EnMasking = 1;
	localparam signed [31:0] NumShares = (EnMasking ? 2 : 1);
	parameter [31:0] MsgLen = 128;
	parameter [31:0] EntropyWidth = 32;
	localparam [31:0] kmac_pkg_EntropyOutputW = 800;
	localparam [7999:0] kmac_pkg_RndCnstLfsrPermDefault = 8000'hb1a3e87aeb4e69f02d8a6ee2c9ac567b2aa401a639a2a8ea2553614c0a8daf672c06546fc0d35267c4572024bc116458dd0f1c10a8aef5c4ad9a788968d0d7ca7345c6b8f277a5d3ec5da20f261826ed3c8992724e70db897060be51b07a96902e14a42d12d320f8187049b6c25f35d0e485cc4b9ef01dad2865b5e558926f380718b74394fe0f82d5395a7d0aa4845af814e8681107a4c793758572c9467493bf1248a48f1b40c209319b55111d0401819685a43a06f0da441021a8c220b14f01d44e49c1683a82afeb980964aa050641f4205131d9d4741eb5dd658e603b8ed438cb1096628d4262c9d75ced78ed09a3ddbb60f533eef10aa5a54b478d61a06a4b326eb3402105c27d562c6d91b48440d6d06e543be9871628a4aa9b3d2e51fa0ac2eb89a17f6d207ad96caf25d1fcffab210c1aff12252346fe4d56a7cd9b8605c7fa638895a960158cd3a1ce4f2f6cf5d48579ac14b1e5219ca8914e0507b635dc712554f6bb0ae412943a7596f4644a0c13646adc91d02c406a10d232791d3de9919eec5424aa2cac5f556c15c647eb29365062daf6aa848e10b3f665abccca713036d9f1cb1c9bd4aaeb19c5ac01b1805e0d5479860870da49a55e8f386ca8232c728e2f613007aa420758818e5312401372eaa00d21c70c7e1158d2e08a1b6ac0b820cb67f0ba4b5c0865ff04f0f9d0175817c65d81918e43e14b2f83d574bfa9c6e6deae64c22c2974a1d5c55e2367004b249d5a02fc566685ea33b6f73aaa0244b34412b1a12230adb1748dc1d956f9f10c8e1aa52f4702e06a16680d92226c830ec4ce4c2eead21f08c387c3f1de89eb33b983c748e848f68b54f256715221177c5a4a0a47d82741955626755ba1cc24e2ba40504111b9e26136be714c5bc0d330c3f775e863de763270a993890d633c6897218e151943edd8b79ae145cf564b7746130b0a76c40e7e84c876640dc78260c09a85e92e5ab56c22c0e72a8669fe88ba108b99e437c776f0cea0d144f285b6ab7259e12284f380ae3410171cd6a8b04415e95081c8c57e3e526ad5b38019a5c1b5505540462157e7c7e68e6a6a16ac460a5d5578da28092c7cc927cb9c0ed614a79b0e32b4c5b6a269a40743bef42b5e29d9a75ecb5548a29e9d34ddda07c8404aabbf5479456731ece3785f6090c3f8626eb1a5119e8b8e56b1455d820b46e20e15bb7d185a636b10ab8565732c59a302329925186604edbd5029a9f865268e90003b5b69d3e99240c3432291a60c62a4ebad1ed028cd021b27260db22089e0c44481b1a4c120134ac63dc52fbc4cafb2e065add2665fb361665267b53024329d96587d661f724171155ee73a3f0c47a8149751a5903c8bbcaf1782e415dfda531eb2af67c25e190330a12000e1fbb9cd;
	parameter [7999:0] RndCnstLfsrPerm = kmac_pkg_RndCnstLfsrPermDefault;
	localparam [31:0] kmac_pkg_EntropyStateW = 288;
	localparam [287:0] kmac_pkg_RndCnstLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstLfsrSeed = kmac_pkg_RndCnstLfsrSeedDefault;
	localparam [799:0] kmac_pkg_RndCnstBufferLfsrSeedDefault = 800'h292603b4f1d83863e0bd06344544ad28a91d866824b66efd92ad81235381f2bc3d65392c83c01ea5d8be84f1e258891711849a075a71f35fe9b31605f9077a6b758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [799:0] RndCnstBufferLfsrSeed = kmac_pkg_RndCnstBufferLfsrSeedDefault;
	localparam signed [31:0] sha3_pkg_MsgWidth = 64;
	localparam signed [31:0] kmac_pkg_MsgWidth = sha3_pkg_MsgWidth;
	localparam [383:0] kmac_pkg_RndCnstMsgPermDefault = 384'h382af41849db4cfb9c885f72f118c102cb5526978defac799192f65f54148379af21d7e10d82a5a33c3f31a1eaf964b8;
	parameter [383:0] RndCnstMsgPerm = kmac_pkg_RndCnstMsgPermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire [(NumShares * MsgLen) - 1:0] msg_i;
	input wire msg_valid_i;
	output wire msg_ready_o;
	input wire start_i;
	input wire process_i;
	input wire run_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] done_i;
	output wire [3:0] absorbed_o;
	output wire squeezing_o;
	output wire block_processed_o;
	localparam signed [31:0] sha3_pkg_StateWidthLogic = 3;
	output wire [2:0] sha3_fsm_o;
	input wire entropy_ready_i;
	input wire entropy_refresh_req_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [1:0] mode_i;
	input wire [2:0] strength_i;
	localparam signed [31:0] sha3_pkg_CsWidth = 256;
	localparam signed [31:0] sha3_pkg_FnWidth = 32;
	localparam signed [31:0] sha3_pkg_MaxCsEncodeSize = 3;
	localparam signed [31:0] sha3_pkg_MaxFnEncodeSize = 2;
	localparam signed [31:0] sha3_pkg_NSRegisterSizePre = 41;
	localparam signed [31:0] sha3_pkg_NSRegisterSize = 44;
	input wire [351:0] ns_prefix_i;
	localparam signed [31:0] sha3_pkg_MsgStrbW = 8;
	input wire [7:0] msg_strb_i;
	input wire msg_mask_en_i;
	input wire [1:0] entropy_mode_i;
	input wire entropy_fast_process_i;
	input wire entropy_in_keyblock_i;
	input wire entropy_seed_update_i;
	input wire [31:0] entropy_seed_data_i;
	localparam [31:0] kmac_pkg_TimerPrescalerW = 10;
	input wire [9:0] wait_timer_prescaler_i;
	localparam [31:0] kmac_pkg_EdnWaitTimerW = 16;
	input wire [15:0] wait_timer_limit_i;
	localparam signed [31:0] sha3_pkg_StateW = 1600;
	output wire [(NumShares * sha3_pkg_StateW) - 1:0] state_o;
	output wire state_valid_o;
	output wire [3:0] entropy_configured_o;
	localparam [31:0] kmac_reg_pkg_HashCntW = 10;
	input wire [9:0] entropy_hash_threshold_i;
	input wire entropy_hash_clr_i;
	output wire [9:0] entropy_hash_cnt_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output wire err_o;
	input wire err_processed_i;
	wire [63:0] msg [0:NumShares - 1];
	wire [NumShares - 1:0] msg_valid_shares;
	wire [NumShares - 1:0] msg_ready_shares;
	wire msg_valid;
	wire msg_ready;
	prim_packer_fifo #(
		.InW(MsgLen),
		.OutW(sha3_pkg_MsgWidth),
		.ClearOnRead(1'b1)
	) u_msg_unpacker_share0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(msg_valid_i),
		.wdata_i(msg_i[(NumShares - 1) * MsgLen+:MsgLen]),
		.wready_o(msg_ready_shares[0]),
		.rvalid_o(msg_valid_shares[0]),
		.rdata_o(msg[0]),
		.rready_i(msg_ready),
		.depth_o()
	);
	prim_packer_fifo #(
		.InW(MsgLen),
		.OutW(sha3_pkg_MsgWidth),
		.ClearOnRead(1'b1)
	) u_msg_unpacker_share1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(msg_valid_i),
		.wdata_i(msg_i[(NumShares - 2) * MsgLen+:MsgLen]),
		.wready_o(msg_ready_shares[1]),
		.rvalid_o(msg_valid_shares[1]),
		.rdata_o(msg[1]),
		.rready_i(msg_ready),
		.depth_o()
	);
	assign msg_ready_o = &msg_ready_shares;
	assign msg_valid = &msg_valid_shares;
	wire msg_mask_en;
	wire [63:0] msg_mask;
	reg [63:0] msg_mask_permuted;
	wire [(NumShares * sha3_pkg_MsgWidth) - 1:0] msg_masked;
	always @(*) begin
		if (_sv2v_0)
			;
		msg_mask_permuted = 1'sb0;
		begin : sv2v_autoblock_1
			reg [31:0] i;
			for (i = 0; i < sha3_pkg_MsgWidth; i = i + 1)
				msg_mask_permuted[i] = msg_mask[RndCnstMsgPerm[i * 6+:6]];
		end
	end
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < NumShares; _gv_i_1 = _gv_i_1 + 1) begin : gen_msg_masking
			localparam i = _gv_i_1;
			assign msg_masked[((NumShares - 1) - i) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = msg[i] ^ ({sha3_pkg_MsgWidth {msg_mask_en_i}} & msg_mask_permuted);
		end
	endgenerate
	assign msg_mask_en = (msg_mask_en_i & msg_valid) & msg_ready;
	wire sha3_rand_valid;
	wire sha3_rand_early;
	wire sha3_rand_update;
	wire sha3_rand_consumed;
	wire [799:0] sha3_rand_data;
	wire sha3_rand_aux;
	localparam [31:0] NumLcSyncCopies = 2;
	wire [(NumLcSyncCopies * lc_ctrl_pkg_TxWidth) - 1:0] lc_escalate_en;
	prim_lc_sync #(.NumCopies(NumLcSyncCopies)) u_prim_lc_sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_escalate_en_i),
		.lc_en_o(lc_escalate_en)
	);
	wire [32:0] sha3_err;
	wire [32:0] entropy_err;
	wire sha3_state_error;
	wire sha3_count_error;
	wire sha3_storage_rst_error;
	wire entropy_state_error;
	wire entropy_hash_counter_error;
	assign err_o = |{sha3_err, sha3_state_error, sha3_count_error, sha3_storage_rst_error, entropy_err, entropy_state_error, entropy_hash_counter_error};
	sha3 #(.EnMasking(EnMasking)) u_sha3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.msg_valid_i(msg_valid),
		.msg_data_i(msg_masked),
		.msg_strb_i(msg_strb_i),
		.msg_ready_o(msg_ready),
		.rand_valid_i(sha3_rand_valid),
		.rand_early_i(sha3_rand_early),
		.rand_data_i(sha3_rand_data),
		.rand_aux_i(sha3_rand_aux),
		.rand_update_o(sha3_rand_update),
		.rand_consumed_o(sha3_rand_consumed),
		.ns_data_i(ns_prefix_i),
		.mode_i(mode_i),
		.strength_i(strength_i),
		.start_i(start_i),
		.process_i(process_i),
		.run_i(run_i),
		.done_i(done_i),
		.absorbed_o(absorbed_o),
		.squeezing_o(squeezing_o),
		.block_processed_o(block_processed_o),
		.sha3_fsm_o(sha3_fsm_o),
		.state_valid_o(state_valid_o),
		.state_o(state_o),
		.run_req_o(),
		.run_ack_i(1'b1),
		.lc_escalate_en_i(lc_escalate_en[0+:lc_ctrl_pkg_TxWidth]),
		.error_o(sha3_err),
		.sparse_fsm_error_o(sha3_state_error),
		.count_error_o(sha3_count_error),
		.keccak_storage_rst_error_o(sha3_storage_rst_error)
	);
	kmac_entropy #(
		.RndCnstLfsrPerm(RndCnstLfsrPerm),
		.RndCnstLfsrSeed(RndCnstLfsrSeed),
		.RndCnstBufferLfsrSeed(RndCnstBufferLfsrSeed)
	) u_entropy(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.entropy_req_o(entropy_req_o),
		.entropy_ack_i(entropy_ack_i),
		.entropy_data_i(entropy_i),
		.rand_valid_o(sha3_rand_valid),
		.rand_early_o(sha3_rand_early),
		.rand_data_o(sha3_rand_data),
		.rand_aux_o(sha3_rand_aux),
		.rand_update_i(sha3_rand_update),
		.rand_consumed_i(sha3_rand_consumed),
		.msg_mask_en_i(msg_mask_en),
		.msg_mask_o(msg_mask),
		.mode_i(entropy_mode_i),
		.entropy_ready_i(entropy_ready_i),
		.fast_process_i(entropy_fast_process_i),
		.in_keyblock_i(entropy_in_keyblock_i),
		.entropy_refresh_req_i(entropy_refresh_req_i),
		.seed_update_i(entropy_seed_update_i),
		.seed_data_i(entropy_seed_data_i),
		.wait_timer_prescaler_i(wait_timer_prescaler_i),
		.wait_timer_limit_i(wait_timer_limit_i),
		.hash_threshold_i(entropy_hash_threshold_i),
		.hash_cnt_clr_i(entropy_hash_clr_i),
		.hash_cnt_o(entropy_hash_cnt_o),
		.entropy_configured_o(entropy_configured_o),
		.lc_escalate_en_i(lc_escalate_en[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]),
		.err_o(entropy_err),
		.sparse_fsm_error_o(entropy_state_error),
		.count_error_o(entropy_hash_counter_error),
		.err_processed_i(err_processed_i)
	);
	initial _sv2v_0 = 0;
endmodule
