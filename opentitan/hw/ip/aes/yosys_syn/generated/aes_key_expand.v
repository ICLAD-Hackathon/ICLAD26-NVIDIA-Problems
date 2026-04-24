module aes_key_expand (
	clk_i,
	rst_ni,
	cfg_valid_i,
	op_i,
	en_i,
	prd_we_i,
	out_req_o,
	out_ack_i,
	clear_i,
	round_i,
	key_len_i,
	key_i,
	key_o,
	prd_i,
	err_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd0;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	input wire clk_i;
	input wire rst_ni;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] en_i;
	input wire prd_we_i;
	output wire [2:0] out_req_o;
	input wire [2:0] out_ack_i;
	input wire clear_i;
	input wire [3:0] round_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire [((NumShares * 8) * 32) - 1:0] key_i;
	output wire [((NumShares * 8) * 32) - 1:0] key_o;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	localparam [31:0] aes_pkg_WidthPRDKey = 32;
	input wire [31:0] prd_i;
	output wire err_o;
	wire [2:0] en;
	wire en_err;
	wire [2:0] out_ack;
	wire out_ack_err;
	reg [7:0] rcon_d;
	reg [7:0] rcon_q;
	wire rcon_we;
	reg use_rcon;
	wire [3:0] rnd;
	reg [3:0] rnd_type;
	wire [31:0] spec_in_128 [0:NumShares - 1];
	wire [31:0] spec_in_192 [0:NumShares - 1];
	reg [31:0] rot_word_in [0:NumShares - 1];
	wire [31:0] rot_word_out [0:NumShares - 1];
	wire use_rot_word;
	wire prd_we;
	wire prd_we_force;
	wire prd_we_inhibit;
	wire [31:0] sub_word_in;
	wire [31:0] sub_word_out;
	wire [3:0] sub_word_out_req;
	wire [31:0] sw_in_mask;
	wire [31:0] sw_out_mask;
	wire [7:0] rcon_add_in;
	wire [7:0] rcon_add_out;
	wire [31:0] rcon_added;
	wire [31:0] irregular [0:NumShares - 1];
	reg [((NumShares * 8) * 32) - 1:0] regular;
	wire unused_cfg_valid;
	assign unused_cfg_valid = cfg_valid_i;
	assign rnd = round_i;
	always @(*) begin : get_rnd_type
		if (_sv2v_0)
			;
		if (AES192Enable) begin
			rnd_type[0] = rnd == 0;
			rnd_type[1] = (((rnd == 1) || (rnd == 4)) || (rnd == 7)) || (rnd == 10);
			rnd_type[2] = (((rnd == 2) || (rnd == 5)) || (rnd == 8)) || (rnd == 11);
			rnd_type[3] = (((rnd == 3) || (rnd == 6)) || (rnd == 9)) || (rnd == 12);
		end
		else
			rnd_type = 1'sb0;
	end
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	assign use_rot_word = ((key_len_i == sv2v_cast_2BC67(3'b100)) && (rnd[0] == 1'b0) ? 1'b0 : 1'b1);
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	always @(*) begin : rcon_usage
		if (_sv2v_0)
			;
		use_rcon = 1'b1;
		if (AES192Enable) begin
			if ((key_len_i == sv2v_cast_2BC67(3'b010)) && (((op_i == sv2v_cast_63054(2'b01)) && rnd_type[1]) || ((op_i == sv2v_cast_63054(2'b10)) && (rnd_type[0] || rnd_type[3]))))
				use_rcon = 1'b0;
		end
		if ((key_len_i == sv2v_cast_2BC67(3'b100)) && (rnd[0] == 1'b0))
			use_rcon = 1'b0;
	end
	function automatic [7:0] aes_pkg_aes_div2;
		input reg [7:0] in;
		reg [7:0] out;
		begin
			out[7] = in[0];
			out[6] = in[7];
			out[5] = in[6];
			out[4] = in[5];
			out[3] = in[4] ^ in[0];
			out[2] = in[3] ^ in[0];
			out[1] = in[2];
			out[0] = in[1] ^ in[0];
			aes_pkg_aes_div2 = out;
		end
	endfunction
	function automatic [7:0] aes_pkg_aes_mul2;
		input reg [7:0] in;
		reg [7:0] out;
		begin
			out[7] = in[6];
			out[6] = in[5];
			out[5] = in[4];
			out[4] = in[3] ^ in[7];
			out[3] = in[2] ^ in[7];
			out[2] = in[1];
			out[1] = in[0] ^ in[7];
			out[0] = in[7];
			aes_pkg_aes_mul2 = out;
		end
	endfunction
	always @(*) begin : rcon_update
		if (_sv2v_0)
			;
		rcon_d = rcon_q;
		if (clear_i)
			rcon_d = (op_i == sv2v_cast_63054(2'b01) ? 8'h01 : ((op_i == sv2v_cast_63054(2'b10)) && (key_len_i == sv2v_cast_2BC67(3'b001)) ? 8'h36 : ((op_i == sv2v_cast_63054(2'b10)) && (key_len_i == sv2v_cast_2BC67(3'b010)) ? 8'h80 : ((op_i == sv2v_cast_63054(2'b10)) && (key_len_i == sv2v_cast_2BC67(3'b100)) ? 8'h40 : 8'h01))));
		else
			rcon_d = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mul2(rcon_q) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_div2(rcon_q) : 8'h01));
	end
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign rcon_we = clear_i | (((use_rcon & (en == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))) & (out_req_o == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))) & (out_ack == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))));
	always @(posedge clk_i or negedge rst_ni) begin : reg_rcon
		if (!rst_ni)
			rcon_q <= 1'sb0;
		else if (rcon_we)
			rcon_q <= rcon_d;
	end
	genvar _gv_s_1;
	function automatic [31:0] aes_pkg_aes_circ_byte_shift;
		input reg [31:0] in;
		input reg [1:0] shift;
		reg [31:0] out;
		reg [31:0] s;
		begin
			s = {30'b000000000000000000000000000000, shift};
			out = {in[8 * ((7 - s) % 4)+:8], in[8 * ((6 - s) % 4)+:8], in[8 * ((5 - s) % 4)+:8], in[8 * ((4 - s) % 4)+:8]};
			aes_pkg_aes_circ_byte_shift = out;
		end
	endfunction
	generate
		for (_gv_s_1 = 0; _gv_s_1 < NumShares; _gv_s_1 = _gv_s_1 + 1) begin : gen_shares_rot_word_out
			localparam s = _gv_s_1;
			assign spec_in_128[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + 2) * 32+:32];
			assign spec_in_192[s] = (AES192Enable ? (key_i[((((NumShares - 1) - s) * 8) + 5) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + 1) * 32+:32]) ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32] : {32 {1'sb0}});
			always @(*) begin : rot_word_in_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_len_i)
					sv2v_cast_2BC67(3'b001):
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01): rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
							sv2v_cast_63054(2'b10): rot_word_in[s] = spec_in_128[s];
							default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
						endcase
					sv2v_cast_2BC67(3'b010):
						if (AES192Enable)
							(* full_case, parallel_case *)
							case (op_i)
								sv2v_cast_63054(2'b01): rot_word_in[s] = (rnd_type[0] ? key_i[((((NumShares - 1) - s) * 8) + 5) * 32+:32] : (rnd_type[2] ? key_i[((((NumShares - 1) - s) * 8) + 5) * 32+:32] : (rnd_type[3] ? spec_in_192[s] : key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32])));
								sv2v_cast_63054(2'b10): rot_word_in[s] = (rnd_type[1] ? key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32] : (rnd_type[2] ? key_i[((((NumShares - 1) - s) * 8) + 1) * 32+:32] : key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32]));
								default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
							endcase
						else
							rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
					sv2v_cast_2BC67(3'b100):
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01): rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 7) * 32+:32];
							sv2v_cast_63054(2'b10): rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
							default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 7) * 32+:32];
						endcase
					default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
				endcase
			end
			assign rot_word_out[s] = aes_pkg_aes_circ_byte_shift(rot_word_in[s], 2'h3);
		end
	endgenerate
	assign sub_word_in = (use_rot_word ? rot_word_out[0] : rot_word_in[0]);
	generate
		if (!SecMasking) begin : gen_no_sw_in_mask
			assign sw_in_mask = 1'sb0;
			wire [31:0] unused_sw_out_mask;
			assign unused_sw_out_mask = sw_out_mask;
		end
		else begin : gen_sw_in_mask
			assign sw_in_mask = (use_rot_word ? rot_word_out[1] : rot_word_in[1]);
		end
	endgenerate
	assign prd_we_force = (key_len_i == sv2v_cast_2BC67(3'b100)) & (rnd == 0);
	assign prd_we_inhibit = ((key_len_i == sv2v_cast_2BC67(3'b010)) & (op_i == sv2v_cast_63054(2'b01))) & ((((rnd == 0) || (rnd == 3)) || (rnd == 6)) || (rnd == 9));
	assign prd_we = (prd_we_i & ~prd_we_inhibit) | prd_we_force;
	reg [31:0] prd_q;
	generate
		if (!SecMasking) begin : gen_no_prd_buffer
			wire [32:1] sv2v_tmp_B228D;
			assign sv2v_tmp_B228D = prd_i;
			always @(*) prd_q = sv2v_tmp_B228D;
			wire unused_prd_we;
			assign unused_prd_we = prd_we;
		end
		else begin : gen_prd_buffer
			always @(posedge clk_i or negedge rst_ni) begin : prd_reg
				if (!rst_ni)
					prd_q <= 1'sb0;
				else if (prd_we)
					prd_q <= prd_i;
			end
		end
	endgenerate
	wire [111:0] in_prd;
	wire [79:0] out_prd;
	genvar _gv_i_1;
	function automatic integer aes_pkg_aes_rot_int;
		input integer in;
		input integer num;
		integer out;
		begin
			if (in == 0)
				out = num - 1;
			else
				out = in - 1;
			aes_pkg_aes_rot_int = out;
		end
	endfunction
	generate
		for (_gv_i_1 = 0; _gv_i_1 < 4; _gv_i_1 = _gv_i_1 + 1) begin : gen_sbox
			localparam i = _gv_i_1;
			assign in_prd[0 + (i * 28)+:28] = {out_prd[aes_pkg_aes_rot_int(i, 4) * 20+:20], prd_q[aes_pkg_WidthPRDSBox * i+:aes_pkg_WidthPRDSBox]};
			aes_sbox #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sbox_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(en == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
				.out_req_o(sub_word_out_req[i]),
				.out_ack_i(out_ack == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
				.op_i(sv2v_cast_63054(2'b01)),
				.data_i(sub_word_in[8 * i+:8]),
				.mask_i(sw_in_mask[8 * i+:8]),
				.prd_i(in_prd[0 + (i * 28)+:28]),
				.data_o(sub_word_out[8 * i+:8]),
				.mask_o(sw_out_mask[8 * i+:8]),
				.prd_o(out_prd[i * 20+:20])
			);
		end
	endgenerate
	assign rcon_add_in = sub_word_out[7:0];
	assign rcon_add_out = rcon_add_in ^ rcon_q;
	assign rcon_added = {sub_word_out[31:8], rcon_add_out};
	genvar _gv_s_2;
	generate
		for (_gv_s_2 = 0; _gv_s_2 < NumShares; _gv_s_2 = _gv_s_2 + 1) begin : gen_shares_irregular
			localparam s = _gv_s_2;
			if (s == 0) begin : gen_irregular_rcon
				assign irregular[s] = (use_rcon ? rcon_added : sub_word_out);
			end
			else begin : gen_irregular_no_rcon
				assign irregular[s] = sw_out_mask;
			end
		end
	endgenerate
	genvar _gv_s_3;
	generate
		for (_gv_s_3 = 0; _gv_s_3 < NumShares; _gv_s_3 = _gv_s_3 + 1) begin : gen_shares_regular
			localparam s = _gv_s_3;
			always @(*) begin : drive_regular
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_len_i)
					sv2v_cast_2BC67(3'b001): begin
						regular[32 * ((((NumShares - 1) - s) * 8) + 4)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
						regular[(((NumShares - 1) - s) * 8) * 32+:32] = irregular[s] ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32];
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01): begin : sv2v_autoblock_1
								reg signed [31:0] i;
								for (i = 1; i < 4; i = i + 1)
									regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + (i - 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
							end
							sv2v_cast_63054(2'b10): begin : sv2v_autoblock_2
								reg signed [31:0] i;
								for (i = 1; i < 4; i = i + 1)
									regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (i - 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
							end
							default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
						endcase
					end
					sv2v_cast_2BC67(3'b010): begin
						regular[32 * ((((NumShares - 1) - s) * 8) + 6)+:64] = key_i[32 * ((((NumShares - 1) - s) * 8) + 2)+:64];
						if (AES192Enable)
							(* full_case, parallel_case *)
							case (op_i)
								sv2v_cast_63054(2'b01):
									if (rnd_type[0]) begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 0)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 2)+:128];
										regular[((((NumShares - 1) - s) * 8) + 4) * 32+:32] = irregular[s] ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32];
										regular[((((NumShares - 1) - s) * 8) + 5) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + 4) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + 1) * 32+:32];
									end
									else begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 0)+:64] = key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:64];
										begin : sv2v_autoblock_3
											reg signed [31:0] i;
											for (i = 0; i < 4; i = i + 1)
												if (((i == 0) && rnd_type[2]) || ((i == 2) && rnd_type[3]))
													regular[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32] = irregular[s] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
												else
													regular[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + (i + 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
										end
									end
								sv2v_cast_63054(2'b10):
									if (rnd_type[0]) begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 2)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
										begin : sv2v_autoblock_4
											reg signed [31:0] i;
											for (i = 0; i < 2; i = i + 1)
												regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (3 + i)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + ((3 + i) + 1)) * 32+:32];
										end
									end
									else begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 4)+:64] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:64];
										begin : sv2v_autoblock_5
											reg signed [31:0] i;
											for (i = 0; i < 4; i = i + 1)
												if (((i == 2) && rnd_type[1]) || ((i == 0) && rnd_type[2]))
													regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = irregular[s] ^ key_i[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32];
												else
													regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (i + 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32];
										end
									end
								default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
							endcase
						else
							regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
					end
					sv2v_cast_2BC67(3'b100):
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01):
								if (rnd == 0)
									regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
								else begin
									regular[32 * ((((NumShares - 1) - s) * 8) + 0)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128];
									regular[((((NumShares - 1) - s) * 8) + 4) * 32+:32] = irregular[s] ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32];
									begin : sv2v_autoblock_6
										reg signed [31:0] i;
										for (i = 1; i < 4; i = i + 1)
											regular[((((NumShares - 1) - s) * 8) + (i + 4)) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + (i + 3)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
									end
								end
							sv2v_cast_63054(2'b10):
								if (rnd == 0)
									regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
								else begin
									regular[32 * ((((NumShares - 1) - s) * 8) + 4)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
									regular[(((NumShares - 1) - s) * 8) * 32+:32] = irregular[s] ^ key_i[((((NumShares - 1) - s) * 8) + 4) * 32+:32];
									begin : sv2v_autoblock_7
										reg signed [31:0] i;
										for (i = 0; i < 3; i = i + 1)
											regular[((((NumShares - 1) - s) * 8) + (i + 1)) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (4 + i)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + ((4 + i) + 1)) * 32+:32];
									end
								end
							default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
						endcase
					default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
				endcase
			end
		end
	endgenerate
	assign key_o = regular;
	assign out_req_o = (&sub_word_out_req ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	wire [2:0] en_raw;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_expand_en_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(en_i),
		.sel_o(en_raw),
		.err_o(en_err)
	);
	assign en = sv2v_cast_39E4E(en_raw);
	wire [2:0] out_ack_raw;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_expand_out_ack_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(out_ack_i),
		.sel_o(out_ack_raw),
		.err_o(out_ack_err)
	);
	assign out_ack = sv2v_cast_39E4E(out_ack_raw);
	assign err_o = en_err | out_ack_err;
	localparam signed [31:0] AesKeyExpandSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesKeyExpandSecMaskingNonDefault - 1:0] sv2v_cast_17566;
		input reg [AesKeyExpandSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_17566 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_8
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_17566(1'b1);
	end
	initial _sv2v_0 = 0;
endmodule
