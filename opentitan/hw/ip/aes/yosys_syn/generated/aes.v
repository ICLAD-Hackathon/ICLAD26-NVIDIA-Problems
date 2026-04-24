module aes (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	idle_o,
	lc_escalate_en_i,
	clk_edn_i,
	rst_edn_ni,
	edn_o,
	edn_i,
	keymgr_key_i,
	tl_i,
	tl_o,
	alert_rx_i,
	alert_tx_o
);
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] AESGCMEnable = 1;
	parameter [0:0] SecMasking = 1;
	parameter integer SecSBoxImpl = 32'sd4;
	parameter [31:0] SecStartTriggerDelay = 0;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam signed [31:0] aes_reg_pkg_NumAlerts = 2;
	parameter [1:0] AlertAsyncOn = {aes_reg_pkg_NumAlerts {1'b1}};
	parameter [31:0] AlertSkewCycles = 1;
	localparam signed [31:0] aes_pkg_ClearingLfsrWidth = 64;
	localparam [63:0] aes_pkg_RndCnstClearingLfsrSeedDefault = 64'hc32d580f74f1713a;
	parameter [63:0] RndCnstClearingLfsrSeed = aes_pkg_RndCnstClearingLfsrSeedDefault;
	localparam [383:0] aes_pkg_RndCnstClearingLfsrPermDefault = 384'hb33fdfc81deb6292c21f8a31025850679c2f4be1bbe937b4b7c9d7f4e57568d99c8ae291a899143e0d8459d31b143223;
	parameter [383:0] RndCnstClearingLfsrPerm = aes_pkg_RndCnstClearingLfsrPermDefault;
	localparam [383:0] aes_pkg_RndCnstClearingSharePermDefault = 384'hf66fd61b27847edc2286706fb3a2e9009736b95ac3f3b5205caf8dc536aad73605d393c8dd94476e830e97891d4828d0;
	parameter [383:0] RndCnstClearingSharePerm = aes_pkg_RndCnstClearingSharePermDefault;
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstMaskingLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstMaskingLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	output wire [3:0] idle_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire clk_edn_i;
	input wire rst_edn_ni;
	output wire [0:0] edn_o;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	input wire [33:0] edn_i;
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	input wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key_i;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	input wire [7:0] alert_rx_i;
	output wire [3:0] alert_tx_o;
	localparam [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	wire [978:0] reg2hw;
	wire [948:0] hw2reg;
	wire [1:0] alert;
	wire [3:0] lc_escalate_en;
	wire edn_req_int;
	wire edn_req_hold_d;
	reg edn_req_hold_q;
	wire edn_req;
	wire edn_ack;
	wire [31:0] edn_data;
	wire unused_edn_fips;
	wire entropy_clearing_req;
	wire entropy_masking_req;
	wire entropy_clearing_ack;
	wire entropy_masking_ack;
	wire intg_err_alert;
	wire shadowed_storage_err;
	wire shadowed_update_err;
	aes_reg_top u_reg(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.tl_i(tl_i),
		.tl_o(tl_o),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg),
		.shadowed_storage_err_o(shadowed_storage_err),
		.shadowed_update_err_o(shadowed_update_err),
		.intg_err_o(intg_err_alert)
	);
	prim_lc_sync #(.NumCopies(1)) u_prim_lc_sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_escalate_en_i),
		.lc_en_o({lc_escalate_en})
	);
	assign edn_req_int = entropy_clearing_req | entropy_masking_req;
	assign entropy_clearing_ack = entropy_clearing_req & edn_ack;
	assign entropy_masking_ack = (~entropy_clearing_req & entropy_masking_req) & edn_ack;
	assign edn_req = edn_req_int | edn_req_hold_q;
	assign edn_req_hold_d = (edn_req_hold_q | edn_req) & ~edn_ack;
	always @(posedge clk_i or negedge rst_ni) begin : edn_req_reg
		if (!rst_ni)
			edn_req_hold_q <= 1'sb0;
		else
			edn_req_hold_q <= edn_req_hold_d;
	end
	prim_sync_reqack_data #(
		.Width(EntropyWidth),
		.DataSrc2Dst(1'b0),
		.DataReg(1'b0)
	) u_prim_sync_reqack_data(
		.clk_src_i(clk_i),
		.rst_src_ni(rst_ni),
		.clk_dst_i(clk_edn_i),
		.rst_dst_ni(rst_edn_ni),
		.req_chk_i(1'b1),
		.src_req_i(edn_req),
		.src_ack_o(edn_ack),
		.dst_req_o(edn_o[0]),
		.dst_ack_i(edn_i[33]),
		.data_i(edn_i[31-:edn_pkg_ENDPOINT_BUS_WIDTH]),
		.data_o(edn_data)
	);
	assign unused_edn_fips = edn_i[32];
	aes_core #(
		.AES192Enable(AES192Enable),
		.AESGCMEnable(AESGCMEnable),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl),
		.SecStartTriggerDelay(SecStartTriggerDelay),
		.SecAllowForcingMasks(SecAllowForcingMasks),
		.SecSkipPRNGReseeding(SecSkipPRNGReseeding),
		.EntropyWidth(EntropyWidth),
		.RndCnstClearingLfsrSeed(RndCnstClearingLfsrSeed),
		.RndCnstClearingLfsrPerm(RndCnstClearingLfsrPerm),
		.RndCnstClearingSharePerm(RndCnstClearingSharePerm),
		.RndCnstMaskingLfsrSeed(RndCnstMaskingLfsrSeed),
		.RndCnstMaskingLfsrPerm(RndCnstMaskingLfsrPerm)
	) u_aes_core(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.entropy_clearing_req_o(entropy_clearing_req),
		.entropy_clearing_ack_i(entropy_clearing_ack),
		.entropy_clearing_i(edn_data),
		.entropy_masking_req_o(entropy_masking_req),
		.entropy_masking_ack_i(entropy_masking_ack),
		.entropy_masking_i(edn_data),
		.keymgr_key_i(keymgr_key_i),
		.lc_escalate_en_i(lc_escalate_en),
		.shadowed_storage_err_i(shadowed_storage_err),
		.shadowed_update_err_i(shadowed_update_err),
		.intg_err_alert_i(intg_err_alert),
		.alert_recov_o(alert[32'sd0]),
		.alert_fatal_o(alert[32'sd1]),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg)
	);
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_bool_to_mubi;
		input reg val;
		prim_mubi_pkg_mubi4_bool_to_mubi = (val ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	endfunction
	assign idle_o = prim_mubi_pkg_mubi4_bool_to_mubi(reg2hw[15]);
	wire [1:0] alert_test;
	assign alert_test[32'sd0] = reg2hw[976] & reg2hw[975];
	assign alert_test[32'sd1] = reg2hw[978] & reg2hw[977];
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < aes_reg_pkg_NumAlerts; _gv_i_1 = _gv_i_1 + 1) begin : gen_alert_tx
			localparam i = _gv_i_1;
			prim_alert_sender #(
				.AsyncOn(AlertAsyncOn[i]),
				.SkewCycles(AlertSkewCycles),
				.IsFatal(i == 32'sd1)
			) u_prim_alert_sender(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.alert_test_i(alert_test[i]),
				.alert_req_i(alert[i]),
				.alert_ack_o(),
				.alert_state_o(),
				.alert_rx_i(alert_rx_i[i * 4+:4]),
				.alert_tx_o(alert_tx_o[i * 2+:2])
			);
		end
	endgenerate
	genvar _gv_i_2;
	genvar _gv_i_3;
	genvar _gv_i_4;
	generate
		if (AESGCMEnable && SecMasking) begin : gen_ghash_onehot_sva
			genvar _gv_s_1;
		end
	endgenerate
endmodule
