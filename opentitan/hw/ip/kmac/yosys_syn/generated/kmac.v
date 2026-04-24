module kmac (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	clk_edn_i,
	rst_edn_ni,
	tl_i,
	tl_o,
	alert_rx_i,
	alert_tx_o,
	keymgr_key_i,
	app_i,
	app_o,
	entropy_o,
	entropy_i,
	lc_escalate_en_i,
	intr_kmac_done_o,
	intr_fifo_empty_o,
	intr_kmac_err_o,
	en_masking_o,
	idle_o
);
	reg _sv2v_0;
	parameter [0:0] EnMasking = 1;
	parameter [0:0] SwKeyMasked = 0;
	parameter signed [31:0] SecCmdDelay = 0;
	parameter [0:0] SecIdleAcceptSwMsg = 1'b0;
	parameter [31:0] NumAppIntf = 3;
	localparam [15:0] kmac_pkg_EncodedStringEmpty = 16'h0001;
	localparam [47:0] kmac_pkg_EncodedStringKMAC = 48'h43414d4b2001;
	localparam signed [31:0] sha3_pkg_CsWidth = 256;
	localparam signed [31:0] sha3_pkg_FnWidth = 32;
	localparam signed [31:0] sha3_pkg_MaxCsEncodeSize = 3;
	localparam signed [31:0] sha3_pkg_MaxFnEncodeSize = 2;
	localparam signed [31:0] sha3_pkg_NSRegisterSizePre = 41;
	localparam signed [31:0] sha3_pkg_NSRegisterSize = 44;
	localparam [31:0] kmac_pkg_NSPrefixW = 352;
	function automatic [351:0] sv2v_cast_C7725;
		input reg [351:0] inp;
		sv2v_cast_C7725 = inp;
	endfunction
	localparam [357:0] kmac_pkg_AppCfgKeyMgr = {6'h25, sv2v_cast_C7725({kmac_pkg_EncodedStringEmpty, kmac_pkg_EncodedStringKMAC})};
	localparam [71:0] kmac_pkg_EncodedStringLcCtrl = 72'h4c5254435f434c3801;
	localparam [357:0] kmac_pkg_AppCfgLcCtrl = {6'h11, sv2v_cast_C7725({kmac_pkg_EncodedStringLcCtrl, kmac_pkg_EncodedStringEmpty})};
	localparam [79:0] kmac_pkg_EncodedStringRomCtrl = 80'h4c5254435f4d4f524001;
	localparam [357:0] kmac_pkg_AppCfgRomCtrl = {6'h15, sv2v_cast_C7725({kmac_pkg_EncodedStringRomCtrl, kmac_pkg_EncodedStringEmpty})};
	parameter [(NumAppIntf * 358) - 1:0] AppCfg = {kmac_pkg_AppCfgKeyMgr, kmac_pkg_AppCfgLcCtrl, kmac_pkg_AppCfgRomCtrl};
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
	localparam signed [31:0] kmac_reg_pkg_NumAlerts = 2;
	parameter [1:0] AlertAsyncOn = {kmac_reg_pkg_NumAlerts {1'b1}};
	parameter [31:0] AlertSkewCycles = 1;
	input clk_i;
	input rst_ni;
	input rst_shadowed_ni;
	input clk_edn_i;
	input rst_edn_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
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
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	input wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key_i;
	localparam signed [31:0] sha3_pkg_MsgStrbW = 8;
	localparam signed [31:0] kmac_pkg_MsgStrbW = sha3_pkg_MsgStrbW;
	input wire [(NumAppIntf * 74) - 1:0] app_i;
	localparam [31:0] kmac_pkg_AppDigestW = 384;
	output wire [(NumAppIntf * 771) - 1:0] app_o;
	output wire [0:0] entropy_o;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	input wire [33:0] entropy_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output wire intr_kmac_done_o;
	output wire intr_fifo_empty_o;
	output wire intr_kmac_err_o;
	output wire en_masking_o;
	output reg [3:0] idle_o;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	localparam signed [31:0] SwKeyShare = (EnMasking || SwKeyMasked ? 2 : 1);
	localparam signed [31:0] StateWidth = 6;
	wire [5:0] kmac_st;
	reg [5:0] kmac_st_d;
	wire [1534:0] reg2hw;
	reg [62:0] hw2reg;
	wire [(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? (2 * (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1)) - 1 : (2 * (1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))) + (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) - 1)):(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0)] tl_win_h2d;
	wire [((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (2 * ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2)) - 1 : (2 * (1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))) + ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 0)):((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1)] tl_win_d2h;
	reg sha3_start;
	reg sha3_run;
	wire unused_sha3_squeeze;
	wire [3:0] sha3_done;
	reg [3:0] sha3_done_d;
	wire [3:0] sha3_absorbed;
	wire sha3_block_processed;
	reg entropy_in_keyblock;
	wire [3:0] app_absorbed;
	wire event_absorbed;
	localparam signed [31:0] sha3_pkg_StateWidthLogic = 3;
	wire [2:0] sha3_fsm;
	reg [351:0] reg_ns_prefix;
	wire [351:0] ns_prefix;
	wire state_valid;
	localparam signed [31:0] sha3_pkg_StateW = 1600;
	wire [(Share * sha3_pkg_StateW) - 1:0] state;
	wire reg_state_valid;
	wire [(Share * sha3_pkg_StateW) - 1:0] reg_state;
	wire sha3_rand_valid;
	wire sha3_rand_early;
	wire sha3_rand_update;
	wire sha3_rand_consumed;
	wire [799:0] sha3_rand_data;
	wire sha3_rand_aux;
	wire msgfifo_empty;
	wire msgfifo_full;
	localparam signed [31:0] kmac_pkg_RegLatency = 5;
	localparam signed [31:0] kmac_pkg_Sha3Latency = 72;
	localparam signed [31:0] kmac_pkg_BufferCycles = ((kmac_pkg_Sha3Latency + kmac_pkg_RegLatency) - 1) / kmac_pkg_RegLatency;
	localparam signed [31:0] kmac_pkg_RegIntfWidth = 32;
	localparam signed [31:0] kmac_pkg_BufferSizeBits = kmac_pkg_RegIntfWidth * kmac_pkg_BufferCycles;
	localparam signed [31:0] kmac_pkg_MsgFifoDepth = 2 + (((kmac_pkg_BufferSizeBits + kmac_pkg_MsgWidth) - 1) / kmac_pkg_MsgWidth);
	localparam signed [31:0] kmac_pkg_MsgFifoDepthW = $clog2(kmac_pkg_MsgFifoDepth + 1);
	wire [kmac_pkg_MsgFifoDepthW - 1:0] msgfifo_depth;
	wire msgfifo_valid;
	wire [(Share * kmac_pkg_MsgWidth) - 1:0] msgfifo_data;
	wire [7:0] msgfifo_strb;
	wire msgfifo_ready;
	generate
		if (EnMasking) begin : gen_msgfifo_data_masked
			assign msgfifo_data[(Share - 2) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth] = 1'sb0;
		end
	endgenerate
	wire tlram_req;
	wire tlram_gnt;
	wire tlram_we;
	wire [8:0] tlram_addr;
	wire [31:0] tlram_wdata;
	wire [31:0] tlram_wmask;
	wire [31:0] tlram_rdata;
	wire tlram_rvalid;
	wire [1:0] tlram_rerror;
	wire [31:0] tlram_wdata_endian;
	wire [31:0] tlram_wmask_endian;
	wire sw_msg_valid;
	wire [63:0] sw_msg_data;
	wire [63:0] sw_msg_mask;
	wire sw_msg_ready;
	wire mux2fifo_valid;
	wire [63:0] mux2fifo_data;
	wire [63:0] mux2fifo_mask;
	wire mux2fifo_ready;
	wire msg_valid;
	wire [(Share * kmac_pkg_MsgWidth) - 1:0] msg_data;
	wire [(Share * kmac_pkg_MsgWidth) - 1:0] msg_data_masked;
	wire [7:0] msg_strb;
	wire msg_ready;
	reg reg2msgfifo_process;
	wire msgfifo2kmac_process;
	wire kmac2sha3_process;
	localparam signed [31:0] kmac_pkg_MaxKeyLen = 512;
	reg [(SwKeyShare * kmac_pkg_MaxKeyLen) - 1:0] sw_key_data_reg;
	wire [(Share * kmac_pkg_MaxKeyLen) - 1:0] sw_key_data;
	wire [2:0] sw_key_len;
	wire [(Share * kmac_pkg_MaxKeyLen) - 1:0] key_data;
	wire key_valid;
	wire [2:0] key_len;
	wire reg_kmac_en;
	wire app_kmac_en;
	wire [1:0] reg_sha3_mode;
	wire [1:0] app_sha3_mode;
	wire [2:0] reg_keccak_strength;
	wire [2:0] app_keccak_strength;
	wire cfg_en_unsupported_modestrength;
	wire app_active;
	wire [5:0] sw_cmd;
	wire [5:0] checked_sw_cmd;
	wire [5:0] kmac_cmd;
	reg [5:0] cmd_q;
	wire cmd_update;
	wire [9:0] wait_timer_prescaler;
	wire [15:0] wait_timer_limit;
	wire entropy_refresh_req;
	wire entropy_seed_update;
	wire [31:0] entropy_seed_data;
	localparam [31:0] kmac_reg_pkg_HashCntW = 10;
	wire [9:0] entropy_hash_threshold;
	wire [9:0] entropy_hash_cnt;
	wire entropy_hash_clr;
	wire entropy_ready;
	wire [1:0] entropy_mode;
	wire entropy_fast_process;
	wire [3:0] entropy_configured;
	wire msg_mask_en;
	wire cfg_msg_mask;
	wire [63:0] msg_mask;
	wire [32:0] sha3_err;
	wire [32:0] app_err;
	wire [32:0] entropy_err;
	wire [32:0] errchecker_err;
	wire [32:0] msgfifo_err;
	wire err_processed;
	wire [3:0] clear_after_error;
	wire alert_fatal;
	wire alert_recov_operation;
	wire alert_intg_err;
	localparam [31:0] NumLcSyncCopies = 6;
	wire [(NumLcSyncCopies * lc_ctrl_pkg_TxWidth) - 1:0] lc_escalate_en_sync;
	wire [(NumLcSyncCopies * lc_ctrl_pkg_TxWidth) - 1:0] lc_escalate_en;
	localparam signed [31:0] kmac_reg_pkg_NumWordsPrefix = 11;
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < kmac_reg_pkg_NumWordsPrefix; i = i + 1)
				reg_ns_prefix[32 * i+:32] = reg2hw[0 + ((i * 32) + 31)-:32];
		end
	end
	localparam signed [31:0] KmacSecCmdDelayNonDefault = (SecCmdDelay == 0 ? 1 : 2);
	function automatic [KmacSecCmdDelayNonDefault - 1:0] sv2v_cast_56BD6;
		input reg [KmacSecCmdDelayNonDefault - 1:0] inp;
		sv2v_cast_56BD6 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_2
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_56BD6(1'b1);
	end
	function automatic [5:0] sv2v_cast_6;
		input reg [5:0] inp;
		sv2v_cast_6 = inp;
	endfunction
	generate
		if (SecCmdDelay > 0) begin : gen_cmd_delay_buf
			localparam [31:0] WidthCounter = $clog2(SecCmdDelay + 1);
			wire [WidthCounter - 1:0] count_d;
			reg [WidthCounter - 1:0] count_q;
			wire counting_d;
			reg counting_q;
			wire cmd_buf_empty;
			reg [5:0] cmd_buf_q;
			assign cmd_buf_empty = cmd_buf_q == 6'b000000;
			assign counting_d = (reg2hw[1480] ? 1'b1 : (cmd_update & cmd_buf_empty ? 1'b0 : counting_q));
			assign count_d = (reg2hw[1480] ? {WidthCounter {1'sb0}} : (cmd_update ? {WidthCounter {1'sb0}} : (counting_q ? count_q + 1'b1 : count_q)));
			assign cmd_update = (cmd_q == 6'b110001 ? 1'b1 : (count_q == SecCmdDelay[WidthCounter - 1:0] ? 1'b1 : 1'b0));
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					count_q <= 1'sb0;
					counting_q <= 1'b0;
				end
				else begin
					count_q <= count_d;
					counting_q <= counting_d;
				end
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					cmd_q <= 6'b000000;
					cmd_buf_q <= 6'b000000;
				end
				else if (reg2hw[1480] && cmd_update) begin
					cmd_q <= cmd_buf_q;
					cmd_buf_q <= sv2v_cast_6(reg2hw[1486-:6]);
				end
				else if (reg2hw[1480]) begin
					if (counting_q == 1'b0)
						cmd_q <= sv2v_cast_6(reg2hw[1486-:6]);
					else
						cmd_buf_q <= sv2v_cast_6(reg2hw[1486-:6]);
				end
				else if (cmd_update) begin
					cmd_q <= cmd_buf_q;
					cmd_buf_q <= 6'b000000;
				end
		end
		else begin : gen_no_cmd_delay_buf
			assign cmd_update = reg2hw[1480];
			wire [6:1] sv2v_tmp_A5AEA;
			assign sv2v_tmp_A5AEA = sv2v_cast_6(reg2hw[1486-:6]);
			always @(*) cmd_q = sv2v_tmp_A5AEA;
		end
	endgenerate
	assign sw_cmd = (cmd_update ? cmd_q : 6'b000000);
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		sha3_start = 1'b0;
		sha3_run = 1'b0;
		sha3_done_d = sv2v_cast_EECFA(4'h9);
		reg2msgfifo_process = 1'b0;
		(* full_case, parallel_case *)
		case (kmac_cmd)
			6'b011101: sha3_start = 1'b1;
			6'b101110: reg2msgfifo_process = 1'b1;
			6'b110001: sha3_run = 1'b1;
			6'b010110: sha3_done_d = sv2v_cast_EECFA(4'h6);
			6'b000000:
				;
			default:
				;
		endcase
	end
	function automatic [2:0] sv2v_cast_C95E7;
		input reg [2:0] inp;
		sv2v_cast_C95E7 = inp;
	endfunction
	wire [1:1] sv2v_tmp_C5A4E;
	assign sv2v_tmp_C5A4E = sha3_fsm == sv2v_cast_C95E7(0);
	always @(*) hw2reg[44] = sv2v_tmp_C5A4E;
	wire [1:1] sv2v_tmp_5C8DE;
	assign sv2v_tmp_5C8DE = sha3_fsm == sv2v_cast_C95E7(1);
	always @(*) hw2reg[45] = sv2v_tmp_5C8DE;
	wire [1:1] sv2v_tmp_485EE;
	assign sv2v_tmp_485EE = sha3_fsm == sv2v_cast_C95E7(2);
	always @(*) hw2reg[46] = sv2v_tmp_485EE;
	wire [((46 + kmac_pkg_MsgFifoDepthW) >= 47 ? (46 + kmac_pkg_MsgFifoDepthW) - 46 : 48 - (46 + kmac_pkg_MsgFifoDepthW)) * 1:1] sv2v_tmp_F03F5;
	assign sv2v_tmp_F03F5 = msgfifo_depth;
	always @(*) hw2reg[46 + kmac_pkg_MsgFifoDepthW:47] = sv2v_tmp_F03F5;
	generate
		if (5 != kmac_pkg_MsgFifoDepthW) begin : gen_fifo_depth_tie
			wire [(51 >= (47 + kmac_pkg_MsgFifoDepthW) ? 52 - (47 + kmac_pkg_MsgFifoDepthW) : (47 + kmac_pkg_MsgFifoDepthW) - 50) * 1:1] sv2v_tmp_8DFD1;
			assign sv2v_tmp_8DFD1 = 1'sb0;
			always @(*) hw2reg[51:47 + kmac_pkg_MsgFifoDepthW] = sv2v_tmp_8DFD1;
		end
	endgenerate
	wire [1:1] sv2v_tmp_04C8B;
	assign sv2v_tmp_04C8B = msgfifo_empty;
	always @(*) hw2reg[52] = sv2v_tmp_04C8B;
	wire [1:1] sv2v_tmp_DE7AF;
	assign sv2v_tmp_DE7AF = msgfifo_full;
	always @(*) hw2reg[53] = sv2v_tmp_DE7AF;
	wire engine_stable;
	assign engine_stable = sha3_fsm == sv2v_cast_C95E7(0);
	wire [1:1] sv2v_tmp_60FB6;
	assign sv2v_tmp_60FB6 = engine_stable;
	always @(*) hw2reg[56] = sv2v_tmp_60FB6;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			sw_key_data_reg[(SwKeyShare - 1) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] <= 1'sb0;
		else if (engine_stable) begin : sv2v_autoblock_3
			reg signed [31:0] j;
			for (j = 0; j < 16; j = j + 1)
				if (reg2hw[883 + (j * 33)])
					sw_key_data_reg[((SwKeyShare - 1) * kmac_pkg_MaxKeyLen) + (32 * j)+:32] <= reg2hw[883 + ((j * 33) + 32)-:32];
		end
	generate
		if (EnMasking || SwKeyMasked) begin : gen_key_share1_reg
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					sw_key_data_reg[(SwKeyShare - 2) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] <= 1'sb0;
				else if (engine_stable) begin : sv2v_autoblock_4
					reg signed [31:0] j;
					for (j = 0; j < 16; j = j + 1)
						if (reg2hw[355 + (j * 33)])
							sw_key_data_reg[((SwKeyShare - 2) * kmac_pkg_MaxKeyLen) + (32 * j)+:32] <= reg2hw[355 + ((j * 33) + 32)-:32];
				end
		end
		else begin : gen_no_key_share1_reg
			wire unused_key_share1;
			assign unused_key_share1 = ^reg2hw[882-:528];
		end
		if (EnMasking || !SwKeyMasked) begin : gen_key_forward
			assign sw_key_data = sw_key_data_reg;
		end
		else begin : gen_key_unmask
			assign sw_key_data[(Share - 1) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] = sw_key_data_reg[(SwKeyShare - 1) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] ^ sw_key_data_reg[(SwKeyShare - 2) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen];
		end
	endgenerate
	function automatic [2:0] sv2v_cast_3;
		input reg [2:0] inp;
		sv2v_cast_3 = inp;
	endfunction
	assign sw_key_len = sv2v_cast_3(reg2hw[354-:3]);
	assign wait_timer_prescaler = reg2hw[1463-:10];
	assign wait_timer_limit = reg2hw[1479-:16];
	assign entropy_refresh_req = reg2hw[1488] && reg2hw[1487];
	assign entropy_seed_update = reg2hw[1411];
	assign entropy_seed_data = reg2hw[1443-:32];
	assign entropy_hash_threshold = reg2hw[1453-:10];
	wire [1:1] sv2v_tmp_D6227;
	assign sv2v_tmp_D6227 = 1'b1;
	always @(*) hw2reg[33] = sv2v_tmp_D6227;
	wire [10:1] sv2v_tmp_3B733;
	assign sv2v_tmp_3B733 = entropy_hash_cnt;
	always @(*) hw2reg[43-:10] = sv2v_tmp_3B733;
	assign entropy_hash_clr = reg2hw[1489] && reg2hw[1490];
	assign entropy_ready = reg2hw[1516] & reg2hw[1515];
	function automatic [1:0] sv2v_cast_2;
		input reg [1:0] inp;
		sv2v_cast_2 = inp;
	endfunction
	assign entropy_mode = sv2v_cast_2(reg2hw[1510-:2]);
	assign entropy_fast_process = reg2hw[1512];
	assign cfg_msg_mask = reg2hw[1514];
	assign msg_mask_en = (cfg_msg_mask & msg_valid) & msg_ready;
	assign cfg_en_unsupported_modestrength = reg2hw[1518];
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			idle_o <= sv2v_cast_EECFA(4'h6);
		else if ((sha3_fsm == sv2v_cast_C95E7(0)) && (msgfifo_empty || SecIdleAcceptSwMsg))
			idle_o <= sv2v_cast_EECFA(4'h6);
		else
			idle_o <= sv2v_cast_EECFA(4'h9);
	assign err_processed = reg2hw[1492] & reg2hw[1491];
	assign reg_kmac_en = reg2hw[1494];
	assign reg_sha3_mode = sv2v_cast_2(reg2hw[1501-:2]);
	assign reg_keccak_strength = sv2v_cast_3(reg2hw[1498-:3]);
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	assign event_absorbed = prim_mubi_pkg_mubi4_test_true_strict(app_absorbed);
	prim_intr_hw #(.Width(1)) intr_kmac_done(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.event_intr_i(event_absorbed),
		.reg2hw_intr_enable_q_i(reg2hw[1529]),
		.reg2hw_intr_test_q_i(reg2hw[1524]),
		.reg2hw_intr_test_qe_i(reg2hw[1523]),
		.reg2hw_intr_state_q_i(reg2hw[1532]),
		.hw2reg_intr_state_de_o(hw2reg[57]),
		.hw2reg_intr_state_d_o(hw2reg[58]),
		.intr_o(intr_kmac_done_o)
	);
	wire status_msgfifo_empty;
	wire msgfifo_empty_gate;
	wire msgfifo_empty_negedge;
	reg msgfifo_empty_q;
	wire msgfifo_full_seen_d;
	reg msgfifo_full_seen_q;
	assign msgfifo_empty_negedge = msgfifo_empty_q & ~msgfifo_empty;
	assign msgfifo_full_seen_d = (msgfifo_full ? 1'b1 : (msgfifo_empty_negedge ? 1'b0 : (msgfifo2kmac_process ? 1'b0 : msgfifo_full_seen_q)));
	assign msgfifo_empty_gate = (app_active ? 1'b1 : (sha3_fsm != sv2v_cast_C95E7(1) ? 1'b1 : (msgfifo2kmac_process ? 1'b1 : ~msgfifo_full_seen_q)));
	assign status_msgfifo_empty = (msgfifo_empty_gate ? 1'b0 : msgfifo_empty);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			msgfifo_empty_q <= 1'b0;
			msgfifo_full_seen_q <= 1'b0;
		end
		else begin
			msgfifo_empty_q <= msgfifo_empty;
			msgfifo_full_seen_q <= msgfifo_full_seen_d;
		end
	prim_intr_hw #(
		.Width(1),
		.IntrT("Status")
	) intr_fifo_empty(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.event_intr_i(status_msgfifo_empty),
		.reg2hw_intr_enable_q_i(reg2hw[1530]),
		.reg2hw_intr_test_q_i(reg2hw[1526]),
		.reg2hw_intr_test_qe_i(reg2hw[1525]),
		.reg2hw_intr_state_q_i(reg2hw[1533]),
		.hw2reg_intr_state_de_o(hw2reg[59]),
		.hw2reg_intr_state_d_o(hw2reg[60]),
		.intr_o(intr_fifo_empty_o)
	);
	wire event_error;
	assign event_error = ((sha3_err[32] | app_err[32]) | entropy_err[32]) | errchecker_err[32];
	wire [1:1] sv2v_tmp_150AF;
	assign sv2v_tmp_150AF = event_error;
	always @(*) hw2reg[0] = sv2v_tmp_150AF;
	always @(*) begin
		if (_sv2v_0)
			;
		hw2reg[32-:32] = 1'sb0;
		(* full_case *)
		case (1'b1)
			app_err[32]: hw2reg[32-:32] = {app_err[31-:8], app_err[23-:24]};
			errchecker_err[32]: hw2reg[32-:32] = {errchecker_err[31-:8], errchecker_err[23-:24]};
			sha3_err[32]: hw2reg[32-:32] = {sha3_err[31-:8], sha3_err[23-:24]};
			entropy_err[32]: hw2reg[32-:32] = {entropy_err[31-:8], entropy_err[23-:24]};
			msgfifo_err[32]: hw2reg[32-:32] = {msgfifo_err[31-:8], msgfifo_err[23-:24]};
			default: hw2reg[32-:32] = 1'sb0;
		endcase
	end
	wire counter_error;
	wire sha3_count_error;
	wire key_index_error;
	wire msgfifo_counter_error;
	wire kmac_entropy_hash_counter_error;
	assign counter_error = ((sha3_count_error | kmac_entropy_hash_counter_error) | key_index_error) | msgfifo_counter_error;
	assign msgfifo_counter_error = msgfifo_err[32];
	wire sparse_fsm_error;
	wire sha3_state_error;
	wire kmac_errchk_state_error;
	wire kmac_core_state_error;
	wire kmac_app_state_error;
	wire kmac_entropy_state_error;
	reg kmac_state_error;
	assign sparse_fsm_error = ((((sha3_state_error | kmac_errchk_state_error) | kmac_core_state_error) | kmac_app_state_error) | kmac_entropy_state_error) | kmac_state_error;
	wire control_integrity_error;
	wire sha3_storage_rst_error;
	assign control_integrity_error = sha3_storage_rst_error;
	prim_intr_hw #(.Width(1)) intr_kmac_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.event_intr_i(event_error),
		.reg2hw_intr_enable_q_i(reg2hw[1531]),
		.reg2hw_intr_test_q_i(reg2hw[1528]),
		.reg2hw_intr_test_qe_i(reg2hw[1527]),
		.reg2hw_intr_state_q_i(reg2hw[1534]),
		.hw2reg_intr_state_de_o(hw2reg[61]),
		.hw2reg_intr_state_d_o(hw2reg[62]),
		.intr_o(intr_kmac_err_o)
	);
	function automatic [5:0] sv2v_cast_288BE;
		input reg [5:0] inp;
		sv2v_cast_288BE = inp;
	endfunction
	prim_sparse_fsm_flop #(
		.Width(StateWidth),
		.ResetValue(sv2v_cast_288BE(6'b001011)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(kmac_st_d),
		.state_o(kmac_st)
	);
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_loose = sv2v_cast_BE429(4'b1010) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_false_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_loose = sv2v_cast_EECFA(4'h6) != val;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		kmac_st_d = kmac_st;
		entropy_in_keyblock = 1'b0;
		kmac_state_error = 1'b0;
		(* full_case, parallel_case *)
		case (kmac_st)
			sv2v_cast_288BE(6'b001011):
				if (kmac_cmd == 6'b011101) begin
					if (2'b11 == app_sha3_mode)
						kmac_st_d = sv2v_cast_288BE(6'b000110);
					else
						kmac_st_d = sv2v_cast_288BE(6'b010101);
				end
				else
					kmac_st_d = sv2v_cast_288BE(6'b001011);
			sv2v_cast_288BE(6'b000110):
				if (sha3_block_processed)
					kmac_st_d = (app_kmac_en ? sv2v_cast_288BE(6'b111110) : sv2v_cast_288BE(6'b010101));
				else
					kmac_st_d = sv2v_cast_288BE(6'b000110);
			sv2v_cast_288BE(6'b111110): begin
				entropy_in_keyblock = 1'b1;
				if (sha3_block_processed)
					kmac_st_d = sv2v_cast_288BE(6'b010101);
				else
					kmac_st_d = sv2v_cast_288BE(6'b111110);
			end
			sv2v_cast_288BE(6'b010101):
				if (prim_mubi_pkg_mubi4_test_true_strict(sha3_absorbed) && prim_mubi_pkg_mubi4_test_true_strict(sha3_done))
					kmac_st_d = sv2v_cast_288BE(6'b001011);
				else if (prim_mubi_pkg_mubi4_test_true_strict(sha3_absorbed) && prim_mubi_pkg_mubi4_test_false_loose(sha3_done))
					kmac_st_d = sv2v_cast_288BE(6'b101101);
				else
					kmac_st_d = sv2v_cast_288BE(6'b010101);
			sv2v_cast_288BE(6'b101101):
				if (prim_mubi_pkg_mubi4_test_true_strict(sha3_done))
					kmac_st_d = sv2v_cast_288BE(6'b001011);
				else
					kmac_st_d = sv2v_cast_288BE(6'b101101);
			sv2v_cast_288BE(6'b110000): begin
				kmac_st_d = sv2v_cast_288BE(6'b110000);
				kmac_state_error = 1'b1;
			end
			default: begin
				kmac_st_d = sv2v_cast_288BE(6'b110000);
				kmac_state_error = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en[0+:lc_ctrl_pkg_TxWidth]))
			kmac_st_d = sv2v_cast_288BE(6'b110000);
	end
	kmac_core #(.EnMasking(EnMasking)) u_kmac_core(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.fifo_valid_i(msgfifo_valid),
		.fifo_data_i(msgfifo_data),
		.fifo_strb_i(msgfifo_strb),
		.fifo_ready_o(msgfifo_ready),
		.msg_valid_o(msg_valid),
		.msg_data_o(msg_data),
		.msg_strb_o(msg_strb),
		.msg_ready_i(msg_ready),
		.kmac_en_i(app_kmac_en),
		.mode_i(app_sha3_mode),
		.strength_i(app_keccak_strength),
		.key_data_i(key_data),
		.key_len_i(key_len),
		.key_valid_i(key_valid),
		.start_i(sha3_start),
		.process_i(msgfifo2kmac_process),
		.done_i(sha3_done),
		.process_o(kmac2sha3_process),
		.lc_escalate_en_i(lc_escalate_en[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]),
		.sparse_fsm_error_o(kmac_core_state_error),
		.key_index_error_o(key_index_error)
	);
	generate
		if (EnMasking == 1) begin : g_msg_mask
			reg [63:0] msg_mask_permuted;
			always @(*) begin
				if (_sv2v_0)
					;
				msg_mask_permuted = 1'sb0;
				begin : sv2v_autoblock_5
					reg [31:0] i;
					for (i = 0; i < kmac_pkg_MsgWidth; i = i + 1)
						msg_mask_permuted[i] = msg_mask[RndCnstMsgPerm[i * 6+:6]];
				end
			end
			genvar _gv_i_1;
			for (_gv_i_1 = 0; _gv_i_1 < Share; _gv_i_1 = _gv_i_1 + 1) begin : g_msg_data_mask
				localparam i = _gv_i_1;
				assign msg_data_masked[((Share - 1) - i) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth] = msg_data[((Share - 1) - i) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth] ^ ({kmac_pkg_MsgWidth {cfg_msg_mask}} & msg_mask_permuted);
			end
		end
		else begin : g_no_msg_mask
			assign msg_data_masked[(Share - 1) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth] = msg_data[(Share - 1) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth];
			assign msg_mask = 1'sb0;
			wire unused_msgmask;
			assign unused_msgmask = ^{msg_mask, cfg_msg_mask, msg_mask_en};
		end
	endgenerate
	sha3 #(.EnMasking(EnMasking)) u_sha3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.msg_valid_i(msg_valid),
		.msg_data_i(msg_data_masked),
		.msg_strb_i(msg_strb),
		.msg_ready_o(msg_ready),
		.rand_valid_i(sha3_rand_valid),
		.rand_early_i(sha3_rand_early),
		.rand_data_i(sha3_rand_data),
		.rand_aux_i(sha3_rand_aux),
		.rand_update_o(sha3_rand_update),
		.rand_consumed_o(sha3_rand_consumed),
		.ns_data_i(ns_prefix),
		.mode_i(app_sha3_mode),
		.strength_i(app_keccak_strength),
		.start_i(sha3_start),
		.process_i(kmac2sha3_process),
		.run_i(sha3_run),
		.done_i(sha3_done),
		.lc_escalate_en_i(lc_escalate_en[8+:lc_ctrl_pkg_TxWidth]),
		.absorbed_o(sha3_absorbed),
		.squeezing_o(unused_sha3_squeeze),
		.block_processed_o(sha3_block_processed),
		.sha3_fsm_o(sha3_fsm),
		.state_valid_o(state_valid),
		.state_o(state),
		.run_req_o(),
		.run_ack_i(1'b1),
		.error_o(sha3_err),
		.sparse_fsm_error_o(sha3_state_error),
		.count_error_o(sha3_count_error),
		.keccak_storage_rst_error_o(sha3_storage_rst_error)
	);
	assign tlram_rvalid = 1'b0;
	assign tlram_rdata = 1'sb0;
	assign tlram_rerror = 1'sb0;
	function automatic [31:0] kmac_pkg_conv_endian32;
		input reg [31:0] v;
		input reg swap;
		reg [31:0] conv_data;
		begin
			begin : sv2v_autoblock_6
				reg [31:0] _sv2v_strm_50A87_inp;
				reg [31:0] _sv2v_strm_50A87_out;
				integer _sv2v_strm_50A87_idx;
				_sv2v_strm_50A87_inp = {v};
				for (_sv2v_strm_50A87_idx = 0; _sv2v_strm_50A87_idx <= 24; _sv2v_strm_50A87_idx = _sv2v_strm_50A87_idx + 8)
					_sv2v_strm_50A87_out[31 - _sv2v_strm_50A87_idx-:8] = _sv2v_strm_50A87_inp[_sv2v_strm_50A87_idx+:8];
				conv_data = _sv2v_strm_50A87_out << 0;
			end
			kmac_pkg_conv_endian32 = (swap ? conv_data : v);
		end
	endfunction
	assign tlram_wdata_endian = kmac_pkg_conv_endian32(tlram_wdata, reg2hw[1503]);
	assign tlram_wmask_endian = kmac_pkg_conv_endian32(tlram_wmask, reg2hw[1503]);
	localparam signed [31:0] kmac_pkg_MsgWindowDepth = 512;
	localparam signed [31:0] kmac_pkg_MsgWindowWidth = 32;
	tlul_adapter_sram #(
		.SramAw(9),
		.SramDw(kmac_pkg_MsgWindowWidth),
		.Outstanding(1),
		.ByteAccess(1),
		.ErrOnRead(1)
	) u_tlul_adapter_msgfifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_ifetch_i(sv2v_cast_EECFA(4'h9)),
		.tl_i(tl_win_h2d[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + 0+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))]),
		.tl_o(tl_win_d2h[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + 0+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))]),
		.req_o(tlram_req),
		.req_type_o(),
		.gnt_i(tlram_gnt),
		.we_o(tlram_we),
		.addr_o(tlram_addr),
		.wdata_o(tlram_wdata),
		.wmask_o(tlram_wmask),
		.intg_error_o(),
		.user_rsvd_o(),
		.rdata_i(tlram_rdata),
		.rvalid_i(tlram_rvalid),
		.rerror_i(tlram_rerror),
		.compound_txn_in_progress_o(),
		.readback_en_i(sv2v_cast_EECFA(4'h9)),
		.readback_error_o(),
		.wr_collision_i(1'b0),
		.write_pending_i(1'b0)
	);
	assign sw_msg_valid = tlram_req & tlram_we;
	generate
		if (1) begin : gen_sw_msg_diff
			assign sw_msg_data = {{kmac_pkg_MsgWidth - kmac_pkg_MsgWindowWidth {1'b0}}, tlram_wdata_endian};
			assign sw_msg_mask = {{kmac_pkg_MsgWidth - kmac_pkg_MsgWindowWidth {1'b0}}, tlram_wmask_endian};
		end
	endgenerate
	assign tlram_gnt = sw_msg_ready;
	wire unused_tlram_addr;
	assign unused_tlram_addr = &{1'b0, tlram_addr};
	kmac_app #(
		.EnMasking(EnMasking),
		.SecIdleAcceptSwMsg(SecIdleAcceptSwMsg),
		.NumAppIntf(NumAppIntf),
		.AppCfg(AppCfg)
	) u_app_intf(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.reg_key_data_i(sw_key_data),
		.reg_key_len_i(sw_key_len),
		.reg_prefix_i(reg_ns_prefix),
		.reg_kmac_en_i(reg_kmac_en),
		.reg_sha3_mode_i(reg_sha3_mode),
		.reg_keccak_strength_i(reg_keccak_strength),
		.sw_valid_i(sw_msg_valid),
		.sw_data_i(sw_msg_data),
		.sw_mask_i(sw_msg_mask),
		.sw_ready_o(sw_msg_ready),
		.keymgr_key_i(keymgr_key_i),
		.app_i(app_i),
		.app_o(app_o),
		.key_data_o(key_data),
		.key_len_o(key_len),
		.key_valid_o(key_valid),
		.kmac_valid_o(mux2fifo_valid),
		.kmac_data_o(mux2fifo_data),
		.kmac_mask_o(mux2fifo_mask),
		.kmac_ready_i(mux2fifo_ready),
		.kmac_en_o(app_kmac_en),
		.sha3_prefix_o(ns_prefix),
		.sha3_mode_o(app_sha3_mode),
		.keccak_strength_o(app_keccak_strength),
		.keccak_state_valid_i(state_valid),
		.keccak_state_i(state),
		.reg_state_valid_o(reg_state_valid),
		.reg_state_o(reg_state),
		.keymgr_key_en_i(reg2hw[1507]),
		.absorbed_i(sha3_absorbed),
		.absorbed_o(app_absorbed),
		.app_active_o(app_active),
		.error_i(sha3_err[32]),
		.err_processed_i(err_processed),
		.clear_after_error_o(clear_after_error),
		.sw_cmd_i(checked_sw_cmd),
		.cmd_o(kmac_cmd),
		.entropy_ready_i(entropy_configured),
		.lc_escalate_en_i(lc_escalate_en[12+:lc_ctrl_pkg_TxWidth]),
		.error_o(app_err),
		.sparse_fsm_error_o(kmac_app_state_error)
	);
	kmac_msgfifo #(
		.OutWidth(kmac_pkg_MsgWidth),
		.MsgDepth(kmac_pkg_MsgFifoDepth),
		.EnMasking(EnMasking)
	) u_msgfifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.fifo_valid_i(mux2fifo_valid),
		.fifo_data_i(mux2fifo_data),
		.fifo_mask_i(mux2fifo_mask),
		.fifo_ready_o(mux2fifo_ready),
		.msg_valid_o(msgfifo_valid),
		.msg_data_o(msgfifo_data[(Share - 1) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth]),
		.msg_strb_o(msgfifo_strb),
		.msg_ready_i(msgfifo_ready),
		.fifo_empty_o(msgfifo_empty),
		.fifo_full_o(msgfifo_full),
		.fifo_depth_o(msgfifo_depth),
		.clear_i(sha3_done),
		.process_i(reg2msgfifo_process),
		.process_o(msgfifo2kmac_process),
		.err_o(msgfifo_err)
	);
	reg [(Share * sha3_pkg_StateW) - 1:0] reg_state_tl;
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_7
			reg signed [31:0] i;
			for (i = 0; i < Share; i = i + 1)
				reg_state_tl[((Share - 1) - i) * sha3_pkg_StateW+:sha3_pkg_StateW] = (reg_state_valid ? reg_state[((Share - 1) - i) * sha3_pkg_StateW+:sha3_pkg_StateW] : 'b0);
		end
	end
	kmac_staterd #(
		.AddrW(9),
		.EnMasking(EnMasking)
	) u_staterd(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_win_h2d[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + (((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))]),
		.tl_o(tl_win_d2h[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + ((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))]),
		.state_i(reg_state_tl),
		.endian_swap_i(reg2hw[1505])
	);
	kmac_errchk #(.EnMasking(EnMasking)) u_errchk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.cfg_mode_i(reg_sha3_mode),
		.cfg_strength_i(reg_keccak_strength),
		.kmac_en_i(reg_kmac_en),
		.cfg_prefix_6B_i(reg_ns_prefix[47:0]),
		.cfg_en_unsupported_modestrength_i(cfg_en_unsupported_modestrength),
		.entropy_ready_pulse_i(entropy_ready),
		.sw_cmd_i(sw_cmd),
		.sw_cmd_o(checked_sw_cmd),
		.app_active_i(app_active),
		.sha3_absorbed_i(sha3_absorbed),
		.keccak_done_i(sha3_block_processed),
		.lc_escalate_en_i(lc_escalate_en[16+:lc_ctrl_pkg_TxWidth]),
		.err_processed_i(err_processed),
		.clear_after_error_i(clear_after_error),
		.error_o(errchecker_err),
		.sparse_fsm_error_o(kmac_errchk_state_error)
	);
	generate
		if (EnMasking == 1) begin : gen_entropy
			wire entropy_req;
			wire entropy_ack;
			wire [31:0] entropy_data;
			wire unused_entropy_fips;
			prim_sync_reqack_data #(
				.Width(edn_pkg_ENDPOINT_BUS_WIDTH),
				.DataSrc2Dst(1'b0),
				.DataReg(1'b0)
			) u_prim_sync_reqack_data(
				.clk_src_i(clk_i),
				.rst_src_ni(rst_ni),
				.clk_dst_i(clk_edn_i),
				.rst_dst_ni(rst_edn_ni),
				.req_chk_i(1'b1),
				.src_req_i(entropy_req),
				.src_ack_o(entropy_ack),
				.dst_req_o(entropy_o[0]),
				.dst_ack_i(entropy_i[33]),
				.data_i(entropy_i[31-:edn_pkg_ENDPOINT_BUS_WIDTH]),
				.data_o(entropy_data)
			);
			assign unused_entropy_fips = entropy_i[32];
			kmac_entropy #(
				.RndCnstLfsrPerm(RndCnstLfsrPerm),
				.RndCnstLfsrSeed(RndCnstLfsrSeed),
				.RndCnstBufferLfsrSeed(RndCnstBufferLfsrSeed)
			) u_entropy(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.entropy_req_o(entropy_req),
				.entropy_ack_i(entropy_ack),
				.entropy_data_i(entropy_data),
				.rand_valid_o(sha3_rand_valid),
				.rand_early_o(sha3_rand_early),
				.rand_data_o(sha3_rand_data),
				.rand_aux_o(sha3_rand_aux),
				.rand_update_i(sha3_rand_update),
				.rand_consumed_i(sha3_rand_consumed),
				.in_keyblock_i(entropy_in_keyblock),
				.mode_i(entropy_mode),
				.entropy_ready_i(entropy_ready),
				.fast_process_i(entropy_fast_process),
				.wait_timer_prescaler_i(wait_timer_prescaler),
				.wait_timer_limit_i(wait_timer_limit),
				.msg_mask_en_i(msg_mask_en),
				.msg_mask_o(msg_mask),
				.seed_update_i(entropy_seed_update),
				.seed_data_i(entropy_seed_data),
				.entropy_refresh_req_i(entropy_refresh_req),
				.hash_cnt_o(entropy_hash_cnt),
				.hash_cnt_clr_i(entropy_hash_clr),
				.hash_threshold_i(entropy_hash_threshold),
				.entropy_configured_o(entropy_configured),
				.lc_escalate_en_i(lc_escalate_en[20+:lc_ctrl_pkg_TxWidth]),
				.err_o(entropy_err),
				.sparse_fsm_error_o(kmac_entropy_state_error),
				.count_error_o(kmac_entropy_hash_counter_error),
				.err_processed_i(err_processed)
			);
		end
		else begin : gen_empty_entropy
			wire [33:0] unused_entropy_input;
			wire [1:0] unused_entropy_mode;
			wire unused_entropy_fast_process;
			assign unused_entropy_input = entropy_i;
			assign unused_entropy_mode = entropy_mode;
			assign unused_entropy_fast_process = entropy_fast_process;
			assign entropy_o = 1'b0;
			wire unused_sha3_rand_update;
			wire unused_sha3_rand_consumed;
			assign sha3_rand_valid = 1'b1;
			assign sha3_rand_early = 1'b1;
			assign sha3_rand_data = 1'sb0;
			assign sha3_rand_aux = 1'sb0;
			assign unused_sha3_rand_update = sha3_rand_update;
			assign unused_sha3_rand_consumed = sha3_rand_consumed;
			wire unused_seed_update;
			wire unused_seed_data;
			wire unused_refresh_period;
			wire unused_entropy_refresh_req;
			assign unused_seed_data = ^entropy_seed_data;
			assign unused_seed_update = entropy_seed_update;
			assign unused_refresh_period = ^{wait_timer_limit, wait_timer_prescaler};
			assign unused_entropy_refresh_req = entropy_refresh_req;
			wire unused_entropy_hash;
			assign unused_entropy_hash = ^{entropy_hash_clr, entropy_hash_threshold};
			assign entropy_hash_cnt = 1'sb0;
			assign entropy_err = 33'h000000000;
			assign kmac_entropy_state_error = 1'b0;
			assign kmac_entropy_hash_counter_error = 1'b0;
			wire unused_entropy_status;
			assign unused_entropy_status = entropy_in_keyblock;
			assign entropy_configured = sv2v_cast_EECFA(4'h6);
			wire unused_edn_clk_rst;
			assign unused_edn_clk_rst = ^{clk_edn_i, rst_edn_ni};
			wire unused_lc_escalate_en5;
			assign unused_lc_escalate_en5 = ^lc_escalate_en[20+:lc_ctrl_pkg_TxWidth];
		end
	endgenerate
	prim_mubi4_sender #(.AsyncOn(0)) u_sha3_done_sender(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sha3_done_d),
		.mubi_o(sha3_done)
	);
	wire [1:0] alert_test;
	wire [1:0] alerts;
	reg [1:0] alerts_q;
	wire shadowed_storage_err;
	wire shadowed_update_err;
	kmac_reg_top u_reg(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.tl_i(tl_i),
		.tl_o(tl_o),
		.tl_win_o(tl_win_h2d),
		.tl_win_i(tl_win_d2h),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg),
		.shadowed_storage_err_o(shadowed_storage_err),
		.shadowed_update_err_o(shadowed_update_err),
		.intg_err_o(alert_intg_err)
	);
	wire unused_cfg_shadowed_qe;
	assign unused_cfg_shadowed_qe = ^{reg2hw[1493], reg2hw[1495], reg2hw[1499], reg2hw[1502], reg2hw[1504], reg2hw[1506], reg2hw[1508], reg2hw[1511], reg2hw[1513], reg2hw[1517]};
	assign alert_test = {reg2hw[1522] & reg2hw[1521], reg2hw[1520] & reg2hw[1519]};
	assign alerts = {alert_fatal, alert_recov_operation};
	assign alert_recov_operation = shadowed_update_err;
	reg status_alert_recov_ctrl_update_err;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			status_alert_recov_ctrl_update_err <= 1'b0;
		else if (alert_recov_operation)
			status_alert_recov_ctrl_update_err <= 1'b1;
		else if (err_processed)
			status_alert_recov_ctrl_update_err <= 1'b0;
	wire [1:1] sv2v_tmp_3A8D9;
	assign sv2v_tmp_3A8D9 = status_alert_recov_ctrl_update_err;
	always @(*) hw2reg[55] = sv2v_tmp_3A8D9;
	assign alert_fatal = (((shadowed_storage_err | alert_intg_err) | sparse_fsm_error) | counter_error) | control_integrity_error;
	reg status_alert_fatal_fault;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			status_alert_fatal_fault <= 1'b0;
		else if (alert_fatal)
			status_alert_fatal_fault <= 1'b1;
	wire [1:1] sv2v_tmp_638A6;
	assign sv2v_tmp_638A6 = status_alert_fatal_fault;
	always @(*) hw2reg[54] = sv2v_tmp_638A6;
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < kmac_reg_pkg_NumAlerts; _gv_i_2 = _gv_i_2 + 1) begin : gen_alert_tx
			localparam i = _gv_i_2;
			prim_alert_sender #(
				.AsyncOn(AlertAsyncOn[i]),
				.SkewCycles(AlertSkewCycles),
				.IsFatal(i)
			) u_prim_alert_sender(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.alert_test_i(alert_test[i]),
				.alert_req_i(alerts[i]),
				.alert_ack_o(),
				.alert_state_o(),
				.alert_rx_i(alert_rx_i[i * 4+:4]),
				.alert_tx_o(alert_tx_o[i * 2+:2])
			);
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			alerts_q[1] <= 1'b0;
		else if (alerts[1])
			alerts_q[1] <= 1'b1;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			alerts_q[0] <= 1'b0;
		else
			alerts_q[0] <= alerts[0];
	wire unused_alerts_q0;
	assign unused_alerts_q0 = alerts_q[0];
	wire [3:0] alert_to_lc_tx;
	function automatic [3:0] lc_ctrl_pkg_lc_tx_bool_to_lc_tx;
		input reg val;
		lc_ctrl_pkg_lc_tx_bool_to_lc_tx = (val ? sv2v_cast_BE429(4'b0101) : sv2v_cast_BE429(4'b1010));
	endfunction
	assign alert_to_lc_tx = lc_ctrl_pkg_lc_tx_bool_to_lc_tx(alerts_q[1]);
	genvar _gv_i_3;
	function automatic [3:0] lc_ctrl_pkg_lc_tx_or;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_8
				reg signed [31:0] k;
				for (k = 0; k < lc_ctrl_pkg_TxWidth; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			lc_ctrl_pkg_lc_tx_or = sv2v_cast_BE429(out);
		end
	endfunction
	function automatic [3:0] lc_ctrl_pkg_lc_tx_or_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		lc_ctrl_pkg_lc_tx_or_hi = lc_ctrl_pkg_lc_tx_or(a, b, sv2v_cast_BE429(4'b0101));
	endfunction
	generate
		for (_gv_i_3 = 0; _gv_i_3 < NumLcSyncCopies; _gv_i_3 = _gv_i_3 + 1) begin : gen_or_alert_lc_sync
			localparam i = _gv_i_3;
			assign lc_escalate_en[i * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth] = lc_ctrl_pkg_lc_tx_or_hi(alert_to_lc_tx, lc_escalate_en_sync[i * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
		end
	endgenerate
	prim_lc_sync #(.NumCopies(NumLcSyncCopies)) u_prim_lc_sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_escalate_en_i),
		.lc_en_o(lc_escalate_en_sync)
	);
	assign en_masking_o = EnMasking;
	initial _sv2v_0 = 0;
endmodule
