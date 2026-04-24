module aes_cipher_control_fsm_n (
	clk_i,
	rst_ni,
	in_valid_ni,
	in_ready_no,
	out_valid_no,
	out_ready_ni,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_ni,
	dec_key_gen_ni,
	prng_reseed_i,
	key_clear_i,
	data_out_clear_i,
	mux_sel_err_i,
	sp_enc_err_i,
	rnd_ctr_err_i,
	op_err_i,
	alert_fatal_i,
	alert_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	state_sel_o,
	state_we_no,
	sub_bytes_en_no,
	sub_bytes_out_req_ni,
	sub_bytes_out_ack_no,
	add_rk_sel_o,
	key_full_sel_o,
	key_full_we_no,
	key_dec_sel_o,
	key_dec_we_no,
	key_expand_en_no,
	key_expand_out_req_ni,
	key_expand_out_ack_no,
	key_expand_clear_o,
	rnd_ctr_o,
	key_words_sel_o,
	round_key_sel_o,
	crypt_q_ni,
	crypt_d_no,
	dec_key_gen_q_ni,
	dec_key_gen_d_no,
	prng_reseed_q_i,
	prng_reseed_d_o,
	key_clear_q_i,
	key_clear_d_o,
	data_out_clear_q_i,
	data_out_clear_d_o
);
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_ni;
	output wire in_ready_no;
	output wire out_valid_no;
	input wire out_ready_ni;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire crypt_ni;
	input wire dec_key_gen_ni;
	input wire prng_reseed_i;
	input wire key_clear_i;
	input wire data_out_clear_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire rnd_ctr_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output wire alert_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] state_sel_o;
	output wire state_we_no;
	output wire sub_bytes_en_no;
	input wire sub_bytes_out_req_ni;
	output wire sub_bytes_out_ack_no;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] add_rk_sel_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output wire [4:0] key_full_sel_o;
	output wire key_full_we_no;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] key_dec_sel_o;
	output wire key_dec_we_no;
	output wire key_expand_en_no;
	input wire key_expand_out_req_ni;
	output wire key_expand_out_ack_no;
	output wire key_expand_clear_o;
	output wire [3:0] rnd_ctr_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output wire [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] round_key_sel_o;
	input wire crypt_q_ni;
	output wire crypt_d_no;
	input wire dec_key_gen_q_ni;
	output wire dec_key_gen_d_no;
	input wire prng_reseed_q_i;
	output wire prng_reseed_d_o;
	input wire key_clear_q_i;
	output wire key_clear_d_o;
	input wire data_out_clear_q_i;
	output wire data_out_clear_d_o;
	localparam signed [31:0] NumInBufBits = 26;
	wire [25:0] in;
	wire [25:0] in_buf;
	assign in = {in_valid_ni, out_ready_ni, cfg_valid_i, op_i, key_len_i, crypt_ni, dec_key_gen_ni, prng_reseed_i, key_clear_i, data_out_clear_i, mux_sel_err_i, sp_enc_err_i, rnd_ctr_err_i, op_err_i, alert_fatal_i, prng_reseed_ack_i, sub_bytes_out_req_ni, key_expand_out_req_ni, crypt_q_ni, dec_key_gen_q_ni, prng_reseed_q_i, key_clear_q_i, data_out_clear_q_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire in_valid_n;
	wire out_ready_n;
	wire cfg_valid;
	wire [1:0] op;
	wire [1:0] op_raw;
	wire [2:0] key_len;
	wire crypt_n;
	wire dec_key_gen_n;
	wire prng_reseed;
	wire key_clear;
	wire data_out_clear;
	wire mux_sel_err;
	wire sp_enc_err;
	wire rnd_ctr_err;
	wire op_err;
	wire alert_fatal;
	wire prng_reseed_ack;
	wire sub_bytes_out_req_n;
	wire key_expand_out_req_n;
	wire crypt_q_n;
	wire dec_key_gen_q_n;
	wire prng_reseed_q;
	wire key_clear_q;
	wire data_out_clear_q;
	assign {in_valid_n, out_ready_n, cfg_valid, op_raw, key_len, crypt_n, dec_key_gen_n, prng_reseed, key_clear, data_out_clear, mux_sel_err, sp_enc_err, rnd_ctr_err, op_err, alert_fatal, prng_reseed_ack, sub_bytes_out_req_n, key_expand_out_req_n, crypt_q_n, dec_key_gen_q_n, prng_reseed_q, key_clear_q, data_out_clear_q} = in_buf;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op = sv2v_cast_63054(op_raw);
	wire in_ready;
	wire out_valid;
	wire alert;
	wire prng_update;
	wire prng_reseed_req;
	wire [4:0] state_sel;
	wire state_we;
	wire sub_bytes_en;
	wire sub_bytes_out_ack;
	wire [4:0] add_rk_sel;
	wire [4:0] key_full_sel;
	wire key_full_we;
	wire [2:0] key_dec_sel;
	wire key_dec_we;
	wire key_expand_en;
	wire key_expand_out_ack;
	wire key_expand_clear;
	wire [4:0] key_words_sel;
	wire [2:0] round_key_sel;
	wire [3:0] rnd_ctr;
	wire crypt_d;
	wire dec_key_gen_d;
	wire prng_reseed_d;
	wire key_clear_d;
	wire data_out_clear_d;
	aes_cipher_control_fsm #(
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_cipher_control_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(~in_valid_n),
		.in_ready_o(in_ready),
		.out_valid_o(out_valid),
		.out_ready_i(~out_ready_n),
		.cfg_valid_i(cfg_valid),
		.op_i(op),
		.key_len_i(key_len),
		.crypt_i(~crypt_n),
		.dec_key_gen_i(~dec_key_gen_n),
		.prng_reseed_i(prng_reseed),
		.key_clear_i(key_clear),
		.data_out_clear_i(data_out_clear),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err),
		.rnd_ctr_err_i(rnd_ctr_err),
		.op_err_i(op_err),
		.alert_fatal_i(alert_fatal),
		.alert_o(alert),
		.prng_update_o(prng_update),
		.prng_reseed_req_o(prng_reseed_req),
		.prng_reseed_ack_i(prng_reseed_ack),
		.state_sel_o(state_sel),
		.state_we_o(state_we),
		.sub_bytes_en_o(sub_bytes_en),
		.sub_bytes_out_req_i(~sub_bytes_out_req_n),
		.sub_bytes_out_ack_o(sub_bytes_out_ack),
		.add_rk_sel_o(add_rk_sel),
		.key_full_sel_o(key_full_sel),
		.key_full_we_o(key_full_we),
		.key_dec_sel_o(key_dec_sel),
		.key_dec_we_o(key_dec_we),
		.key_expand_en_o(key_expand_en),
		.key_expand_out_req_i(~key_expand_out_req_n),
		.key_expand_out_ack_o(key_expand_out_ack),
		.key_expand_clear_o(key_expand_clear),
		.rnd_ctr_o(rnd_ctr),
		.key_words_sel_o(key_words_sel),
		.round_key_sel_o(round_key_sel),
		.crypt_q_i(~crypt_q_n),
		.crypt_d_o(crypt_d),
		.dec_key_gen_q_i(~dec_key_gen_q_n),
		.dec_key_gen_d_o(dec_key_gen_d),
		.key_clear_q_i(key_clear_q),
		.key_clear_d_o(key_clear_d),
		.prng_reseed_q_i(prng_reseed_q),
		.prng_reseed_d_o(prng_reseed_d),
		.data_out_clear_q_i(data_out_clear_q),
		.data_out_clear_d_o(data_out_clear_d)
	);
	localparam signed [31:0] NumOutBufBits = 48;
	wire [47:0] out;
	wire [47:0] out_buf;
	assign out = {~in_ready, ~out_valid, alert, prng_update, prng_reseed_req, state_sel, ~state_we, ~sub_bytes_en, ~sub_bytes_out_ack, add_rk_sel, key_full_sel, ~key_full_we, key_dec_sel, ~key_dec_we, ~key_expand_en, ~key_expand_out_ack, key_expand_clear, rnd_ctr, key_words_sel, round_key_sel, ~crypt_d, ~dec_key_gen_d, key_clear_d, prng_reseed_d, data_out_clear_d};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {in_ready_no, out_valid_no, alert_o, prng_update_o, prng_reseed_req_o, state_sel_o, state_we_no, sub_bytes_en_no, sub_bytes_out_ack_no, add_rk_sel_o, key_full_sel_o, key_full_we_no, key_dec_sel_o, key_dec_we_no, key_expand_en_no, key_expand_out_ack_no, key_expand_clear_o, rnd_ctr_o, key_words_sel_o, round_key_sel_o, crypt_d_no, dec_key_gen_d_no, key_clear_d_o, prng_reseed_d_o, data_out_clear_d_o} = out_buf;
endmodule
