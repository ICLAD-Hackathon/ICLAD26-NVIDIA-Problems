module aes_control_fsm_p (
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
	start_we_o,
	key_iv_data_in_clear_we_o,
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
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
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
	output wire [2:0] data_out_sel_o;
	output wire data_out_we_o;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_in_prev_sel_o;
	output wire data_in_prev_we_o;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] add_state_out_sel_o;
	output wire ctr_inc32_o;
	output wire ctr_incr_o;
	input wire ctr_ready_i;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [7:0] ctr_we_i;
	output wire cipher_in_valid_o;
	input wire cipher_in_ready_i;
	input wire cipher_out_valid_i;
	output wire cipher_out_ready_o;
	output wire cipher_crypt_o;
	input wire cipher_crypt_i;
	output wire cipher_dec_key_gen_o;
	input wire cipher_dec_key_gen_i;
	output wire cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output wire cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output wire cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output wire ghash_in_valid_o;
	input wire ghash_in_ready_i;
	input wire ghash_out_valid_i;
	output wire ghash_out_ready_o;
	output wire ghash_load_hash_subkey_o;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] key_init_sel_o;
	output wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we_o;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output wire [5:0] iv_sel_o;
	output wire [7:0] iv_we_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	output wire start_we_o;
	output wire key_iv_data_in_clear_we_o;
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
	localparam signed [31:0] NumInBufBits = ((((((39 + (aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) + aes_reg_pkg_NumRegsIv) + aes_reg_pkg_NumRegsData) + aes_reg_pkg_NumRegsData) + 1) + aes_pkg_NumSlicesCtr) + 11;
	wire [NumInBufBits - 1:0] in;
	wire [NumInBufBits - 1:0] in_buf;
	assign in = {ctrl_qe_i, ctrl_phase_i, ctrl_err_storage_i, op_i, mode_i, cipher_op_i, sideload_i, prng_reseed_rate_i, manual_operation_i, key_touch_forces_reseed_i, ctrl_gcm_qe_i, ctrl_gcm_phase_i, gcm_phase_i, start_i, key_iv_data_in_clear_i, data_out_clear_i, prng_reseed_i, mux_sel_err_i, sp_enc_err_i, lc_escalate_en_i, alert_fatal_i, key_sideload_valid_i, key_init_qe_i, iv_qe_i, data_in_qe_i, data_out_re_i, ctr_ready_i, ctr_we_i, cipher_in_ready_i, cipher_out_valid_i, cipher_crypt_i, cipher_dec_key_gen_i, cipher_prng_reseed_i, cipher_key_clear_i, cipher_data_out_clear_i, ghash_in_ready_i, ghash_out_valid_i, prng_reseed_ack_i, output_lost_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire ctrl_qe;
	wire ctrl_phase;
	wire ctrl_err_storage;
	wire [1:0] op;
	wire [5:0] mode;
	wire [1:0] cipher_op;
	wire [1:0] cipher_op_raw;
	wire sideload;
	wire [2:0] prng_reseed_rate;
	wire manual_operation;
	wire key_touch_forces_reseed;
	wire ctrl_gcm_qe;
	wire ctrl_gcm_phase;
	wire [5:0] gcm_phase;
	wire [5:0] gcm_phase_raw;
	wire start;
	wire key_iv_data_in_clear;
	wire data_out_clear;
	wire prng_reseed_in_buf;
	wire mux_sel_err;
	wire sp_enc_err;
	wire [3:0] lc_escalate_en;
	wire alert_fatal;
	wire key_sideload_valid;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe;
	wire [3:0] iv_qe;
	wire [3:0] data_in_qe;
	wire [3:0] data_out_re;
	wire ctr_ready;
	wire [7:0] ctr_we;
	wire cipher_in_ready;
	wire cipher_out_valid;
	wire cipher_crypt_in_buf;
	wire cipher_dec_key_gen_in_buf;
	wire cipher_prng_reseed_in_buf;
	wire cipher_key_clear_in_buf;
	wire cipher_data_out_clear_in_buf;
	wire ghash_in_ready;
	wire ghash_out_valid;
	wire prng_reseed_ack;
	wire output_lost_in_buf;
	assign {ctrl_qe, ctrl_phase, ctrl_err_storage, op, mode, cipher_op_raw, sideload, prng_reseed_rate, manual_operation, key_touch_forces_reseed, ctrl_gcm_qe, ctrl_gcm_phase, gcm_phase_raw, start, key_iv_data_in_clear, data_out_clear, prng_reseed_in_buf, mux_sel_err, sp_enc_err, lc_escalate_en, alert_fatal, key_sideload_valid, key_init_qe, iv_qe, data_in_qe, data_out_re, ctr_ready, ctr_we, cipher_in_ready, cipher_out_valid, cipher_crypt_in_buf, cipher_dec_key_gen_in_buf, cipher_prng_reseed_in_buf, cipher_key_clear_in_buf, cipher_data_out_clear_in_buf, ghash_in_ready, ghash_out_valid, prng_reseed_ack, output_lost_in_buf} = in_buf;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign cipher_op = sv2v_cast_63054(cipher_op_raw);
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	assign gcm_phase = sv2v_cast_92B33(gcm_phase_raw);
	wire ctrl_we;
	wire ctrl_gcm_we;
	wire gcm_init_done;
	wire alert;
	wire data_in_we;
	wire [2:0] data_out_sel;
	wire data_out_we;
	wire [2:0] data_in_prev_sel;
	wire data_in_prev_we;
	wire [2:0] state_in_sel;
	wire [2:0] add_state_in_sel;
	wire [4:0] add_state_out_sel;
	wire ctr_inc32;
	wire ctr_incr;
	wire cipher_in_valid;
	wire cipher_out_ready;
	wire cipher_crypt_out_buf;
	wire cipher_dec_key_gen_out_buf;
	wire cipher_prng_reseed_out_buf;
	wire cipher_key_clear_out_buf;
	wire cipher_data_out_clear_out_buf;
	wire ghash_in_valid;
	wire ghash_out_ready;
	wire ghash_load_hash_subkey;
	wire [4:0] key_init_sel;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we;
	wire [5:0] iv_sel;
	wire [7:0] iv_we;
	wire prng_update;
	wire prng_reseed_req;
	wire start_we;
	wire key_iv_data_in_clear_we;
	wire data_out_clear_we;
	wire prng_reseed_out_buf;
	wire prng_reseed_we;
	wire idle;
	wire idle_we;
	wire stall;
	wire stall_we;
	wire output_lost_out_buf;
	wire output_lost_we;
	wire output_valid;
	wire output_valid_we;
	wire input_ready;
	wire input_ready_we;
	aes_control_fsm #(
		.AESGCMEnable(AESGCMEnable),
		.SecMasking(SecMasking)
	) u_aes_control_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ctrl_qe_i(ctrl_qe),
		.ctrl_we_o(ctrl_we),
		.ctrl_phase_i(ctrl_phase),
		.ctrl_err_storage_i(ctrl_err_storage),
		.op_i(op),
		.mode_i(mode),
		.cipher_op_i(cipher_op),
		.sideload_i(sideload),
		.prng_reseed_rate_i(prng_reseed_rate),
		.manual_operation_i(manual_operation),
		.key_touch_forces_reseed_i(key_touch_forces_reseed),
		.ctrl_gcm_qe_i(ctrl_gcm_qe),
		.ctrl_gcm_we_o(ctrl_gcm_we),
		.ctrl_gcm_phase_i(ctrl_gcm_phase),
		.gcm_init_done_o(gcm_init_done),
		.gcm_phase_i(gcm_phase),
		.start_i(start),
		.key_iv_data_in_clear_i(key_iv_data_in_clear),
		.data_out_clear_i(data_out_clear),
		.prng_reseed_i(prng_reseed_in_buf),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err),
		.lc_escalate_en_i(lc_escalate_en),
		.alert_fatal_i(alert_fatal),
		.alert_o(alert),
		.key_sideload_valid_i(key_sideload_valid),
		.key_init_qe_i(key_init_qe),
		.iv_qe_i(iv_qe),
		.data_in_qe_i(data_in_qe),
		.data_out_re_i(data_out_re),
		.data_in_we_o(data_in_we),
		.data_out_sel_o(data_out_sel),
		.data_out_we_o(data_out_we),
		.data_in_prev_sel_o(data_in_prev_sel),
		.data_in_prev_we_o(data_in_prev_we),
		.state_in_sel_o(state_in_sel),
		.add_state_in_sel_o(add_state_in_sel),
		.add_state_out_sel_o(add_state_out_sel),
		.ctr_inc32_o(ctr_inc32),
		.ctr_incr_o(ctr_incr),
		.ctr_ready_i(ctr_ready),
		.ctr_we_i(ctr_we),
		.cipher_in_valid_o(cipher_in_valid),
		.cipher_in_ready_i(cipher_in_ready),
		.cipher_out_valid_i(cipher_out_valid),
		.cipher_out_ready_o(cipher_out_ready),
		.cipher_crypt_o(cipher_crypt_out_buf),
		.cipher_crypt_i(cipher_crypt_in_buf),
		.cipher_dec_key_gen_o(cipher_dec_key_gen_out_buf),
		.cipher_dec_key_gen_i(cipher_dec_key_gen_in_buf),
		.cipher_prng_reseed_o(cipher_prng_reseed_out_buf),
		.cipher_prng_reseed_i(cipher_prng_reseed_in_buf),
		.cipher_key_clear_o(cipher_key_clear_out_buf),
		.cipher_key_clear_i(cipher_key_clear_in_buf),
		.cipher_data_out_clear_o(cipher_data_out_clear_out_buf),
		.cipher_data_out_clear_i(cipher_data_out_clear_in_buf),
		.ghash_in_valid_o(ghash_in_valid),
		.ghash_in_ready_i(ghash_in_ready),
		.ghash_out_valid_i(ghash_out_valid),
		.ghash_out_ready_o(ghash_out_ready),
		.ghash_load_hash_subkey_o(ghash_load_hash_subkey),
		.key_init_sel_o(key_init_sel),
		.key_init_we_o(key_init_we),
		.iv_sel_o(iv_sel),
		.iv_we_o(iv_we),
		.prng_update_o(prng_update),
		.prng_reseed_req_o(prng_reseed_req),
		.prng_reseed_ack_i(prng_reseed_ack),
		.start_we_o(start_we),
		.key_iv_data_in_clear_we_o(key_iv_data_in_clear_we),
		.data_out_clear_we_o(data_out_clear_we),
		.prng_reseed_o(prng_reseed_out_buf),
		.prng_reseed_we_o(prng_reseed_we),
		.idle_o(idle),
		.idle_we_o(idle_we),
		.stall_o(stall),
		.stall_we_o(stall_we),
		.output_lost_i(output_lost_in_buf),
		.output_lost_o(output_lost_out_buf),
		.output_lost_we_o(output_lost_we),
		.output_valid_o(output_valid),
		.output_valid_we_o(output_valid_we),
		.input_ready_o(input_ready),
		.input_ready_we_o(input_ready_we)
	);
	localparam signed [31:0] NumOutBufBits = (((41 + (aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) + aes_pkg_IVSelWidth) + aes_pkg_NumSlicesCtr) + 17;
	wire [NumOutBufBits - 1:0] out;
	wire [NumOutBufBits - 1:0] out_buf;
	assign out = {ctrl_we, ctrl_gcm_we, gcm_init_done, alert, data_in_we, data_out_sel, data_out_we, data_in_prev_sel, data_in_prev_we, state_in_sel, add_state_in_sel, add_state_out_sel, ctr_inc32, ctr_incr, cipher_in_valid, cipher_out_ready, cipher_crypt_out_buf, cipher_dec_key_gen_out_buf, cipher_prng_reseed_out_buf, cipher_key_clear_out_buf, cipher_data_out_clear_out_buf, ghash_in_valid, ghash_out_ready, ghash_load_hash_subkey, key_init_sel, key_init_we, iv_sel, iv_we, prng_update, prng_reseed_req, start_we, key_iv_data_in_clear_we, data_out_clear_we, prng_reseed_out_buf, prng_reseed_we, idle, idle_we, stall, stall_we, output_lost_out_buf, output_lost_we, output_valid, output_valid_we, input_ready, input_ready_we};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {ctrl_we_o, ctrl_gcm_we_o, gcm_init_done_o, alert_o, data_in_we_o, data_out_sel_o, data_out_we_o, data_in_prev_sel_o, data_in_prev_we_o, state_in_sel_o, add_state_in_sel_o, add_state_out_sel_o, ctr_inc32_o, ctr_incr_o, cipher_in_valid_o, cipher_out_ready_o, cipher_crypt_o, cipher_dec_key_gen_o, cipher_prng_reseed_o, cipher_key_clear_o, cipher_data_out_clear_o, ghash_in_valid_o, ghash_out_ready_o, ghash_load_hash_subkey_o, key_init_sel_o, key_init_we_o, iv_sel_o, iv_we_o, prng_update_o, prng_reseed_req_o, start_we_o, key_iv_data_in_clear_we_o, data_out_clear_we_o, prng_reseed_o, prng_reseed_we_o, idle_o, idle_we_o, stall_o, stall_we_o, output_lost_o, output_lost_we_o, output_valid_o, output_valid_we_o, input_ready_o, input_ready_we_o} = out_buf;
endmodule
