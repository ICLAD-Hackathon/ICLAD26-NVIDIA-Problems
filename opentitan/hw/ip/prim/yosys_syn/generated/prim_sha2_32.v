module prim_sha2_32 (
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
	hash_running_o,
	idle_o
);
	reg _sv2v_0;
	parameter [0:0] MultimodeEn = 0;
	input clk_i;
	input rst_ni;
	input wipe_secret_i;
	input wire [31:0] wipe_v_i;
	input fifo_rvalid_i;
	localparam signed [31:0] prim_sha2_pkg_WordByte32 = 4;
	input wire [35:0] fifo_rdata_i;
	output reg fifo_rready_o;
	input sha_en_i;
	input hash_start_i;
	input hash_stop_i;
	input hash_continue_i;
	input wire [3:0] digest_mode_i;
	input hash_process_i;
	output wire hash_done_o;
	input [63:0] message_length_i;
	input wire [511:0] digest_i;
	input wire [7:0] digest_we_i;
	output wire [511:0] digest_o;
	output wire digest_on_blk_o;
	output wire hash_running_o;
	output wire idle_o;
	localparam signed [31:0] prim_sha2_pkg_WordByte64 = 8;
	reg [71:0] full_word;
	wire sha_ready;
	wire hash_go;
	assign hash_go = hash_start_i | hash_continue_i;
	wire [1:0] fifo_st;
	generate
		if (!MultimodeEn) begin : gen_tie_unused
			wire unused_signals;
			assign unused_signals = ^{digest_mode_i, hash_go};
		end
		if (MultimodeEn) begin : gen_multimode_logic
			reg [71:0] word_buffer_d;
			reg [71:0] word_buffer_q;
			reg [1:0] word_part_count_d;
			reg [1:0] word_part_count_q;
			reg sha_process;
			reg process_flag_d;
			reg process_flag_q;
			reg word_valid;
			reg word_part_inc;
			reg word_part_reset;
			reg [3:0] digest_mode_flag_d;
			reg [3:0] digest_mode_flag_q;
			always @(*) begin : multimode_combinational
				if (_sv2v_0)
					;
				word_part_inc = 1'b0;
				word_part_reset = 1'b0;
				full_word[7-:prim_sha2_pkg_WordByte64] = 8'hff;
				full_word[71-:64] = 64'h0000000000000000;
				sha_process = 1'b0;
				word_valid = 1'b0;
				fifo_rready_o = 1'b0;
				if (!sha_en_i || hash_go)
					word_buffer_d = 0;
				else
					word_buffer_d = word_buffer_q;
				if (sha_en_i && fifo_rvalid_i) begin
					if (word_part_count_q == 2'b00) begin
						if (digest_mode_flag_q != 4'b0001) begin
							word_buffer_d[71:40] = fifo_rdata_i[35-:32];
							word_buffer_d[7:4] = fifo_rdata_i[3-:prim_sha2_pkg_WordByte32];
							if (fifo_st == 2'd1) begin
								fifo_rready_o = 1'b1;
								word_part_inc = 1'b1;
							end
							else begin
								fifo_rready_o = 1'b0;
								word_part_inc = 1'b0;
							end
						end
						else begin
							word_valid = 1'b1;
							word_buffer_d[71-:64] = {32'b00000000000000000000000000000000, fifo_rdata_i[35-:32]};
							word_buffer_d[7-:prim_sha2_pkg_WordByte64] = {4'hf, fifo_rdata_i[3-:prim_sha2_pkg_WordByte32]};
							full_word[71-:64] = {32'b00000000000000000000000000000000, fifo_rdata_i[35-:32]};
							full_word[7-:prim_sha2_pkg_WordByte64] = {4'hf, fifo_rdata_i[3-:prim_sha2_pkg_WordByte32]};
							if (hash_process_i || process_flag_q)
								sha_process = 1'b1;
							if (sha_ready == 1'b1)
								fifo_rready_o = 1'b1;
							else
								fifo_rready_o = 1'b0;
						end
					end
					else if (word_part_count_q == 2'b01) begin
						word_buffer_d[39:8] = fifo_rdata_i[35-:32];
						word_buffer_d[3:0] = fifo_rdata_i[3-:prim_sha2_pkg_WordByte32];
						word_valid = 1'b1;
						full_word[71:40] = word_buffer_q[71:40];
						full_word[7:4] = word_buffer_q[7:4];
						full_word[39:8] = fifo_rdata_i[35-:32];
						full_word[3:0] = fifo_rdata_i[3-:prim_sha2_pkg_WordByte32];
						if (hash_process_i || process_flag_q)
							sha_process = 1'b1;
						if (sha_ready == 1'b1) begin
							fifo_rready_o = 1'b1;
							word_part_reset = 1'b1;
							word_part_inc = 1'b0;
						end
						else begin
							fifo_rready_o = 1'b0;
							word_part_inc = 1'b0;
						end
					end
					else if (word_part_count_q == 2'b10) begin
						fifo_rready_o = 1'b0;
						word_valid = 1'b1;
						full_word = word_buffer_q;
						if (hash_process_i || process_flag_q)
							sha_process = 1'b1;
						if (sha_ready == 1'b1)
							word_part_reset = 1'b1;
					end
				end
				else if (sha_en_i) begin
					full_word = word_buffer_q;
					if ((word_part_count_q == 2'b00) && (hash_process_i || process_flag_q))
						sha_process = 1'b1;
					else if ((word_part_count_q == 2'b01) && (hash_process_i || process_flag_q)) begin
						full_word[39:8] = 32'b00000000000000000000000000000000;
						full_word[3:0] = 4'h0;
						word_valid = 1'b1;
						sha_process = 1'b1;
						if (sha_ready == 1'b1)
							word_part_reset = 1'b1;
					end
					else if (word_part_count_q == 2'b01)
						word_valid = 1'b0;
					else if ((word_part_count_q == 2'b10) && (hash_process_i || process_flag_q)) begin
						word_valid = 1'b1;
						sha_process = 1'b1;
						if (sha_ready == 1'b1)
							word_part_reset = 1'b1;
					end
					else if (word_part_count_q == 2'b10)
						word_valid = 1'b0;
				end
				if ((word_part_reset || hash_go) || !sha_en_i)
					word_part_count_d = 1'sb0;
				else if (word_part_inc)
					word_part_count_d = word_part_count_q + 1'b1;
				else
					word_part_count_d = word_part_count_q;
				if (hash_go)
					digest_mode_flag_d = digest_mode_i;
				else if (hash_done_o)
					digest_mode_flag_d = 4'b1000;
				else
					digest_mode_flag_d = digest_mode_flag_q;
				if (!sha_en_i || hash_go)
					process_flag_d = 1'b0;
				else if (hash_process_i)
					process_flag_d = 1'b1;
				else
					process_flag_d = process_flag_q;
			end
			prim_sha2 #(.MultimodeEn(1)) u_prim_sha2_multimode(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.wipe_secret_i(wipe_secret_i),
				.wipe_v_i(wipe_v_i),
				.fifo_rvalid_i(word_valid),
				.fifo_rdata_i(full_word),
				.fifo_rready_o(sha_ready),
				.sha_en_i(sha_en_i),
				.hash_start_i(hash_start_i),
				.hash_stop_i(hash_stop_i),
				.hash_continue_i(hash_continue_i),
				.digest_mode_i(digest_mode_i),
				.hash_process_i(sha_process),
				.hash_done_o(hash_done_o),
				.message_length_i(message_length_i),
				.digest_i(digest_i),
				.digest_we_i(digest_we_i),
				.digest_o(digest_o),
				.digest_on_blk_o(digest_on_blk_o),
				.fifo_st_o(fifo_st),
				.hash_running_o(hash_running_o),
				.idle_o(idle_o)
			);
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					word_part_count_q <= 1'sb0;
				else
					word_part_count_q <= word_part_count_d;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					word_buffer_q <= 0;
				else
					word_buffer_q <= word_buffer_d;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					process_flag_q <= 1'sb0;
				else
					process_flag_q <= process_flag_d;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					digest_mode_flag_q <= 4'b1000;
				else
					digest_mode_flag_q <= digest_mode_flag_d;
		end
		else begin : gen_sha256_logic
			always @(*) begin : sha256_combinational
				if (_sv2v_0)
					;
				full_word[71-:64] = {32'b00000000000000000000000000000000, fifo_rdata_i[35-:32]};
				full_word[7-:prim_sha2_pkg_WordByte64] = {4'hf, fifo_rdata_i[3-:prim_sha2_pkg_WordByte32]};
				fifo_rready_o = sha_ready;
			end
			prim_sha2 #(.MultimodeEn(0)) u_prim_sha2_256(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.wipe_secret_i(wipe_secret_i),
				.wipe_v_i(wipe_v_i),
				.fifo_rvalid_i(fifo_rvalid_i),
				.fifo_rdata_i(full_word),
				.fifo_rready_o(sha_ready),
				.sha_en_i(sha_en_i),
				.hash_start_i(hash_start_i),
				.hash_stop_i(hash_stop_i),
				.hash_continue_i(hash_continue_i),
				.digest_mode_i(4'b1000),
				.hash_process_i(hash_process_i),
				.hash_done_o(hash_done_o),
				.message_length_i(message_length_i),
				.digest_i(digest_i),
				.digest_we_i(digest_we_i),
				.digest_o(digest_o),
				.digest_on_blk_o(digest_on_blk_o),
				.fifo_st_o(fifo_st),
				.hash_running_o(hash_running_o),
				.idle_o(idle_o)
			);
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
