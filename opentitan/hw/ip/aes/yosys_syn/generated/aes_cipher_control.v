module aes_cipher_control (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_i,
	crypt_o,
	dec_key_gen_i,
	dec_key_gen_o,
	prng_reseed_i,
	prng_reseed_o,
	key_clear_i,
	key_clear_o,
	data_out_clear_i,
	data_out_clear_o,
	mux_sel_err_i,
	sp_enc_err_i,
	op_err_i,
	alert_fatal_i,
	alert_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	state_sel_o,
	state_we_o,
	sub_bytes_en_o,
	sub_bytes_out_req_i,
	sub_bytes_out_ack_o,
	add_rk_sel_o,
	key_expand_op_o,
	key_full_sel_o,
	key_full_we_o,
	key_dec_sel_o,
	key_dec_we_o,
	key_expand_en_o,
	key_expand_out_req_i,
	key_expand_out_ack_o,
	key_expand_clear_o,
	key_expand_round_o,
	key_words_sel_o,
	round_key_sel_o
);
	reg _sv2v_0;
	parameter [0:0] CiphOpFwdOnly = 0;
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] in_valid_i;
	output wire [2:0] in_ready_o;
	output wire [2:0] out_valid_o;
	input wire [2:0] out_ready_i;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire [2:0] crypt_i;
	output wire [2:0] crypt_o;
	input wire [2:0] dec_key_gen_i;
	output wire [2:0] dec_key_gen_o;
	input wire prng_reseed_i;
	output wire prng_reseed_o;
	input wire key_clear_i;
	output wire key_clear_o;
	input wire data_out_clear_i;
	output wire data_out_clear_o;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output wire alert_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] state_sel_o;
	output wire [2:0] state_we_o;
	output wire [2:0] sub_bytes_en_o;
	input wire [2:0] sub_bytes_out_req_i;
	output wire [2:0] sub_bytes_out_ack_o;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_rk_sel_o;
	output wire [1:0] key_expand_op_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_full_sel_o;
	output wire [2:0] key_full_we_o;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] key_dec_sel_o;
	output wire [2:0] key_dec_we_o;
	output wire [2:0] key_expand_en_o;
	input wire [2:0] key_expand_out_req_i;
	output wire [2:0] key_expand_out_ack_o;
	output wire key_expand_clear_o;
	output wire [3:0] key_expand_round_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] round_key_sel_o;
	reg [3:0] rnd_ctr;
	wire [2:0] crypt_d;
	wire [2:0] crypt_q;
	wire [2:0] dec_key_gen_d;
	wire [2:0] dec_key_gen_q;
	wire prng_reseed_d;
	reg prng_reseed_q;
	wire key_clear_d;
	reg key_clear_q;
	wire data_out_clear_d;
	reg data_out_clear_q;
	wire [2:0] sub_bytes_out_req;
	wire [2:0] key_expand_out_req;
	wire [2:0] in_valid;
	wire [2:0] out_ready;
	wire [2:0] crypt;
	wire [2:0] dec_key_gen;
	wire mux_sel_err;
	reg mr_err;
	wire sp_enc_err;
	reg rnd_ctr_err;
	wire [2:0] sp_in_valid;
	wire [2:0] sp_in_ready;
	wire [2:0] sp_out_valid;
	wire [2:0] sp_out_ready;
	wire [2:0] sp_crypt;
	wire [2:0] sp_dec_key_gen;
	wire [2:0] sp_state_we;
	wire [2:0] sp_sub_bytes_en;
	wire [2:0] sp_sub_bytes_out_req;
	wire [2:0] sp_sub_bytes_out_ack;
	wire [2:0] sp_key_full_we;
	wire [2:0] sp_key_dec_we;
	wire [2:0] sp_key_expand_en;
	wire [2:0] sp_key_expand_out_req;
	wire [2:0] sp_key_expand_out_ack;
	wire [2:0] sp_crypt_d;
	wire [2:0] sp_crypt_q;
	wire [2:0] sp_dec_key_gen_d;
	wire [2:0] sp_dec_key_gen_q;
	wire [2:0] mr_alert;
	wire [2:0] mr_prng_update;
	wire [2:0] mr_prng_reseed_req;
	wire [2:0] mr_key_expand_clear;
	wire [2:0] mr_prng_reseed_d;
	wire [2:0] mr_key_clear_d;
	wire [2:0] mr_data_out_clear_d;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_StateSelWidth) - 1:0] mr_state_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_AddRKSelWidth) - 1:0] mr_add_rk_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyFullSelWidth) - 1:0] mr_key_full_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyDecSelWidth) - 1:0] mr_key_dec_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyWordsSelWidth) - 1:0] mr_key_words_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_RoundKeySelWidth) - 1:0] mr_round_key_sel;
	wire [11:0] mr_rnd_ctr;
	assign sp_in_valid = {in_valid};
	assign sp_out_ready = {out_ready};
	assign sp_crypt = {crypt};
	assign sp_dec_key_gen = {dec_key_gen};
	assign sp_sub_bytes_out_req = {sub_bytes_out_req};
	assign sp_key_expand_out_req = {key_expand_out_req};
	assign sp_crypt_q = {crypt_q};
	assign sp_dec_key_gen_q = {dec_key_gen_q};
	genvar _gv_i_1;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	localparam [2:0] aes_pkg_SP2V_LOGIC_HIGH = {sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))};
	generate
		for (_gv_i_1 = 0; _gv_i_1 < aes_pkg_Sp2VWidth; _gv_i_1 = _gv_i_1 + 1) begin : gen_fsm
			localparam i = _gv_i_1;
			if (aes_pkg_SP2V_LOGIC_HIGH[i] == 1'b1) begin : gen_fsm_p
				aes_cipher_control_fsm_p #(
					.SecMasking(SecMasking),
					.SecSBoxImpl(SecSBoxImpl)
				) u_aes_cipher_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.in_valid_i(sp_in_valid[i]),
					.in_ready_o(sp_in_ready[i]),
					.out_valid_o(sp_out_valid[i]),
					.out_ready_i(sp_out_ready[i]),
					.cfg_valid_i(cfg_valid_i),
					.op_i(op_i),
					.key_len_i(key_len_i),
					.crypt_i(sp_crypt[i]),
					.dec_key_gen_i(sp_dec_key_gen[i]),
					.prng_reseed_i(prng_reseed_i),
					.key_clear_i(key_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.rnd_ctr_err_i(rnd_ctr_err),
					.op_err_i(op_err_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.state_sel_o(mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]),
					.state_we_o(sp_state_we[i]),
					.sub_bytes_en_o(sp_sub_bytes_en[i]),
					.sub_bytes_out_req_i(sp_sub_bytes_out_req[i]),
					.sub_bytes_out_ack_o(sp_sub_bytes_out_ack[i]),
					.add_rk_sel_o(mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth]),
					.key_full_sel_o(mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth]),
					.key_full_we_o(sp_key_full_we[i]),
					.key_dec_sel_o(mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth]),
					.key_dec_we_o(sp_key_dec_we[i]),
					.key_expand_en_o(sp_key_expand_en[i]),
					.key_expand_out_req_i(sp_key_expand_out_req[i]),
					.key_expand_out_ack_o(sp_key_expand_out_ack[i]),
					.key_expand_clear_o(mr_key_expand_clear[i]),
					.rnd_ctr_o(mr_rnd_ctr[i * 4+:4]),
					.key_words_sel_o(mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth]),
					.round_key_sel_o(mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]),
					.crypt_q_i(sp_crypt_q[i]),
					.crypt_d_o(sp_crypt_d[i]),
					.dec_key_gen_q_i(sp_dec_key_gen_q[i]),
					.dec_key_gen_d_o(sp_dec_key_gen_d[i]),
					.prng_reseed_q_i(prng_reseed_q),
					.prng_reseed_d_o(mr_prng_reseed_d[i]),
					.key_clear_q_i(key_clear_q),
					.key_clear_d_o(mr_key_clear_d[i]),
					.data_out_clear_q_i(data_out_clear_q),
					.data_out_clear_d_o(mr_data_out_clear_d[i])
				);
			end
			else begin : gen_fsm_n
				aes_cipher_control_fsm_n #(
					.SecMasking(SecMasking),
					.SecSBoxImpl(SecSBoxImpl)
				) u_aes_cipher_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.in_valid_ni(sp_in_valid[i]),
					.in_ready_no(sp_in_ready[i]),
					.out_valid_no(sp_out_valid[i]),
					.out_ready_ni(sp_out_ready[i]),
					.cfg_valid_i(cfg_valid_i),
					.op_i(op_i),
					.key_len_i(key_len_i),
					.crypt_ni(sp_crypt[i]),
					.dec_key_gen_ni(sp_dec_key_gen[i]),
					.prng_reseed_i(prng_reseed_i),
					.key_clear_i(key_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.rnd_ctr_err_i(rnd_ctr_err),
					.op_err_i(op_err_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.state_sel_o(mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]),
					.state_we_no(sp_state_we[i]),
					.sub_bytes_en_no(sp_sub_bytes_en[i]),
					.sub_bytes_out_req_ni(sp_sub_bytes_out_req[i]),
					.sub_bytes_out_ack_no(sp_sub_bytes_out_ack[i]),
					.add_rk_sel_o(mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth]),
					.key_full_sel_o(mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth]),
					.key_full_we_no(sp_key_full_we[i]),
					.key_dec_sel_o(mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth]),
					.key_dec_we_no(sp_key_dec_we[i]),
					.key_expand_en_no(sp_key_expand_en[i]),
					.key_expand_out_req_ni(sp_key_expand_out_req[i]),
					.key_expand_out_ack_no(sp_key_expand_out_ack[i]),
					.key_expand_clear_o(mr_key_expand_clear[i]),
					.rnd_ctr_o(mr_rnd_ctr[i * 4+:4]),
					.key_words_sel_o(mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth]),
					.round_key_sel_o(mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]),
					.crypt_q_ni(sp_crypt_q[i]),
					.crypt_d_no(sp_crypt_d[i]),
					.dec_key_gen_q_ni(sp_dec_key_gen_q[i]),
					.dec_key_gen_d_no(sp_dec_key_gen_d[i]),
					.prng_reseed_q_i(prng_reseed_q),
					.prng_reseed_d_o(mr_prng_reseed_d[i]),
					.key_clear_q_i(key_clear_q),
					.key_clear_d_o(mr_key_clear_d[i]),
					.data_out_clear_q_i(data_out_clear_q),
					.data_out_clear_d_o(mr_data_out_clear_d[i])
				);
			end
		end
	endgenerate
	assign in_ready_o = sv2v_cast_39E4E(sp_in_ready);
	assign out_valid_o = sv2v_cast_39E4E(sp_out_valid);
	assign state_we_o = sv2v_cast_39E4E(sp_state_we);
	assign sub_bytes_en_o = sv2v_cast_39E4E(sp_sub_bytes_en);
	assign sub_bytes_out_ack_o = sv2v_cast_39E4E(sp_sub_bytes_out_ack);
	assign key_full_we_o = sv2v_cast_39E4E(sp_key_full_we);
	assign key_dec_we_o = sv2v_cast_39E4E(sp_key_dec_we);
	assign key_expand_en_o = sv2v_cast_39E4E(sp_key_expand_en);
	assign key_expand_out_ack_o = sv2v_cast_39E4E(sp_key_expand_out_ack);
	assign crypt_d = sv2v_cast_39E4E(sp_crypt_d);
	assign dec_key_gen_d = sv2v_cast_39E4E(sp_dec_key_gen_d);
	assign alert_o = |mr_alert;
	assign prng_update_o = |mr_prng_update;
	assign prng_reseed_req_o = |mr_prng_reseed_req;
	assign key_expand_clear_o = |mr_key_expand_clear;
	assign prng_reseed_d = &mr_prng_reseed_d;
	assign key_clear_d = &mr_key_clear_d;
	assign data_out_clear_d = &mr_data_out_clear_d;
	function automatic [4:0] sv2v_cast_73510;
		input reg [4:0] inp;
		sv2v_cast_73510 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7524F;
		input reg [4:0] inp;
		sv2v_cast_7524F = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7DAC1;
		input reg [4:0] inp;
		sv2v_cast_7DAC1 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_F5C01;
		input reg [2:0] inp;
		sv2v_cast_F5C01 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_21340;
		input reg [4:0] inp;
		sv2v_cast_21340 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_4C47F;
		input reg [2:0] inp;
		sv2v_cast_4C47F = inp;
	endfunction
	always @(*) begin : combine_sparse_signals
		if (_sv2v_0)
			;
		state_sel_o = sv2v_cast_73510({aes_pkg_StateSelWidth {1'b0}});
		add_rk_sel_o = sv2v_cast_7524F({aes_pkg_AddRKSelWidth {1'b0}});
		key_full_sel_o = sv2v_cast_7DAC1({aes_pkg_KeyFullSelWidth {1'b0}});
		key_dec_sel_o = sv2v_cast_F5C01({aes_pkg_KeyDecSelWidth {1'b0}});
		key_words_sel_o = sv2v_cast_21340({aes_pkg_KeyWordsSelWidth {1'b0}});
		round_key_sel_o = sv2v_cast_4C47F({aes_pkg_RoundKeySelWidth {1'b0}});
		mr_err = 1'b0;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				begin
					state_sel_o = sv2v_cast_73510({state_sel_o} | {mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]});
					add_rk_sel_o = sv2v_cast_7524F({add_rk_sel_o} | {mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth]});
					key_full_sel_o = sv2v_cast_7DAC1({key_full_sel_o} | {mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth]});
					key_dec_sel_o = sv2v_cast_F5C01({key_dec_sel_o} | {mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth]});
					key_words_sel_o = sv2v_cast_21340({key_words_sel_o} | {mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth]});
					round_key_sel_o = sv2v_cast_4C47F({round_key_sel_o} | {mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]});
				end
		end
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if ((((((state_sel_o != mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]) || (add_rk_sel_o != mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth])) || (key_full_sel_o != mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth])) || (key_dec_sel_o != mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth])) || (key_words_sel_o != mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth])) || (round_key_sel_o != mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]))
					mr_err = 1'b1;
		end
	end
	assign mux_sel_err = mux_sel_err_i | mr_err;
	always @(*) begin : combine_counter_signals
		if (_sv2v_0)
			;
		rnd_ctr = 1'sb0;
		rnd_ctr_err = 1'b0;
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				rnd_ctr = rnd_ctr | mr_rnd_ctr[i * 4+:4];
		end
		begin : sv2v_autoblock_4
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if (rnd_ctr != mr_rnd_ctr[i * 4+:4])
					rnd_ctr_err = 1'b1;
		end
	end
	always @(posedge clk_i or negedge rst_ni) begin : reg_fsm
		if (!rst_ni) begin
			prng_reseed_q <= 1'b0;
			key_clear_q <= 1'b0;
			data_out_clear_q <= 1'b0;
		end
		else begin
			prng_reseed_q <= prng_reseed_d;
			key_clear_q <= key_clear_d;
			data_out_clear_q <= data_out_clear_d;
		end
	end
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign key_expand_op_o = (((dec_key_gen_d == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) || (dec_key_gen_q == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))) || CiphOpFwdOnly ? sv2v_cast_63054(2'b01) : op_i);
	assign key_expand_round_o = rnd_ctr;
	assign crypt_o = crypt_q;
	assign dec_key_gen_o = dec_key_gen_q;
	assign prng_reseed_o = prng_reseed_q;
	assign key_clear_o = key_clear_q;
	assign data_out_clear_o = data_out_clear_q;
	wire [2:0] crypt_q_raw;
	function automatic [2:0] sv2v_cast_3;
		input reg [2:0] inp;
		sv2v_cast_3 = inp;
	endfunction
	prim_flop #(
		.Width(aes_pkg_Sp2VWidth),
		.ResetValue(sv2v_cast_3(sv2v_cast_39E4E(sv2v_cast_14B94(3'b100))))
	) u_crypt_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(crypt_d),
		.q_o(crypt_q_raw)
	);
	wire [2:0] dec_key_gen_q_raw;
	prim_flop #(
		.Width(aes_pkg_Sp2VWidth),
		.ResetValue(sv2v_cast_3(sv2v_cast_39E4E(sv2v_cast_14B94(3'b100))))
	) u_dec_key_gen_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(dec_key_gen_d),
		.q_o(dec_key_gen_q_raw)
	);
	localparam [31:0] NumSp2VSig = 8;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [7:0] sp2v_sig_err;
	assign sp2v_sig[0+:aes_pkg_Sp2VWidth] = in_valid_i;
	assign sp2v_sig[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = out_ready_i;
	assign sp2v_sig[6+:aes_pkg_Sp2VWidth] = crypt_i;
	assign sp2v_sig[9+:aes_pkg_Sp2VWidth] = dec_key_gen_i;
	assign sp2v_sig[12+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(crypt_q_raw);
	assign sp2v_sig[15+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(dec_key_gen_q_raw);
	assign sp2v_sig[18+:aes_pkg_Sp2VWidth] = sub_bytes_out_req_i;
	assign sp2v_sig[21+:aes_pkg_Sp2VWidth] = key_expand_out_req_i;
	localparam [7:0] Sp2VEnSecBuf = 8'b11000000;
	genvar _gv_i_2;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < NumSp2VSig; _gv_i_2 = _gv_i_2 + 1) begin : gen_sel_buf_chk
			localparam i = _gv_i_2;
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
	assign in_valid = sp2v_sig_chk[0+:aes_pkg_Sp2VWidth];
	assign out_ready = sp2v_sig_chk[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign crypt = sp2v_sig_chk[6+:aes_pkg_Sp2VWidth];
	assign dec_key_gen = sp2v_sig_chk[9+:aes_pkg_Sp2VWidth];
	assign crypt_q = sp2v_sig_chk[12+:aes_pkg_Sp2VWidth];
	assign dec_key_gen_q = sp2v_sig_chk[15+:aes_pkg_Sp2VWidth];
	assign sub_bytes_out_req = sp2v_sig_chk[18+:aes_pkg_Sp2VWidth];
	assign key_expand_out_req = sp2v_sig_chk[21+:aes_pkg_Sp2VWidth];
	assign sp_enc_err = |sp2v_sig_err | sp_enc_err_i;
	initial _sv2v_0 = 0;
endmodule
