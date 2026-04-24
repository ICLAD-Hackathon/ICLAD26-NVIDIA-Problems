module ascon_reg_top (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	tl_i,
	tl_o,
	reg2hw,
	hw2reg,
	shadowed_storage_err_o,
	shadowed_update_err_o,
	intg_err_o
);
	reg _sv2v_0;
	input clk_i;
	input rst_ni;
	input rst_shadowed_ni;
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
	output wire [1273:0] reg2hw;
	input wire [1086:0] hw2reg;
	output wire shadowed_storage_err_o;
	output wire shadowed_update_err_o;
	output wire intg_err_o;
	localparam signed [31:0] AW = 8;
	localparam signed [31:0] DW = 32;
	localparam signed [31:0] DBW = 4;
	wire reg_we;
	wire reg_re;
	wire [7:0] reg_addr;
	wire [31:0] reg_wdata;
	wire [3:0] reg_be;
	wire [31:0] reg_rdata;
	wire reg_error;
	wire addrmiss;
	reg wr_err;
	reg [31:0] reg_rdata_next;
	wire reg_busy;
	wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_reg_h2d;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_reg_d2h;
	wire intg_err;
	tlul_cmd_intg_chk u_chk(
		.tl_i(tl_i),
		.err_o(intg_err)
	);
	wire reg_we_err;
	reg [46:0] reg_we_check;
	prim_reg_we_check #(.OneHotWidth(47)) u_prim_reg_we_check(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.oh_i(reg_we_check),
		.en_i(reg_we && !addrmiss),
		.err_o(reg_we_err)
	);
	reg err_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			err_q <= 1'sb0;
		else if (intg_err || reg_we_err)
			err_q <= 1'b1;
	assign intg_err_o = (err_q | intg_err) | reg_we_err;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o_pre;
	tlul_rsp_intg_gen #(
		.EnableRspIntgGen(1),
		.EnableDataIntgGen(1)
	) u_rsp_intg_gen(
		.tl_i(tl_o_pre),
		.tl_o(tl_o)
	);
	assign tl_reg_h2d = tl_i;
	assign tl_o_pre = tl_reg_d2h;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	tlul_adapter_reg #(
		.RegAw(AW),
		.RegDw(DW),
		.EnableDataIntgGen(0)
	) u_reg_if(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_reg_h2d),
		.tl_o(tl_reg_d2h),
		.en_ifetch_i(sv2v_cast_EECFA(4'h9)),
		.intg_error_o(),
		.we_o(reg_we),
		.re_o(reg_re),
		.addr_o(reg_addr),
		.wdata_o(reg_wdata),
		.be_o(reg_be),
		.busy_i(reg_busy),
		.rdata_i(reg_rdata),
		.error_i(reg_error)
	);
	assign reg_rdata = reg_rdata_next;
	assign reg_error = (addrmiss | wr_err) | intg_err;
	wire alert_test_we;
	wire alert_test_recov_ctrl_update_err_wd;
	wire alert_test_fatal_fault_wd;
	wire key_share0_0_we;
	wire [31:0] key_share0_0_wd;
	wire key_share0_1_we;
	wire [31:0] key_share0_1_wd;
	wire key_share0_2_we;
	wire [31:0] key_share0_2_wd;
	wire key_share0_3_we;
	wire [31:0] key_share0_3_wd;
	wire key_share1_0_we;
	wire [31:0] key_share1_0_wd;
	wire key_share1_1_we;
	wire [31:0] key_share1_1_wd;
	wire key_share1_2_we;
	wire [31:0] key_share1_2_wd;
	wire key_share1_3_we;
	wire [31:0] key_share1_3_wd;
	wire nonce_share0_0_we;
	wire [31:0] nonce_share0_0_wd;
	wire nonce_share0_1_we;
	wire [31:0] nonce_share0_1_wd;
	wire nonce_share0_2_we;
	wire [31:0] nonce_share0_2_wd;
	wire nonce_share0_3_we;
	wire [31:0] nonce_share0_3_wd;
	wire nonce_share1_0_we;
	wire [31:0] nonce_share1_0_wd;
	wire nonce_share1_1_we;
	wire [31:0] nonce_share1_1_wd;
	wire nonce_share1_2_we;
	wire [31:0] nonce_share1_2_wd;
	wire nonce_share1_3_we;
	wire [31:0] nonce_share1_3_wd;
	wire data_in_share0_0_we;
	wire [31:0] data_in_share0_0_wd;
	wire data_in_share0_1_we;
	wire [31:0] data_in_share0_1_wd;
	wire data_in_share0_2_we;
	wire [31:0] data_in_share0_2_wd;
	wire data_in_share0_3_we;
	wire [31:0] data_in_share0_3_wd;
	wire data_in_share1_0_we;
	wire [31:0] data_in_share1_0_wd;
	wire data_in_share1_1_we;
	wire [31:0] data_in_share1_1_wd;
	wire data_in_share1_2_we;
	wire [31:0] data_in_share1_2_wd;
	wire data_in_share1_3_we;
	wire [31:0] data_in_share1_3_wd;
	wire tag_in_0_we;
	wire [31:0] tag_in_0_wd;
	wire tag_in_1_we;
	wire [31:0] tag_in_1_wd;
	wire tag_in_2_we;
	wire [31:0] tag_in_2_wd;
	wire tag_in_3_we;
	wire [31:0] tag_in_3_wd;
	wire msg_out_0_re;
	wire [31:0] msg_out_0_qs;
	wire msg_out_1_re;
	wire [31:0] msg_out_1_qs;
	wire msg_out_2_re;
	wire [31:0] msg_out_2_qs;
	wire msg_out_3_re;
	wire [31:0] msg_out_3_qs;
	wire tag_out_0_re;
	wire [31:0] tag_out_0_qs;
	wire tag_out_1_re;
	wire [31:0] tag_out_1_qs;
	wire tag_out_2_re;
	wire [31:0] tag_out_2_qs;
	wire tag_out_3_re;
	wire [31:0] tag_out_3_qs;
	wire ctrl_shadowed_re;
	wire ctrl_shadowed_we;
	wire [2:0] ctrl_shadowed_operation_qs;
	wire [2:0] ctrl_shadowed_operation_wd;
	wire ctrl_shadowed_operation_storage_err;
	wire ctrl_shadowed_operation_update_err;
	wire [1:0] ctrl_shadowed_ascon_variant_qs;
	wire [1:0] ctrl_shadowed_ascon_variant_wd;
	wire ctrl_shadowed_ascon_variant_storage_err;
	wire ctrl_shadowed_ascon_variant_update_err;
	wire ctrl_shadowed_sideload_key_qs;
	wire ctrl_shadowed_sideload_key_wd;
	wire ctrl_shadowed_sideload_key_storage_err;
	wire ctrl_shadowed_sideload_key_update_err;
	wire ctrl_shadowed_masked_ad_input_qs;
	wire ctrl_shadowed_masked_ad_input_wd;
	wire ctrl_shadowed_masked_ad_input_storage_err;
	wire ctrl_shadowed_masked_ad_input_update_err;
	wire ctrl_shadowed_masked_msg_input_qs;
	wire ctrl_shadowed_masked_msg_input_wd;
	wire ctrl_shadowed_masked_msg_input_storage_err;
	wire ctrl_shadowed_masked_msg_input_update_err;
	wire [3:0] ctrl_shadowed_no_msg_qs;
	wire [3:0] ctrl_shadowed_no_msg_wd;
	wire ctrl_shadowed_no_msg_storage_err;
	wire ctrl_shadowed_no_msg_update_err;
	wire [3:0] ctrl_shadowed_no_ad_qs;
	wire [3:0] ctrl_shadowed_no_ad_wd;
	wire ctrl_shadowed_no_ad_storage_err;
	wire ctrl_shadowed_no_ad_update_err;
	wire ctrl_aux_shadowed_re;
	wire ctrl_aux_shadowed_we;
	wire ctrl_aux_shadowed_manual_start_trigger_qs;
	wire ctrl_aux_shadowed_manual_start_trigger_wd;
	wire ctrl_aux_shadowed_manual_start_trigger_storage_err;
	wire ctrl_aux_shadowed_manual_start_trigger_update_err;
	wire ctrl_aux_shadowed_force_data_overwrite_qs;
	wire ctrl_aux_shadowed_force_data_overwrite_wd;
	wire ctrl_aux_shadowed_force_data_overwrite_storage_err;
	wire ctrl_aux_shadowed_force_data_overwrite_update_err;
	wire ctrl_aux_regwen_we;
	wire ctrl_aux_regwen_qs;
	wire ctrl_aux_regwen_wd;
	wire block_ctrl_shadowed_re;
	wire block_ctrl_shadowed_we;
	wire [11:0] block_ctrl_shadowed_data_type_start_qs;
	wire [11:0] block_ctrl_shadowed_data_type_start_wd;
	wire block_ctrl_shadowed_data_type_start_storage_err;
	wire block_ctrl_shadowed_data_type_start_update_err;
	wire [11:0] block_ctrl_shadowed_data_type_last_qs;
	wire [11:0] block_ctrl_shadowed_data_type_last_wd;
	wire block_ctrl_shadowed_data_type_last_storage_err;
	wire block_ctrl_shadowed_data_type_last_update_err;
	wire [4:0] block_ctrl_shadowed_valid_bytes_qs;
	wire [4:0] block_ctrl_shadowed_valid_bytes_wd;
	wire block_ctrl_shadowed_valid_bytes_storage_err;
	wire block_ctrl_shadowed_valid_bytes_update_err;
	wire trigger_we;
	wire trigger_start_qs;
	wire trigger_start_wd;
	wire trigger_wipe_qs;
	wire trigger_wipe_wd;
	wire status_idle_qs;
	wire status_stall_qs;
	wire status_wait_edn_qs;
	wire status_ascon_error_qs;
	wire status_alert_recov_ctrl_update_err_qs;
	wire status_alert_fatal_fault_qs;
	wire output_valid_msg_valid_qs;
	wire output_valid_tag_valid_qs;
	wire [1:0] output_valid_tag_comparison_valid_qs;
	wire fsm_state_re;
	wire [31:0] fsm_state_qs;
	wire fsm_state_regren_we;
	wire fsm_state_regren_qs;
	wire fsm_state_regren_wd;
	wire error_no_key_qs;
	wire error_no_nonce_qs;
	wire error_wrong_order_qs;
	wire error_flag_input_missmatch_qs;
	wire alert_test_qe;
	wire [1:0] alert_test_flds_we;
	assign alert_test_qe = &alert_test_flds_we;
	prim_subreg_ext #(.DW(1)) u_alert_test_recov_ctrl_update_err(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_recov_ctrl_update_err_wd),
		.d(1'sb0),
		.qre(),
		.qe(alert_test_flds_we[0]),
		.q(reg2hw[1271]),
		.ds(),
		.qs()
	);
	assign reg2hw[1270] = alert_test_qe;
	prim_subreg_ext #(.DW(1)) u_alert_test_fatal_fault(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_fatal_fault_wd),
		.d(1'sb0),
		.qre(),
		.qe(alert_test_flds_we[1]),
		.q(reg2hw[1273]),
		.ds(),
		.qs()
	);
	assign reg2hw[1272] = alert_test_qe;
	wire key_share0_0_qe;
	wire [0:0] key_share0_0_flds_we;
	assign key_share0_0_qe = &key_share0_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_0(
		.re(1'b0),
		.we(key_share0_0_we),
		.wd(key_share0_0_wd),
		.d(hw2reg[990-:32]),
		.qre(),
		.qe(key_share0_0_flds_we[0]),
		.q(reg2hw[1170-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1138] = key_share0_0_qe;
	wire key_share0_1_qe;
	wire [0:0] key_share0_1_flds_we;
	assign key_share0_1_qe = &key_share0_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_1(
		.re(1'b0),
		.we(key_share0_1_we),
		.wd(key_share0_1_wd),
		.d(hw2reg[1022-:32]),
		.qre(),
		.qe(key_share0_1_flds_we[0]),
		.q(reg2hw[1203-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1171] = key_share0_1_qe;
	wire key_share0_2_qe;
	wire [0:0] key_share0_2_flds_we;
	assign key_share0_2_qe = &key_share0_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_2(
		.re(1'b0),
		.we(key_share0_2_we),
		.wd(key_share0_2_wd),
		.d(hw2reg[1054-:32]),
		.qre(),
		.qe(key_share0_2_flds_we[0]),
		.q(reg2hw[1236-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1204] = key_share0_2_qe;
	wire key_share0_3_qe;
	wire [0:0] key_share0_3_flds_we;
	assign key_share0_3_qe = &key_share0_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_3(
		.re(1'b0),
		.we(key_share0_3_we),
		.wd(key_share0_3_wd),
		.d(hw2reg[1086-:32]),
		.qre(),
		.qe(key_share0_3_flds_we[0]),
		.q(reg2hw[1269-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1237] = key_share0_3_qe;
	wire key_share1_0_qe;
	wire [0:0] key_share1_0_flds_we;
	assign key_share1_0_qe = &key_share1_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_0(
		.re(1'b0),
		.we(key_share1_0_we),
		.wd(key_share1_0_wd),
		.d(hw2reg[862-:32]),
		.qre(),
		.qe(key_share1_0_flds_we[0]),
		.q(reg2hw[1038-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1006] = key_share1_0_qe;
	wire key_share1_1_qe;
	wire [0:0] key_share1_1_flds_we;
	assign key_share1_1_qe = &key_share1_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_1(
		.re(1'b0),
		.we(key_share1_1_we),
		.wd(key_share1_1_wd),
		.d(hw2reg[894-:32]),
		.qre(),
		.qe(key_share1_1_flds_we[0]),
		.q(reg2hw[1071-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1039] = key_share1_1_qe;
	wire key_share1_2_qe;
	wire [0:0] key_share1_2_flds_we;
	assign key_share1_2_qe = &key_share1_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_2(
		.re(1'b0),
		.we(key_share1_2_we),
		.wd(key_share1_2_wd),
		.d(hw2reg[926-:32]),
		.qre(),
		.qe(key_share1_2_flds_we[0]),
		.q(reg2hw[1104-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1072] = key_share1_2_qe;
	wire key_share1_3_qe;
	wire [0:0] key_share1_3_flds_we;
	assign key_share1_3_qe = &key_share1_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_3(
		.re(1'b0),
		.we(key_share1_3_we),
		.wd(key_share1_3_wd),
		.d(hw2reg[958-:32]),
		.qre(),
		.qe(key_share1_3_flds_we[0]),
		.q(reg2hw[1137-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1105] = key_share1_3_qe;
	wire nonce_share0_0_qe;
	wire [0:0] nonce_share0_0_flds_we;
	assign nonce_share0_0_qe = &nonce_share0_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share0_0(
		.re(1'b0),
		.we(nonce_share0_0_we),
		.wd(nonce_share0_0_wd),
		.d(hw2reg[734-:32]),
		.qre(),
		.qe(nonce_share0_0_flds_we[0]),
		.q(reg2hw[906-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[874] = nonce_share0_0_qe;
	wire nonce_share0_1_qe;
	wire [0:0] nonce_share0_1_flds_we;
	assign nonce_share0_1_qe = &nonce_share0_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share0_1(
		.re(1'b0),
		.we(nonce_share0_1_we),
		.wd(nonce_share0_1_wd),
		.d(hw2reg[766-:32]),
		.qre(),
		.qe(nonce_share0_1_flds_we[0]),
		.q(reg2hw[939-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[907] = nonce_share0_1_qe;
	wire nonce_share0_2_qe;
	wire [0:0] nonce_share0_2_flds_we;
	assign nonce_share0_2_qe = &nonce_share0_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share0_2(
		.re(1'b0),
		.we(nonce_share0_2_we),
		.wd(nonce_share0_2_wd),
		.d(hw2reg[798-:32]),
		.qre(),
		.qe(nonce_share0_2_flds_we[0]),
		.q(reg2hw[972-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[940] = nonce_share0_2_qe;
	wire nonce_share0_3_qe;
	wire [0:0] nonce_share0_3_flds_we;
	assign nonce_share0_3_qe = &nonce_share0_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share0_3(
		.re(1'b0),
		.we(nonce_share0_3_we),
		.wd(nonce_share0_3_wd),
		.d(hw2reg[830-:32]),
		.qre(),
		.qe(nonce_share0_3_flds_we[0]),
		.q(reg2hw[1005-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[973] = nonce_share0_3_qe;
	wire nonce_share1_0_qe;
	wire [0:0] nonce_share1_0_flds_we;
	assign nonce_share1_0_qe = &nonce_share1_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share1_0(
		.re(1'b0),
		.we(nonce_share1_0_we),
		.wd(nonce_share1_0_wd),
		.d(hw2reg[606-:32]),
		.qre(),
		.qe(nonce_share1_0_flds_we[0]),
		.q(reg2hw[774-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[742] = nonce_share1_0_qe;
	wire nonce_share1_1_qe;
	wire [0:0] nonce_share1_1_flds_we;
	assign nonce_share1_1_qe = &nonce_share1_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share1_1(
		.re(1'b0),
		.we(nonce_share1_1_we),
		.wd(nonce_share1_1_wd),
		.d(hw2reg[638-:32]),
		.qre(),
		.qe(nonce_share1_1_flds_we[0]),
		.q(reg2hw[807-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[775] = nonce_share1_1_qe;
	wire nonce_share1_2_qe;
	wire [0:0] nonce_share1_2_flds_we;
	assign nonce_share1_2_qe = &nonce_share1_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share1_2(
		.re(1'b0),
		.we(nonce_share1_2_we),
		.wd(nonce_share1_2_wd),
		.d(hw2reg[670-:32]),
		.qre(),
		.qe(nonce_share1_2_flds_we[0]),
		.q(reg2hw[840-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[808] = nonce_share1_2_qe;
	wire nonce_share1_3_qe;
	wire [0:0] nonce_share1_3_flds_we;
	assign nonce_share1_3_qe = &nonce_share1_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_nonce_share1_3(
		.re(1'b0),
		.we(nonce_share1_3_we),
		.wd(nonce_share1_3_wd),
		.d(hw2reg[702-:32]),
		.qre(),
		.qe(nonce_share1_3_flds_we[0]),
		.q(reg2hw[873-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[841] = nonce_share1_3_qe;
	wire data_in_share0_0_qe;
	wire [0:0] data_in_share0_0_flds_we;
	assign data_in_share0_0_qe = &data_in_share0_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share0_0(
		.re(1'b0),
		.we(data_in_share0_0_we),
		.wd(data_in_share0_0_wd),
		.d(hw2reg[478-:32]),
		.qre(),
		.qe(data_in_share0_0_flds_we[0]),
		.q(reg2hw[642-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[610] = data_in_share0_0_qe;
	wire data_in_share0_1_qe;
	wire [0:0] data_in_share0_1_flds_we;
	assign data_in_share0_1_qe = &data_in_share0_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share0_1(
		.re(1'b0),
		.we(data_in_share0_1_we),
		.wd(data_in_share0_1_wd),
		.d(hw2reg[510-:32]),
		.qre(),
		.qe(data_in_share0_1_flds_we[0]),
		.q(reg2hw[675-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[643] = data_in_share0_1_qe;
	wire data_in_share0_2_qe;
	wire [0:0] data_in_share0_2_flds_we;
	assign data_in_share0_2_qe = &data_in_share0_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share0_2(
		.re(1'b0),
		.we(data_in_share0_2_we),
		.wd(data_in_share0_2_wd),
		.d(hw2reg[542-:32]),
		.qre(),
		.qe(data_in_share0_2_flds_we[0]),
		.q(reg2hw[708-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[676] = data_in_share0_2_qe;
	wire data_in_share0_3_qe;
	wire [0:0] data_in_share0_3_flds_we;
	assign data_in_share0_3_qe = &data_in_share0_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share0_3(
		.re(1'b0),
		.we(data_in_share0_3_we),
		.wd(data_in_share0_3_wd),
		.d(hw2reg[574-:32]),
		.qre(),
		.qe(data_in_share0_3_flds_we[0]),
		.q(reg2hw[741-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[709] = data_in_share0_3_qe;
	wire data_in_share1_0_qe;
	wire [0:0] data_in_share1_0_flds_we;
	assign data_in_share1_0_qe = &data_in_share1_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share1_0(
		.re(1'b0),
		.we(data_in_share1_0_we),
		.wd(data_in_share1_0_wd),
		.d(hw2reg[350-:32]),
		.qre(),
		.qe(data_in_share1_0_flds_we[0]),
		.q(reg2hw[510-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[478] = data_in_share1_0_qe;
	wire data_in_share1_1_qe;
	wire [0:0] data_in_share1_1_flds_we;
	assign data_in_share1_1_qe = &data_in_share1_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share1_1(
		.re(1'b0),
		.we(data_in_share1_1_we),
		.wd(data_in_share1_1_wd),
		.d(hw2reg[382-:32]),
		.qre(),
		.qe(data_in_share1_1_flds_we[0]),
		.q(reg2hw[543-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[511] = data_in_share1_1_qe;
	wire data_in_share1_2_qe;
	wire [0:0] data_in_share1_2_flds_we;
	assign data_in_share1_2_qe = &data_in_share1_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share1_2(
		.re(1'b0),
		.we(data_in_share1_2_we),
		.wd(data_in_share1_2_wd),
		.d(hw2reg[414-:32]),
		.qre(),
		.qe(data_in_share1_2_flds_we[0]),
		.q(reg2hw[576-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[544] = data_in_share1_2_qe;
	wire data_in_share1_3_qe;
	wire [0:0] data_in_share1_3_flds_we;
	assign data_in_share1_3_qe = &data_in_share1_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_data_in_share1_3(
		.re(1'b0),
		.we(data_in_share1_3_we),
		.wd(data_in_share1_3_wd),
		.d(hw2reg[446-:32]),
		.qre(),
		.qe(data_in_share1_3_flds_we[0]),
		.q(reg2hw[609-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[577] = data_in_share1_3_qe;
	wire tag_in_0_qe;
	wire [0:0] tag_in_0_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_tag_in0_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&tag_in_0_flds_we),
		.q_o(tag_in_0_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_tag_in_0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(tag_in_0_we),
		.wd(tag_in_0_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(tag_in_0_flds_we[0]),
		.q(reg2hw[378-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[346] = tag_in_0_qe;
	wire tag_in_1_qe;
	wire [0:0] tag_in_1_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_tag_in1_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&tag_in_1_flds_we),
		.q_o(tag_in_1_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_tag_in_1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(tag_in_1_we),
		.wd(tag_in_1_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(tag_in_1_flds_we[0]),
		.q(reg2hw[411-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[379] = tag_in_1_qe;
	wire tag_in_2_qe;
	wire [0:0] tag_in_2_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_tag_in2_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&tag_in_2_flds_we),
		.q_o(tag_in_2_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_tag_in_2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(tag_in_2_we),
		.wd(tag_in_2_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(tag_in_2_flds_we[0]),
		.q(reg2hw[444-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[412] = tag_in_2_qe;
	wire tag_in_3_qe;
	wire [0:0] tag_in_3_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_tag_in3_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&tag_in_3_flds_we),
		.q_o(tag_in_3_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_tag_in_3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(tag_in_3_we),
		.wd(tag_in_3_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(tag_in_3_flds_we[0]),
		.q(reg2hw[477-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[445] = tag_in_3_qe;
	prim_subreg_ext #(.DW(32)) u_msg_out_0(
		.re(msg_out_0_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[222-:32]),
		.qre(reg2hw[214]),
		.qe(),
		.q(reg2hw[246-:32]),
		.ds(),
		.qs(msg_out_0_qs)
	);
	prim_subreg_ext #(.DW(32)) u_msg_out_1(
		.re(msg_out_1_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[254-:32]),
		.qre(reg2hw[247]),
		.qe(),
		.q(reg2hw[279-:32]),
		.ds(),
		.qs(msg_out_1_qs)
	);
	prim_subreg_ext #(.DW(32)) u_msg_out_2(
		.re(msg_out_2_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[286-:32]),
		.qre(reg2hw[280]),
		.qe(),
		.q(reg2hw[312-:32]),
		.ds(),
		.qs(msg_out_2_qs)
	);
	prim_subreg_ext #(.DW(32)) u_msg_out_3(
		.re(msg_out_3_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[318-:32]),
		.qre(reg2hw[313]),
		.qe(),
		.q(reg2hw[345-:32]),
		.ds(),
		.qs(msg_out_3_qs)
	);
	prim_subreg_ext #(.DW(32)) u_tag_out_0(
		.re(tag_out_0_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[94-:32]),
		.qre(reg2hw[82]),
		.qe(),
		.q(reg2hw[114-:32]),
		.ds(),
		.qs(tag_out_0_qs)
	);
	prim_subreg_ext #(.DW(32)) u_tag_out_1(
		.re(tag_out_1_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[126-:32]),
		.qre(reg2hw[115]),
		.qe(),
		.q(reg2hw[147-:32]),
		.ds(),
		.qs(tag_out_1_qs)
	);
	prim_subreg_ext #(.DW(32)) u_tag_out_2(
		.re(tag_out_2_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[158-:32]),
		.qre(reg2hw[148]),
		.qe(),
		.q(reg2hw[180-:32]),
		.ds(),
		.qs(tag_out_2_qs)
	);
	prim_subreg_ext #(.DW(32)) u_tag_out_3(
		.re(tag_out_3_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[190-:32]),
		.qre(reg2hw[181]),
		.qe(),
		.q(reg2hw[213-:32]),
		.ds(),
		.qs(tag_out_3_qs)
	);
	prim_subreg_shadow #(
		.DW(3),
		.SwAccess(3'd0),
		.RESVAL(3'h0),
		.Mubi(1'b0)
	) u_ctrl_shadowed_operation(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_operation_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[68-:3]),
		.ds(),
		.qs(ctrl_shadowed_operation_qs),
		.phase(),
		.err_update(ctrl_shadowed_operation_update_err),
		.err_storage(ctrl_shadowed_operation_storage_err)
	);
	prim_subreg_shadow #(
		.DW(2),
		.SwAccess(3'd0),
		.RESVAL(2'h0),
		.Mubi(1'b0)
	) u_ctrl_shadowed_ascon_variant(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_ascon_variant_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[70-:2]),
		.ds(),
		.qs(ctrl_shadowed_ascon_variant_qs),
		.phase(),
		.err_update(ctrl_shadowed_ascon_variant_update_err),
		.err_storage(ctrl_shadowed_ascon_variant_storage_err)
	);
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_shadowed_sideload_key(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_sideload_key_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[71]),
		.ds(),
		.qs(ctrl_shadowed_sideload_key_qs),
		.phase(),
		.err_update(ctrl_shadowed_sideload_key_update_err),
		.err_storage(ctrl_shadowed_sideload_key_storage_err)
	);
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_shadowed_masked_ad_input(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_masked_ad_input_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[72]),
		.ds(),
		.qs(ctrl_shadowed_masked_ad_input_qs),
		.phase(),
		.err_update(ctrl_shadowed_masked_ad_input_update_err),
		.err_storage(ctrl_shadowed_masked_ad_input_storage_err)
	);
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_shadowed_masked_msg_input(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_masked_msg_input_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[73]),
		.ds(),
		.qs(ctrl_shadowed_masked_msg_input_qs),
		.phase(),
		.err_update(ctrl_shadowed_masked_msg_input_update_err),
		.err_storage(ctrl_shadowed_masked_msg_input_storage_err)
	);
	prim_subreg_shadow #(
		.DW(4),
		.SwAccess(3'd0),
		.RESVAL(4'h6),
		.Mubi(1'b0)
	) u_ctrl_shadowed_no_msg(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_no_msg_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[77-:4]),
		.ds(),
		.qs(ctrl_shadowed_no_msg_qs),
		.phase(),
		.err_update(ctrl_shadowed_no_msg_update_err),
		.err_storage(ctrl_shadowed_no_msg_storage_err)
	);
	prim_subreg_shadow #(
		.DW(4),
		.SwAccess(3'd0),
		.RESVAL(4'h9),
		.Mubi(1'b0)
	) u_ctrl_shadowed_no_ad(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_no_ad_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[81-:4]),
		.ds(),
		.qs(ctrl_shadowed_no_ad_qs),
		.phase(),
		.err_update(ctrl_shadowed_no_ad_update_err),
		.err_storage(ctrl_shadowed_no_ad_storage_err)
	);
	wire ctrl_aux_shadowed_gated_we;
	assign ctrl_aux_shadowed_gated_we = ctrl_aux_shadowed_we & ctrl_aux_regwen_qs;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_aux_shadowed_manual_start_trigger(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_aux_shadowed_re),
		.we(ctrl_aux_shadowed_gated_we),
		.wd(ctrl_aux_shadowed_manual_start_trigger_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[64]),
		.ds(),
		.qs(ctrl_aux_shadowed_manual_start_trigger_qs),
		.phase(),
		.err_update(ctrl_aux_shadowed_manual_start_trigger_update_err),
		.err_storage(ctrl_aux_shadowed_manual_start_trigger_storage_err)
	);
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_aux_shadowed_force_data_overwrite(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_aux_shadowed_re),
		.we(ctrl_aux_shadowed_gated_we),
		.wd(ctrl_aux_shadowed_force_data_overwrite_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[65]),
		.ds(),
		.qs(ctrl_aux_shadowed_force_data_overwrite_qs),
		.phase(),
		.err_update(ctrl_aux_shadowed_force_data_overwrite_update_err),
		.err_storage(ctrl_aux_shadowed_force_data_overwrite_storage_err)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd5),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_ctrl_aux_regwen(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(ctrl_aux_regwen_we),
		.wd(ctrl_aux_regwen_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(),
		.ds(),
		.qs(ctrl_aux_regwen_qs)
	);
	prim_subreg_shadow #(
		.DW(12),
		.SwAccess(3'd0),
		.RESVAL(12'h000),
		.Mubi(1'b0)
	) u_block_ctrl_shadowed_data_type_start(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(block_ctrl_shadowed_re),
		.we(block_ctrl_shadowed_we),
		.wd(block_ctrl_shadowed_data_type_start_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[46-:12]),
		.ds(),
		.qs(block_ctrl_shadowed_data_type_start_qs),
		.phase(),
		.err_update(block_ctrl_shadowed_data_type_start_update_err),
		.err_storage(block_ctrl_shadowed_data_type_start_storage_err)
	);
	prim_subreg_shadow #(
		.DW(12),
		.SwAccess(3'd0),
		.RESVAL(12'h000),
		.Mubi(1'b0)
	) u_block_ctrl_shadowed_data_type_last(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(block_ctrl_shadowed_re),
		.we(block_ctrl_shadowed_we),
		.wd(block_ctrl_shadowed_data_type_last_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[58-:12]),
		.ds(),
		.qs(block_ctrl_shadowed_data_type_last_qs),
		.phase(),
		.err_update(block_ctrl_shadowed_data_type_last_update_err),
		.err_storage(block_ctrl_shadowed_data_type_last_storage_err)
	);
	prim_subreg_shadow #(
		.DW(5),
		.SwAccess(3'd0),
		.RESVAL(5'h1f),
		.Mubi(1'b0)
	) u_block_ctrl_shadowed_valid_bytes(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(block_ctrl_shadowed_re),
		.we(block_ctrl_shadowed_we),
		.wd(block_ctrl_shadowed_valid_bytes_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[63-:5]),
		.ds(),
		.qs(block_ctrl_shadowed_valid_bytes_qs),
		.phase(),
		.err_update(block_ctrl_shadowed_valid_bytes_update_err),
		.err_storage(block_ctrl_shadowed_valid_bytes_storage_err)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_trigger_start(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_start_wd),
		.de(hw2reg[61]),
		.d(hw2reg[62]),
		.qe(),
		.q(reg2hw[33]),
		.ds(),
		.qs(trigger_start_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_trigger_wipe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_wipe_wd),
		.de(hw2reg[59]),
		.d(hw2reg[60]),
		.qe(),
		.q(reg2hw[34]),
		.ds(),
		.qs(trigger_wipe_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_idle(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[57]),
		.d(hw2reg[58]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_idle_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_stall(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[55]),
		.d(hw2reg[56]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_stall_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_wait_edn(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[53]),
		.d(hw2reg[54]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_wait_edn_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_ascon_error(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[51]),
		.d(hw2reg[52]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_ascon_error_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_alert_recov_ctrl_update_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[49]),
		.d(hw2reg[50]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_recov_ctrl_update_err_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_alert_fatal_fault(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[47]),
		.d(hw2reg[48]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_fatal_fault_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_output_valid_msg_valid(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[45]),
		.d(hw2reg[46]),
		.qe(),
		.q(),
		.ds(),
		.qs(output_valid_msg_valid_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_output_valid_tag_valid(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[43]),
		.d(hw2reg[44]),
		.qe(),
		.q(),
		.ds(),
		.qs(output_valid_tag_valid_qs)
	);
	prim_subreg #(
		.DW(2),
		.SwAccess(3'd1),
		.RESVAL(2'h0),
		.Mubi(1'b0)
	) u_output_valid_tag_comparison_valid(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[40]),
		.d(hw2reg[42-:2]),
		.qe(),
		.q(),
		.ds(),
		.qs(output_valid_tag_comparison_valid_qs)
	);
	wire fsm_state_qe;
	wire [0:0] fsm_state_flds_we;
	assign fsm_state_qe = &fsm_state_flds_we;
	prim_subreg_ext #(.DW(32)) u_fsm_state(
		.re(fsm_state_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[39-:32]),
		.qre(),
		.qe(fsm_state_flds_we[0]),
		.q(reg2hw[32-:32]),
		.ds(),
		.qs(fsm_state_qs)
	);
	assign reg2hw[0] = fsm_state_qe;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd5),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_fsm_state_regren(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(fsm_state_regren_we),
		.wd(fsm_state_regren_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(),
		.ds(),
		.qs(fsm_state_regren_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_error_no_key(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[6]),
		.d(hw2reg[7]),
		.qe(),
		.q(),
		.ds(),
		.qs(error_no_key_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_error_no_nonce(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[4]),
		.d(hw2reg[5]),
		.qe(),
		.q(),
		.ds(),
		.qs(error_no_nonce_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_error_wrong_order(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[2]),
		.d(hw2reg[3]),
		.qe(),
		.q(),
		.ds(),
		.qs(error_wrong_order_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_error_flag_input_missmatch(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[0]),
		.d(hw2reg[1]),
		.qe(),
		.q(),
		.ds(),
		.qs(error_flag_input_missmatch_qs)
	);
	reg [46:0] addr_hit;
	localparam signed [31:0] ascon_reg_pkg_BlockAw = 8;
	localparam [7:0] ascon_reg_pkg_ASCON_ALERT_TEST_OFFSET = 8'h00;
	localparam [7:0] ascon_reg_pkg_ASCON_BLOCK_CTRL_SHADOWED_OFFSET = 8'ha0;
	localparam [7:0] ascon_reg_pkg_ASCON_CTRL_AUX_REGWEN_OFFSET = 8'h9c;
	localparam [7:0] ascon_reg_pkg_ASCON_CTRL_AUX_SHADOWED_OFFSET = 8'h98;
	localparam [7:0] ascon_reg_pkg_ASCON_CTRL_SHADOWED_OFFSET = 8'h94;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE0_0_OFFSET = 8'h44;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE0_1_OFFSET = 8'h48;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE0_2_OFFSET = 8'h4c;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE0_3_OFFSET = 8'h50;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE1_0_OFFSET = 8'h54;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE1_1_OFFSET = 8'h58;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE1_2_OFFSET = 8'h5c;
	localparam [7:0] ascon_reg_pkg_ASCON_DATA_IN_SHARE1_3_OFFSET = 8'h60;
	localparam [7:0] ascon_reg_pkg_ASCON_ERROR_OFFSET = 8'hb8;
	localparam [7:0] ascon_reg_pkg_ASCON_FSM_STATE_OFFSET = 8'hb0;
	localparam [7:0] ascon_reg_pkg_ASCON_FSM_STATE_REGREN_OFFSET = 8'hb4;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE0_0_OFFSET = 8'h04;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE0_1_OFFSET = 8'h08;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE0_2_OFFSET = 8'h0c;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE0_3_OFFSET = 8'h10;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE1_0_OFFSET = 8'h14;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE1_1_OFFSET = 8'h18;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE1_2_OFFSET = 8'h1c;
	localparam [7:0] ascon_reg_pkg_ASCON_KEY_SHARE1_3_OFFSET = 8'h20;
	localparam [7:0] ascon_reg_pkg_ASCON_MSG_OUT_0_OFFSET = 8'h74;
	localparam [7:0] ascon_reg_pkg_ASCON_MSG_OUT_1_OFFSET = 8'h78;
	localparam [7:0] ascon_reg_pkg_ASCON_MSG_OUT_2_OFFSET = 8'h7c;
	localparam [7:0] ascon_reg_pkg_ASCON_MSG_OUT_3_OFFSET = 8'h80;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE0_0_OFFSET = 8'h24;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE0_1_OFFSET = 8'h28;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE0_2_OFFSET = 8'h2c;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE0_3_OFFSET = 8'h30;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE1_0_OFFSET = 8'h34;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE1_1_OFFSET = 8'h38;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE1_2_OFFSET = 8'h3c;
	localparam [7:0] ascon_reg_pkg_ASCON_NONCE_SHARE1_3_OFFSET = 8'h40;
	localparam [7:0] ascon_reg_pkg_ASCON_OUTPUT_VALID_OFFSET = 8'hac;
	localparam [7:0] ascon_reg_pkg_ASCON_STATUS_OFFSET = 8'ha8;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_IN_0_OFFSET = 8'h64;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_IN_1_OFFSET = 8'h68;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_IN_2_OFFSET = 8'h6c;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_IN_3_OFFSET = 8'h70;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_OUT_0_OFFSET = 8'h84;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_OUT_1_OFFSET = 8'h88;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_OUT_2_OFFSET = 8'h8c;
	localparam [7:0] ascon_reg_pkg_ASCON_TAG_OUT_3_OFFSET = 8'h90;
	localparam [7:0] ascon_reg_pkg_ASCON_TRIGGER_OFFSET = 8'ha4;
	always @(*) begin
		if (_sv2v_0)
			;
		addr_hit = 1'sb0;
		addr_hit[0] = reg_addr == ascon_reg_pkg_ASCON_ALERT_TEST_OFFSET;
		addr_hit[1] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE0_0_OFFSET;
		addr_hit[2] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE0_1_OFFSET;
		addr_hit[3] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE0_2_OFFSET;
		addr_hit[4] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE0_3_OFFSET;
		addr_hit[5] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE1_0_OFFSET;
		addr_hit[6] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE1_1_OFFSET;
		addr_hit[7] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE1_2_OFFSET;
		addr_hit[8] = reg_addr == ascon_reg_pkg_ASCON_KEY_SHARE1_3_OFFSET;
		addr_hit[9] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE0_0_OFFSET;
		addr_hit[10] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE0_1_OFFSET;
		addr_hit[11] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE0_2_OFFSET;
		addr_hit[12] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE0_3_OFFSET;
		addr_hit[13] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE1_0_OFFSET;
		addr_hit[14] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE1_1_OFFSET;
		addr_hit[15] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE1_2_OFFSET;
		addr_hit[16] = reg_addr == ascon_reg_pkg_ASCON_NONCE_SHARE1_3_OFFSET;
		addr_hit[17] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE0_0_OFFSET;
		addr_hit[18] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE0_1_OFFSET;
		addr_hit[19] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE0_2_OFFSET;
		addr_hit[20] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE0_3_OFFSET;
		addr_hit[21] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE1_0_OFFSET;
		addr_hit[22] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE1_1_OFFSET;
		addr_hit[23] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE1_2_OFFSET;
		addr_hit[24] = reg_addr == ascon_reg_pkg_ASCON_DATA_IN_SHARE1_3_OFFSET;
		addr_hit[25] = reg_addr == ascon_reg_pkg_ASCON_TAG_IN_0_OFFSET;
		addr_hit[26] = reg_addr == ascon_reg_pkg_ASCON_TAG_IN_1_OFFSET;
		addr_hit[27] = reg_addr == ascon_reg_pkg_ASCON_TAG_IN_2_OFFSET;
		addr_hit[28] = reg_addr == ascon_reg_pkg_ASCON_TAG_IN_3_OFFSET;
		addr_hit[29] = reg_addr == ascon_reg_pkg_ASCON_MSG_OUT_0_OFFSET;
		addr_hit[30] = reg_addr == ascon_reg_pkg_ASCON_MSG_OUT_1_OFFSET;
		addr_hit[31] = reg_addr == ascon_reg_pkg_ASCON_MSG_OUT_2_OFFSET;
		addr_hit[32] = reg_addr == ascon_reg_pkg_ASCON_MSG_OUT_3_OFFSET;
		addr_hit[33] = reg_addr == ascon_reg_pkg_ASCON_TAG_OUT_0_OFFSET;
		addr_hit[34] = reg_addr == ascon_reg_pkg_ASCON_TAG_OUT_1_OFFSET;
		addr_hit[35] = reg_addr == ascon_reg_pkg_ASCON_TAG_OUT_2_OFFSET;
		addr_hit[36] = reg_addr == ascon_reg_pkg_ASCON_TAG_OUT_3_OFFSET;
		addr_hit[37] = reg_addr == ascon_reg_pkg_ASCON_CTRL_SHADOWED_OFFSET;
		addr_hit[38] = reg_addr == ascon_reg_pkg_ASCON_CTRL_AUX_SHADOWED_OFFSET;
		addr_hit[39] = reg_addr == ascon_reg_pkg_ASCON_CTRL_AUX_REGWEN_OFFSET;
		addr_hit[40] = reg_addr == ascon_reg_pkg_ASCON_BLOCK_CTRL_SHADOWED_OFFSET;
		addr_hit[41] = reg_addr == ascon_reg_pkg_ASCON_TRIGGER_OFFSET;
		addr_hit[42] = reg_addr == ascon_reg_pkg_ASCON_STATUS_OFFSET;
		addr_hit[43] = reg_addr == ascon_reg_pkg_ASCON_OUTPUT_VALID_OFFSET;
		addr_hit[44] = reg_addr == ascon_reg_pkg_ASCON_FSM_STATE_OFFSET;
		addr_hit[45] = reg_addr == ascon_reg_pkg_ASCON_FSM_STATE_REGREN_OFFSET;
		addr_hit[46] = reg_addr == ascon_reg_pkg_ASCON_ERROR_OFFSET;
	end
	assign addrmiss = (reg_re || reg_we ? ~|addr_hit : 1'b0);
	localparam [187:0] ascon_reg_pkg_ASCON_PERMIT = 188'b00011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110011000100011111000100010001111100010001;
	always @(*) begin
		if (_sv2v_0)
			;
		wr_err = reg_we & (((((((((((((((((((((((((((((((((((((((((((((((addr_hit[0] & |(ascon_reg_pkg_ASCON_PERMIT[184+:4] & ~reg_be)) | (addr_hit[1] & |(ascon_reg_pkg_ASCON_PERMIT[180+:4] & ~reg_be))) | (addr_hit[2] & |(ascon_reg_pkg_ASCON_PERMIT[176+:4] & ~reg_be))) | (addr_hit[3] & |(ascon_reg_pkg_ASCON_PERMIT[172+:4] & ~reg_be))) | (addr_hit[4] & |(ascon_reg_pkg_ASCON_PERMIT[168+:4] & ~reg_be))) | (addr_hit[5] & |(ascon_reg_pkg_ASCON_PERMIT[164+:4] & ~reg_be))) | (addr_hit[6] & |(ascon_reg_pkg_ASCON_PERMIT[160+:4] & ~reg_be))) | (addr_hit[7] & |(ascon_reg_pkg_ASCON_PERMIT[156+:4] & ~reg_be))) | (addr_hit[8] & |(ascon_reg_pkg_ASCON_PERMIT[152+:4] & ~reg_be))) | (addr_hit[9] & |(ascon_reg_pkg_ASCON_PERMIT[148+:4] & ~reg_be))) | (addr_hit[10] & |(ascon_reg_pkg_ASCON_PERMIT[144+:4] & ~reg_be))) | (addr_hit[11] & |(ascon_reg_pkg_ASCON_PERMIT[140+:4] & ~reg_be))) | (addr_hit[12] & |(ascon_reg_pkg_ASCON_PERMIT[136+:4] & ~reg_be))) | (addr_hit[13] & |(ascon_reg_pkg_ASCON_PERMIT[132+:4] & ~reg_be))) | (addr_hit[14] & |(ascon_reg_pkg_ASCON_PERMIT[128+:4] & ~reg_be))) | (addr_hit[15] & |(ascon_reg_pkg_ASCON_PERMIT[124+:4] & ~reg_be))) | (addr_hit[16] & |(ascon_reg_pkg_ASCON_PERMIT[120+:4] & ~reg_be))) | (addr_hit[17] & |(ascon_reg_pkg_ASCON_PERMIT[116+:4] & ~reg_be))) | (addr_hit[18] & |(ascon_reg_pkg_ASCON_PERMIT[112+:4] & ~reg_be))) | (addr_hit[19] & |(ascon_reg_pkg_ASCON_PERMIT[108+:4] & ~reg_be))) | (addr_hit[20] & |(ascon_reg_pkg_ASCON_PERMIT[104+:4] & ~reg_be))) | (addr_hit[21] & |(ascon_reg_pkg_ASCON_PERMIT[100+:4] & ~reg_be))) | (addr_hit[22] & |(ascon_reg_pkg_ASCON_PERMIT[96+:4] & ~reg_be))) | (addr_hit[23] & |(ascon_reg_pkg_ASCON_PERMIT[92+:4] & ~reg_be))) | (addr_hit[24] & |(ascon_reg_pkg_ASCON_PERMIT[88+:4] & ~reg_be))) | (addr_hit[25] & |(ascon_reg_pkg_ASCON_PERMIT[84+:4] & ~reg_be))) | (addr_hit[26] & |(ascon_reg_pkg_ASCON_PERMIT[80+:4] & ~reg_be))) | (addr_hit[27] & |(ascon_reg_pkg_ASCON_PERMIT[76+:4] & ~reg_be))) | (addr_hit[28] & |(ascon_reg_pkg_ASCON_PERMIT[72+:4] & ~reg_be))) | (addr_hit[29] & |(ascon_reg_pkg_ASCON_PERMIT[68+:4] & ~reg_be))) | (addr_hit[30] & |(ascon_reg_pkg_ASCON_PERMIT[64+:4] & ~reg_be))) | (addr_hit[31] & |(ascon_reg_pkg_ASCON_PERMIT[60+:4] & ~reg_be))) | (addr_hit[32] & |(ascon_reg_pkg_ASCON_PERMIT[56+:4] & ~reg_be))) | (addr_hit[33] & |(ascon_reg_pkg_ASCON_PERMIT[52+:4] & ~reg_be))) | (addr_hit[34] & |(ascon_reg_pkg_ASCON_PERMIT[48+:4] & ~reg_be))) | (addr_hit[35] & |(ascon_reg_pkg_ASCON_PERMIT[44+:4] & ~reg_be))) | (addr_hit[36] & |(ascon_reg_pkg_ASCON_PERMIT[40+:4] & ~reg_be))) | (addr_hit[37] & |(ascon_reg_pkg_ASCON_PERMIT[36+:4] & ~reg_be))) | (addr_hit[38] & |(ascon_reg_pkg_ASCON_PERMIT[32+:4] & ~reg_be))) | (addr_hit[39] & |(ascon_reg_pkg_ASCON_PERMIT[28+:4] & ~reg_be))) | (addr_hit[40] & |(ascon_reg_pkg_ASCON_PERMIT[24+:4] & ~reg_be))) | (addr_hit[41] & |(ascon_reg_pkg_ASCON_PERMIT[20+:4] & ~reg_be))) | (addr_hit[42] & |(ascon_reg_pkg_ASCON_PERMIT[16+:4] & ~reg_be))) | (addr_hit[43] & |(ascon_reg_pkg_ASCON_PERMIT[12+:4] & ~reg_be))) | (addr_hit[44] & |(ascon_reg_pkg_ASCON_PERMIT[8+:4] & ~reg_be))) | (addr_hit[45] & |(ascon_reg_pkg_ASCON_PERMIT[4+:4] & ~reg_be))) | (addr_hit[46] & |(ascon_reg_pkg_ASCON_PERMIT[0+:4] & ~reg_be)));
	end
	assign alert_test_we = (addr_hit[0] & reg_we) & !reg_error;
	assign alert_test_recov_ctrl_update_err_wd = reg_wdata[0];
	assign alert_test_fatal_fault_wd = reg_wdata[1];
	assign key_share0_0_we = (addr_hit[1] & reg_we) & !reg_error;
	assign key_share0_0_wd = reg_wdata[31:0];
	assign key_share0_1_we = (addr_hit[2] & reg_we) & !reg_error;
	assign key_share0_1_wd = reg_wdata[31:0];
	assign key_share0_2_we = (addr_hit[3] & reg_we) & !reg_error;
	assign key_share0_2_wd = reg_wdata[31:0];
	assign key_share0_3_we = (addr_hit[4] & reg_we) & !reg_error;
	assign key_share0_3_wd = reg_wdata[31:0];
	assign key_share1_0_we = (addr_hit[5] & reg_we) & !reg_error;
	assign key_share1_0_wd = reg_wdata[31:0];
	assign key_share1_1_we = (addr_hit[6] & reg_we) & !reg_error;
	assign key_share1_1_wd = reg_wdata[31:0];
	assign key_share1_2_we = (addr_hit[7] & reg_we) & !reg_error;
	assign key_share1_2_wd = reg_wdata[31:0];
	assign key_share1_3_we = (addr_hit[8] & reg_we) & !reg_error;
	assign key_share1_3_wd = reg_wdata[31:0];
	assign nonce_share0_0_we = (addr_hit[9] & reg_we) & !reg_error;
	assign nonce_share0_0_wd = reg_wdata[31:0];
	assign nonce_share0_1_we = (addr_hit[10] & reg_we) & !reg_error;
	assign nonce_share0_1_wd = reg_wdata[31:0];
	assign nonce_share0_2_we = (addr_hit[11] & reg_we) & !reg_error;
	assign nonce_share0_2_wd = reg_wdata[31:0];
	assign nonce_share0_3_we = (addr_hit[12] & reg_we) & !reg_error;
	assign nonce_share0_3_wd = reg_wdata[31:0];
	assign nonce_share1_0_we = (addr_hit[13] & reg_we) & !reg_error;
	assign nonce_share1_0_wd = reg_wdata[31:0];
	assign nonce_share1_1_we = (addr_hit[14] & reg_we) & !reg_error;
	assign nonce_share1_1_wd = reg_wdata[31:0];
	assign nonce_share1_2_we = (addr_hit[15] & reg_we) & !reg_error;
	assign nonce_share1_2_wd = reg_wdata[31:0];
	assign nonce_share1_3_we = (addr_hit[16] & reg_we) & !reg_error;
	assign nonce_share1_3_wd = reg_wdata[31:0];
	assign data_in_share0_0_we = (addr_hit[17] & reg_we) & !reg_error;
	assign data_in_share0_0_wd = reg_wdata[31:0];
	assign data_in_share0_1_we = (addr_hit[18] & reg_we) & !reg_error;
	assign data_in_share0_1_wd = reg_wdata[31:0];
	assign data_in_share0_2_we = (addr_hit[19] & reg_we) & !reg_error;
	assign data_in_share0_2_wd = reg_wdata[31:0];
	assign data_in_share0_3_we = (addr_hit[20] & reg_we) & !reg_error;
	assign data_in_share0_3_wd = reg_wdata[31:0];
	assign data_in_share1_0_we = (addr_hit[21] & reg_we) & !reg_error;
	assign data_in_share1_0_wd = reg_wdata[31:0];
	assign data_in_share1_1_we = (addr_hit[22] & reg_we) & !reg_error;
	assign data_in_share1_1_wd = reg_wdata[31:0];
	assign data_in_share1_2_we = (addr_hit[23] & reg_we) & !reg_error;
	assign data_in_share1_2_wd = reg_wdata[31:0];
	assign data_in_share1_3_we = (addr_hit[24] & reg_we) & !reg_error;
	assign data_in_share1_3_wd = reg_wdata[31:0];
	assign tag_in_0_we = (addr_hit[25] & reg_we) & !reg_error;
	assign tag_in_0_wd = reg_wdata[31:0];
	assign tag_in_1_we = (addr_hit[26] & reg_we) & !reg_error;
	assign tag_in_1_wd = reg_wdata[31:0];
	assign tag_in_2_we = (addr_hit[27] & reg_we) & !reg_error;
	assign tag_in_2_wd = reg_wdata[31:0];
	assign tag_in_3_we = (addr_hit[28] & reg_we) & !reg_error;
	assign tag_in_3_wd = reg_wdata[31:0];
	assign msg_out_0_re = (addr_hit[29] & reg_re) & !reg_error;
	assign msg_out_1_re = (addr_hit[30] & reg_re) & !reg_error;
	assign msg_out_2_re = (addr_hit[31] & reg_re) & !reg_error;
	assign msg_out_3_re = (addr_hit[32] & reg_re) & !reg_error;
	assign tag_out_0_re = (addr_hit[33] & reg_re) & !reg_error;
	assign tag_out_1_re = (addr_hit[34] & reg_re) & !reg_error;
	assign tag_out_2_re = (addr_hit[35] & reg_re) & !reg_error;
	assign tag_out_3_re = (addr_hit[36] & reg_re) & !reg_error;
	assign ctrl_shadowed_re = (addr_hit[37] & reg_re) & !reg_error;
	assign ctrl_shadowed_we = (addr_hit[37] & reg_we) & !reg_error;
	assign ctrl_shadowed_operation_wd = reg_wdata[2:0];
	assign ctrl_shadowed_ascon_variant_wd = reg_wdata[4:3];
	assign ctrl_shadowed_sideload_key_wd = reg_wdata[5];
	assign ctrl_shadowed_masked_ad_input_wd = reg_wdata[6];
	assign ctrl_shadowed_masked_msg_input_wd = reg_wdata[7];
	assign ctrl_shadowed_no_msg_wd = reg_wdata[11:8];
	assign ctrl_shadowed_no_ad_wd = reg_wdata[15:12];
	assign ctrl_aux_shadowed_re = (addr_hit[38] & reg_re) & !reg_error;
	assign ctrl_aux_shadowed_we = (addr_hit[38] & reg_we) & !reg_error;
	assign ctrl_aux_shadowed_manual_start_trigger_wd = reg_wdata[0];
	assign ctrl_aux_shadowed_force_data_overwrite_wd = reg_wdata[1];
	assign ctrl_aux_regwen_we = (addr_hit[39] & reg_we) & !reg_error;
	assign ctrl_aux_regwen_wd = reg_wdata[0];
	assign block_ctrl_shadowed_re = (addr_hit[40] & reg_re) & !reg_error;
	assign block_ctrl_shadowed_we = (addr_hit[40] & reg_we) & !reg_error;
	assign block_ctrl_shadowed_data_type_start_wd = reg_wdata[11:0];
	assign block_ctrl_shadowed_data_type_last_wd = reg_wdata[23:12];
	assign block_ctrl_shadowed_valid_bytes_wd = reg_wdata[28:24];
	assign trigger_we = (addr_hit[41] & reg_we) & !reg_error;
	assign trigger_start_wd = reg_wdata[0];
	assign trigger_wipe_wd = reg_wdata[1];
	assign fsm_state_re = (addr_hit[44] & reg_re) & !reg_error;
	assign fsm_state_regren_we = (addr_hit[45] & reg_we) & !reg_error;
	assign fsm_state_regren_wd = reg_wdata[0];
	always @(*) begin
		if (_sv2v_0)
			;
		reg_we_check = 1'sb0;
		reg_we_check[0] = alert_test_we;
		reg_we_check[1] = key_share0_0_we;
		reg_we_check[2] = key_share0_1_we;
		reg_we_check[3] = key_share0_2_we;
		reg_we_check[4] = key_share0_3_we;
		reg_we_check[5] = key_share1_0_we;
		reg_we_check[6] = key_share1_1_we;
		reg_we_check[7] = key_share1_2_we;
		reg_we_check[8] = key_share1_3_we;
		reg_we_check[9] = nonce_share0_0_we;
		reg_we_check[10] = nonce_share0_1_we;
		reg_we_check[11] = nonce_share0_2_we;
		reg_we_check[12] = nonce_share0_3_we;
		reg_we_check[13] = nonce_share1_0_we;
		reg_we_check[14] = nonce_share1_1_we;
		reg_we_check[15] = nonce_share1_2_we;
		reg_we_check[16] = nonce_share1_3_we;
		reg_we_check[17] = data_in_share0_0_we;
		reg_we_check[18] = data_in_share0_1_we;
		reg_we_check[19] = data_in_share0_2_we;
		reg_we_check[20] = data_in_share0_3_we;
		reg_we_check[21] = data_in_share1_0_we;
		reg_we_check[22] = data_in_share1_1_we;
		reg_we_check[23] = data_in_share1_2_we;
		reg_we_check[24] = data_in_share1_3_we;
		reg_we_check[25] = tag_in_0_we;
		reg_we_check[26] = tag_in_1_we;
		reg_we_check[27] = tag_in_2_we;
		reg_we_check[28] = tag_in_3_we;
		reg_we_check[29] = 1'b0;
		reg_we_check[30] = 1'b0;
		reg_we_check[31] = 1'b0;
		reg_we_check[32] = 1'b0;
		reg_we_check[33] = 1'b0;
		reg_we_check[34] = 1'b0;
		reg_we_check[35] = 1'b0;
		reg_we_check[36] = 1'b0;
		reg_we_check[37] = ctrl_shadowed_we;
		reg_we_check[38] = ctrl_aux_shadowed_gated_we;
		reg_we_check[39] = ctrl_aux_regwen_we;
		reg_we_check[40] = block_ctrl_shadowed_we;
		reg_we_check[41] = trigger_we;
		reg_we_check[42] = 1'b0;
		reg_we_check[43] = 1'b0;
		reg_we_check[44] = 1'b0;
		reg_we_check[45] = fsm_state_regren_we;
		reg_we_check[46] = 1'b0;
	end
	always @(*) begin
		if (_sv2v_0)
			;
		reg_rdata_next = 1'sb0;
		(* full_case, parallel_case *)
		case (1'b1)
			addr_hit[0]: begin
				reg_rdata_next[0] = 1'sb0;
				reg_rdata_next[1] = 1'sb0;
			end
			addr_hit[1]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[2]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[3]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[4]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[5]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[6]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[7]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[8]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[9]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[10]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[11]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[12]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[13]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[14]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[15]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[16]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[17]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[18]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[19]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[20]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[21]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[22]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[23]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[24]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[25]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[26]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[27]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[28]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[29]: reg_rdata_next[31:0] = msg_out_0_qs;
			addr_hit[30]: reg_rdata_next[31:0] = msg_out_1_qs;
			addr_hit[31]: reg_rdata_next[31:0] = msg_out_2_qs;
			addr_hit[32]: reg_rdata_next[31:0] = msg_out_3_qs;
			addr_hit[33]: reg_rdata_next[31:0] = tag_out_0_qs;
			addr_hit[34]: reg_rdata_next[31:0] = tag_out_1_qs;
			addr_hit[35]: reg_rdata_next[31:0] = tag_out_2_qs;
			addr_hit[36]: reg_rdata_next[31:0] = tag_out_3_qs;
			addr_hit[37]: begin
				reg_rdata_next[2:0] = ctrl_shadowed_operation_qs;
				reg_rdata_next[4:3] = ctrl_shadowed_ascon_variant_qs;
				reg_rdata_next[5] = ctrl_shadowed_sideload_key_qs;
				reg_rdata_next[6] = ctrl_shadowed_masked_ad_input_qs;
				reg_rdata_next[7] = ctrl_shadowed_masked_msg_input_qs;
				reg_rdata_next[11:8] = ctrl_shadowed_no_msg_qs;
				reg_rdata_next[15:12] = ctrl_shadowed_no_ad_qs;
			end
			addr_hit[38]: begin
				reg_rdata_next[0] = ctrl_aux_shadowed_manual_start_trigger_qs;
				reg_rdata_next[1] = ctrl_aux_shadowed_force_data_overwrite_qs;
			end
			addr_hit[39]: reg_rdata_next[0] = ctrl_aux_regwen_qs;
			addr_hit[40]: begin
				reg_rdata_next[11:0] = block_ctrl_shadowed_data_type_start_qs;
				reg_rdata_next[23:12] = block_ctrl_shadowed_data_type_last_qs;
				reg_rdata_next[28:24] = block_ctrl_shadowed_valid_bytes_qs;
			end
			addr_hit[41]: begin
				reg_rdata_next[0] = trigger_start_qs;
				reg_rdata_next[1] = trigger_wipe_qs;
			end
			addr_hit[42]: begin
				reg_rdata_next[0] = status_idle_qs;
				reg_rdata_next[1] = status_stall_qs;
				reg_rdata_next[2] = status_wait_edn_qs;
				reg_rdata_next[3] = status_ascon_error_qs;
				reg_rdata_next[4] = status_alert_recov_ctrl_update_err_qs;
				reg_rdata_next[5] = status_alert_fatal_fault_qs;
			end
			addr_hit[43]: begin
				reg_rdata_next[0] = output_valid_msg_valid_qs;
				reg_rdata_next[1] = output_valid_tag_valid_qs;
				reg_rdata_next[3:2] = output_valid_tag_comparison_valid_qs;
			end
			addr_hit[44]: reg_rdata_next[31:0] = fsm_state_qs;
			addr_hit[45]: reg_rdata_next[0] = fsm_state_regren_qs;
			addr_hit[46]: begin
				reg_rdata_next[0] = error_no_key_qs;
				reg_rdata_next[1] = error_no_nonce_qs;
				reg_rdata_next[2] = error_wrong_order_qs;
				reg_rdata_next[3] = error_flag_input_missmatch_qs;
			end
			default: reg_rdata_next = 1'sb1;
		endcase
	end
	wire shadow_busy;
	reg rst_done;
	reg shadow_rst_done;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			rst_done <= 1'sb0;
		else
			rst_done <= 1'b1;
	always @(posedge clk_i or negedge rst_shadowed_ni)
		if (!rst_shadowed_ni)
			shadow_rst_done <= 1'sb0;
		else
			shadow_rst_done <= 1'b1;
	assign shadow_busy = ~(rst_done & shadow_rst_done);
	assign shadowed_storage_err_o = |{ctrl_shadowed_operation_storage_err, ctrl_shadowed_ascon_variant_storage_err, ctrl_shadowed_sideload_key_storage_err, ctrl_shadowed_masked_ad_input_storage_err, ctrl_shadowed_masked_msg_input_storage_err, ctrl_shadowed_no_msg_storage_err, ctrl_shadowed_no_ad_storage_err, ctrl_aux_shadowed_manual_start_trigger_storage_err, ctrl_aux_shadowed_force_data_overwrite_storage_err, block_ctrl_shadowed_data_type_start_storage_err, block_ctrl_shadowed_data_type_last_storage_err, block_ctrl_shadowed_valid_bytes_storage_err};
	assign shadowed_update_err_o = |{ctrl_shadowed_operation_update_err, ctrl_shadowed_ascon_variant_update_err, ctrl_shadowed_sideload_key_update_err, ctrl_shadowed_masked_ad_input_update_err, ctrl_shadowed_masked_msg_input_update_err, ctrl_shadowed_no_msg_update_err, ctrl_shadowed_no_ad_update_err, ctrl_aux_shadowed_manual_start_trigger_update_err, ctrl_aux_shadowed_force_data_overwrite_update_err, block_ctrl_shadowed_data_type_start_update_err, block_ctrl_shadowed_data_type_last_update_err, block_ctrl_shadowed_valid_bytes_update_err};
	assign reg_busy = shadow_busy;
	wire unused_wdata;
	wire unused_be;
	assign unused_wdata = ^reg_wdata;
	assign unused_be = ^reg_be;
	initial _sv2v_0 = 0;
endmodule
