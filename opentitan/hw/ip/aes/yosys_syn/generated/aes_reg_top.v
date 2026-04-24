module aes_reg_top (
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
	output wire [978:0] reg2hw;
	input wire [948:0] hw2reg;
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
	reg [34:0] reg_we_check;
	prim_reg_we_check #(.OneHotWidth(35)) u_prim_reg_we_check(
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
	wire key_share0_4_we;
	wire [31:0] key_share0_4_wd;
	wire key_share0_5_we;
	wire [31:0] key_share0_5_wd;
	wire key_share0_6_we;
	wire [31:0] key_share0_6_wd;
	wire key_share0_7_we;
	wire [31:0] key_share0_7_wd;
	wire key_share1_0_we;
	wire [31:0] key_share1_0_wd;
	wire key_share1_1_we;
	wire [31:0] key_share1_1_wd;
	wire key_share1_2_we;
	wire [31:0] key_share1_2_wd;
	wire key_share1_3_we;
	wire [31:0] key_share1_3_wd;
	wire key_share1_4_we;
	wire [31:0] key_share1_4_wd;
	wire key_share1_5_we;
	wire [31:0] key_share1_5_wd;
	wire key_share1_6_we;
	wire [31:0] key_share1_6_wd;
	wire key_share1_7_we;
	wire [31:0] key_share1_7_wd;
	wire iv_0_re;
	wire iv_0_we;
	wire [31:0] iv_0_qs;
	wire [31:0] iv_0_wd;
	wire iv_1_re;
	wire iv_1_we;
	wire [31:0] iv_1_qs;
	wire [31:0] iv_1_wd;
	wire iv_2_re;
	wire iv_2_we;
	wire [31:0] iv_2_qs;
	wire [31:0] iv_2_wd;
	wire iv_3_re;
	wire iv_3_we;
	wire [31:0] iv_3_qs;
	wire [31:0] iv_3_wd;
	wire data_in_0_we;
	wire [31:0] data_in_0_wd;
	wire data_in_1_we;
	wire [31:0] data_in_1_wd;
	wire data_in_2_we;
	wire [31:0] data_in_2_wd;
	wire data_in_3_we;
	wire [31:0] data_in_3_wd;
	wire data_out_0_re;
	wire [31:0] data_out_0_qs;
	wire data_out_1_re;
	wire [31:0] data_out_1_qs;
	wire data_out_2_re;
	wire [31:0] data_out_2_qs;
	wire data_out_3_re;
	wire [31:0] data_out_3_qs;
	wire ctrl_shadowed_re;
	wire ctrl_shadowed_we;
	wire [1:0] ctrl_shadowed_operation_qs;
	wire [1:0] ctrl_shadowed_operation_wd;
	wire [5:0] ctrl_shadowed_mode_qs;
	wire [5:0] ctrl_shadowed_mode_wd;
	wire [2:0] ctrl_shadowed_key_len_qs;
	wire [2:0] ctrl_shadowed_key_len_wd;
	wire ctrl_shadowed_sideload_qs;
	wire ctrl_shadowed_sideload_wd;
	wire [2:0] ctrl_shadowed_prng_reseed_rate_qs;
	wire [2:0] ctrl_shadowed_prng_reseed_rate_wd;
	wire ctrl_shadowed_manual_operation_qs;
	wire ctrl_shadowed_manual_operation_wd;
	wire ctrl_aux_shadowed_re;
	wire ctrl_aux_shadowed_we;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_qs;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_wd;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_storage_err;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_update_err;
	wire ctrl_aux_shadowed_force_masks_qs;
	wire ctrl_aux_shadowed_force_masks_wd;
	wire ctrl_aux_shadowed_force_masks_storage_err;
	wire ctrl_aux_shadowed_force_masks_update_err;
	wire ctrl_aux_regwen_we;
	wire ctrl_aux_regwen_qs;
	wire ctrl_aux_regwen_wd;
	wire trigger_we;
	wire trigger_start_wd;
	wire trigger_key_iv_data_in_clear_wd;
	wire trigger_data_out_clear_wd;
	wire trigger_prng_reseed_wd;
	wire status_idle_qs;
	wire status_stall_qs;
	wire status_output_lost_qs;
	wire status_output_valid_qs;
	wire status_input_ready_qs;
	wire status_alert_recov_ctrl_update_err_qs;
	wire status_alert_fatal_fault_qs;
	wire ctrl_gcm_shadowed_re;
	wire ctrl_gcm_shadowed_we;
	wire [5:0] ctrl_gcm_shadowed_phase_qs;
	wire [5:0] ctrl_gcm_shadowed_phase_wd;
	wire [4:0] ctrl_gcm_shadowed_num_valid_bytes_qs;
	wire [4:0] ctrl_gcm_shadowed_num_valid_bytes_wd;
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
		.q(reg2hw[976]),
		.ds(),
		.qs()
	);
	assign reg2hw[975] = alert_test_qe;
	prim_subreg_ext #(.DW(1)) u_alert_test_fatal_fault(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_fatal_fault_wd),
		.d(1'sb0),
		.qre(),
		.qe(alert_test_flds_we[1]),
		.q(reg2hw[978]),
		.ds(),
		.qs()
	);
	assign reg2hw[977] = alert_test_qe;
	wire key_share0_0_qe;
	wire [0:0] key_share0_0_flds_we;
	assign key_share0_0_qe = &key_share0_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_0(
		.re(1'b0),
		.we(key_share0_0_we),
		.wd(key_share0_0_wd),
		.d(hw2reg[724-:32]),
		.qre(),
		.qe(key_share0_0_flds_we[0]),
		.q(reg2hw[743-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[711] = key_share0_0_qe;
	wire key_share0_1_qe;
	wire [0:0] key_share0_1_flds_we;
	assign key_share0_1_qe = &key_share0_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_1(
		.re(1'b0),
		.we(key_share0_1_we),
		.wd(key_share0_1_wd),
		.d(hw2reg[756-:32]),
		.qre(),
		.qe(key_share0_1_flds_we[0]),
		.q(reg2hw[776-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[744] = key_share0_1_qe;
	wire key_share0_2_qe;
	wire [0:0] key_share0_2_flds_we;
	assign key_share0_2_qe = &key_share0_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_2(
		.re(1'b0),
		.we(key_share0_2_we),
		.wd(key_share0_2_wd),
		.d(hw2reg[788-:32]),
		.qre(),
		.qe(key_share0_2_flds_we[0]),
		.q(reg2hw[809-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[777] = key_share0_2_qe;
	wire key_share0_3_qe;
	wire [0:0] key_share0_3_flds_we;
	assign key_share0_3_qe = &key_share0_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_3(
		.re(1'b0),
		.we(key_share0_3_we),
		.wd(key_share0_3_wd),
		.d(hw2reg[820-:32]),
		.qre(),
		.qe(key_share0_3_flds_we[0]),
		.q(reg2hw[842-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[810] = key_share0_3_qe;
	wire key_share0_4_qe;
	wire [0:0] key_share0_4_flds_we;
	assign key_share0_4_qe = &key_share0_4_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_4(
		.re(1'b0),
		.we(key_share0_4_we),
		.wd(key_share0_4_wd),
		.d(hw2reg[852-:32]),
		.qre(),
		.qe(key_share0_4_flds_we[0]),
		.q(reg2hw[875-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[843] = key_share0_4_qe;
	wire key_share0_5_qe;
	wire [0:0] key_share0_5_flds_we;
	assign key_share0_5_qe = &key_share0_5_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_5(
		.re(1'b0),
		.we(key_share0_5_we),
		.wd(key_share0_5_wd),
		.d(hw2reg[884-:32]),
		.qre(),
		.qe(key_share0_5_flds_we[0]),
		.q(reg2hw[908-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[876] = key_share0_5_qe;
	wire key_share0_6_qe;
	wire [0:0] key_share0_6_flds_we;
	assign key_share0_6_qe = &key_share0_6_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_6(
		.re(1'b0),
		.we(key_share0_6_we),
		.wd(key_share0_6_wd),
		.d(hw2reg[916-:32]),
		.qre(),
		.qe(key_share0_6_flds_we[0]),
		.q(reg2hw[941-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[909] = key_share0_6_qe;
	wire key_share0_7_qe;
	wire [0:0] key_share0_7_flds_we;
	assign key_share0_7_qe = &key_share0_7_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_7(
		.re(1'b0),
		.we(key_share0_7_we),
		.wd(key_share0_7_wd),
		.d(hw2reg[948-:32]),
		.qre(),
		.qe(key_share0_7_flds_we[0]),
		.q(reg2hw[974-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[942] = key_share0_7_qe;
	wire key_share1_0_qe;
	wire [0:0] key_share1_0_flds_we;
	assign key_share1_0_qe = &key_share1_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_0(
		.re(1'b0),
		.we(key_share1_0_we),
		.wd(key_share1_0_wd),
		.d(hw2reg[468-:32]),
		.qre(),
		.qe(key_share1_0_flds_we[0]),
		.q(reg2hw[479-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[447] = key_share1_0_qe;
	wire key_share1_1_qe;
	wire [0:0] key_share1_1_flds_we;
	assign key_share1_1_qe = &key_share1_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_1(
		.re(1'b0),
		.we(key_share1_1_we),
		.wd(key_share1_1_wd),
		.d(hw2reg[500-:32]),
		.qre(),
		.qe(key_share1_1_flds_we[0]),
		.q(reg2hw[512-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[480] = key_share1_1_qe;
	wire key_share1_2_qe;
	wire [0:0] key_share1_2_flds_we;
	assign key_share1_2_qe = &key_share1_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_2(
		.re(1'b0),
		.we(key_share1_2_we),
		.wd(key_share1_2_wd),
		.d(hw2reg[532-:32]),
		.qre(),
		.qe(key_share1_2_flds_we[0]),
		.q(reg2hw[545-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[513] = key_share1_2_qe;
	wire key_share1_3_qe;
	wire [0:0] key_share1_3_flds_we;
	assign key_share1_3_qe = &key_share1_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_3(
		.re(1'b0),
		.we(key_share1_3_we),
		.wd(key_share1_3_wd),
		.d(hw2reg[564-:32]),
		.qre(),
		.qe(key_share1_3_flds_we[0]),
		.q(reg2hw[578-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[546] = key_share1_3_qe;
	wire key_share1_4_qe;
	wire [0:0] key_share1_4_flds_we;
	assign key_share1_4_qe = &key_share1_4_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_4(
		.re(1'b0),
		.we(key_share1_4_we),
		.wd(key_share1_4_wd),
		.d(hw2reg[596-:32]),
		.qre(),
		.qe(key_share1_4_flds_we[0]),
		.q(reg2hw[611-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[579] = key_share1_4_qe;
	wire key_share1_5_qe;
	wire [0:0] key_share1_5_flds_we;
	assign key_share1_5_qe = &key_share1_5_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_5(
		.re(1'b0),
		.we(key_share1_5_we),
		.wd(key_share1_5_wd),
		.d(hw2reg[628-:32]),
		.qre(),
		.qe(key_share1_5_flds_we[0]),
		.q(reg2hw[644-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[612] = key_share1_5_qe;
	wire key_share1_6_qe;
	wire [0:0] key_share1_6_flds_we;
	assign key_share1_6_qe = &key_share1_6_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_6(
		.re(1'b0),
		.we(key_share1_6_we),
		.wd(key_share1_6_wd),
		.d(hw2reg[660-:32]),
		.qre(),
		.qe(key_share1_6_flds_we[0]),
		.q(reg2hw[677-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[645] = key_share1_6_qe;
	wire key_share1_7_qe;
	wire [0:0] key_share1_7_flds_we;
	assign key_share1_7_qe = &key_share1_7_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_7(
		.re(1'b0),
		.we(key_share1_7_we),
		.wd(key_share1_7_wd),
		.d(hw2reg[692-:32]),
		.qre(),
		.qe(key_share1_7_flds_we[0]),
		.q(reg2hw[710-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[678] = key_share1_7_qe;
	wire iv_0_qe;
	wire [0:0] iv_0_flds_we;
	assign iv_0_qe = &iv_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_0(
		.re(iv_0_re),
		.we(iv_0_we),
		.wd(iv_0_wd),
		.d(hw2reg[340-:32]),
		.qre(),
		.qe(iv_0_flds_we[0]),
		.q(reg2hw[347-:32]),
		.ds(),
		.qs(iv_0_qs)
	);
	assign reg2hw[315] = iv_0_qe;
	wire iv_1_qe;
	wire [0:0] iv_1_flds_we;
	assign iv_1_qe = &iv_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_1(
		.re(iv_1_re),
		.we(iv_1_we),
		.wd(iv_1_wd),
		.d(hw2reg[372-:32]),
		.qre(),
		.qe(iv_1_flds_we[0]),
		.q(reg2hw[380-:32]),
		.ds(),
		.qs(iv_1_qs)
	);
	assign reg2hw[348] = iv_1_qe;
	wire iv_2_qe;
	wire [0:0] iv_2_flds_we;
	assign iv_2_qe = &iv_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_2(
		.re(iv_2_re),
		.we(iv_2_we),
		.wd(iv_2_wd),
		.d(hw2reg[404-:32]),
		.qre(),
		.qe(iv_2_flds_we[0]),
		.q(reg2hw[413-:32]),
		.ds(),
		.qs(iv_2_qs)
	);
	assign reg2hw[381] = iv_2_qe;
	wire iv_3_qe;
	wire [0:0] iv_3_flds_we;
	assign iv_3_qe = &iv_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_3(
		.re(iv_3_re),
		.we(iv_3_we),
		.wd(iv_3_wd),
		.d(hw2reg[436-:32]),
		.qre(),
		.qe(iv_3_flds_we[0]),
		.q(reg2hw[446-:32]),
		.ds(),
		.qs(iv_3_qs)
	);
	assign reg2hw[414] = iv_3_qe;
	wire data_in_0_qe;
	wire [0:0] data_in_0_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in0_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_0_flds_we),
		.q_o(data_in_0_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_0_we),
		.wd(data_in_0_wd),
		.de(hw2reg[177]),
		.d(hw2reg[209-:32]),
		.qe(data_in_0_flds_we[0]),
		.q(reg2hw[215-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[183] = data_in_0_qe;
	wire data_in_1_qe;
	wire [0:0] data_in_1_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in1_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_1_flds_we),
		.q_o(data_in_1_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_1_we),
		.wd(data_in_1_wd),
		.de(hw2reg[210]),
		.d(hw2reg[242-:32]),
		.qe(data_in_1_flds_we[0]),
		.q(reg2hw[248-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[216] = data_in_1_qe;
	wire data_in_2_qe;
	wire [0:0] data_in_2_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in2_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_2_flds_we),
		.q_o(data_in_2_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_2_we),
		.wd(data_in_2_wd),
		.de(hw2reg[243]),
		.d(hw2reg[275-:32]),
		.qe(data_in_2_flds_we[0]),
		.q(reg2hw[281-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[249] = data_in_2_qe;
	wire data_in_3_qe;
	wire [0:0] data_in_3_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in3_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_3_flds_we),
		.q_o(data_in_3_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_3_we),
		.wd(data_in_3_wd),
		.de(hw2reg[276]),
		.d(hw2reg[308-:32]),
		.qe(data_in_3_flds_we[0]),
		.q(reg2hw[314-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[282] = data_in_3_qe;
	prim_subreg_ext #(.DW(32)) u_data_out_0(
		.re(data_out_0_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[80-:32]),
		.qre(reg2hw[51]),
		.qe(),
		.q(reg2hw[83-:32]),
		.ds(),
		.qs(data_out_0_qs)
	);
	prim_subreg_ext #(.DW(32)) u_data_out_1(
		.re(data_out_1_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[112-:32]),
		.qre(reg2hw[84]),
		.qe(),
		.q(reg2hw[116-:32]),
		.ds(),
		.qs(data_out_1_qs)
	);
	prim_subreg_ext #(.DW(32)) u_data_out_2(
		.re(data_out_2_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[144-:32]),
		.qre(reg2hw[117]),
		.qe(),
		.q(reg2hw[149-:32]),
		.ds(),
		.qs(data_out_2_qs)
	);
	prim_subreg_ext #(.DW(32)) u_data_out_3(
		.re(data_out_3_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[176-:32]),
		.qre(reg2hw[150]),
		.qe(),
		.q(reg2hw[182-:32]),
		.ds(),
		.qs(data_out_3_qs)
	);
	wire ctrl_shadowed_qe;
	wire [5:0] ctrl_shadowed_flds_we;
	assign ctrl_shadowed_qe = &ctrl_shadowed_flds_we;
	prim_subreg_ext #(.DW(2)) u_ctrl_shadowed_operation(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_operation_wd),
		.d(hw2reg[34-:2]),
		.qre(reg2hw[23]),
		.qe(ctrl_shadowed_flds_we[0]),
		.q(reg2hw[26-:2]),
		.ds(),
		.qs(ctrl_shadowed_operation_qs)
	);
	assign reg2hw[24] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(6)) u_ctrl_shadowed_mode(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_mode_wd),
		.d(hw2reg[40-:6]),
		.qre(reg2hw[27]),
		.qe(ctrl_shadowed_flds_we[1]),
		.q(reg2hw[34-:6]),
		.ds(),
		.qs(ctrl_shadowed_mode_qs)
	);
	assign reg2hw[28] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(3)) u_ctrl_shadowed_key_len(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_key_len_wd),
		.d(hw2reg[43-:3]),
		.qre(reg2hw[35]),
		.qe(ctrl_shadowed_flds_we[2]),
		.q(reg2hw[39-:3]),
		.ds(),
		.qs(ctrl_shadowed_key_len_qs)
	);
	assign reg2hw[36] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(1)) u_ctrl_shadowed_sideload(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_sideload_wd),
		.d(hw2reg[44]),
		.qre(reg2hw[40]),
		.qe(ctrl_shadowed_flds_we[3]),
		.q(reg2hw[42]),
		.ds(),
		.qs(ctrl_shadowed_sideload_qs)
	);
	assign reg2hw[41] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(3)) u_ctrl_shadowed_prng_reseed_rate(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_prng_reseed_rate_wd),
		.d(hw2reg[47-:3]),
		.qre(reg2hw[43]),
		.qe(ctrl_shadowed_flds_we[4]),
		.q(reg2hw[47-:3]),
		.ds(),
		.qs(ctrl_shadowed_prng_reseed_rate_qs)
	);
	assign reg2hw[44] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(1)) u_ctrl_shadowed_manual_operation(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_manual_operation_wd),
		.d(hw2reg[48]),
		.qre(reg2hw[48]),
		.qe(ctrl_shadowed_flds_we[5]),
		.q(reg2hw[50]),
		.ds(),
		.qs(ctrl_shadowed_manual_operation_qs)
	);
	assign reg2hw[49] = ctrl_shadowed_qe;
	wire ctrl_aux_shadowed_gated_we;
	assign ctrl_aux_shadowed_gated_we = ctrl_aux_shadowed_we & ctrl_aux_regwen_qs;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_ctrl_aux_shadowed_key_touch_forces_reseed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_aux_shadowed_re),
		.we(ctrl_aux_shadowed_gated_we),
		.wd(ctrl_aux_shadowed_key_touch_forces_reseed_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[21]),
		.ds(),
		.qs(ctrl_aux_shadowed_key_touch_forces_reseed_qs),
		.phase(),
		.err_update(ctrl_aux_shadowed_key_touch_forces_reseed_update_err),
		.err_storage(ctrl_aux_shadowed_key_touch_forces_reseed_storage_err)
	);
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_aux_shadowed_force_masks(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_aux_shadowed_re),
		.we(ctrl_aux_shadowed_gated_we),
		.wd(ctrl_aux_shadowed_force_masks_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[22]),
		.ds(),
		.qs(ctrl_aux_shadowed_force_masks_qs),
		.phase(),
		.err_update(ctrl_aux_shadowed_force_masks_update_err),
		.err_storage(ctrl_aux_shadowed_force_masks_storage_err)
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
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_trigger_start(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_start_wd),
		.de(hw2reg[25]),
		.d(hw2reg[26]),
		.qe(),
		.q(reg2hw[17]),
		.ds(),
		.qs()
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_trigger_key_iv_data_in_clear(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_key_iv_data_in_clear_wd),
		.de(hw2reg[27]),
		.d(hw2reg[28]),
		.qe(),
		.q(reg2hw[18]),
		.ds(),
		.qs()
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_trigger_data_out_clear(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_data_out_clear_wd),
		.de(hw2reg[29]),
		.d(hw2reg[30]),
		.qe(),
		.q(reg2hw[19]),
		.ds(),
		.qs()
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_trigger_prng_reseed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_prng_reseed_wd),
		.de(hw2reg[31]),
		.d(hw2reg[32]),
		.qe(),
		.q(reg2hw[20]),
		.ds(),
		.qs()
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
		.de(hw2reg[11]),
		.d(hw2reg[12]),
		.qe(),
		.q(reg2hw[15]),
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
		.de(hw2reg[13]),
		.d(hw2reg[14]),
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
	) u_status_output_lost(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[15]),
		.d(hw2reg[16]),
		.qe(),
		.q(reg2hw[16]),
		.ds(),
		.qs(status_output_lost_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_output_valid(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[17]),
		.d(hw2reg[18]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_output_valid_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_input_ready(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[19]),
		.d(hw2reg[20]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_input_ready_qs)
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
		.de(hw2reg[21]),
		.d(hw2reg[22]),
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
		.de(hw2reg[23]),
		.d(hw2reg[24]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_fatal_fault_qs)
	);
	wire ctrl_gcm_shadowed_qe;
	wire [1:0] ctrl_gcm_shadowed_flds_we;
	assign ctrl_gcm_shadowed_qe = &ctrl_gcm_shadowed_flds_we;
	prim_subreg_ext #(.DW(6)) u_ctrl_gcm_shadowed_phase(
		.re(ctrl_gcm_shadowed_re),
		.we(ctrl_gcm_shadowed_we),
		.wd(ctrl_gcm_shadowed_phase_wd),
		.d(hw2reg[5-:6]),
		.qre(reg2hw[0]),
		.qe(ctrl_gcm_shadowed_flds_we[0]),
		.q(reg2hw[7-:6]),
		.ds(),
		.qs(ctrl_gcm_shadowed_phase_qs)
	);
	assign reg2hw[1] = ctrl_gcm_shadowed_qe;
	prim_subreg_ext #(.DW(5)) u_ctrl_gcm_shadowed_num_valid_bytes(
		.re(ctrl_gcm_shadowed_re),
		.we(ctrl_gcm_shadowed_we),
		.wd(ctrl_gcm_shadowed_num_valid_bytes_wd),
		.d(hw2reg[10-:5]),
		.qre(reg2hw[8]),
		.qe(ctrl_gcm_shadowed_flds_we[1]),
		.q(reg2hw[14-:5]),
		.ds(),
		.qs(ctrl_gcm_shadowed_num_valid_bytes_qs)
	);
	assign reg2hw[9] = ctrl_gcm_shadowed_qe;
	reg [34:0] addr_hit;
	localparam signed [31:0] aes_reg_pkg_BlockAw = 8;
	localparam [7:0] aes_reg_pkg_AES_ALERT_TEST_OFFSET = 8'h00;
	localparam [7:0] aes_reg_pkg_AES_CTRL_AUX_REGWEN_OFFSET = 8'h7c;
	localparam [7:0] aes_reg_pkg_AES_CTRL_AUX_SHADOWED_OFFSET = 8'h78;
	localparam [7:0] aes_reg_pkg_AES_CTRL_GCM_SHADOWED_OFFSET = 8'h88;
	localparam [7:0] aes_reg_pkg_AES_CTRL_SHADOWED_OFFSET = 8'h74;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_0_OFFSET = 8'h54;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_1_OFFSET = 8'h58;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_2_OFFSET = 8'h5c;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_3_OFFSET = 8'h60;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_0_OFFSET = 8'h64;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_1_OFFSET = 8'h68;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_2_OFFSET = 8'h6c;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_3_OFFSET = 8'h70;
	localparam [7:0] aes_reg_pkg_AES_IV_0_OFFSET = 8'h44;
	localparam [7:0] aes_reg_pkg_AES_IV_1_OFFSET = 8'h48;
	localparam [7:0] aes_reg_pkg_AES_IV_2_OFFSET = 8'h4c;
	localparam [7:0] aes_reg_pkg_AES_IV_3_OFFSET = 8'h50;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_0_OFFSET = 8'h04;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_1_OFFSET = 8'h08;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_2_OFFSET = 8'h0c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_3_OFFSET = 8'h10;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_4_OFFSET = 8'h14;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_5_OFFSET = 8'h18;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_6_OFFSET = 8'h1c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_7_OFFSET = 8'h20;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_0_OFFSET = 8'h24;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_1_OFFSET = 8'h28;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_2_OFFSET = 8'h2c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_3_OFFSET = 8'h30;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_4_OFFSET = 8'h34;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_5_OFFSET = 8'h38;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_6_OFFSET = 8'h3c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_7_OFFSET = 8'h40;
	localparam [7:0] aes_reg_pkg_AES_STATUS_OFFSET = 8'h84;
	localparam [7:0] aes_reg_pkg_AES_TRIGGER_OFFSET = 8'h80;
	always @(*) begin
		if (_sv2v_0)
			;
		addr_hit[0] = reg_addr == aes_reg_pkg_AES_ALERT_TEST_OFFSET;
		addr_hit[1] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_0_OFFSET;
		addr_hit[2] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_1_OFFSET;
		addr_hit[3] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_2_OFFSET;
		addr_hit[4] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_3_OFFSET;
		addr_hit[5] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_4_OFFSET;
		addr_hit[6] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_5_OFFSET;
		addr_hit[7] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_6_OFFSET;
		addr_hit[8] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_7_OFFSET;
		addr_hit[9] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_0_OFFSET;
		addr_hit[10] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_1_OFFSET;
		addr_hit[11] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_2_OFFSET;
		addr_hit[12] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_3_OFFSET;
		addr_hit[13] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_4_OFFSET;
		addr_hit[14] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_5_OFFSET;
		addr_hit[15] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_6_OFFSET;
		addr_hit[16] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_7_OFFSET;
		addr_hit[17] = reg_addr == aes_reg_pkg_AES_IV_0_OFFSET;
		addr_hit[18] = reg_addr == aes_reg_pkg_AES_IV_1_OFFSET;
		addr_hit[19] = reg_addr == aes_reg_pkg_AES_IV_2_OFFSET;
		addr_hit[20] = reg_addr == aes_reg_pkg_AES_IV_3_OFFSET;
		addr_hit[21] = reg_addr == aes_reg_pkg_AES_DATA_IN_0_OFFSET;
		addr_hit[22] = reg_addr == aes_reg_pkg_AES_DATA_IN_1_OFFSET;
		addr_hit[23] = reg_addr == aes_reg_pkg_AES_DATA_IN_2_OFFSET;
		addr_hit[24] = reg_addr == aes_reg_pkg_AES_DATA_IN_3_OFFSET;
		addr_hit[25] = reg_addr == aes_reg_pkg_AES_DATA_OUT_0_OFFSET;
		addr_hit[26] = reg_addr == aes_reg_pkg_AES_DATA_OUT_1_OFFSET;
		addr_hit[27] = reg_addr == aes_reg_pkg_AES_DATA_OUT_2_OFFSET;
		addr_hit[28] = reg_addr == aes_reg_pkg_AES_DATA_OUT_3_OFFSET;
		addr_hit[29] = reg_addr == aes_reg_pkg_AES_CTRL_SHADOWED_OFFSET;
		addr_hit[30] = reg_addr == aes_reg_pkg_AES_CTRL_AUX_SHADOWED_OFFSET;
		addr_hit[31] = reg_addr == aes_reg_pkg_AES_CTRL_AUX_REGWEN_OFFSET;
		addr_hit[32] = reg_addr == aes_reg_pkg_AES_TRIGGER_OFFSET;
		addr_hit[33] = reg_addr == aes_reg_pkg_AES_STATUS_OFFSET;
		addr_hit[34] = reg_addr == aes_reg_pkg_AES_CTRL_GCM_SHADOWED_OFFSET;
	end
	assign addrmiss = (reg_re || reg_we ? ~|addr_hit : 1'b0);
	localparam [139:0] aes_reg_pkg_AES_PERMIT = 140'b00011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111001100010001000100010011;
	always @(*) begin
		if (_sv2v_0)
			;
		wr_err = reg_we & (((((((((((((((((((((((((((((((((((addr_hit[0] & |(aes_reg_pkg_AES_PERMIT[136+:4] & ~reg_be)) | (addr_hit[1] & |(aes_reg_pkg_AES_PERMIT[132+:4] & ~reg_be))) | (addr_hit[2] & |(aes_reg_pkg_AES_PERMIT[128+:4] & ~reg_be))) | (addr_hit[3] & |(aes_reg_pkg_AES_PERMIT[124+:4] & ~reg_be))) | (addr_hit[4] & |(aes_reg_pkg_AES_PERMIT[120+:4] & ~reg_be))) | (addr_hit[5] & |(aes_reg_pkg_AES_PERMIT[116+:4] & ~reg_be))) | (addr_hit[6] & |(aes_reg_pkg_AES_PERMIT[112+:4] & ~reg_be))) | (addr_hit[7] & |(aes_reg_pkg_AES_PERMIT[108+:4] & ~reg_be))) | (addr_hit[8] & |(aes_reg_pkg_AES_PERMIT[104+:4] & ~reg_be))) | (addr_hit[9] & |(aes_reg_pkg_AES_PERMIT[100+:4] & ~reg_be))) | (addr_hit[10] & |(aes_reg_pkg_AES_PERMIT[96+:4] & ~reg_be))) | (addr_hit[11] & |(aes_reg_pkg_AES_PERMIT[92+:4] & ~reg_be))) | (addr_hit[12] & |(aes_reg_pkg_AES_PERMIT[88+:4] & ~reg_be))) | (addr_hit[13] & |(aes_reg_pkg_AES_PERMIT[84+:4] & ~reg_be))) | (addr_hit[14] & |(aes_reg_pkg_AES_PERMIT[80+:4] & ~reg_be))) | (addr_hit[15] & |(aes_reg_pkg_AES_PERMIT[76+:4] & ~reg_be))) | (addr_hit[16] & |(aes_reg_pkg_AES_PERMIT[72+:4] & ~reg_be))) | (addr_hit[17] & |(aes_reg_pkg_AES_PERMIT[68+:4] & ~reg_be))) | (addr_hit[18] & |(aes_reg_pkg_AES_PERMIT[64+:4] & ~reg_be))) | (addr_hit[19] & |(aes_reg_pkg_AES_PERMIT[60+:4] & ~reg_be))) | (addr_hit[20] & |(aes_reg_pkg_AES_PERMIT[56+:4] & ~reg_be))) | (addr_hit[21] & |(aes_reg_pkg_AES_PERMIT[52+:4] & ~reg_be))) | (addr_hit[22] & |(aes_reg_pkg_AES_PERMIT[48+:4] & ~reg_be))) | (addr_hit[23] & |(aes_reg_pkg_AES_PERMIT[44+:4] & ~reg_be))) | (addr_hit[24] & |(aes_reg_pkg_AES_PERMIT[40+:4] & ~reg_be))) | (addr_hit[25] & |(aes_reg_pkg_AES_PERMIT[36+:4] & ~reg_be))) | (addr_hit[26] & |(aes_reg_pkg_AES_PERMIT[32+:4] & ~reg_be))) | (addr_hit[27] & |(aes_reg_pkg_AES_PERMIT[28+:4] & ~reg_be))) | (addr_hit[28] & |(aes_reg_pkg_AES_PERMIT[24+:4] & ~reg_be))) | (addr_hit[29] & |(aes_reg_pkg_AES_PERMIT[20+:4] & ~reg_be))) | (addr_hit[30] & |(aes_reg_pkg_AES_PERMIT[16+:4] & ~reg_be))) | (addr_hit[31] & |(aes_reg_pkg_AES_PERMIT[12+:4] & ~reg_be))) | (addr_hit[32] & |(aes_reg_pkg_AES_PERMIT[8+:4] & ~reg_be))) | (addr_hit[33] & |(aes_reg_pkg_AES_PERMIT[4+:4] & ~reg_be))) | (addr_hit[34] & |(aes_reg_pkg_AES_PERMIT[0+:4] & ~reg_be)));
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
	assign key_share0_4_we = (addr_hit[5] & reg_we) & !reg_error;
	assign key_share0_4_wd = reg_wdata[31:0];
	assign key_share0_5_we = (addr_hit[6] & reg_we) & !reg_error;
	assign key_share0_5_wd = reg_wdata[31:0];
	assign key_share0_6_we = (addr_hit[7] & reg_we) & !reg_error;
	assign key_share0_6_wd = reg_wdata[31:0];
	assign key_share0_7_we = (addr_hit[8] & reg_we) & !reg_error;
	assign key_share0_7_wd = reg_wdata[31:0];
	assign key_share1_0_we = (addr_hit[9] & reg_we) & !reg_error;
	assign key_share1_0_wd = reg_wdata[31:0];
	assign key_share1_1_we = (addr_hit[10] & reg_we) & !reg_error;
	assign key_share1_1_wd = reg_wdata[31:0];
	assign key_share1_2_we = (addr_hit[11] & reg_we) & !reg_error;
	assign key_share1_2_wd = reg_wdata[31:0];
	assign key_share1_3_we = (addr_hit[12] & reg_we) & !reg_error;
	assign key_share1_3_wd = reg_wdata[31:0];
	assign key_share1_4_we = (addr_hit[13] & reg_we) & !reg_error;
	assign key_share1_4_wd = reg_wdata[31:0];
	assign key_share1_5_we = (addr_hit[14] & reg_we) & !reg_error;
	assign key_share1_5_wd = reg_wdata[31:0];
	assign key_share1_6_we = (addr_hit[15] & reg_we) & !reg_error;
	assign key_share1_6_wd = reg_wdata[31:0];
	assign key_share1_7_we = (addr_hit[16] & reg_we) & !reg_error;
	assign key_share1_7_wd = reg_wdata[31:0];
	assign iv_0_re = (addr_hit[17] & reg_re) & !reg_error;
	assign iv_0_we = (addr_hit[17] & reg_we) & !reg_error;
	assign iv_0_wd = reg_wdata[31:0];
	assign iv_1_re = (addr_hit[18] & reg_re) & !reg_error;
	assign iv_1_we = (addr_hit[18] & reg_we) & !reg_error;
	assign iv_1_wd = reg_wdata[31:0];
	assign iv_2_re = (addr_hit[19] & reg_re) & !reg_error;
	assign iv_2_we = (addr_hit[19] & reg_we) & !reg_error;
	assign iv_2_wd = reg_wdata[31:0];
	assign iv_3_re = (addr_hit[20] & reg_re) & !reg_error;
	assign iv_3_we = (addr_hit[20] & reg_we) & !reg_error;
	assign iv_3_wd = reg_wdata[31:0];
	assign data_in_0_we = (addr_hit[21] & reg_we) & !reg_error;
	assign data_in_0_wd = reg_wdata[31:0];
	assign data_in_1_we = (addr_hit[22] & reg_we) & !reg_error;
	assign data_in_1_wd = reg_wdata[31:0];
	assign data_in_2_we = (addr_hit[23] & reg_we) & !reg_error;
	assign data_in_2_wd = reg_wdata[31:0];
	assign data_in_3_we = (addr_hit[24] & reg_we) & !reg_error;
	assign data_in_3_wd = reg_wdata[31:0];
	assign data_out_0_re = (addr_hit[25] & reg_re) & !reg_error;
	assign data_out_1_re = (addr_hit[26] & reg_re) & !reg_error;
	assign data_out_2_re = (addr_hit[27] & reg_re) & !reg_error;
	assign data_out_3_re = (addr_hit[28] & reg_re) & !reg_error;
	assign ctrl_shadowed_re = (addr_hit[29] & reg_re) & !reg_error;
	assign ctrl_shadowed_we = (addr_hit[29] & reg_we) & !reg_error;
	assign ctrl_shadowed_operation_wd = reg_wdata[1:0];
	assign ctrl_shadowed_mode_wd = reg_wdata[7:2];
	assign ctrl_shadowed_key_len_wd = reg_wdata[10:8];
	assign ctrl_shadowed_sideload_wd = reg_wdata[11];
	assign ctrl_shadowed_prng_reseed_rate_wd = reg_wdata[14:12];
	assign ctrl_shadowed_manual_operation_wd = reg_wdata[15];
	assign ctrl_aux_shadowed_re = (addr_hit[30] & reg_re) & !reg_error;
	assign ctrl_aux_shadowed_we = (addr_hit[30] & reg_we) & !reg_error;
	assign ctrl_aux_shadowed_key_touch_forces_reseed_wd = reg_wdata[0];
	assign ctrl_aux_shadowed_force_masks_wd = reg_wdata[1];
	assign ctrl_aux_regwen_we = (addr_hit[31] & reg_we) & !reg_error;
	assign ctrl_aux_regwen_wd = reg_wdata[0];
	assign trigger_we = (addr_hit[32] & reg_we) & !reg_error;
	assign trigger_start_wd = reg_wdata[0];
	assign trigger_key_iv_data_in_clear_wd = reg_wdata[1];
	assign trigger_data_out_clear_wd = reg_wdata[2];
	assign trigger_prng_reseed_wd = reg_wdata[3];
	assign ctrl_gcm_shadowed_re = (addr_hit[34] & reg_re) & !reg_error;
	assign ctrl_gcm_shadowed_we = (addr_hit[34] & reg_we) & !reg_error;
	assign ctrl_gcm_shadowed_phase_wd = reg_wdata[5:0];
	assign ctrl_gcm_shadowed_num_valid_bytes_wd = reg_wdata[10:6];
	always @(*) begin
		if (_sv2v_0)
			;
		reg_we_check[0] = alert_test_we;
		reg_we_check[1] = key_share0_0_we;
		reg_we_check[2] = key_share0_1_we;
		reg_we_check[3] = key_share0_2_we;
		reg_we_check[4] = key_share0_3_we;
		reg_we_check[5] = key_share0_4_we;
		reg_we_check[6] = key_share0_5_we;
		reg_we_check[7] = key_share0_6_we;
		reg_we_check[8] = key_share0_7_we;
		reg_we_check[9] = key_share1_0_we;
		reg_we_check[10] = key_share1_1_we;
		reg_we_check[11] = key_share1_2_we;
		reg_we_check[12] = key_share1_3_we;
		reg_we_check[13] = key_share1_4_we;
		reg_we_check[14] = key_share1_5_we;
		reg_we_check[15] = key_share1_6_we;
		reg_we_check[16] = key_share1_7_we;
		reg_we_check[17] = iv_0_we;
		reg_we_check[18] = iv_1_we;
		reg_we_check[19] = iv_2_we;
		reg_we_check[20] = iv_3_we;
		reg_we_check[21] = data_in_0_we;
		reg_we_check[22] = data_in_1_we;
		reg_we_check[23] = data_in_2_we;
		reg_we_check[24] = data_in_3_we;
		reg_we_check[25] = 1'b0;
		reg_we_check[26] = 1'b0;
		reg_we_check[27] = 1'b0;
		reg_we_check[28] = 1'b0;
		reg_we_check[29] = ctrl_shadowed_we;
		reg_we_check[30] = ctrl_aux_shadowed_gated_we;
		reg_we_check[31] = ctrl_aux_regwen_we;
		reg_we_check[32] = trigger_we;
		reg_we_check[33] = 1'b0;
		reg_we_check[34] = ctrl_gcm_shadowed_we;
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
			addr_hit[17]: reg_rdata_next[31:0] = iv_0_qs;
			addr_hit[18]: reg_rdata_next[31:0] = iv_1_qs;
			addr_hit[19]: reg_rdata_next[31:0] = iv_2_qs;
			addr_hit[20]: reg_rdata_next[31:0] = iv_3_qs;
			addr_hit[21]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[22]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[23]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[24]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[25]: reg_rdata_next[31:0] = data_out_0_qs;
			addr_hit[26]: reg_rdata_next[31:0] = data_out_1_qs;
			addr_hit[27]: reg_rdata_next[31:0] = data_out_2_qs;
			addr_hit[28]: reg_rdata_next[31:0] = data_out_3_qs;
			addr_hit[29]: begin
				reg_rdata_next[1:0] = ctrl_shadowed_operation_qs;
				reg_rdata_next[7:2] = ctrl_shadowed_mode_qs;
				reg_rdata_next[10:8] = ctrl_shadowed_key_len_qs;
				reg_rdata_next[11] = ctrl_shadowed_sideload_qs;
				reg_rdata_next[14:12] = ctrl_shadowed_prng_reseed_rate_qs;
				reg_rdata_next[15] = ctrl_shadowed_manual_operation_qs;
			end
			addr_hit[30]: begin
				reg_rdata_next[0] = ctrl_aux_shadowed_key_touch_forces_reseed_qs;
				reg_rdata_next[1] = ctrl_aux_shadowed_force_masks_qs;
			end
			addr_hit[31]: reg_rdata_next[0] = ctrl_aux_regwen_qs;
			addr_hit[32]: begin
				reg_rdata_next[0] = 1'sb0;
				reg_rdata_next[1] = 1'sb0;
				reg_rdata_next[2] = 1'sb0;
				reg_rdata_next[3] = 1'sb0;
			end
			addr_hit[33]: begin
				reg_rdata_next[0] = status_idle_qs;
				reg_rdata_next[1] = status_stall_qs;
				reg_rdata_next[2] = status_output_lost_qs;
				reg_rdata_next[3] = status_output_valid_qs;
				reg_rdata_next[4] = status_input_ready_qs;
				reg_rdata_next[5] = status_alert_recov_ctrl_update_err_qs;
				reg_rdata_next[6] = status_alert_fatal_fault_qs;
			end
			addr_hit[34]: begin
				reg_rdata_next[5:0] = ctrl_gcm_shadowed_phase_qs;
				reg_rdata_next[10:6] = ctrl_gcm_shadowed_num_valid_bytes_qs;
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
	assign shadowed_storage_err_o = |{ctrl_aux_shadowed_key_touch_forces_reseed_storage_err, ctrl_aux_shadowed_force_masks_storage_err};
	assign shadowed_update_err_o = |{ctrl_aux_shadowed_key_touch_forces_reseed_update_err, ctrl_aux_shadowed_force_masks_update_err};
	assign reg_busy = shadow_busy;
	wire unused_wdata;
	wire unused_be;
	assign unused_wdata = ^reg_wdata;
	assign unused_be = ^reg_be;
	initial _sv2v_0 = 0;
endmodule
