module aes_control_fsm (
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
	reg _sv2v_0;
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_qe_i;
	output reg ctrl_we_o;
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
	output reg ctrl_gcm_we_o;
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
	output reg alert_o;
	input wire key_sideload_valid_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	input wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	input wire [3:0] iv_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [3:0] data_in_qe_i;
	input wire [3:0] data_out_re_i;
	output reg data_in_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_out_sel_o;
	output reg data_out_we_o;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_in_prev_sel_o;
	output reg data_in_prev_we_o;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_state_out_sel_o;
	output wire ctr_inc32_o;
	output reg ctr_incr_o;
	input wire ctr_ready_i;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [7:0] ctr_we_i;
	output reg cipher_in_valid_o;
	input wire cipher_in_ready_i;
	input wire cipher_out_valid_i;
	output reg cipher_out_ready_o;
	output reg cipher_crypt_o;
	input wire cipher_crypt_i;
	output reg cipher_dec_key_gen_o;
	input wire cipher_dec_key_gen_i;
	output reg cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output reg cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output reg cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output reg ghash_in_valid_o;
	input wire ghash_in_ready_i;
	input wire ghash_out_valid_i;
	output reg ghash_out_ready_o;
	output reg ghash_load_hash_subkey_o;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] key_init_sel_o;
	output reg [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we_o;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output reg [5:0] iv_sel_o;
	output reg [7:0] iv_we_o;
	output reg prng_update_o;
	output reg prng_reseed_req_o;
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
	localparam signed [31:0] aes_pkg_CtrlStateWidth = 6;
	reg [5:0] aes_ctrl_ns;
	wire [5:0] aes_ctrl_cs;
	reg prng_reseed_done_d;
	reg prng_reseed_done_q;
	reg key_init_clear;
	wire key_init_new;
	wire key_init_new_pulse;
	reg key_init_load;
	reg key_init_arm;
	wire key_init_ready;
	wire key_sideload;
	wire [7:0] iv_qe;
	reg iv_clear;
	reg iv_load;
	reg iv_arm;
	wire iv_ready;
	wire [3:0] data_in_new_d;
	reg [3:0] data_in_new_q;
	wire data_in_new;
	reg data_in_load;
	wire [3:0] data_out_read_d;
	reg [3:0] data_out_read_q;
	wire data_out_read;
	reg output_valid_q;
	wire cfg_valid;
	wire no_alert;
	wire cipher_op_err;
	wire start_common;
	wire start_ecb;
	wire start_cbc;
	wire start_cfb;
	wire start_ofb;
	wire start_ctr;
	wire start;
	reg start_core;
	wire finish;
	wire crypt;
	reg cipher_out_done;
	wire doing_cbc_enc;
	wire doing_cbc_dec;
	wire doing_cfb_enc;
	wire doing_cfb_dec;
	wire doing_ofb;
	wire doing_ctr;
	reg ctrl_we_q;
	wire clear_in_out_status;
	wire clear_on_fatal;
	reg start_we;
	reg key_iv_data_in_clear_we;
	reg data_out_clear_we;
	reg prng_reseed_we;
	reg idle;
	reg idle_we;
	reg stall;
	reg stall_we;
	wire output_lost;
	wire output_lost_we;
	wire output_valid;
	wire output_valid_we;
	wire input_ready;
	wire input_ready_we;
	reg ctrl_gcm_we_q;
	wire gcm_clear;
	wire gcm_init;
	wire gcm_restore;
	wire gcm_aad;
	wire gcm_txt;
	wire gcm_save;
	wire gcm_tag;
	wire start_common_gcm;
	wire start_ghash;
	wire start_gcm_init;
	wire start_gcm_hsk;
	wire start_gcm_s;
	wire start_gcm_restore;
	wire start_gcm_aad;
	wire start_gcm_txt;
	wire start_gcm_save;
	wire start_gcm_tag;
	wire doing_gcm_hsk;
	wire doing_gcm_s;
	wire doing_gcm_txt;
	reg hash_subkey_ready_d;
	reg hash_subkey_ready_q;
	reg s_ready_d;
	reg s_ready_q;
	reg doing_gcm_restore_d;
	reg doing_gcm_restore_q;
	reg doing_gcm_aad_d;
	reg doing_gcm_aad_q;
	reg doing_gcm_tag_d;
	reg doing_gcm_tag_q;
	reg doing_gcm_save_d;
	reg doing_gcm_save_q;
	reg ghash_out_done;
	wire ghash_idle;
	wire block_ctr_expr;
	reg block_ctr_decr;
	assign iv_qe = {iv_qe_i[3], iv_qe_i[3], iv_qe_i[2], iv_qe_i[2], iv_qe_i[1], iv_qe_i[1], iv_qe_i[0], iv_qe_i[0]};
	function automatic [5:0] sv2v_cast_86B6A;
		input reg [5:0] inp;
		sv2v_cast_86B6A = inp;
	endfunction
	assign cfg_valid = ~((mode_i == sv2v_cast_86B6A(6'b111111)) | ctrl_err_storage_i);
	assign no_alert = ~alert_fatal_i;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign cipher_op_err = ~((cipher_op_i == sv2v_cast_63054(2'b01)) || (cipher_op_i == sv2v_cast_63054(2'b10)));
	assign start_common = (key_init_ready & data_in_new) & (sideload_i ? key_sideload_valid_i : 1'b1);
	assign start_ecb = mode_i == sv2v_cast_86B6A(6'b000001);
	assign start_cbc = (mode_i == sv2v_cast_86B6A(6'b000010)) & iv_ready;
	assign start_cfb = (mode_i == sv2v_cast_86B6A(6'b000100)) & iv_ready;
	assign start_ofb = (mode_i == sv2v_cast_86B6A(6'b001000)) & iv_ready;
	assign start_ctr = ((mode_i == sv2v_cast_86B6A(6'b010000)) & iv_ready) & ctr_ready_i;
	assign start = (cfg_valid & no_alert) & (manual_operation_i ? start_i : (((((start_ecb | start_cbc) | start_cfb) | start_ofb) | start_ctr) & start_common) | (start_gcm_init | start_gcm_txt));
	assign finish = (cfg_valid & no_alert) & (manual_operation_i ? 1'b1 : ~output_valid_q | data_out_read);
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	assign gcm_init = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b000001));
	assign gcm_restore = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b000010));
	assign gcm_aad = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b000100));
	assign gcm_txt = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b001000));
	assign gcm_save = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b010000));
	assign gcm_tag = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b100000));
	assign start_common_gcm = key_init_ready & (sideload_i ? key_sideload_valid_i : 1'b1);
	assign start_gcm_hsk = (((gcm_init & ~gcm_clear) & ~hash_subkey_ready_q) & iv_ready) & ctr_ready_i;
	assign start_gcm_s = (((gcm_init & ~gcm_clear) & ~s_ready_q) & iv_ready) & ctr_ready_i;
	assign start_gcm_init = (start_gcm_hsk | start_gcm_s) & start_common_gcm;
	assign start_gcm_restore = ((gcm_restore & cfg_valid) & no_alert) & (manual_operation_i ? start_i : ((iv_ready & ctr_ready_i) & data_in_new) & start_common_gcm);
	assign start_gcm_aad = ((gcm_aad & cfg_valid) & no_alert) & (manual_operation_i ? start_i : (iv_ready & ctr_ready_i) & start_common);
	assign start_gcm_txt = ((gcm_txt & iv_ready) & ctr_ready_i) & start_common;
	assign start_gcm_save = ((gcm_save & cfg_valid) & no_alert) & (manual_operation_i ? start_i : hash_subkey_ready_q & s_ready_q);
	assign start_gcm_tag = ((gcm_tag & cfg_valid) & no_alert) & (manual_operation_i ? start_i : (hash_subkey_ready_q & s_ready_q) & data_in_new);
	assign start_ghash = ((start_gcm_restore | start_gcm_aad) | start_gcm_save) | start_gcm_tag;
	assign ghash_idle = ghash_in_ready_i & ~start_ghash;
	assign ctr_inc32_o = mode_i == sv2v_cast_86B6A(6'b100000);
	assign crypt = cipher_crypt_o | cipher_crypt_i;
	assign doing_cbc_enc = ((mode_i == sv2v_cast_86B6A(6'b000010)) && (op_i == sv2v_cast_63054(2'b01))) & crypt;
	assign doing_cbc_dec = ((mode_i == sv2v_cast_86B6A(6'b000010)) && (op_i == sv2v_cast_63054(2'b10))) & crypt;
	assign doing_cfb_enc = ((mode_i == sv2v_cast_86B6A(6'b000100)) && (op_i == sv2v_cast_63054(2'b01))) & crypt;
	assign doing_cfb_dec = ((mode_i == sv2v_cast_86B6A(6'b000100)) && (op_i == sv2v_cast_63054(2'b10))) & crypt;
	assign doing_ofb = (mode_i == sv2v_cast_86B6A(6'b001000)) & crypt;
	assign doing_ctr = (mode_i == sv2v_cast_86B6A(6'b010000)) & crypt;
	assign doing_gcm_hsk = (gcm_init & ~hash_subkey_ready_q) & crypt;
	assign doing_gcm_s = (gcm_init & hash_subkey_ready_q) & crypt;
	assign doing_gcm_txt = gcm_txt & crypt;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_loose = sv2v_cast_BE429(4'b1010) != val;
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
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
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_32B2A;
		input reg [4:0] inp;
		sv2v_cast_32B2A = inp;
	endfunction
	function automatic [4:0] sv2v_cast_A4E58;
		input reg [4:0] inp;
		sv2v_cast_A4E58 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_91DD0;
		input reg [5:0] inp;
		sv2v_cast_91DD0 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_CDC2F;
		input reg [5:0] inp;
		sv2v_cast_CDC2F = inp;
	endfunction
	function automatic [2:0] sv2v_cast_D1B5B;
		input reg [2:0] inp;
		sv2v_cast_D1B5B = inp;
	endfunction
	function automatic [5:0] sv2v_cast_69C80;
		input reg [5:0] inp;
		sv2v_cast_69C80 = inp;
	endfunction
	always @(*) begin : aes_ctrl_fsm
		if (_sv2v_0)
			;
		data_in_prev_sel_o = sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100));
		data_in_prev_we_o = 1'b0;
		state_in_sel_o = sv2v_cast_5FB3A(sv2v_cast_14B94(3'b100));
		add_state_in_sel_o = sv2v_cast_06ECC(sv2v_cast_14B94(3'b011));
		add_state_out_sel_o = sv2v_cast_32B2A(sv2v_cast_19785(5'b01110));
		ctr_incr_o = 1'b0;
		cipher_in_valid_o = 1'b0;
		cipher_out_ready_o = 1'b0;
		cipher_out_done = 1'b0;
		cipher_crypt_o = 1'b0;
		cipher_dec_key_gen_o = 1'b0;
		cipher_prng_reseed_o = 1'b0;
		cipher_key_clear_o = 1'b0;
		cipher_data_out_clear_o = 1'b0;
		ghash_in_valid_o = 1'b0;
		ghash_out_ready_o = 1'b0;
		ghash_out_done = 1'b0;
		ghash_load_hash_subkey_o = ~hash_subkey_ready_q;
		key_init_sel_o = (sideload_i ? sv2v_cast_A4E58(sv2v_cast_19785(5'b11000)) : sv2v_cast_A4E58(sv2v_cast_19785(5'b01110)));
		key_init_we_o = {aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey {1'b0}};
		iv_sel_o = sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101));
		iv_we_o = {aes_pkg_NumSlicesCtr {1'b0}};
		ctrl_we_o = 1'b0;
		ctrl_gcm_we_o = 1'b0;
		alert_o = 1'b0;
		prng_update_o = 1'b0;
		prng_reseed_req_o = 1'b0;
		start_we = 1'b0;
		key_iv_data_in_clear_we = 1'b0;
		data_out_clear_we = 1'b0;
		prng_reseed_we = 1'b0;
		idle = 1'b0;
		idle_we = 1'b0;
		stall = 1'b0;
		stall_we = 1'b0;
		data_in_load = 1'b0;
		data_in_we_o = 1'b0;
		data_out_sel_o = sv2v_cast_D1B5B(sv2v_cast_14B94(3'b011));
		data_out_we_o = 1'b0;
		key_init_clear = 1'b0;
		key_init_load = 1'b0;
		key_init_arm = 1'b0;
		iv_clear = 1'b0;
		iv_load = 1'b0;
		iv_arm = 1'b0;
		block_ctr_decr = 1'b0;
		aes_ctrl_ns = aes_ctrl_cs;
		start_core = 1'b0;
		prng_reseed_done_d = prng_reseed_done_q | prng_reseed_ack_i;
		hash_subkey_ready_d = hash_subkey_ready_q;
		s_ready_d = s_ready_q;
		doing_gcm_restore_d = doing_gcm_restore_q;
		doing_gcm_aad_d = doing_gcm_aad_q;
		doing_gcm_tag_d = doing_gcm_tag_q;
		doing_gcm_save_d = doing_gcm_save_q;
		(* full_case, parallel_case *)
		case (aes_ctrl_cs)
			sv2v_cast_69C80(6'b001001): begin
				start_core = ((start | key_iv_data_in_clear_i) | data_out_clear_i) | prng_reseed_i;
				idle = ~(start_core | (prng_reseed_o & prng_reseed_we_o)) & ghash_idle;
				idle_we = 1'b1;
				start_we = start_i & ((mode_i == sv2v_cast_86B6A(6'b111111)) | ~manual_operation_i);
				if (!start_core) begin
					key_init_we_o = (sideload_i ? {aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey {key_sideload}} : key_init_qe_i);
					iv_we_o = iv_qe;
				end
				if (!start_core && !start_ghash) begin
					ctrl_we_o = (!ctrl_err_storage_i ? ctrl_qe_i : 1'b0);
					ctrl_gcm_we_o = (!ctrl_err_storage_i ? ctrl_gcm_qe_i : 1'b0);
					key_init_clear = ctrl_we_o;
					iv_clear = ctrl_we_o | (gcm_init & gcm_clear);
					if (ctrl_we_o | gcm_clear) begin
						hash_subkey_ready_d = 1'b0;
						s_ready_d = 1'b0;
					end
				end
				if (prng_reseed_i) begin
					if (!SecMasking) begin
						prng_reseed_done_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b010000);
					end
					else begin
						cipher_prng_reseed_o = 1'b1;
						cipher_in_valid_o = 1'b1;
						if (cipher_in_ready_i) begin
							prng_reseed_done_d = 1'b0;
							aes_ctrl_ns = sv2v_cast_69C80(6'b010000);
						end
					end
				end
				else if (key_iv_data_in_clear_i || data_out_clear_i) begin
					prng_update_o = 1'b1;
					cipher_key_clear_o = key_iv_data_in_clear_i;
					cipher_data_out_clear_o = data_out_clear_i;
					cipher_in_valid_o = 1'b1;
					if (cipher_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b111101);
				end
				else if ((start_gcm_restore || start_gcm_aad) || start_gcm_tag) begin
					data_in_prev_sel_o = sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011));
					data_in_prev_we_o = 1'b1;
					doing_gcm_restore_d = start_gcm_restore;
					doing_gcm_aad_d = start_gcm_aad;
					doing_gcm_tag_d = start_gcm_tag;
					start_we = 1'b1;
					aes_ctrl_ns = sv2v_cast_69C80(6'b100011);
				end
				else if (start_gcm_save) begin
					prng_update_o = 1'b1;
					doing_gcm_save_d = 1'b1;
					start_we = 1'b1;
					aes_ctrl_ns = sv2v_cast_69C80(6'b111101);
				end
				else if (start) begin
					cipher_crypt_o = 1'b1;
					cipher_prng_reseed_o = block_ctr_expr;
					cipher_dec_key_gen_o = (cipher_op_i == sv2v_cast_63054(2'b10) ? key_init_new : 1'b0);
					data_in_prev_sel_o = (doing_cbc_dec ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_cfb_enc ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_cfb_dec ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_ofb ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_ctr ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_gcm_txt ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100))))))));
					data_in_prev_we_o = ((((doing_cbc_dec | doing_cfb_enc) | doing_cfb_dec) | doing_ofb) | doing_ctr) | doing_gcm_txt;
					state_in_sel_o = (doing_cfb_enc ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_cfb_dec ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_ofb ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_ctr ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_gcm_hsk ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_gcm_s ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_gcm_txt ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : sv2v_cast_5FB3A(sv2v_cast_14B94(3'b100)))))))));
					add_state_in_sel_o = (doing_cbc_enc ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_cfb_enc ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_cfb_dec ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_ofb ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_ctr ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_gcm_s ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_gcm_txt ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : sv2v_cast_06ECC(sv2v_cast_14B94(3'b011)))))))));
					cipher_in_valid_o = 1'b1;
					if (cipher_in_ready_i) begin
						start_we = ~cipher_dec_key_gen_o;
						aes_ctrl_ns = sv2v_cast_69C80(6'b100011);
					end
				end
			end
			sv2v_cast_69C80(6'b100011): begin
				key_init_load = cipher_dec_key_gen_i;
				key_init_arm = ~cipher_dec_key_gen_i;
				iv_load = ~cipher_dec_key_gen_i & ((((((((doing_cbc_enc | doing_cbc_dec) | doing_cfb_enc) | doing_cfb_dec) | doing_ofb) | doing_ctr) | doing_gcm_hsk) | doing_gcm_s) | doing_gcm_txt);
				data_in_load = ~cipher_dec_key_gen_i;
				ctr_incr_o = ((doing_ctr | doing_gcm_hsk) | doing_gcm_s) | doing_gcm_txt;
				prng_update_o = !cipher_dec_key_gen_i;
				aes_ctrl_ns = (!cipher_dec_key_gen_i ? sv2v_cast_69C80(6'b111101) : sv2v_cast_69C80(6'b100100));
			end
			sv2v_cast_69C80(6'b111101): begin
				iv_sel_o = (((doing_ctr || doing_gcm_hsk) || doing_gcm_s) || doing_gcm_txt ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101)));
				iv_we_o = (((doing_ctr || doing_gcm_hsk) || doing_gcm_s) || doing_gcm_txt ? ctr_we_i : {aes_pkg_NumSlicesCtr {1'b0}});
				if (cipher_crypt_i) begin
					if ((doing_gcm_hsk || doing_gcm_s) || doing_gcm_txt) begin
						if (ghash_in_ready_i)
							aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
					end
					else
						aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
				end
				else if (doing_gcm_restore_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i) begin
						doing_gcm_restore_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else if (doing_gcm_aad_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i) begin
						doing_gcm_aad_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else if (doing_gcm_save_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
				end
				else if (doing_gcm_tag_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
				end
				else if (((key_iv_data_in_clear_i || data_out_clear_i) || cipher_key_clear_i) || cipher_data_out_clear_i) begin
					if (ghash_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b111010);
				end
				else
					aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
			end
			sv2v_cast_69C80(6'b010000): begin
				prng_reseed_req_o = ~prng_reseed_done_q;
				if (!SecMasking) begin
					if (prng_reseed_done_q) begin
						prng_reseed_we = 1'b1;
						prng_reseed_done_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else begin
					cipher_out_ready_o = prng_reseed_done_q;
					if (cipher_out_ready_o && cipher_out_valid_i) begin
						prng_reseed_we = 1'b1;
						prng_reseed_done_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
			end
			sv2v_cast_69C80(6'b100100):
				if (cipher_dec_key_gen_i) begin
					cipher_out_ready_o = 1'b1;
					if (cipher_out_valid_i) begin
						block_ctr_decr = 1'b1;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else if (doing_gcm_save_q || doing_gcm_tag_q) begin
					ghash_out_ready_o = finish;
					ghash_out_done = (((finish & ghash_out_valid_i) & ~mux_sel_err_i) & ~sp_enc_err_i) & ~cipher_op_err;
					stall = ~finish & ghash_out_valid_i;
					stall_we = 1'b1;
					data_out_sel_o = sv2v_cast_D1B5B(sv2v_cast_14B94(3'b100));
					if (ghash_out_done) begin
						doing_gcm_save_d = 1'b0;
						doing_gcm_tag_d = 1'b0;
						hash_subkey_ready_d = 1'b0;
						s_ready_d = 1'b0;
						data_out_we_o = 1'b1;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else begin
					cipher_out_ready_o = finish;
					cipher_out_done = (((finish & cipher_out_valid_i) & ~mux_sel_err_i) & ~sp_enc_err_i) & ~cipher_op_err;
					stall = ~finish & cipher_out_valid_i;
					stall_we = 1'b1;
					add_state_out_sel_o = (doing_cbc_dec ? sv2v_cast_32B2A(sv2v_cast_19785(5'b11000)) : (doing_cfb_enc ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_cfb_dec ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_ofb ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_ctr ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_gcm_txt ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : sv2v_cast_32B2A(sv2v_cast_19785(5'b01110))))))));
					iv_sel_o = (doing_cbc_enc ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b110000)) : (doing_cbc_dec ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b000011)) : (doing_cfb_enc ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b110000)) : (doing_cfb_dec ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b000011)) : (doing_ofb ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b001000)) : (doing_ctr ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : (doing_gcm_hsk ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : (doing_gcm_s ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : (doing_gcm_txt ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101)))))))))));
					iv_we_o = ((((doing_cbc_enc || doing_cbc_dec) || doing_cfb_enc) || doing_cfb_dec) || doing_ofb ? {aes_pkg_NumSlicesCtr {cipher_out_done}} : (doing_ctr ? ctr_we_i : (doing_gcm_hsk ? ctr_we_i : (doing_gcm_s ? ctr_we_i : (doing_gcm_txt ? ctr_we_i : {aes_pkg_NumSlicesCtr {1'b0}})))));
					iv_arm = ((((((((doing_cbc_enc | doing_cbc_dec) | doing_cfb_enc) | doing_cfb_dec) | doing_ofb) | doing_ctr) | doing_gcm_hsk) | doing_gcm_s) | doing_gcm_txt) & cipher_out_done;
					if (cipher_out_done) begin
						block_ctr_decr = 1'b1;
						data_out_we_o = (doing_gcm_hsk | doing_gcm_s ? 1'b0 : 1'b1);
						ghash_in_valid_o = ((doing_gcm_hsk | doing_gcm_s) | doing_gcm_txt ? 1'b1 : 1'b0);
						hash_subkey_ready_d = (doing_gcm_hsk ? 1'b1 : hash_subkey_ready_q);
						s_ready_d = (doing_gcm_s ? 1'b1 : s_ready_q);
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
			sv2v_cast_69C80(6'b111010): begin
				if (key_iv_data_in_clear_i) begin
					key_init_sel_o = sv2v_cast_A4E58(sv2v_cast_19785(5'b00001));
					key_init_we_o = {aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey {1'b1}};
					key_init_clear = 1'b1;
					iv_sel_o = sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b100101));
					iv_we_o = {aes_pkg_NumSlicesCtr {1'b1}};
					iv_clear = 1'b1;
					data_in_we_o = 1'b1;
					data_in_prev_sel_o = sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100));
					data_in_prev_we_o = 1'b1;
				end
				aes_ctrl_ns = sv2v_cast_69C80(6'b001110);
			end
			sv2v_cast_69C80(6'b001110): begin
				cipher_out_ready_o = 1'b1;
				if (cipher_out_valid_i) begin
					if (cipher_key_clear_i) begin
						key_iv_data_in_clear_we = 1'b1;
						ghash_in_valid_o = 1'b1;
					end
					if (cipher_data_out_clear_i) begin
						data_out_we_o = (~mux_sel_err_i & ~sp_enc_err_i) & ~cipher_op_err;
						data_out_clear_we = 1'b1;
					end
					aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
				end
			end
			sv2v_cast_69C80(6'b010111): alert_o = 1'b1;
			default: begin
				aes_ctrl_ns = sv2v_cast_69C80(6'b010111);
				alert_o = 1'b1;
			end
		endcase
		if (((mux_sel_err_i || sp_enc_err_i) || cipher_op_err) || lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			aes_ctrl_ns = sv2v_cast_69C80(6'b010111);
	end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_CtrlStateWidth),
		.ResetValue(sv2v_cast_69C80(6'b001001)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_ctrl_ns),
		.state_o(aes_ctrl_cs)
	);
	always @(posedge clk_i or negedge rst_ni) begin : reg_fsm
		if (!rst_ni)
			prng_reseed_done_q <= 1'b0;
		else
			prng_reseed_done_q <= prng_reseed_done_d;
	end
	generate
		if (AESGCMEnable) begin : gen_reg_fsm_gcm
			always @(posedge clk_i or negedge rst_ni) begin : reg_fsm_gcm
				if (!rst_ni) begin
					hash_subkey_ready_q <= 1'b0;
					s_ready_q <= 1'b0;
					doing_gcm_restore_q <= 1'b0;
					doing_gcm_aad_q <= 1'b0;
					doing_gcm_save_q <= 1'b0;
					doing_gcm_tag_q <= 1'b0;
				end
				else begin
					hash_subkey_ready_q <= hash_subkey_ready_d;
					s_ready_q <= s_ready_d;
					doing_gcm_restore_q <= doing_gcm_restore_d;
					doing_gcm_aad_q <= doing_gcm_aad_d;
					doing_gcm_save_q <= doing_gcm_save_d;
					doing_gcm_tag_q <= doing_gcm_tag_d;
				end
			end
		end
		else begin : gen_no_reg_fsm_gcm
			wire [1:1] sv2v_tmp_B1E22;
			assign sv2v_tmp_B1E22 = 1'b0;
			always @(*) hash_subkey_ready_q = sv2v_tmp_B1E22;
			wire [1:1] sv2v_tmp_314E5;
			assign sv2v_tmp_314E5 = 1'b0;
			always @(*) s_ready_q = sv2v_tmp_314E5;
			wire [1:1] sv2v_tmp_C3BC2;
			assign sv2v_tmp_C3BC2 = 1'b0;
			always @(*) doing_gcm_restore_q = sv2v_tmp_C3BC2;
			wire [1:1] sv2v_tmp_E7982;
			assign sv2v_tmp_E7982 = 1'b0;
			always @(*) doing_gcm_aad_q = sv2v_tmp_E7982;
			wire [1:1] sv2v_tmp_38FC6;
			assign sv2v_tmp_38FC6 = 1'b0;
			always @(*) doing_gcm_save_q = sv2v_tmp_38FC6;
			wire [1:1] sv2v_tmp_43494;
			assign sv2v_tmp_43494 = 1'b0;
			always @(*) doing_gcm_tag_q = sv2v_tmp_43494;
			wire unused_gcm_d;
			assign unused_gcm_d = ^{hash_subkey_ready_d, s_ready_d, doing_gcm_restore_d, doing_gcm_aad_d, doing_gcm_save_d, doing_gcm_tag_d};
		end
	endgenerate
	assign key_sideload = ((sideload_i & key_sideload_valid_i) & ctrl_we_q) & ~ctrl_phase_i;
	aes_reg_status #(.Width(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) u_reg_status_key_init(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(key_init_we_o),
		.use_i(key_init_load),
		.clear_i(key_init_clear),
		.arm_i(key_init_arm),
		.new_o(key_init_new),
		.new_pulse_o(key_init_new_pulse),
		.clean_o(key_init_ready)
	);
	aes_reg_status #(.Width(aes_pkg_NumSlicesCtr)) u_reg_status_iv(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(iv_we_o),
		.use_i(iv_load),
		.clear_i(iv_clear),
		.arm_i(iv_arm),
		.new_o(iv_ready),
		.new_pulse_o(),
		.clean_o()
	);
	always @(posedge clk_i or negedge rst_ni) begin : reg_ctrl_we
		if (!rst_ni)
			ctrl_we_q <= 1'b0;
		else
			ctrl_we_q <= ctrl_we_o;
	end
	assign clear_in_out_status = ctrl_we_q;
	assign data_in_new_d = ((data_in_load || &data_in_qe_i) || clear_in_out_status ? {4 {1'sb0}} : data_in_new_q | data_in_qe_i);
	assign data_in_new = &data_in_new_d;
	assign data_out_read_d = (&data_out_read_q || clear_in_out_status ? {4 {1'sb0}} : data_out_read_q | data_out_re_i);
	assign data_out_read = &data_out_read_d;
	always @(posedge clk_i or negedge rst_ni) begin : reg_edge_detection
		if (!rst_ni) begin
			data_in_new_q <= 1'sb0;
			data_out_read_q <= 1'sb0;
		end
		else begin
			data_in_new_q <= data_in_new_d;
			data_out_read_q <= data_out_read_d;
		end
	end
	assign input_ready = ~data_in_new;
	assign input_ready_we = ((data_in_new | data_in_load) | data_in_we_o) | clear_in_out_status;
	assign output_valid = data_out_we_o & ~data_out_clear_we;
	assign output_valid_we = ((data_out_we_o | data_out_read) | data_out_clear_we) | clear_in_out_status;
	always @(posedge clk_i or negedge rst_ni) begin : reg_output_valid
		if (!rst_ni)
			output_valid_q <= 1'sb0;
		else if (output_valid_we)
			output_valid_q <= output_valid;
	end
	assign output_lost = (ctrl_we_o ? 1'b0 : (output_lost_i ? 1'b1 : output_valid_q & ~data_out_read));
	assign output_lost_we = ctrl_we_o | data_out_we_o;
	assign gcm_clear = ((gcm_phase_i == sv2v_cast_92B33(6'b000001)) & ctrl_gcm_we_q) & ~ctrl_gcm_phase_i;
	generate
		if (AESGCMEnable) begin : gen_reg_ctrl_gcm_we
			always @(posedge clk_i or negedge rst_ni) begin : reg_ctrl_gcm_we
				if (!rst_ni)
					ctrl_gcm_we_q <= 1'b0;
				else
					ctrl_gcm_we_q <= ctrl_gcm_we_o;
			end
		end
		else begin : gen_no_reg_ctrl_gcm_we
			wire [1:1] sv2v_tmp_81535;
			assign sv2v_tmp_81535 = 1'b1;
			always @(*) ctrl_gcm_we_q = sv2v_tmp_81535;
		end
	endgenerate
	assign gcm_init_done_o = hash_subkey_ready_q & s_ready_q;
	localparam [0:0] aes_pkg_ClearStatusOnFatalAlert = 1'b0;
	assign clear_on_fatal = (aes_pkg_ClearStatusOnFatalAlert ? alert_fatal_i : 1'b0);
	assign idle_o = (clear_on_fatal ? 1'b0 : idle);
	assign idle_we_o = (clear_on_fatal ? 1'b1 : idle_we);
	assign stall_o = (clear_on_fatal ? 1'b0 : stall);
	assign stall_we_o = (clear_on_fatal ? 1'b1 : stall_we);
	assign output_lost_o = (clear_on_fatal ? 1'b0 : output_lost);
	assign output_lost_we_o = (clear_on_fatal ? 1'b1 : output_lost_we);
	assign output_valid_o = (clear_on_fatal ? 1'b0 : output_valid);
	assign output_valid_we_o = (clear_on_fatal ? 1'b1 : output_valid_we);
	assign input_ready_o = (clear_on_fatal ? 1'b0 : input_ready);
	assign input_ready_we_o = (clear_on_fatal ? 1'b1 : input_ready_we);
	assign start_we_o = (clear_on_fatal ? 1'b1 : start_we);
	assign key_iv_data_in_clear_we_o = (clear_on_fatal ? 1'b1 : key_iv_data_in_clear_we);
	assign data_out_clear_we_o = (clear_on_fatal ? 1'b1 : data_out_clear_we);
	assign prng_reseed_o = (clear_on_fatal ? 1'b0 : (key_init_new_pulse ? 1'b1 : 1'b0));
	assign prng_reseed_we_o = (clear_on_fatal ? 1'b1 : (key_init_new_pulse ? key_touch_forces_reseed_i : prng_reseed_we));
	localparam [31:0] aes_pkg_BlockCtrWidth = 13;
	function automatic [2:0] sv2v_cast_421A6;
		input reg [2:0] inp;
		sv2v_cast_421A6 = inp;
	endfunction
	function automatic signed [12:0] sv2v_cast_849AA_signed;
		input reg signed [12:0] inp;
		sv2v_cast_849AA_signed = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_block_ctr
			wire block_ctr_set;
			wire [12:0] block_ctr_d;
			reg [12:0] block_ctr_q;
			wire [12:0] block_ctr_set_val;
			wire [12:0] block_ctr_decr_val;
			assign block_ctr_expr = block_ctr_q == {13 {1'sb0}};
			assign block_ctr_set = ctrl_we_q | (block_ctr_decr & (block_ctr_expr | cipher_prng_reseed_i));
			assign block_ctr_set_val = (prng_reseed_rate_i == sv2v_cast_421A6(3'b001) ? {13 {1'sb0}} : (prng_reseed_rate_i == sv2v_cast_421A6(3'b010) ? sv2v_cast_849AA_signed(63) : (prng_reseed_rate_i == sv2v_cast_421A6(3'b100) ? sv2v_cast_849AA_signed(8191) : {13 {1'sb0}})));
			assign block_ctr_decr_val = block_ctr_q - sv2v_cast_849AA_signed(1);
			assign block_ctr_d = (block_ctr_set ? block_ctr_set_val : (block_ctr_decr ? block_ctr_decr_val : block_ctr_q));
			always @(posedge clk_i or negedge rst_ni) begin : reg_block_ctr
				if (!rst_ni)
					block_ctr_q <= 1'sb0;
				else
					block_ctr_q <= block_ctr_d;
			end
		end
		else begin : gen_no_block_ctr
			assign block_ctr_expr = 1'b0;
			wire unused_block_ctr_decr;
			wire [2:0] unused_prng_reseed_rate;
			wire unused_cipher_prng_reseed;
			assign unused_block_ctr_decr = block_ctr_decr;
			assign unused_prng_reseed_rate = prng_reseed_rate_i;
			assign unused_cipher_prng_reseed = cipher_prng_reseed_i;
		end
	endgenerate
	localparam signed [31:0] AesControlFsmSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesControlFsmSecMaskingNonDefault - 1:0] sv2v_cast_2E649;
		input reg [AesControlFsmSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_2E649 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_2E649(1'b1);
	end
	initial _sv2v_0 = 0;
endmodule
