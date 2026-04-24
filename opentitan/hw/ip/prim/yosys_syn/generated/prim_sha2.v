module prim_sha2 (
	clk_i,
	rst_ni,
	wipe_secret_i,
	wipe_v_i,
	fifo_rvalid_i,
	fifo_rdata_i,
	fifo_rready_o,
	sha_en_i,
	hash_start_i,
	hash_stop_i,
	hash_continue_i,
	digest_mode_i,
	hash_process_i,
	hash_done_o,
	message_length_i,
	digest_i,
	digest_we_i,
	digest_o,
	digest_on_blk_o,
	fifo_st_o,
	hash_running_o,
	idle_o
);
	reg _sv2v_0;
	parameter [0:0] MultimodeEn = 0;
	localparam signed [31:0] prim_sha2_pkg_NumRound256 = 64;
	localparam [31:0] RndWidth256 = 6;
	localparam signed [31:0] prim_sha2_pkg_NumRound512 = 80;
	localparam [31:0] RndWidth512 = 7;
	localparam [63:0] ZeroWord = 1'sb0;
	input clk_i;
	input rst_ni;
	input wipe_secret_i;
	input wire [31:0] wipe_v_i;
	input fifo_rvalid_i;
	localparam signed [31:0] prim_sha2_pkg_WordByte64 = 8;
	input wire [71:0] fifo_rdata_i;
	output wire fifo_rready_o;
	input sha_en_i;
	input hash_start_i;
	input hash_stop_i;
	input hash_continue_i;
	input wire [3:0] digest_mode_i;
	input hash_process_i;
	output reg hash_done_o;
	input [63:0] message_length_i;
	input wire [511:0] digest_i;
	input wire [7:0] digest_we_i;
	output wire [511:0] digest_o;
	output wire digest_on_blk_o;
	output wire [1:0] fifo_st_o;
	output wire hash_running_o;
	output wire idle_o;
	wire msg_feed_complete;
	wire shaf_rready;
	wire shaf_rvalid;
	reg update_w_from_fifo;
	reg calculate_next_w;
	reg init_hash;
	reg run_hash;
	wire one_chunk_done;
	reg update_digest;
	wire clear_digest;
	reg hash_done_next;
	wire hash_go;
	reg [6:0] round_d;
	reg [6:0] round_q;
	wire [3:0] w_index_d;
	reg [3:0] w_index_q;
	wire [3:0] digest_mode_flag_d;
	reg [3:0] digest_mode_flag_q;
	wire [63:0] shaf_rdata;
	generate
		if (!MultimodeEn) begin : gen_tie_unused
			wire [7:0] unused_digest_upper;
			genvar _gv_i_1;
			for (_gv_i_1 = 0; _gv_i_1 < 8; _gv_i_1 = _gv_i_1 + 1) begin : gen_unused_digest_upper
				localparam i = _gv_i_1;
				assign unused_digest_upper[i] = ^digest_i[(i * 64) + 63-:32];
			end
			wire unused_signals;
			assign unused_signals = ^{shaf_rdata[63:32], unused_digest_upper};
		end
	endgenerate
	assign hash_go = hash_start_i | hash_continue_i;
	assign digest_mode_flag_d = (hash_go ? digest_mode_i : (hash_done_o ? 4'b1000 : digest_mode_flag_q));
	localparam [2047:0] prim_sha2_pkg_CubicRootPrime256 = 2048'h428a2f9871374491b5c0fbcfe9b5dba53956c25b59f111f1923f82a4ab1c5ed5d807aa9812835b01243185be550c7dc372be5d7480deb1fe9bdc06a7c19bf174e49b69c1efbe47860fc19dc6240ca1cc2de92c6f4a7484aa5cb0a9dc76f988da983e5152a831c66db00327c8bf597fc7c6e00bf3d5a7914706ca63511429296727b70a852e1b21384d2c6dfc53380d13650a7354766a0abb81c2c92e92722c85a2bfe8a1a81a664bc24b8b70c76c51a3d192e819d6990624f40e3585106aa07019a4c1161e376c082748774c34b0bcb5391c0cb34ed8aa4a5b9cca4f682e6ff3748f82ee78a5636f84c878148cc7020890befffaa4506cebbef9a3f7c67178f2;
	localparam [5119:0] prim_sha2_pkg_CubicRootPrime512 = 5120'h428a2f98d728ae227137449123ef65cdb5c0fbcfec4d3b2fe9b5dba58189dbbc3956c25bf348b53859f111f1b605d019923f82a4af194f9bab1c5ed5da6d8118d807aa98a303024212835b0145706fbe243185be4ee4b28c550c7dc3d5ffb4e272be5d74f27b896f80deb1fe3b1696b19bdc06a725c71235c19bf174cf692694e49b69c19ef14ad2efbe4786384f25e30fc19dc68b8cd5b5240ca1cc77ac9c652de92c6f592b02754a7484aa6ea6e4835cb0a9dcbd41fbd476f988da831153b5983e5152ee66dfaba831c66d2db43210b00327c898fb213fbf597fc7beef0ee4c6e00bf33da88fc2d5a79147930aa72506ca6351e003826f142929670a0e6e7027b70a8546d22ffc2e1b21385c26c9264d2c6dfc5ac42aed53380d139d95b3df650a73548baf63de766a0abb3c77b2a881c2c92e47edaee692722c851482353ba2bfe8a14cf10364a81a664bbc423001c24b8b70d0f89791c76c51a30654be30d192e819d6ef5218d69906245565a910f40e35855771202a106aa07032bbd1b819a4c116b8d2d0c81e376c085141ab532748774cdf8eeb9934b0bcb5e19b48a8391c0cb3c5c95a634ed8aa4ae3418acb5b9cca4f7763e373682e6ff3d6b2b8a3748f82ee5defb2fc78a5636f43172f6084c87814a1f0ab728cc702081a6439ec90befffa23631e28a4506cebde82bde9bef9a3f7b2c67915c67178f2e372532bca273eceea26619cd186b8c721c0c207eada7dd6cde0eb1ef57d4f7fee6ed17806f067aa72176fba0a637dc5a2c898a6113f9804bef90dae1b710b35131c471b28db77f523047d8432caab7b40c724933c9ebe0a15c9bebc431d67c49c100d4c4cc5d4becb3e42b6597f299cfc657e2a5fcb6fab3ad6faec6c44198c4a475817;
	localparam [255:0] prim_sha2_pkg_InitHash_256 = 256'h6a09e667bb67ae853c6ef372a54ff53a510e527f9b05688c1f83d9ab5be0cd19;
	localparam [511:0] prim_sha2_pkg_InitHash_384 = 512'hcbbb9d5dc1059ed8629a292a367cd5079159015a3070dd17152fecd8f70e593967332667ffc00b318eb44a8768581511db0c2e0d64f98fa747b5481dbefa4fa4;
	localparam [511:0] prim_sha2_pkg_InitHash_512 = 512'h6a09e667f3bcc908bb67ae8584caa73b3c6ef372fe94f82ba54ff53a5f1d36f1510e527fade682d19b05688c2b3e6c1f1f83d9abfb41bd6b5be0cd19137e2179;
	function automatic [31:0] prim_sha2_pkg_rotr32;
		input reg [31:0] v;
		input integer amt;
		prim_sha2_pkg_rotr32 = (v >> amt) | (v << (32 - amt));
	endfunction
	function automatic [31:0] prim_sha2_pkg_shiftr32;
		input reg [31:0] v;
		input integer amt;
		prim_sha2_pkg_shiftr32 = v >> amt;
	endfunction
	function automatic [31:0] prim_sha2_pkg_calc_w_256;
		input reg [31:0] w_0;
		input reg [31:0] w_1;
		input reg [31:0] w_9;
		input reg [31:0] w_14;
		reg [31:0] sum0;
		reg [31:0] sum1;
		begin
			sum0 = (prim_sha2_pkg_rotr32(w_1, 7) ^ prim_sha2_pkg_rotr32(w_1, 18)) ^ prim_sha2_pkg_shiftr32(w_1, 3);
			sum1 = (prim_sha2_pkg_rotr32(w_14, 17) ^ prim_sha2_pkg_rotr32(w_14, 19)) ^ prim_sha2_pkg_shiftr32(w_14, 10);
			prim_sha2_pkg_calc_w_256 = ((w_0 + sum0) + w_9) + sum1;
		end
	endfunction
	function automatic [63:0] prim_sha2_pkg_rotr64;
		input reg [63:0] v;
		input integer amt;
		prim_sha2_pkg_rotr64 = (v >> amt) | (v << (64 - amt));
	endfunction
	function automatic [63:0] prim_sha2_pkg_shiftr64;
		input reg [63:0] v;
		input integer amt;
		prim_sha2_pkg_shiftr64 = v >> amt;
	endfunction
	function automatic [63:0] prim_sha2_pkg_calc_w_512;
		input reg [63:0] w_0;
		input reg [63:0] w_1;
		input reg [63:0] w_9;
		input reg [63:0] w_14;
		reg [63:0] sum0;
		reg [63:0] sum1;
		begin
			sum0 = (prim_sha2_pkg_rotr64(w_1, 1) ^ prim_sha2_pkg_rotr64(w_1, 8)) ^ prim_sha2_pkg_shiftr64(w_1, 7);
			sum1 = (prim_sha2_pkg_rotr64(w_14, 19) ^ prim_sha2_pkg_rotr64(w_14, 61)) ^ prim_sha2_pkg_shiftr64(w_14, 6);
			prim_sha2_pkg_calc_w_512 = ((w_0 + sum0) + w_9) + sum1;
		end
	endfunction
	function automatic [255:0] prim_sha2_pkg_compress_256;
		input reg [31:0] w;
		input reg [31:0] k;
		input reg [255:0] h_i;
		reg [31:0] sigma_0;
		reg [31:0] sigma_1;
		reg [31:0] ch;
		reg [31:0] maj;
		reg [31:0] temp1;
		reg [31:0] temp2;
		begin
			sigma_1 = (prim_sha2_pkg_rotr32(h_i[128+:32], 6) ^ prim_sha2_pkg_rotr32(h_i[128+:32], 11)) ^ prim_sha2_pkg_rotr32(h_i[128+:32], 25);
			ch = (h_i[128+:32] & h_i[160+:32]) ^ (~h_i[128+:32] & h_i[192+:32]);
			temp1 = (((h_i[224+:32] + sigma_1) + ch) + k) + w;
			sigma_0 = (prim_sha2_pkg_rotr32(h_i[0+:32], 2) ^ prim_sha2_pkg_rotr32(h_i[0+:32], 13)) ^ prim_sha2_pkg_rotr32(h_i[0+:32], 22);
			maj = ((h_i[0+:32] & h_i[32+:32]) ^ (h_i[0+:32] & h_i[64+:32])) ^ (h_i[32+:32] & h_i[64+:32]);
			temp2 = sigma_0 + maj;
			prim_sha2_pkg_compress_256[224+:32] = h_i[192+:32];
			prim_sha2_pkg_compress_256[192+:32] = h_i[160+:32];
			prim_sha2_pkg_compress_256[160+:32] = h_i[128+:32];
			prim_sha2_pkg_compress_256[128+:32] = h_i[96+:32] + temp1;
			prim_sha2_pkg_compress_256[96+:32] = h_i[64+:32];
			prim_sha2_pkg_compress_256[64+:32] = h_i[32+:32];
			prim_sha2_pkg_compress_256[32+:32] = h_i[0+:32];
			prim_sha2_pkg_compress_256[0+:32] = temp1 + temp2;
		end
	endfunction
	function automatic [511:0] prim_sha2_pkg_compress_512;
		input reg [63:0] w;
		input reg [63:0] k;
		input reg [511:0] h_i;
		reg [63:0] sigma_0;
		reg [63:0] sigma_1;
		reg [63:0] ch;
		reg [63:0] maj;
		reg [63:0] temp1;
		reg [63:0] temp2;
		begin
			sigma_1 = (prim_sha2_pkg_rotr64(h_i[256+:64], 14) ^ prim_sha2_pkg_rotr64(h_i[256+:64], 18)) ^ prim_sha2_pkg_rotr64(h_i[256+:64], 41);
			ch = (h_i[256+:64] & h_i[320+:64]) ^ (~h_i[256+:64] & h_i[384+:64]);
			temp1 = (((h_i[448+:64] + sigma_1) + ch) + k) + w;
			sigma_0 = (prim_sha2_pkg_rotr64(h_i[0+:64], 28) ^ prim_sha2_pkg_rotr64(h_i[0+:64], 34)) ^ prim_sha2_pkg_rotr64(h_i[0+:64], 39);
			maj = ((h_i[0+:64] & h_i[64+:64]) ^ (h_i[0+:64] & h_i[128+:64])) ^ (h_i[64+:64] & h_i[128+:64]);
			temp2 = sigma_0 + maj;
			prim_sha2_pkg_compress_512[448+:64] = h_i[384+:64];
			prim_sha2_pkg_compress_512[384+:64] = h_i[320+:64];
			prim_sha2_pkg_compress_512[320+:64] = h_i[256+:64];
			prim_sha2_pkg_compress_512[256+:64] = h_i[192+:64] + temp1;
			prim_sha2_pkg_compress_512[192+:64] = h_i[128+:64];
			prim_sha2_pkg_compress_512[128+:64] = h_i[64+:64];
			prim_sha2_pkg_compress_512[64+:64] = h_i[0+:64];
			prim_sha2_pkg_compress_512[0+:64] = temp1 + temp2;
		end
	endfunction
	function automatic [511:0] prim_sha2_pkg_compress_multi_256;
		input reg [31:0] w;
		input reg [31:0] k;
		input reg [511:0] h_i;
		reg [31:0] sigma_0;
		reg [31:0] sigma_1;
		reg [31:0] ch;
		reg [31:0] maj;
		reg [31:0] temp1;
		reg [31:0] temp2;
		begin
			sigma_1 = (prim_sha2_pkg_rotr32(h_i[287-:32], 6) ^ prim_sha2_pkg_rotr32(h_i[287-:32], 11)) ^ prim_sha2_pkg_rotr32(h_i[287-:32], 25);
			ch = (h_i[287-:32] & h_i[351-:32]) ^ (~h_i[287-:32] & h_i[415-:32]);
			temp1 = (((h_i[479-:32] + sigma_1) + ch) + k) + w;
			sigma_0 = (prim_sha2_pkg_rotr32(h_i[31-:32], 2) ^ prim_sha2_pkg_rotr32(h_i[31-:32], 13)) ^ prim_sha2_pkg_rotr32(h_i[31-:32], 22);
			maj = ((h_i[31-:32] & h_i[95-:32]) ^ (h_i[31-:32] & h_i[159-:32])) ^ (h_i[95-:32] & h_i[159-:32]);
			temp2 = sigma_0 + maj;
			prim_sha2_pkg_compress_multi_256[448+:64] = {32'b00000000000000000000000000000000, h_i[415-:32]};
			prim_sha2_pkg_compress_multi_256[384+:64] = {32'b00000000000000000000000000000000, h_i[351-:32]};
			prim_sha2_pkg_compress_multi_256[320+:64] = {32'b00000000000000000000000000000000, h_i[287-:32]};
			prim_sha2_pkg_compress_multi_256[256+:64] = {32'b00000000000000000000000000000000, h_i[223-:32] + temp1};
			prim_sha2_pkg_compress_multi_256[192+:64] = {32'b00000000000000000000000000000000, h_i[159-:32]};
			prim_sha2_pkg_compress_multi_256[128+:64] = {32'b00000000000000000000000000000000, h_i[95-:32]};
			prim_sha2_pkg_compress_multi_256[64+:64] = {32'b00000000000000000000000000000000, h_i[31-:32]};
			prim_sha2_pkg_compress_multi_256[0+:64] = {32'b00000000000000000000000000000000, temp1 + temp2};
		end
	endfunction
	generate
		if (MultimodeEn) begin : gen_multimode
			reg [511:0] hash_d;
			reg [511:0] hash_q;
			reg [1023:0] w_d;
			reg [1023:0] w_q;
			reg [511:0] digest_d;
			reg [511:0] digest_q;
			always @(*) begin : compute_w_multimode
				if (_sv2v_0)
					;
				w_d = w_q;
				if (wipe_secret_i)
					w_d = {32 {wipe_v_i}};
				else if (!sha_en_i || hash_go)
					w_d = 1'sb0;
				else if (!run_hash && update_w_from_fifo)
					w_d = {shaf_rdata, w_q[64+:960]};
				else if (calculate_next_w) begin
					if (digest_mode_flag_q == 4'b0001)
						w_d = {32'b00000000000000000000000000000000, prim_sha2_pkg_calc_w_256(w_q[31-:32], w_q[95-:32], w_q[607-:32], w_q[927-:32]), w_q[64+:960]};
					else if ((digest_mode_flag_q == 4'b0010) || (digest_mode_flag_q == 4'b0100))
						w_d = {prim_sha2_pkg_calc_w_512(w_q[0+:64], w_q[64+:64], w_q[576+:64], w_q[896+:64]), w_q[64+:960]};
				end
				else if (run_hash)
					w_d = {ZeroWord, w_q[64+:960]};
			end
			always @(posedge clk_i or negedge rst_ni) begin : update_w_multimode
				if (!rst_ni)
					w_q <= 1'sb0;
				else if (MultimodeEn)
					w_q <= w_d;
			end
			always @(*) begin : compression_multimode
				if (_sv2v_0)
					;
				hash_d = hash_q;
				if (wipe_secret_i)
					hash_d = {16 {wipe_v_i}};
				else if (init_hash)
					hash_d = digest_q;
				else if (run_hash) begin
					if (digest_mode_flag_q == 4'b0001)
						hash_d = prim_sha2_pkg_compress_multi_256(w_q[31-:32], prim_sha2_pkg_CubicRootPrime256[(63 - round_q[5:0]) * 32+:32], hash_q);
					else
						hash_d = prim_sha2_pkg_compress_512(w_q[0+:64], prim_sha2_pkg_CubicRootPrime512[(79 - round_q) * 64+:64], hash_q);
				end
			end
			always @(posedge clk_i or negedge rst_ni) begin : update_hash_multimode
				if (!rst_ni)
					hash_q <= 1'sb0;
				else
					hash_q <= hash_d;
			end
			always @(*) begin : compute_digest_multimode
				if (_sv2v_0)
					;
				digest_d = digest_q;
				if (wipe_secret_i)
					digest_d = {16 {wipe_v_i}};
				else if (hash_start_i) begin : sv2v_autoblock_1
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						if (digest_mode_i == 4'b0001)
							digest_d[i * 64+:64] = {32'b00000000000000000000000000000000, prim_sha2_pkg_InitHash_256[(7 - i) * 32+:32]};
						else if (digest_mode_i == 4'b0010)
							digest_d[i * 64+:64] = prim_sha2_pkg_InitHash_384[(7 - i) * 64+:64];
						else if (digest_mode_i == 4'b0100)
							digest_d[i * 64+:64] = prim_sha2_pkg_InitHash_512[(7 - i) * 64+:64];
				end
				else if (clear_digest)
					digest_d = 1'sb0;
				else if (!sha_en_i) begin : sv2v_autoblock_2
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						digest_d[i * 64+:64] = (digest_we_i[i] ? digest_i[i * 64+:64] : digest_q[i * 64+:64]);
				end
				else if (update_digest) begin : sv2v_autoblock_3
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						digest_d[i * 64+:64] = digest_q[i * 64+:64] + hash_q[i * 64+:64];
				end
			end
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					digest_q <= 1'sb0;
				else
					digest_q <= digest_d;
			assign digest_o = digest_q;
		end
		else begin : gen_256
			wire [31:0] shaf_rdata256;
			reg [255:0] hash256_d;
			reg [255:0] hash256_q;
			reg [511:0] w256_d;
			reg [511:0] w256_q;
			reg [255:0] digest256_d;
			reg [255:0] digest256_q;
			assign shaf_rdata256 = shaf_rdata[31:0];
			always @(*) begin : compute_w_256
				if (_sv2v_0)
					;
				w256_d = w256_q;
				if (wipe_secret_i)
					w256_d = {16 {wipe_v_i}};
				else if (!sha_en_i || hash_go)
					w256_d = 1'sb0;
				else if (!run_hash && update_w_from_fifo)
					w256_d = {shaf_rdata256, w256_q[32+:480]};
				else if (calculate_next_w)
					w256_d = {prim_sha2_pkg_calc_w_256(w256_q[31-:32], w256_q[63-:32], w256_q[319-:32], w256_q[479-:32]), w256_q[32+:480]};
				else if (run_hash)
					w256_d = {ZeroWord[31:0], w256_q[32+:480]};
			end
			always @(posedge clk_i or negedge rst_ni) begin : update_w_256
				if (!rst_ni)
					w256_q <= 1'sb0;
				else if (!MultimodeEn)
					w256_q <= w256_d;
			end
			always @(*) begin : compression_256
				if (_sv2v_0)
					;
				hash256_d = hash256_q;
				if (wipe_secret_i)
					hash256_d = {8 {wipe_v_i}};
				else if (init_hash)
					hash256_d = digest256_q;
				else if (run_hash)
					hash256_d = prim_sha2_pkg_compress_256(w256_q[0+:32], prim_sha2_pkg_CubicRootPrime256[(63 - round_q[5:0]) * 32+:32], hash256_q);
			end
			always @(posedge clk_i or negedge rst_ni) begin : update_hash256
				if (!rst_ni)
					hash256_q <= 1'sb0;
				else
					hash256_q <= hash256_d;
			end
			always @(*) begin : compute_digest_256
				if (_sv2v_0)
					;
				digest256_d = digest256_q;
				if (wipe_secret_i)
					digest256_d = {8 {wipe_v_i}};
				else if (hash_start_i) begin : sv2v_autoblock_4
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						digest256_d[i * 32+:32] = prim_sha2_pkg_InitHash_256[(7 - i) * 32+:32];
				end
				else if (clear_digest)
					digest256_d = 1'sb0;
				else if (!sha_en_i) begin : sv2v_autoblock_5
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						digest256_d[i * 32+:32] = (digest_we_i[i] ? digest_i[(i * 64) + 31-:32] : digest256_q[i * 32+:32]);
				end
				else if (update_digest) begin : sv2v_autoblock_6
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						digest256_d[i * 32+:32] = digest256_q[i * 32+:32] + hash256_q[i * 32+:32];
				end
			end
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					digest256_q <= 1'sb0;
				else
					digest256_q <= digest256_d;
			genvar _gv_i_2;
			for (_gv_i_2 = 0; _gv_i_2 < 8; _gv_i_2 = _gv_i_2 + 1) begin : gen_assign_digest_256
				localparam i = _gv_i_2;
				assign digest_o[(i * 64) + 31-:32] = digest256_q[i * 32+:32];
				assign digest_o[(i * 64) + 63-:32] = 32'b00000000000000000000000000000000;
			end
		end
	endgenerate
	function automatic [5:0] sv2v_cast_E23D1;
		input reg [5:0] inp;
		sv2v_cast_E23D1 = inp;
	endfunction
	function automatic [6:0] sv2v_cast_35326;
		input reg [6:0] inp;
		sv2v_cast_35326 = inp;
	endfunction
	always @(*) begin : round_counter
		if (_sv2v_0)
			;
		round_d = round_q;
		if (!sha_en_i || hash_go)
			round_d = 1'sb0;
		else if (run_hash) begin
			if (((round_q[5:0] == sv2v_cast_E23D1($unsigned(63))) && ((digest_mode_flag_q == 4'b0001) || !MultimodeEn)) || ((round_q == sv2v_cast_35326($unsigned(79))) && ((digest_mode_flag_q == 4'b0010) || (digest_mode_flag_q == 4'b0100))))
				round_d = 1'sb0;
			else
				round_d = round_q + 1;
		end
	end
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			round_q <= 1'sb0;
		else
			round_q <= round_d;
	assign w_index_d = (~sha_en_i || hash_go ? {4 {1'sb0}} : (update_w_from_fifo ? w_index_q + 1 : w_index_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			w_index_q <= 1'sb0;
		else
			w_index_q <= w_index_d;
	assign shaf_rready = update_w_from_fifo;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			hash_done_o <= 1'b0;
		else
			hash_done_o <= hash_done_next;
	reg [1:0] fifo_st_q;
	reg [1:0] fifo_st_d;
	assign fifo_st_o = fifo_st_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			fifo_st_q <= 2'd0;
		else
			fifo_st_q <= fifo_st_d;
	always @(*) begin
		if (_sv2v_0)
			;
		fifo_st_d = fifo_st_q;
		update_w_from_fifo = 1'b0;
		hash_done_next = 1'b0;
		(* full_case, parallel_case *)
		case (fifo_st_q)
			2'd0:
				if (hash_go)
					fifo_st_d = 2'd1;
				else
					fifo_st_d = 2'd0;
			2'd1:
				if (!shaf_rvalid) begin
					fifo_st_d = 2'd1;
					update_w_from_fifo = 1'b0;
					if (msg_feed_complete) begin
						fifo_st_d = 2'd0;
						hash_done_next = 1'b1;
					end
				end
				else if (w_index_q == 4'd15) begin
					fifo_st_d = 2'd2;
					update_w_from_fifo = 1'b1;
				end
				else begin
					fifo_st_d = 2'd1;
					update_w_from_fifo = 1'b1;
				end
			2'd2:
				if (msg_feed_complete && one_chunk_done) begin
					fifo_st_d = 2'd0;
					hash_done_next = 1'b1;
				end
				else if (one_chunk_done)
					fifo_st_d = 2'd1;
				else
					fifo_st_d = 2'd2;
			default: fifo_st_d = 2'd0;
		endcase
		if (!sha_en_i) begin
			fifo_st_d = 2'd0;
			update_w_from_fifo = 1'b0;
		end
		else if (hash_go)
			fifo_st_d = 2'd1;
	end
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			digest_mode_flag_q <= 4'b1000;
		else
			digest_mode_flag_q <= digest_mode_flag_d;
	reg [1:0] sha_st_q;
	reg [1:0] sha_st_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			sha_st_q <= 2'd0;
		else
			sha_st_q <= sha_st_d;
	reg sha_en_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			sha_en_q <= 1'b0;
		else
			sha_en_q <= sha_en_i;
	assign clear_digest = hash_start_i | (~sha_en_i & sha_en_q);
	always @(*) begin
		if (_sv2v_0)
			;
		update_digest = 1'b0;
		calculate_next_w = 1'b0;
		init_hash = 1'b0;
		run_hash = 1'b0;
		sha_st_d = sha_st_q;
		(* full_case, parallel_case *)
		case (sha_st_q)
			2'd0:
				if (fifo_st_q == 2'd2) begin
					init_hash = 1'b1;
					sha_st_d = 2'd1;
				end
				else
					sha_st_d = 2'd0;
			2'd1: begin
				run_hash = 1'b1;
				if ((((digest_mode_flag_q == 4'b0001) || ~MultimodeEn) && (round_q < 48)) || (((digest_mode_flag_q == 4'b0010) || (digest_mode_flag_q == 4'b0100)) && (round_q < 64)))
					calculate_next_w = 1'b1;
				else if (one_chunk_done)
					sha_st_d = 2'd2;
				else
					sha_st_d = 2'd1;
			end
			2'd2: begin
				update_digest = 1'b1;
				if (fifo_st_q == 2'd2) begin
					init_hash = 1'b1;
					sha_st_d = 2'd1;
				end
				else
					sha_st_d = 2'd0;
			end
			default: sha_st_d = 2'd0;
		endcase
		if (!sha_en_i || hash_go)
			sha_st_d = 2'd0;
	end
	reg update_digest_q;
	wire update_digest_d;
	assign digest_on_blk_o = ((update_digest || update_digest_q) && (fifo_st_q == 2'd0)) && (((digest_mode_flag_q == 4'b0001) && (message_length_i[8:0] == {9 {1'sb0}})) || (|{digest_mode_flag_q == 4'b0010, digest_mode_flag_q == 4'b0100} && (message_length_i[9:0] == {10 {1'sb0}})));
	assign update_digest_d = (digest_on_blk_o ? 1'b0 : (update_digest ? 1'b1 : update_digest_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			update_digest_q <= 1'b0;
		else
			update_digest_q <= update_digest_d;
	assign one_chunk_done = (((digest_mode_flag_q == 4'b0001) || ~MultimodeEn) && (round_q == 7'd63) ? 1'b1 : (((digest_mode_flag_q == 4'b0010) || (digest_mode_flag_q == 4'b0100)) && (round_q == 7'd79) ? 1'b1 : 1'b0));
	prim_sha2_pad #(.MultimodeEn(MultimodeEn)) u_pad(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.fifo_rvalid_i(fifo_rvalid_i),
		.fifo_rdata_i(fifo_rdata_i),
		.fifo_rready_o(fifo_rready_o),
		.shaf_rvalid_o(shaf_rvalid),
		.shaf_rdata_o(shaf_rdata),
		.shaf_rready_i(shaf_rready),
		.sha_en_i(sha_en_i),
		.hash_start_i(hash_start_i),
		.hash_stop_i(hash_stop_i),
		.hash_continue_i(hash_continue_i),
		.digest_mode_i(digest_mode_i),
		.hash_process_i(hash_process_i),
		.hash_done_i(hash_done_o),
		.message_length_i({64'b0000000000000000000000000000000000000000000000000000000000000000, message_length_i}),
		.msg_feed_complete_o(msg_feed_complete)
	);
	assign hash_running_o = (init_hash | run_hash) | update_digest;
	assign idle_o = ((fifo_st_q == 2'd0) && (sha_st_q == 2'd0)) && !hash_go;
	initial _sv2v_0 = 0;
endmodule
