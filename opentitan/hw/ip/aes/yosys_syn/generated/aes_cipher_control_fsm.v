module aes_cipher_control_fsm (
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
	dec_key_gen_i,
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
	state_we_o,
	sub_bytes_en_o,
	sub_bytes_out_req_i,
	sub_bytes_out_ack_o,
	add_rk_sel_o,
	key_full_sel_o,
	key_full_we_o,
	key_dec_sel_o,
	key_dec_we_o,
	key_expand_en_o,
	key_expand_out_req_i,
	key_expand_out_ack_o,
	key_expand_clear_o,
	rnd_ctr_o,
	key_words_sel_o,
	round_key_sel_o,
	crypt_q_i,
	crypt_d_o,
	dec_key_gen_q_i,
	dec_key_gen_d_o,
	prng_reseed_q_i,
	prng_reseed_d_o,
	key_clear_q_i,
	key_clear_d_o,
	data_out_clear_q_i,
	data_out_clear_d_o
);
	reg _sv2v_0;
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_i;
	output reg in_ready_o;
	output reg out_valid_o;
	input wire out_ready_i;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire crypt_i;
	input wire dec_key_gen_i;
	input wire prng_reseed_i;
	input wire key_clear_i;
	input wire data_out_clear_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire rnd_ctr_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output reg alert_o;
	output reg prng_update_o;
	output reg prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] state_sel_o;
	output reg state_we_o;
	output reg sub_bytes_en_o;
	input wire sub_bytes_out_req_i;
	output reg sub_bytes_out_ack_o;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_rk_sel_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_full_sel_o;
	output reg key_full_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] key_dec_sel_o;
	output reg key_dec_we_o;
	output reg key_expand_en_o;
	input wire key_expand_out_req_i;
	output reg key_expand_out_ack_o;
	output reg key_expand_clear_o;
	output wire [3:0] rnd_ctr_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] round_key_sel_o;
	input wire crypt_q_i;
	output reg crypt_d_o;
	input wire dec_key_gen_q_i;
	output reg dec_key_gen_d_o;
	input wire prng_reseed_q_i;
	output reg prng_reseed_d_o;
	input wire key_clear_q_i;
	output reg key_clear_d_o;
	input wire data_out_clear_q_i;
	output reg data_out_clear_d_o;
	wire unused_cfg_valid;
	assign unused_cfg_valid = cfg_valid_i;
	generate
		if (!SecMasking) begin : gen_unused_prng_reseed
			wire unused_prng_reseed;
			assign unused_prng_reseed = prng_reseed_i;
		end
	endgenerate
	localparam signed [31:0] aes_pkg_CipherCtrlStateWidth = 6;
	reg [5:0] aes_cipher_ctrl_ns;
	wire [5:0] aes_cipher_ctrl_cs;
	reg advance;
	reg [2:0] cyc_ctr_d;
	reg [2:0] cyc_ctr_q;
	wire cyc_ctr_expr;
	reg prng_reseed_done_d;
	reg prng_reseed_done_q;
	reg [3:0] rnd_ctr_d;
	reg [3:0] rnd_ctr_q;
	reg [3:0] num_rounds_d;
	reg [3:0] num_rounds_q;
	wire [3:0] num_rounds_regular;
	assign num_rounds_regular = num_rounds_q - 4'd1;
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_73510;
		input reg [4:0] inp;
		sv2v_cast_73510 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7524F;
		input reg [4:0] inp;
		sv2v_cast_7524F = inp;
	endfunction
	function automatic [4:0] sv2v_cast_26872;
		input reg [4:0] inp;
		sv2v_cast_26872 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7DAC1;
		input reg [4:0] inp;
		sv2v_cast_7DAC1 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
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
	function automatic [5:0] sv2v_cast_16A1F;
		input reg [5:0] inp;
		sv2v_cast_16A1F = inp;
	endfunction
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	always @(*) begin : aes_cipher_ctrl_fsm
		if (_sv2v_0)
			;
		in_ready_o = 1'b0;
		out_valid_o = 1'b0;
		prng_update_o = 1'b0;
		prng_reseed_req_o = 1'b0;
		state_sel_o = sv2v_cast_73510(sv2v_cast_19785(5'b11000));
		state_we_o = 1'b0;
		add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b11000));
		sub_bytes_en_o = 1'b0;
		sub_bytes_out_ack_o = 1'b0;
		key_full_sel_o = sv2v_cast_7DAC1(sv2v_cast_26872(5'b00001));
		key_full_we_o = 1'b0;
		key_dec_sel_o = sv2v_cast_F5C01(sv2v_cast_14B94(3'b011));
		key_dec_we_o = 1'b0;
		key_expand_en_o = 1'b0;
		key_expand_out_ack_o = 1'b0;
		key_expand_clear_o = 1'b0;
		key_words_sel_o = sv2v_cast_21340(sv2v_cast_26872(5'b10111));
		round_key_sel_o = sv2v_cast_4C47F(sv2v_cast_14B94(3'b011));
		aes_cipher_ctrl_ns = aes_cipher_ctrl_cs;
		num_rounds_d = num_rounds_q;
		rnd_ctr_d = rnd_ctr_q;
		crypt_d_o = crypt_q_i;
		dec_key_gen_d_o = dec_key_gen_q_i;
		prng_reseed_d_o = prng_reseed_q_i;
		key_clear_d_o = key_clear_q_i;
		data_out_clear_d_o = data_out_clear_q_i;
		prng_reseed_done_d = prng_reseed_done_q | prng_reseed_ack_i;
		advance = 1'b0;
		cyc_ctr_d = (SecSBoxImpl == 32'sd4 ? cyc_ctr_q + 3'd1 : 3'd0);
		alert_o = 1'b0;
		(* full_case, parallel_case *)
		case (aes_cipher_ctrl_cs)
			sv2v_cast_16A1F(6'b001001): begin
				cyc_ctr_d = 3'd0;
				in_ready_o = 1'b1;
				if (in_valid_i) begin
					if (((SecMasking && prng_reseed_i) && !dec_key_gen_i) && !crypt_i) begin
						prng_reseed_d_o = 1'b1;
						prng_reseed_done_d = 1'b0;
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b100100);
					end
					else if (key_clear_i || data_out_clear_i) begin
						key_clear_d_o = key_clear_i;
						data_out_clear_d_o = data_out_clear_i;
						aes_cipher_ctrl_ns = (data_out_clear_i ? sv2v_cast_16A1F(6'b111010) : sv2v_cast_16A1F(6'b001110));
					end
					else if (dec_key_gen_i || crypt_i) begin
						crypt_d_o = ~dec_key_gen_i & crypt_i;
						dec_key_gen_d_o = dec_key_gen_i;
						prng_reseed_d_o = SecMasking & prng_reseed_i;
						state_sel_o = (dec_key_gen_i ? sv2v_cast_73510(sv2v_cast_19785(5'b00001)) : sv2v_cast_73510(sv2v_cast_19785(5'b01110)));
						state_we_o = 1'b1;
						prng_update_o = SecMasking;
						key_expand_clear_o = 1'b1;
						key_full_sel_o = (dec_key_gen_i ? sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)) : (op_i == sv2v_cast_63054(2'b01) ? sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)) : (op_i == sv2v_cast_63054(2'b10) ? sv2v_cast_7DAC1(sv2v_cast_26872(5'b11000)) : sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)))));
						key_full_we_o = 1'b1;
						num_rounds_d = (key_len_i == sv2v_cast_2BC67(3'b001) ? 4'd10 : (key_len_i == sv2v_cast_2BC67(3'b010) ? 4'd12 : 4'd14));
						rnd_ctr_d = 1'sb0;
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b100011);
					end
					else
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010111);
				end
			end
			sv2v_cast_16A1F(6'b100011): begin
				add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b01110));
				key_words_sel_o = (dec_key_gen_q_i ? sv2v_cast_21340(sv2v_cast_26872(5'b10111)) : (key_len_i == sv2v_cast_2BC67(3'b001) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b11000)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b00001)) : sv2v_cast_21340(sv2v_cast_26872(5'b10111))))))));
				prng_reseed_done_d = 1'b0;
				if (key_len_i != sv2v_cast_2BC67(3'b100)) begin
					advance = key_expand_out_req_i & cyc_ctr_expr;
					prng_update_o = SecMasking;
					key_expand_en_o = 1'b1;
					if (advance) begin
						key_expand_out_ack_o = 1'b1;
						state_we_o = ~dec_key_gen_q_i;
						key_full_we_o = 1'b1;
						rnd_ctr_d = rnd_ctr_q + 4'b0001;
						cyc_ctr_d = 3'd0;
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b111101);
					end
				end
				else begin
					prng_update_o = SecMasking;
					state_we_o = ~dec_key_gen_q_i;
					rnd_ctr_d = rnd_ctr_q + 4'b0001;
					cyc_ctr_d = 3'd0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b111101);
				end
			end
			sv2v_cast_16A1F(6'b111101): begin
				key_words_sel_o = (dec_key_gen_q_i ? sv2v_cast_21340(sv2v_cast_26872(5'b10111)) : (key_len_i == sv2v_cast_2BC67(3'b001) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b11000)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b00001)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : sv2v_cast_21340(sv2v_cast_26872(5'b10111))))))));
				prng_reseed_req_o = (SecMasking & prng_reseed_q_i) & ~prng_reseed_done_q;
				round_key_sel_o = (op_i == sv2v_cast_63054(2'b01) ? sv2v_cast_4C47F(sv2v_cast_14B94(3'b011)) : (op_i == sv2v_cast_63054(2'b10) ? sv2v_cast_4C47F(sv2v_cast_14B94(3'b100)) : sv2v_cast_4C47F(sv2v_cast_14B94(3'b011))));
				advance = (key_expand_out_req_i & cyc_ctr_expr) & (dec_key_gen_q_i | sub_bytes_out_req_i);
				prng_update_o = SecMasking;
				sub_bytes_en_o = ~dec_key_gen_q_i;
				key_expand_en_o = 1'b1;
				if (advance) begin
					sub_bytes_out_ack_o = ~dec_key_gen_q_i;
					key_expand_out_ack_o = 1'b1;
					state_we_o = ~dec_key_gen_q_i;
					key_full_we_o = 1'b1;
					rnd_ctr_d = rnd_ctr_q + 4'b0001;
					cyc_ctr_d = 3'd0;
					if (rnd_ctr_q >= num_rounds_regular) begin
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010000);
						if (dec_key_gen_q_i) begin
							key_dec_we_o = 1'b1;
							out_valid_o = (SecMasking ? (prng_reseed_q_i ? prng_reseed_done_q : 1'b1) : 1'b1);
							if (out_valid_o && out_ready_i) begin
								dec_key_gen_d_o = 1'b0;
								prng_reseed_d_o = 1'b0;
								aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
							end
						end
					end
				end
			end
			sv2v_cast_16A1F(6'b010000): begin
				key_words_sel_o = (dec_key_gen_q_i ? sv2v_cast_21340(sv2v_cast_26872(5'b10111)) : (key_len_i == sv2v_cast_2BC67(3'b001) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b11000)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b00001)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : sv2v_cast_21340(sv2v_cast_26872(5'b10111))))))));
				add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b00001));
				prng_reseed_req_o = (SecMasking & prng_reseed_q_i) & ~prng_reseed_done_q;
				state_sel_o = sv2v_cast_73510(sv2v_cast_19785(5'b00001));
				advance = (sub_bytes_out_req_i & cyc_ctr_expr) | dec_key_gen_q_i;
				sub_bytes_en_o = ~dec_key_gen_q_i;
				out_valid_o = ((mux_sel_err_i || sp_enc_err_i) || op_err_i ? 1'b0 : (SecMasking ? (prng_reseed_q_i ? prng_reseed_done_q & advance : advance) : advance));
				cyc_ctr_d = (SecSBoxImpl == 32'sd4 ? (!advance ? cyc_ctr_q + 3'd1 : cyc_ctr_q) : 3'd0);
				prng_update_o = (SecSBoxImpl == 32'sd4 ? !advance : 1'b0) | (out_valid_o & out_ready_i);
				if (out_valid_o && out_ready_i) begin
					sub_bytes_out_ack_o = ~dec_key_gen_q_i;
					state_we_o = 1'b1;
					crypt_d_o = 1'b0;
					cyc_ctr_d = 3'd0;
					dec_key_gen_d_o = 1'b0;
					prng_reseed_d_o = 1'b0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
				end
			end
			sv2v_cast_16A1F(6'b100100): begin
				prng_reseed_req_o = prng_reseed_q_i & ~prng_reseed_done_q;
				cyc_ctr_d = 3'd0;
				out_valid_o = prng_reseed_done_q;
				if (out_valid_o && out_ready_i) begin
					prng_reseed_d_o = 1'b0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
				end
			end
			sv2v_cast_16A1F(6'b111010): begin
				state_we_o = 1'b1;
				state_sel_o = sv2v_cast_73510(sv2v_cast_19785(5'b00001));
				aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001110);
			end
			sv2v_cast_16A1F(6'b001110): begin
				if (key_clear_q_i) begin
					key_full_sel_o = sv2v_cast_7DAC1(sv2v_cast_26872(5'b10111));
					key_full_we_o = 1'b1;
					key_dec_sel_o = sv2v_cast_F5C01(sv2v_cast_14B94(3'b100));
					key_dec_we_o = 1'b1;
				end
				if (data_out_clear_q_i) begin
					add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b01110));
					key_words_sel_o = sv2v_cast_21340(sv2v_cast_26872(5'b10111));
					round_key_sel_o = sv2v_cast_4C47F(sv2v_cast_14B94(3'b011));
				end
				out_valid_o = 1'b1;
				if (out_ready_i) begin
					key_clear_d_o = 1'b0;
					data_out_clear_d_o = 1'b0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
				end
			end
			sv2v_cast_16A1F(6'b010111): alert_o = 1'b1;
			default: begin
				aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010111);
				alert_o = 1'b1;
			end
		endcase
		if ((((mux_sel_err_i || sp_enc_err_i) || rnd_ctr_err_i) || op_err_i) || alert_fatal_i)
			aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010111);
	end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_CipherCtrlStateWidth),
		.ResetValue(sv2v_cast_16A1F(6'b001001)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_cipher_ctrl_ns),
		.state_o(aes_cipher_ctrl_cs)
	);
	always @(posedge clk_i or negedge rst_ni) begin : reg_fsm
		if (!rst_ni) begin
			prng_reseed_done_q <= 1'b0;
			rnd_ctr_q <= 1'sb0;
			num_rounds_q <= 1'sb0;
		end
		else begin
			prng_reseed_done_q <= prng_reseed_done_d;
			rnd_ctr_q <= rnd_ctr_d;
			num_rounds_q <= num_rounds_d;
		end
	end
	assign rnd_ctr_o = rnd_ctr_q;
	generate
		if (SecSBoxImpl == 32'sd4) begin : gen_cyc_ctr
			always @(posedge clk_i or negedge rst_ni) begin : reg_cyc_ctr
				if (!rst_ni)
					cyc_ctr_q <= 3'd0;
				else
					cyc_ctr_q <= cyc_ctr_d;
			end
			assign cyc_ctr_expr = cyc_ctr_q >= 3'd4;
		end
		else begin : gen_no_cyc_ctr
			wire [2:0] unused_cyc_ctr;
			wire [3:1] sv2v_tmp_18218;
			assign sv2v_tmp_18218 = cyc_ctr_d;
			always @(*) cyc_ctr_q = sv2v_tmp_18218;
			assign unused_cyc_ctr = cyc_ctr_q;
			assign cyc_ctr_expr = 1'b1;
		end
	endgenerate
	localparam signed [31:0] AesCipherControlFsmSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesCipherControlFsmSecMaskingNonDefault - 1:0] sv2v_cast_94F9A;
		input reg [AesCipherControlFsmSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_94F9A = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_94F9A(1'b1);
	end
	localparam signed [31:0] AesCipherControlFsmSecSBoxImplNonDefault = (SecSBoxImpl == 32'sd4 ? 1 : 2);
	function automatic [AesCipherControlFsmSecSBoxImplNonDefault - 1:0] sv2v_cast_0AD1F;
		input reg [AesCipherControlFsmSecSBoxImplNonDefault - 1:0] inp;
		sv2v_cast_0AD1F = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_2
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_0AD1F(1'b1);
	end
	initial _sv2v_0 = 0;
endmodule
