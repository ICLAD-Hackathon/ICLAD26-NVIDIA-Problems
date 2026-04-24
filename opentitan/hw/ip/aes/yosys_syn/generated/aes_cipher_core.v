module aes_cipher_core (
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
	alert_fatal_i,
	alert_o,
	prd_clearing_state_i,
	prd_clearing_key_i,
	force_masks_i,
	data_in_mask_o,
	entropy_req_o,
	entropy_ack_i,
	entropy_i,
	state_init_i,
	key_init_i,
	state_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] CiphOpFwdOnly = 0;
	parameter [0:0] SecMasking = 1;
	parameter integer SecSBoxImpl = 32'sd4;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstMaskingLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstMaskingLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
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
	input wire alert_fatal_i;
	output wire alert_o;
	input wire [(((NumShares * 4) * 4) * 8) - 1:0] prd_clearing_state_i;
	input wire [((NumShares * 8) * 32) - 1:0] prd_clearing_key_i;
	input wire force_masks_i;
	output wire [127:0] data_in_mask_o;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	input wire [(((NumShares * 4) * 4) * 8) - 1:0] state_init_i;
	input wire [((NumShares * 8) * 32) - 1:0] key_init_i;
	output wire [(((NumShares * 4) * 4) * 8) - 1:0] state_o;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] state_d;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] state_q;
	wire [2:0] state_we_ctrl;
	wire [2:0] state_we;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	wire [4:0] state_sel_raw;
	wire [4:0] state_sel_ctrl;
	wire [4:0] state_sel;
	wire state_sel_err;
	wire [2:0] sub_bytes_en;
	wire [2:0] sub_bytes_out_req;
	wire [2:0] sub_bytes_out_ack;
	wire sub_bytes_err;
	wire [127:0] sub_bytes_out;
	wire [127:0] sb_in_mask;
	wire [127:0] sb_out_mask;
	wire [127:0] shift_rows_in [0:NumShares - 1];
	wire [(((NumShares * 4) * 4) * 8) - 1:0] shift_rows_out;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] mix_columns_out;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] add_round_key_in;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] add_round_key_out;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	wire [4:0] add_rk_sel_raw;
	wire [4:0] add_rk_sel_ctrl;
	wire [4:0] add_rk_sel;
	wire add_rk_sel_err;
	reg [((NumShares * 8) * 32) - 1:0] key_full_d;
	reg [((NumShares * 8) * 32) - 1:0] key_full_q;
	wire [2:0] key_full_we_ctrl;
	wire [2:0] key_full_we;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	wire [4:0] key_full_sel_raw;
	wire [4:0] key_full_sel_ctrl;
	wire [4:0] key_full_sel;
	wire key_full_sel_err;
	reg [((NumShares * 8) * 32) - 1:0] key_dec_d;
	reg [((NumShares * 8) * 32) - 1:0] key_dec_q;
	wire [2:0] key_dec_we_ctrl;
	wire [2:0] key_dec_we;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] key_dec_sel_raw;
	wire [2:0] key_dec_sel_ctrl;
	wire [2:0] key_dec_sel;
	wire key_dec_sel_err;
	wire [((NumShares * 8) * 32) - 1:0] key_expand_out;
	wire [1:0] key_expand_op;
	wire [2:0] key_expand_en;
	wire key_expand_prd_we;
	wire [2:0] key_expand_out_req;
	wire [2:0] key_expand_out_ack;
	wire key_expand_err;
	wire key_expand_clear;
	wire [3:0] key_expand_round;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	wire [4:0] key_words_sel_raw;
	wire [4:0] key_words_sel_ctrl;
	wire [4:0] key_words_sel;
	wire key_words_sel_err;
	reg [127:0] key_words [0:NumShares - 1];
	wire [(((NumShares * 4) * 4) * 8) - 1:0] key_bytes;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] key_mix_columns_out;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] round_key;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] round_key_sel_raw;
	wire [2:0] round_key_sel_ctrl;
	wire [2:0] round_key_sel;
	wire round_key_sel_err;
	wire cfg_valid;
	wire mux_sel_err;
	wire sp_enc_err_d;
	reg sp_enc_err_q;
	wire op_err;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	localparam [31:0] aes_pkg_WidthPRDData = 128;
	localparam [31:0] aes_pkg_WidthPRDKey = 32;
	localparam [31:0] aes_pkg_WidthPRDMasking = aes_pkg_WidthPRDData + aes_pkg_WidthPRDKey;
	wire [aes_pkg_WidthPRDMasking - 1:0] prd_masking;
	wire [127:0] prd_sub_bytes_d;
	reg [127:0] prd_sub_bytes_q;
	wire [31:0] prd_key_expand;
	wire prd_masking_upd;
	wire prd_masking_rsd_req;
	wire prd_masking_rsd_ack;
	wire [127:0] data_in_mask;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op_err = ~((op_i == sv2v_cast_63054(2'b01)) || (op_i == sv2v_cast_63054(2'b10)));
	assign cfg_valid = cfg_valid_i & ~op_err;
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_73510;
		input reg [4:0] inp;
		sv2v_cast_73510 = inp;
	endfunction
	always @(*) begin : state_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (state_sel)
			sv2v_cast_73510(sv2v_cast_19785(5'b01110)): state_d = state_init_i;
			sv2v_cast_73510(sv2v_cast_19785(5'b11000)): state_d = add_round_key_out;
			sv2v_cast_73510(sv2v_cast_19785(5'b00001)): state_d = prd_clearing_state_i;
			default: state_d = prd_clearing_state_i;
		endcase
	end
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni) begin : state_reg
		if (!rst_ni)
			state_q <= {NumShares {128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
		else if (state_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			state_q <= state_d;
	end
	generate
		if (!SecMasking) begin : gen_no_masks
			assign sb_in_mask = 1'sb0;
			assign prd_masking = 1'sb0;
			wire unused_entropy_ack;
			wire [EntropyWidth - 1:0] unused_entropy;
			assign unused_entropy_ack = entropy_ack_i;
			assign unused_entropy = entropy_i;
			assign entropy_req_o = 1'b0;
			wire unused_force_masks;
			wire unused_prd_masking_upd;
			wire unused_prd_masking_rsd_req;
			assign unused_force_masks = force_masks_i;
			assign unused_prd_masking_upd = prd_masking_upd;
			assign unused_prd_masking_rsd_req = prd_masking_rsd_req;
			assign prd_masking_rsd_ack = 1'b0;
			wire [127:0] unused_sb_out_mask;
			assign unused_sb_out_mask = sb_out_mask;
		end
		else begin : gen_masks
			assign sb_in_mask = state_q[8 * (4 * ((NumShares - 2) * 4))+:128];
			aes_prng_masking #(
				.Width(aes_pkg_WidthPRDMasking),
				.EntropyWidth(EntropyWidth),
				.SecAllowForcingMasks(SecAllowForcingMasks),
				.SecSkipPRNGReseeding(SecSkipPRNGReseeding),
				.RndCnstLfsrSeed(RndCnstMaskingLfsrSeed),
				.RndCnstLfsrPerm(RndCnstMaskingLfsrPerm)
			) u_aes_prng_masking(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.force_masks_i(force_masks_i),
				.data_update_i(prd_masking_upd),
				.data_o(prd_masking),
				.reseed_req_i(prd_masking_rsd_req),
				.reseed_ack_o(prd_masking_rsd_ack),
				.entropy_req_o(entropy_req_o),
				.entropy_ack_i(entropy_ack_i),
				.entropy_i(entropy_i)
			);
		end
	endgenerate
	assign prd_key_expand = prd_masking[aes_pkg_WidthPRDMasking - 1-:aes_pkg_WidthPRDKey];
	assign prd_sub_bytes_d = prd_masking[127-:aes_pkg_WidthPRDData];
	generate
		if (!SecMasking) begin : gen_no_prd_buffer
			wire [128:1] sv2v_tmp_5DA8C;
			assign sv2v_tmp_5DA8C = prd_sub_bytes_d;
			always @(*) prd_sub_bytes_q = sv2v_tmp_5DA8C;
		end
		else begin : gen_prd_buffer
			always @(posedge clk_i or negedge rst_ni) begin : prd_sub_bytes_reg
				if (!rst_ni)
					prd_sub_bytes_q <= 1'sb0;
				else if (state_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					prd_sub_bytes_q <= prd_sub_bytes_d;
			end
		end
	endgenerate
	wire [127:0] prd_sub_bytes;
	assign prd_sub_bytes = prd_sub_bytes_q;
	localparam [31:0] WidthPRDRow = 32;
	genvar _gv_i_1;
	function automatic [31:0] aes_pkg_aes_prd_get_lsbs;
		input reg [31:0] in;
		reg [31:0] prd_lsbs;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 4; i = i + 1)
					prd_lsbs[i * 8+:8] = in[i * aes_pkg_WidthPRDSBox+:8];
			end
			aes_pkg_aes_prd_get_lsbs = prd_lsbs;
		end
	endfunction
	generate
		for (_gv_i_1 = 0; _gv_i_1 < 4; _gv_i_1 = _gv_i_1 + 1) begin : gen_in_mask
			localparam i = _gv_i_1;
			assign data_in_mask[8 * (i * 4)+:32] = aes_pkg_aes_prd_get_lsbs(prd_sub_bytes[i * WidthPRDRow+:WidthPRDRow]);
		end
	endgenerate
	assign data_in_mask_o = {data_in_mask[32+:32], data_in_mask[0+:32], data_in_mask[96+:32], data_in_mask[64+:32]};
	aes_sub_bytes #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sub_bytes(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(sub_bytes_en),
		.out_req_o(sub_bytes_out_req),
		.out_ack_i(sub_bytes_out_ack),
		.op_i(op_i),
		.data_i(state_q[8 * (4 * ((NumShares - 1) * 4))+:128]),
		.mask_i(sb_in_mask),
		.prd_i(prd_sub_bytes_q),
		.data_o(sub_bytes_out),
		.mask_o(sb_out_mask),
		.err_o(sub_bytes_err)
	);
	genvar _gv_s_1;
	generate
		for (_gv_s_1 = 0; _gv_s_1 < NumShares; _gv_s_1 = _gv_s_1 + 1) begin : gen_shares_shift_mix
			localparam s = _gv_s_1;
			if (s == 0) begin : gen_shift_in_data
				assign shift_rows_in[s] = sub_bytes_out;
			end
			else begin : gen_shift_in_mask
				assign shift_rows_in[s] = sb_out_mask;
			end
			aes_shift_rows u_aes_shift_rows(
				.op_i(op_i),
				.data_i(shift_rows_in[s]),
				.data_o(shift_rows_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128])
			);
			aes_mix_columns u_aes_mix_columns(
				.op_i(op_i),
				.data_i(shift_rows_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128]),
				.data_o(mix_columns_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128])
			);
		end
	endgenerate
	function automatic [4:0] sv2v_cast_7524F;
		input reg [4:0] inp;
		sv2v_cast_7524F = inp;
	endfunction
	always @(*) begin : add_round_key_in_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (add_rk_sel)
			sv2v_cast_7524F(sv2v_cast_19785(5'b01110)): add_round_key_in = state_q;
			sv2v_cast_7524F(sv2v_cast_19785(5'b11000)): add_round_key_in = mix_columns_out;
			sv2v_cast_7524F(sv2v_cast_19785(5'b00001)): add_round_key_in = shift_rows_out;
			default: add_round_key_in = state_q;
		endcase
	end
	genvar _gv_s_2;
	generate
		for (_gv_s_2 = 0; _gv_s_2 < NumShares; _gv_s_2 = _gv_s_2 + 1) begin : gen_shares_add_round_key
			localparam s = _gv_s_2;
			assign add_round_key_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128] = add_round_key_in[8 * (4 * (((NumShares - 1) - s) * 4))+:128] ^ round_key[8 * (4 * (((NumShares - 1) - s) * 4))+:128];
		end
	endgenerate
	function automatic [4:0] sv2v_cast_26872;
		input reg [4:0] inp;
		sv2v_cast_26872 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7DAC1;
		input reg [4:0] inp;
		sv2v_cast_7DAC1 = inp;
	endfunction
	always @(*) begin : key_full_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (key_full_sel)
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)): key_full_d = key_init_i;
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b11000)): key_full_d = (!CiphOpFwdOnly ? key_dec_q : prd_clearing_key_i);
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b00001)): key_full_d = key_expand_out;
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b10111)): key_full_d = prd_clearing_key_i;
			default: key_full_d = prd_clearing_key_i;
		endcase
	end
	always @(posedge clk_i or negedge rst_ni) begin : key_full_reg
		if (!rst_ni)
			key_full_q <= {NumShares {256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
		else if (key_full_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			key_full_q <= key_full_d;
	end
	function automatic [2:0] sv2v_cast_F5C01;
		input reg [2:0] inp;
		sv2v_cast_F5C01 = inp;
	endfunction
	generate
		if (!CiphOpFwdOnly) begin : gen_key_dec
			always @(*) begin : key_dec_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_dec_sel)
					sv2v_cast_F5C01(sv2v_cast_14B94(3'b011)): key_dec_d = key_expand_out;
					sv2v_cast_F5C01(sv2v_cast_14B94(3'b100)): key_dec_d = prd_clearing_key_i;
					default: key_dec_d = prd_clearing_key_i;
				endcase
			end
			always @(posedge clk_i or negedge rst_ni) begin : key_dec_reg
				if (!rst_ni)
					key_dec_q <= {NumShares {256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
				else if (key_dec_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					key_dec_q <= key_dec_d;
			end
		end
		else begin : gen_no_key_dec
			wire [(NumShares * 8) * 32:1] sv2v_tmp_AD7FF;
			assign sv2v_tmp_AD7FF = {NumShares {256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
			always @(*) key_dec_q = sv2v_tmp_AD7FF;
			wire [(NumShares * 8) * 32:1] sv2v_tmp_63858;
			assign sv2v_tmp_63858 = key_dec_q;
			always @(*) key_dec_d = sv2v_tmp_63858;
			reg unused_key_dec;
			always @(*) begin
				if (_sv2v_0)
					;
				unused_key_dec = ^{key_dec_sel, key_dec_we};
				begin : sv2v_autoblock_2
					reg signed [31:0] s;
					for (s = 0; s < NumShares; s = s + 1)
						unused_key_dec = unused_key_dec ^ ^{key_dec_d[32 * (((NumShares - 1) - s) * 8)+:256]};
				end
			end
		end
	endgenerate
	assign key_expand_prd_we = (key_full_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) ? 1'b1 : 1'b0);
	aes_key_expand #(
		.AES192Enable(AES192Enable),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_key_expand(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.cfg_valid_i(cfg_valid),
		.op_i(key_expand_op),
		.en_i(key_expand_en),
		.prd_we_i(key_expand_prd_we),
		.out_req_o(key_expand_out_req),
		.out_ack_i(key_expand_out_ack),
		.clear_i(key_expand_clear),
		.round_i(key_expand_round),
		.key_len_i(key_len_i),
		.key_i(key_full_q),
		.key_o(key_expand_out),
		.prd_i(prd_key_expand),
		.err_o(key_expand_err)
	);
	genvar _gv_s_3;
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_3
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_4
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	function automatic [4:0] sv2v_cast_21340;
		input reg [4:0] inp;
		sv2v_cast_21340 = inp;
	endfunction
	generate
		for (_gv_s_3 = 0; _gv_s_3 < NumShares; _gv_s_3 = _gv_s_3 + 1) begin : gen_shares_round_key
			localparam s = _gv_s_3;
			always @(*) begin : key_words_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_words_sel)
					sv2v_cast_21340(sv2v_cast_26872(5'b01110)): key_words[s] = key_full_q[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
					sv2v_cast_21340(sv2v_cast_26872(5'b11000)): key_words[s] = (AES192Enable ? key_full_q[32 * ((((NumShares - 1) - s) * 8) + 2)+:128] : {128 {1'sb0}});
					sv2v_cast_21340(sv2v_cast_26872(5'b00001)): key_words[s] = key_full_q[32 * ((((NumShares - 1) - s) * 8) + 4)+:128];
					sv2v_cast_21340(sv2v_cast_26872(5'b10111)): key_words[s] = 1'sb0;
					default: key_words[s] = 1'sb0;
				endcase
			end
			assign key_bytes[8 * (4 * (((NumShares - 1) - s) * 4))+:128] = aes_pkg_aes_transpose(key_words[s]);
			aes_mix_columns u_aes_key_mix_columns(
				.op_i(sv2v_cast_63054(2'b10)),
				.data_i(key_bytes[8 * (4 * (((NumShares - 1) - s) * 4))+:128]),
				.data_o(key_mix_columns_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128])
			);
		end
	endgenerate
	function automatic [2:0] sv2v_cast_4C47F;
		input reg [2:0] inp;
		sv2v_cast_4C47F = inp;
	endfunction
	always @(*) begin : round_key_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (round_key_sel)
			sv2v_cast_4C47F(sv2v_cast_14B94(3'b011)): round_key = key_bytes;
			sv2v_cast_4C47F(sv2v_cast_14B94(3'b100)): round_key = (!CiphOpFwdOnly ? key_mix_columns_out : key_bytes);
			default: round_key = key_bytes;
		endcase
	end
	generate
		if (CiphOpFwdOnly) begin : gen_unused_key_mix_columns_out
			reg unused_key_mix_columns_out;
			always @(*) begin
				if (_sv2v_0)
					;
				unused_key_mix_columns_out = 1'b0;
				begin : sv2v_autoblock_5
					reg signed [31:0] s;
					for (s = 0; s < NumShares; s = s + 1)
						unused_key_mix_columns_out = unused_key_mix_columns_out ^ ^{key_mix_columns_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128]};
				end
			end
		end
	endgenerate
	aes_cipher_control #(
		.CiphOpFwdOnly(CiphOpFwdOnly),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_cipher_control(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(in_valid_i),
		.in_ready_o(in_ready_o),
		.out_valid_o(out_valid_o),
		.out_ready_i(out_ready_i),
		.cfg_valid_i(cfg_valid),
		.op_i(op_i),
		.key_len_i(key_len_i),
		.crypt_i(crypt_i),
		.crypt_o(crypt_o),
		.dec_key_gen_i(dec_key_gen_i),
		.dec_key_gen_o(dec_key_gen_o),
		.prng_reseed_i(prng_reseed_i),
		.prng_reseed_o(prng_reseed_o),
		.key_clear_i(key_clear_i),
		.key_clear_o(key_clear_o),
		.data_out_clear_i(data_out_clear_i),
		.data_out_clear_o(data_out_clear_o),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err_q),
		.op_err_i(op_err),
		.alert_fatal_i(alert_fatal_i),
		.alert_o(alert_o),
		.prng_update_o(prd_masking_upd),
		.prng_reseed_req_o(prd_masking_rsd_req),
		.prng_reseed_ack_i(prd_masking_rsd_ack),
		.state_sel_o(state_sel_ctrl),
		.state_we_o(state_we_ctrl),
		.sub_bytes_en_o(sub_bytes_en),
		.sub_bytes_out_req_i(sub_bytes_out_req),
		.sub_bytes_out_ack_o(sub_bytes_out_ack),
		.add_rk_sel_o(add_rk_sel_ctrl),
		.key_expand_op_o(key_expand_op),
		.key_full_sel_o(key_full_sel_ctrl),
		.key_full_we_o(key_full_we_ctrl),
		.key_dec_sel_o(key_dec_sel_ctrl),
		.key_dec_we_o(key_dec_we_ctrl),
		.key_expand_en_o(key_expand_en),
		.key_expand_out_req_i(key_expand_out_req),
		.key_expand_out_ack_o(key_expand_out_ack),
		.key_expand_clear_o(key_expand_clear),
		.key_expand_round_o(key_expand_round),
		.key_words_sel_o(key_words_sel_ctrl),
		.round_key_sel_o(round_key_sel_ctrl)
	);
	localparam signed [31:0] aes_pkg_StateSelNum = 3;
	aes_sel_buf_chk #(
		.Num(aes_pkg_StateSelNum),
		.Width(aes_pkg_StateSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_state_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(state_sel_ctrl),
		.sel_o(state_sel_raw),
		.err_o(state_sel_err)
	);
	assign state_sel = sv2v_cast_73510(state_sel_raw);
	localparam signed [31:0] aes_pkg_AddRKSelNum = 3;
	aes_sel_buf_chk #(
		.Num(aes_pkg_AddRKSelNum),
		.Width(aes_pkg_AddRKSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_add_rk_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(add_rk_sel_ctrl),
		.sel_o(add_rk_sel_raw),
		.err_o(add_rk_sel_err)
	);
	assign add_rk_sel = sv2v_cast_7524F(add_rk_sel_raw);
	localparam signed [31:0] aes_pkg_KeyFullSelNum = 4;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyFullSelNum),
		.Width(aes_pkg_KeyFullSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_full_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_full_sel_ctrl),
		.sel_o(key_full_sel_raw),
		.err_o(key_full_sel_err)
	);
	assign key_full_sel = sv2v_cast_7DAC1(key_full_sel_raw);
	localparam signed [31:0] aes_pkg_KeyDecSelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyDecSelNum),
		.Width(aes_pkg_KeyDecSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_dec_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_dec_sel_ctrl),
		.sel_o(key_dec_sel_raw),
		.err_o(key_dec_sel_err)
	);
	assign key_dec_sel = sv2v_cast_F5C01(key_dec_sel_raw);
	localparam signed [31:0] aes_pkg_KeyWordsSelNum = 4;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyWordsSelNum),
		.Width(aes_pkg_KeyWordsSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_words_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_words_sel_ctrl),
		.sel_o(key_words_sel_raw),
		.err_o(key_words_sel_err)
	);
	assign key_words_sel = sv2v_cast_21340(key_words_sel_raw);
	localparam signed [31:0] aes_pkg_RoundKeySelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_RoundKeySelNum),
		.Width(aes_pkg_RoundKeySelWidth),
		.EnSecBuf(1'b1)
	) u_aes_round_key_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(round_key_sel_ctrl),
		.sel_o(round_key_sel_raw),
		.err_o(round_key_sel_err)
	);
	assign round_key_sel = sv2v_cast_4C47F(round_key_sel_raw);
	assign mux_sel_err = ((((state_sel_err | add_rk_sel_err) | key_full_sel_err) | key_dec_sel_err) | key_words_sel_err) | round_key_sel_err;
	localparam [31:0] NumSp2VSig = 3;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [2:0] sp2v_sig_err;
	assign sp2v_sig[0+:aes_pkg_Sp2VWidth] = state_we_ctrl;
	assign sp2v_sig[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = key_full_we_ctrl;
	assign sp2v_sig[6+:aes_pkg_Sp2VWidth] = key_dec_we_ctrl;
	localparam [2:0] Sp2VEnSecBuf = {NumSp2VSig {1'b1}};
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
	assign state_we = sp2v_sig_chk[0+:aes_pkg_Sp2VWidth];
	assign key_full_we = sp2v_sig_chk[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign key_dec_we = sp2v_sig_chk[6+:aes_pkg_Sp2VWidth];
	assign sp_enc_err_d = (|sp2v_sig_err | sub_bytes_err) | key_expand_err;
	always @(posedge clk_i or negedge rst_ni) begin : reg_sp_enc_err
		if (!rst_ni)
			sp_enc_err_q <= 1'b0;
		else if (sp_enc_err_d)
			sp_enc_err_q <= 1'b1;
	end
	assign state_o = add_round_key_out;
	initial _sv2v_0 = 0;
endmodule
