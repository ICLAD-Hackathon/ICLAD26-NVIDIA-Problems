module aes_control (
	clk_i,
	rst_ni,
	ctrl_qe_i,
	ctrl_we_o,
	ctrl_phase_i,
	ctrl_err_storage_i,
	op_i,
	mode_i,
	cipher_op_i,
	sideload_i,
	prng_reseed_rate_i,
	manual_operation_i,
	key_touch_forces_reseed_i,
	ctrl_gcm_qe_i,
	ctrl_gcm_we_o,
	ctrl_gcm_phase_i,
	gcm_init_done_o,
	gcm_phase_i,
	start_i,
	key_iv_data_in_clear_i,
	data_out_clear_i,
	prng_reseed_i,
	mux_sel_err_i,
	sp_enc_err_i,
	lc_escalate_en_i,
	alert_fatal_i,
	alert_o,
	key_sideload_valid_i,
	key_init_qe_i,
	iv_qe_i,
	data_in_qe_i,
	data_out_re_i,
	data_in_we_o,
	data_out_sel_o,
	data_out_we_o,
	data_in_prev_sel_o,
	data_in_prev_we_o,
	state_in_sel_o,
	add_state_in_sel_o,
	add_state_out_sel_o,
	ctr_inc32_o,
	ctr_incr_o,
	ctr_ready_i,
	ctr_we_i,
	cipher_in_valid_o,
	cipher_in_ready_i,
	cipher_out_valid_i,
	cipher_out_ready_o,
	cipher_crypt_o,
	cipher_crypt_i,
	cipher_dec_key_gen_o,
	cipher_dec_key_gen_i,
	cipher_prng_reseed_o,
	cipher_prng_reseed_i,
	cipher_key_clear_o,
	cipher_key_clear_i,
	cipher_data_out_clear_o,
	cipher_data_out_clear_i,
	ghash_in_valid_o,
	ghash_in_ready_i,
	ghash_out_valid_i,
	ghash_out_ready_o,
	ghash_load_hash_subkey_o,
	key_init_sel_o,
	key_init_we_o,
	iv_sel_o,
	iv_we_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	start_o,
	start_we_o,
	key_iv_data_in_clear_o,
	key_iv_data_in_clear_we_o,
	data_out_clear_o,
	data_out_clear_we_o,
	prng_reseed_o,
	prng_reseed_we_o,
	idle_o,
	idle_we_o,
	stall_o,
	stall_we_o,
	output_lost_i,
	output_lost_o,
	output_lost_we_o,
	output_valid_o,
	output_valid_we_o,
	input_ready_o,
	input_ready_we_o
);
	reg _sv2v_0;
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
	parameter [31:0] SecStartTriggerDelay = 0;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_qe_i;
	output wire ctrl_we_o;
	input wire ctrl_phase_i;
	input wire ctrl_err_storage_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	input wire [5:0] mode_i;
	input wire [1:0] cipher_op_i;
	input wire sideload_i;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	input wire [2:0] prng_reseed_rate_i;
	input wire manual_operation_i;
	input wire key_touch_forces_reseed_i;
	input wire ctrl_gcm_qe_i;
	output wire ctrl_gcm_we_o;
	input wire ctrl_gcm_phase_i;
	output wire gcm_init_done_o;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire start_i;
	input wire key_iv_data_in_clear_i;
	input wire data_out_clear_i;
	input wire prng_reseed_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire key_sideload_valid_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	input wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	input wire [3:0] iv_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [3:0] data_in_qe_i;
	input wire [3:0] data_out_re_i;
	output wire data_in_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_out_sel_o;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_out_we_o;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_in_prev_sel_o;
	output wire [2:0] data_in_prev_we_o;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_state_out_sel_o;
	output wire [2:0] ctr_inc32_o;
	output wire [2:0] ctr_incr_o;
	input wire [2:0] ctr_ready_i;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we_i;
	output wire [2:0] cipher_in_valid_o;
	input wire [2:0] cipher_in_ready_i;
	input wire [2:0] cipher_out_valid_i;
	output wire [2:0] cipher_out_ready_o;
	output wire [2:0] cipher_crypt_o;
	input wire [2:0] cipher_crypt_i;
	output wire [2:0] cipher_dec_key_gen_o;
	input wire [2:0] cipher_dec_key_gen_i;
	output wire cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output wire cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output wire cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output wire [2:0] ghash_in_valid_o;
	input wire [2:0] ghash_in_ready_i;
	input wire [2:0] ghash_out_valid_i;
	output wire [2:0] ghash_out_ready_o;
	output wire [2:0] ghash_load_hash_subkey_o;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] key_init_sel_o;
	output wire [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 3) - 1:0] key_init_we_o;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output reg [5:0] iv_sel_o;
	output wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] iv_we_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	output wire start_o;
	output wire start_we_o;
	output wire key_iv_data_in_clear_o;
	output wire key_iv_data_in_clear_we_o;
	output wire data_out_clear_o;
	output wire data_out_clear_we_o;
	output wire prng_reseed_o;
	output wire prng_reseed_we_o;
	output wire idle_o;
	output wire idle_we_o;
	output wire stall_o;
	output wire stall_we_o;
	input wire output_lost_i;
	output wire output_lost_o;
	output wire output_lost_we_o;
	output wire output_valid_o;
	output wire output_valid_we_o;
	output wire input_ready_o;
	output wire input_ready_we_o;
	wire start_trigger;
	localparam signed [31:0] AesSecStartTriggerDelayNonDefault = (SecStartTriggerDelay == 0 ? 1 : 2);
	function automatic [AesSecStartTriggerDelayNonDefault - 1:0] sv2v_cast_0740F;
		input reg [AesSecStartTriggerDelayNonDefault - 1:0] inp;
		sv2v_cast_0740F = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_0740F(1'b1);
	end
	generate
		if (SecStartTriggerDelay > 0) begin : gen_start_delay
			localparam [31:0] WidthCounter = $clog2(SecStartTriggerDelay + 1);
			wire [WidthCounter - 1:0] count_d;
			reg [WidthCounter - 1:0] count_q;
			assign count_d = (!start_i ? {WidthCounter {1'sb0}} : (start_trigger ? count_q : count_q + 1'b1));
			assign start_trigger = (count_q == SecStartTriggerDelay[WidthCounter - 1:0] ? 1'b1 : 1'b0);
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					count_q <= 1'sb0;
				else
					count_q <= count_d;
		end
		else begin : gen_no_start_delay
			assign start_trigger = start_i;
		end
	endgenerate
	wire [2:0] ctr_ready;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we;
	wire [2:0] cipher_in_ready;
	wire [2:0] cipher_out_valid;
	wire [2:0] cipher_crypt;
	wire [2:0] cipher_dec_key_gen;
	wire [2:0] ghash_in_ready;
	wire [2:0] ghash_out_valid;
	wire mux_sel_err;
	reg mr_err;
	wire sp_enc_err;
	wire [2:0] sp_data_out_we;
	wire [2:0] sp_data_in_prev_we;
	wire [2:0] sp_ctr_inc32;
	wire [2:0] sp_ctr_incr;
	wire [2:0] sp_ctr_ready;
	wire [2:0] sp_cipher_in_valid;
	wire [2:0] sp_cipher_in_ready;
	wire [2:0] sp_cipher_out_valid;
	wire [2:0] sp_cipher_out_ready;
	wire [2:0] sp_in_cipher_crypt;
	wire [2:0] sp_out_cipher_crypt;
	wire [2:0] sp_in_cipher_dec_key_gen;
	wire [2:0] sp_out_cipher_dec_key_gen;
	wire [2:0] sp_ghash_in_valid;
	wire [2:0] sp_ghash_in_ready;
	wire [2:0] sp_ghash_out_valid;
	wire [2:0] sp_ghash_out_ready;
	wire [2:0] sp_ghash_load_hash_subkey;
	wire [2:0] mr_ctrl_we;
	wire [2:0] mr_ctrl_gcm_we;
	wire [2:0] mr_gcm_init_done;
	wire [2:0] mr_alert;
	wire [2:0] mr_data_in_we;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_DataOutSelWidth) - 1:0] mr_data_out_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_DIPSelWidth) - 1:0] mr_data_in_prev_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_SISelWidth) - 1:0] mr_state_in_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_AddSISelWidth) - 1:0] mr_add_state_in_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_AddSOSelWidth) - 1:0] mr_add_state_out_sel;
	wire [2:0] mr_cipher_prng_reseed;
	wire [2:0] mr_cipher_key_clear;
	wire [2:0] mr_cipher_data_out_clear;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyInitSelWidth) - 1:0] mr_key_init_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_IVSelWidth) - 1:0] mr_iv_sel;
	wire [2:0] mr_prng_update;
	wire [2:0] mr_prng_reseed_req;
	wire [2:0] mr_start_we;
	wire [2:0] mr_key_iv_data_in_clear_we;
	wire [2:0] mr_data_out_clear_we;
	wire [2:0] mr_prng_reseed;
	wire [2:0] mr_prng_reseed_we;
	wire [2:0] mr_idle;
	wire [2:0] mr_idle_we;
	wire [2:0] mr_stall;
	wire [2:0] mr_stall_we;
	wire [2:0] mr_output_lost;
	wire [2:0] mr_output_lost_we;
	wire [2:0] mr_output_valid;
	wire [2:0] mr_output_valid_we;
	wire [2:0] mr_input_ready;
	wire [2:0] mr_input_ready_we;
	wire [((aes_pkg_Sp2VWidth * aes_pkg_NumSharesKey) * 8) - 1:0] int_key_init_we;
	wire [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 3) - 1:0] log_key_init_we;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] int_key_init_qe;
	genvar _gv_s_1;
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	generate
		for (_gv_s_1 = 0; _gv_s_1 < aes_pkg_NumSharesKey; _gv_s_1 = _gv_s_1 + 1) begin : gen_conv_key_init_wqe_shares
			localparam s = _gv_s_1;
			genvar _gv_i_1;
			for (_gv_i_1 = 0; _gv_i_1 < aes_reg_pkg_NumRegsKey; _gv_i_1 = _gv_i_1 + 1) begin : gen_conv_key_init_wqe_regs
				localparam i = _gv_i_1;
				assign int_key_init_qe[(s * aes_reg_pkg_NumRegsKey) + i] = key_init_qe_i[((1 - s) * aes_reg_pkg_NumRegsKey) + i];
				genvar _gv_j_1;
				for (_gv_j_1 = 0; _gv_j_1 < aes_pkg_Sp2VWidth; _gv_j_1 = _gv_j_1 + 1) begin : gen_conv_key_init_wqe_log
					localparam j = _gv_j_1;
					assign log_key_init_we[(((s * aes_reg_pkg_NumRegsKey) + i) * 3) + j] = int_key_init_we[(((j * aes_pkg_NumSharesKey) + s) * 8) + i];
				end
				assign key_init_we_o[(((1 - s) * aes_reg_pkg_NumRegsKey) + i) * 3+:3] = sv2v_cast_39E4E(log_key_init_we[((s * aes_reg_pkg_NumRegsKey) + i) * 3+:3]);
			end
		end
	endgenerate
	wire [(aes_pkg_Sp2VWidth * aes_pkg_NumSlicesCtr) - 1:0] int_ctr_we;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] log_ctr_we;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_NumSlicesCtr) - 1:0] int_iv_we;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] log_iv_we;
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < aes_pkg_NumSlicesCtr; _gv_i_2 = _gv_i_2 + 1) begin : gen_conv_ctr_iv_we_slices
			localparam i = _gv_i_2;
			assign log_ctr_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = {ctr_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]};
			genvar _gv_j_2;
			for (_gv_j_2 = 0; _gv_j_2 < aes_pkg_Sp2VWidth; _gv_j_2 = _gv_j_2 + 1) begin : gen_conv_ctr_iv_we_log
				localparam j = _gv_j_2;
				assign int_ctr_we[(j * aes_pkg_NumSlicesCtr) + i] = log_ctr_we[(i * aes_pkg_Sp2VWidth) + j];
				assign log_iv_we[(i * aes_pkg_Sp2VWidth) + j] = int_iv_we[(j * aes_pkg_NumSlicesCtr) + i];
			end
			assign iv_we_o[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(log_iv_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	assign sp_ctr_ready = {ctr_ready};
	assign sp_cipher_in_ready = {cipher_in_ready};
	assign sp_cipher_out_valid = {cipher_out_valid};
	assign sp_in_cipher_crypt = {cipher_crypt};
	assign sp_in_cipher_dec_key_gen = {cipher_dec_key_gen};
	assign sp_ghash_in_ready = {ghash_in_ready};
	assign sp_ghash_out_valid = {ghash_out_valid};
	genvar _gv_i_3;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	localparam [2:0] aes_pkg_SP2V_LOGIC_HIGH = {sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))};
	generate
		for (_gv_i_3 = 0; _gv_i_3 < aes_pkg_Sp2VWidth; _gv_i_3 = _gv_i_3 + 1) begin : gen_fsm
			localparam i = _gv_i_3;
			if (aes_pkg_SP2V_LOGIC_HIGH[i] == 1'b1) begin : gen_fsm_p
				aes_control_fsm_p #(
					.AESGCMEnable(AESGCMEnable),
					.SecMasking(SecMasking)
				) u_aes_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.ctrl_qe_i(ctrl_qe_i),
					.ctrl_we_o(mr_ctrl_we[i]),
					.ctrl_phase_i(ctrl_phase_i),
					.ctrl_err_storage_i(ctrl_err_storage_i),
					.op_i(op_i),
					.mode_i(mode_i),
					.cipher_op_i(cipher_op_i),
					.sideload_i(sideload_i),
					.prng_reseed_rate_i(prng_reseed_rate_i),
					.manual_operation_i(manual_operation_i),
					.key_touch_forces_reseed_i(key_touch_forces_reseed_i),
					.ctrl_gcm_qe_i(ctrl_gcm_qe_i),
					.ctrl_gcm_we_o(mr_ctrl_gcm_we[i]),
					.ctrl_gcm_phase_i(ctrl_gcm_phase_i),
					.gcm_init_done_o(mr_gcm_init_done[i]),
					.gcm_phase_i(gcm_phase_i),
					.start_i(start_trigger),
					.key_iv_data_in_clear_i(key_iv_data_in_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.prng_reseed_i(prng_reseed_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.lc_escalate_en_i(lc_escalate_en_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.key_sideload_valid_i(key_sideload_valid_i),
					.key_init_qe_i(int_key_init_qe),
					.iv_qe_i(iv_qe_i),
					.data_in_qe_i(data_in_qe_i),
					.data_out_re_i(data_out_re_i),
					.data_in_we_o(mr_data_in_we[i]),
					.data_out_sel_o(mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]),
					.data_out_we_o(sp_data_out_we[i]),
					.data_in_prev_sel_o(mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth]),
					.data_in_prev_we_o(sp_data_in_prev_we[i]),
					.state_in_sel_o(mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth]),
					.add_state_in_sel_o(mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth]),
					.add_state_out_sel_o(mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth]),
					.ctr_inc32_o(sp_ctr_inc32[i]),
					.ctr_incr_o(sp_ctr_incr[i]),
					.ctr_ready_i(sp_ctr_ready[i]),
					.ctr_we_i(int_ctr_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.cipher_in_valid_o(sp_cipher_in_valid[i]),
					.cipher_in_ready_i(sp_cipher_in_ready[i]),
					.cipher_out_valid_i(sp_cipher_out_valid[i]),
					.cipher_out_ready_o(sp_cipher_out_ready[i]),
					.cipher_crypt_o(sp_out_cipher_crypt[i]),
					.cipher_crypt_i(sp_in_cipher_crypt[i]),
					.cipher_dec_key_gen_o(sp_out_cipher_dec_key_gen[i]),
					.cipher_dec_key_gen_i(sp_in_cipher_dec_key_gen[i]),
					.cipher_prng_reseed_o(mr_cipher_prng_reseed[i]),
					.cipher_prng_reseed_i(cipher_prng_reseed_i),
					.cipher_key_clear_o(mr_cipher_key_clear[i]),
					.cipher_key_clear_i(cipher_key_clear_i),
					.cipher_data_out_clear_o(mr_cipher_data_out_clear[i]),
					.cipher_data_out_clear_i(cipher_data_out_clear_i),
					.ghash_in_valid_o(sp_ghash_in_valid[i]),
					.ghash_in_ready_i(sp_ghash_in_ready[i]),
					.ghash_out_valid_i(sp_ghash_out_valid[i]),
					.ghash_out_ready_o(sp_ghash_out_ready[i]),
					.ghash_load_hash_subkey_o(sp_ghash_load_hash_subkey[i]),
					.key_init_sel_o(mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth]),
					.key_init_we_o(int_key_init_we[8 * (i * aes_pkg_NumSharesKey)+:16]),
					.iv_sel_o(mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]),
					.iv_we_o(int_iv_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.start_we_o(mr_start_we[i]),
					.key_iv_data_in_clear_we_o(mr_key_iv_data_in_clear_we[i]),
					.data_out_clear_we_o(mr_data_out_clear_we[i]),
					.prng_reseed_o(mr_prng_reseed[i]),
					.prng_reseed_we_o(mr_prng_reseed_we[i]),
					.idle_o(mr_idle[i]),
					.idle_we_o(mr_idle_we[i]),
					.stall_o(mr_stall[i]),
					.stall_we_o(mr_stall_we[i]),
					.output_lost_i(output_lost_i),
					.output_lost_o(mr_output_lost[i]),
					.output_lost_we_o(mr_output_lost_we[i]),
					.output_valid_o(mr_output_valid[i]),
					.output_valid_we_o(mr_output_valid_we[i]),
					.input_ready_o(mr_input_ready[i]),
					.input_ready_we_o(mr_input_ready_we[i])
				);
			end
			else begin : gen_fsm_n
				aes_control_fsm_n #(
					.AESGCMEnable(AESGCMEnable),
					.SecMasking(SecMasking)
				) u_aes_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.ctrl_qe_i(ctrl_qe_i),
					.ctrl_we_o(mr_ctrl_we[i]),
					.ctrl_phase_i(ctrl_phase_i),
					.ctrl_err_storage_i(ctrl_err_storage_i),
					.op_i(op_i),
					.mode_i(mode_i),
					.cipher_op_i(cipher_op_i),
					.sideload_i(sideload_i),
					.prng_reseed_rate_i(prng_reseed_rate_i),
					.manual_operation_i(manual_operation_i),
					.key_touch_forces_reseed_i(key_touch_forces_reseed_i),
					.ctrl_gcm_qe_i(ctrl_gcm_qe_i),
					.ctrl_gcm_we_o(mr_ctrl_gcm_we[i]),
					.ctrl_gcm_phase_i(ctrl_gcm_phase_i),
					.gcm_init_done_o(mr_gcm_init_done[i]),
					.gcm_phase_i(gcm_phase_i),
					.start_i(start_trigger),
					.key_iv_data_in_clear_i(key_iv_data_in_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.prng_reseed_i(prng_reseed_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.lc_escalate_en_i(lc_escalate_en_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.key_sideload_valid_i(key_sideload_valid_i),
					.key_init_qe_i(int_key_init_qe),
					.iv_qe_i(iv_qe_i),
					.data_in_qe_i(data_in_qe_i),
					.data_out_re_i(data_out_re_i),
					.data_in_we_o(mr_data_in_we[i]),
					.data_out_sel_o(mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]),
					.data_out_we_no(sp_data_out_we[i]),
					.data_in_prev_sel_o(mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth]),
					.data_in_prev_we_no(sp_data_in_prev_we[i]),
					.state_in_sel_o(mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth]),
					.add_state_in_sel_o(mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth]),
					.add_state_out_sel_o(mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth]),
					.ctr_inc32_no(sp_ctr_inc32[i]),
					.ctr_incr_no(sp_ctr_incr[i]),
					.ctr_ready_ni(sp_ctr_ready[i]),
					.ctr_we_ni(int_ctr_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.cipher_in_valid_no(sp_cipher_in_valid[i]),
					.cipher_in_ready_ni(sp_cipher_in_ready[i]),
					.cipher_out_valid_ni(sp_cipher_out_valid[i]),
					.cipher_out_ready_no(sp_cipher_out_ready[i]),
					.cipher_crypt_no(sp_out_cipher_crypt[i]),
					.cipher_crypt_ni(sp_in_cipher_crypt[i]),
					.cipher_dec_key_gen_no(sp_out_cipher_dec_key_gen[i]),
					.cipher_dec_key_gen_ni(sp_in_cipher_dec_key_gen[i]),
					.cipher_prng_reseed_o(mr_cipher_prng_reseed[i]),
					.cipher_prng_reseed_i(cipher_prng_reseed_i),
					.cipher_key_clear_o(mr_cipher_key_clear[i]),
					.cipher_key_clear_i(cipher_key_clear_i),
					.cipher_data_out_clear_o(mr_cipher_data_out_clear[i]),
					.cipher_data_out_clear_i(cipher_data_out_clear_i),
					.ghash_in_valid_no(sp_ghash_in_valid[i]),
					.ghash_in_ready_ni(sp_ghash_in_ready[i]),
					.ghash_out_valid_ni(sp_ghash_out_valid[i]),
					.ghash_out_ready_no(sp_ghash_out_ready[i]),
					.ghash_load_hash_subkey_no(sp_ghash_load_hash_subkey[i]),
					.key_init_sel_o(mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth]),
					.key_init_we_no(int_key_init_we[8 * (i * aes_pkg_NumSharesKey)+:16]),
					.iv_sel_o(mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]),
					.iv_we_no(int_iv_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.start_we_o(mr_start_we[i]),
					.key_iv_data_in_clear_we_o(mr_key_iv_data_in_clear_we[i]),
					.data_out_clear_we_o(mr_data_out_clear_we[i]),
					.prng_reseed_o(mr_prng_reseed[i]),
					.prng_reseed_we_o(mr_prng_reseed_we[i]),
					.idle_o(mr_idle[i]),
					.idle_we_o(mr_idle_we[i]),
					.stall_o(mr_stall[i]),
					.stall_we_o(mr_stall_we[i]),
					.output_lost_i(output_lost_i),
					.output_lost_o(mr_output_lost[i]),
					.output_lost_we_o(mr_output_lost_we[i]),
					.output_valid_o(mr_output_valid[i]),
					.output_valid_we_o(mr_output_valid_we[i]),
					.input_ready_o(mr_input_ready[i]),
					.input_ready_we_o(mr_input_ready_we[i])
				);
			end
		end
	endgenerate
	assign data_out_we_o = sv2v_cast_39E4E(sp_data_out_we);
	assign data_in_prev_we_o = sv2v_cast_39E4E(sp_data_in_prev_we);
	assign ctr_inc32_o = sv2v_cast_39E4E(sp_ctr_inc32);
	assign ctr_incr_o = sv2v_cast_39E4E(sp_ctr_incr);
	assign cipher_in_valid_o = sv2v_cast_39E4E(sp_cipher_in_valid);
	assign cipher_out_ready_o = sv2v_cast_39E4E(sp_cipher_out_ready);
	assign cipher_crypt_o = sv2v_cast_39E4E(sp_out_cipher_crypt);
	assign cipher_dec_key_gen_o = sv2v_cast_39E4E(sp_out_cipher_dec_key_gen);
	assign ghash_in_valid_o = sv2v_cast_39E4E(sp_ghash_in_valid);
	assign ghash_out_ready_o = sv2v_cast_39E4E(sp_ghash_out_ready);
	assign ghash_load_hash_subkey_o = sv2v_cast_39E4E(sp_ghash_load_hash_subkey);
	assign alert_o = |mr_alert;
	assign cipher_prng_reseed_o = |mr_cipher_prng_reseed;
	assign cipher_key_clear_o = |mr_cipher_key_clear;
	assign cipher_data_out_clear_o = |mr_cipher_data_out_clear;
	assign prng_update_o = |mr_prng_update;
	assign prng_reseed_req_o = |mr_prng_reseed_req;
	assign start_we_o = |mr_start_we;
	assign prng_reseed_o = |mr_prng_reseed;
	assign prng_reseed_we_o = |mr_prng_reseed_we;
	assign ctrl_we_o = &mr_ctrl_we;
	assign ctrl_gcm_we_o = &mr_ctrl_gcm_we;
	assign gcm_init_done_o = &mr_gcm_init_done;
	assign data_in_we_o = &mr_data_in_we;
	assign key_iv_data_in_clear_we_o = &mr_key_iv_data_in_clear_we;
	assign data_out_clear_we_o = &mr_data_out_clear_we;
	assign idle_o = &mr_idle;
	assign idle_we_o = &mr_idle_we;
	assign stall_o = &mr_stall;
	assign stall_we_o = &mr_stall_we;
	assign output_lost_o = &mr_output_lost;
	assign output_lost_we_o = &mr_output_lost_we;
	assign output_valid_o = &mr_output_valid;
	assign output_valid_we_o = &mr_output_valid_we;
	assign input_ready_o = &mr_input_ready;
	assign input_ready_we_o = &mr_input_ready_we;
	function automatic [2:0] sv2v_cast_D1B5B;
		input reg [2:0] inp;
		sv2v_cast_D1B5B = inp;
	endfunction
	function automatic [2:0] sv2v_cast_DB8EC;
		input reg [2:0] inp;
		sv2v_cast_DB8EC = inp;
	endfunction
	function automatic [2:0] sv2v_cast_5FB3A;
		input reg [2:0] inp;
		sv2v_cast_5FB3A = inp;
	endfunction
	function automatic [2:0] sv2v_cast_06ECC;
		input reg [2:0] inp;
		sv2v_cast_06ECC = inp;
	endfunction
	function automatic [4:0] sv2v_cast_32B2A;
		input reg [4:0] inp;
		sv2v_cast_32B2A = inp;
	endfunction
	function automatic [4:0] sv2v_cast_A4E58;
		input reg [4:0] inp;
		sv2v_cast_A4E58 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_CDC2F;
		input reg [5:0] inp;
		sv2v_cast_CDC2F = inp;
	endfunction
	always @(*) begin : combine_sparse_signals
		if (_sv2v_0)
			;
		data_out_sel_o = sv2v_cast_D1B5B({aes_pkg_DataOutSelWidth {1'b0}});
		data_in_prev_sel_o = sv2v_cast_DB8EC({aes_pkg_DIPSelWidth {1'b0}});
		state_in_sel_o = sv2v_cast_5FB3A({aes_pkg_SISelWidth {1'b0}});
		add_state_in_sel_o = sv2v_cast_06ECC({aes_pkg_AddSISelWidth {1'b0}});
		add_state_out_sel_o = sv2v_cast_32B2A({aes_pkg_AddSOSelWidth {1'b0}});
		key_init_sel_o = sv2v_cast_A4E58({aes_pkg_KeyInitSelWidth {1'b0}});
		iv_sel_o = sv2v_cast_CDC2F({aes_pkg_IVSelWidth {1'b0}});
		mr_err = 1'b0;
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				begin
					data_out_sel_o = sv2v_cast_D1B5B({data_out_sel_o} | {mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]});
					data_in_prev_sel_o = sv2v_cast_DB8EC({data_in_prev_sel_o} | {mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth]});
					state_in_sel_o = sv2v_cast_5FB3A({state_in_sel_o} | {mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth]});
					add_state_in_sel_o = sv2v_cast_06ECC({add_state_in_sel_o} | {mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth]});
					add_state_out_sel_o = sv2v_cast_32B2A({add_state_out_sel_o} | {mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth]});
					key_init_sel_o = sv2v_cast_A4E58({key_init_sel_o} | {mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth]});
					iv_sel_o = sv2v_cast_CDC2F({iv_sel_o} | {mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]});
				end
		end
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if (((((((data_out_sel_o != mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]) || (data_in_prev_sel_o != mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth])) || (state_in_sel_o != mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth])) || (add_state_in_sel_o != mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth])) || (add_state_out_sel_o != mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth])) || (key_init_sel_o != mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth])) || (iv_sel_o != mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]))
					mr_err = 1'b1;
		end
	end
	assign mux_sel_err = mux_sel_err_i | mr_err;
	localparam [31:0] NumSp2VSig = 15;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [14:0] sp2v_sig_err;
	assign sp2v_sig[0+:aes_pkg_Sp2VWidth] = cipher_in_ready_i;
	assign sp2v_sig[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = cipher_out_valid_i;
	assign sp2v_sig[6+:aes_pkg_Sp2VWidth] = cipher_crypt_i;
	assign sp2v_sig[9+:aes_pkg_Sp2VWidth] = cipher_dec_key_gen_i;
	assign sp2v_sig[12+:aes_pkg_Sp2VWidth] = ghash_in_ready_i;
	assign sp2v_sig[15+:aes_pkg_Sp2VWidth] = ghash_out_valid_i;
	assign sp2v_sig[18+:aes_pkg_Sp2VWidth] = ctr_ready_i;
	genvar _gv_i_4;
	generate
		for (_gv_i_4 = 0; _gv_i_4 < aes_pkg_NumSlicesCtr; _gv_i_4 = _gv_i_4 + 1) begin : gen_use_ctr_we_i
			localparam i = _gv_i_4;
			assign sp2v_sig[(7 + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = ctr_we_i[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
		end
	endgenerate
	localparam [14:0] Sp2VEnSecBuf = 1'sb0;
	genvar _gv_i_5;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	generate
		for (_gv_i_5 = 0; _gv_i_5 < NumSp2VSig; _gv_i_5 = _gv_i_5 + 1) begin : gen_sel_buf_chk
			localparam i = _gv_i_5;
			aes_sel_buf_chk #(
				.Num(aes_pkg_Sp2VNum),
				.Width(aes_pkg_Sp2VWidth),
				.EnSecBuf(Sp2VEnSecBuf[i])
			) u_aes_sp2v_sig_buf_chk_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.sel_i(sp2v_sig[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.sel_o(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.err_o(sp2v_sig_err[i])
			);
			assign sp2v_sig_chk[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	assign cipher_in_ready = sp2v_sig_chk[0+:aes_pkg_Sp2VWidth];
	assign cipher_out_valid = sp2v_sig_chk[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign cipher_crypt = sp2v_sig_chk[6+:aes_pkg_Sp2VWidth];
	assign cipher_dec_key_gen = sp2v_sig_chk[9+:aes_pkg_Sp2VWidth];
	assign ghash_in_ready = sp2v_sig_chk[12+:aes_pkg_Sp2VWidth];
	assign ghash_out_valid = sp2v_sig_chk[15+:aes_pkg_Sp2VWidth];
	assign ctr_ready = sp2v_sig_chk[18+:aes_pkg_Sp2VWidth];
	genvar _gv_i_6;
	generate
		for (_gv_i_6 = 0; _gv_i_6 < aes_pkg_NumSlicesCtr; _gv_i_6 = _gv_i_6 + 1) begin : gen_ctr_we
			localparam i = _gv_i_6;
			assign ctr_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sp2v_sig_chk[(7 + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
		end
	endgenerate
	assign sp_enc_err = |sp2v_sig_err | sp_enc_err_i;
	assign start_o = 1'b0;
	assign key_iv_data_in_clear_o = 1'b0;
	assign data_out_clear_o = 1'b0;
	initial _sv2v_0 = 0;
endmodule
