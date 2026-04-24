module prim_sha2_pad (
	clk_i,
	rst_ni,
	fifo_rvalid_i,
	fifo_rdata_i,
	fifo_rready_o,
	shaf_rvalid_o,
	shaf_rdata_o,
	shaf_rready_i,
	sha_en_i,
	hash_start_i,
	hash_stop_i,
	hash_continue_i,
	digest_mode_i,
	hash_process_i,
	hash_done_i,
	message_length_i,
	msg_feed_complete_o
);
	reg _sv2v_0;
	parameter [0:0] MultimodeEn = 1;
	input clk_i;
	input rst_ni;
	input fifo_rvalid_i;
	localparam signed [31:0] prim_sha2_pkg_WordByte64 = 8;
	input wire [71:0] fifo_rdata_i;
	output reg fifo_rready_o;
	output reg shaf_rvalid_o;
	output reg [63:0] shaf_rdata_o;
	input shaf_rready_i;
	input sha_en_i;
	input hash_start_i;
	input hash_stop_i;
	input hash_continue_i;
	input wire [3:0] digest_mode_i;
	input hash_process_i;
	input hash_done_i;
	input [127:0] message_length_i;
	output wire msg_feed_complete_o;
	reg [127:0] tx_count_d;
	reg [127:0] tx_count;
	reg inc_txcount;
	wire fifo_partial;
	wire txcnt_eq_1a0;
	wire txcnt_eq_msg_len;
	wire hash_go;
	wire hash_stop_flag_d;
	reg hash_stop_flag_q;
	wire hash_process_flag_d;
	reg hash_process_flag_q;
	wire [3:0] digest_mode_flag_d;
	reg [3:0] digest_mode_flag_q;
	assign hash_go = hash_start_i | hash_continue_i;
	generate
		if (!MultimodeEn) begin : gen_tie_unused
			wire unused_signals;
			assign unused_signals = ^{message_length_i[127:64]};
		end
	endgenerate
	assign fifo_partial = (MultimodeEn ? ~&fifo_rdata_i[7-:prim_sha2_pkg_WordByte64] : ~&fifo_rdata_i[3:0]);
	assign txcnt_eq_1a0 = ((digest_mode_flag_q == 4'b0001) || ~MultimodeEn ? tx_count[8:0] == 9'h1a0 : ((digest_mode_flag_q == 4'b0010) || (digest_mode_flag_q == 4'b0100) ? tx_count[9:0] == 10'h340 : 1'b0));
	generate
		if (MultimodeEn) begin : gen_txcnt_comp_multimode
			assign txcnt_eq_msg_len = tx_count == message_length_i;
		end
		else begin : gen_txcnt_comp_no_multimode
			assign txcnt_eq_msg_len = tx_count[63:0] == message_length_i[63:0];
		end
	endgenerate
	assign hash_stop_flag_d = ((~sha_en_i || hash_go) || hash_done_i ? 1'b0 : (hash_stop_i ? 1'b1 : hash_stop_flag_q));
	assign hash_process_flag_d = ((~sha_en_i || hash_go) || hash_done_i ? 1'b0 : (hash_process_i ? 1'b1 : hash_process_flag_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			hash_stop_flag_q <= 1'b0;
			hash_process_flag_q <= 1'b0;
		end
		else begin
			hash_stop_flag_q <= hash_stop_flag_d;
			hash_process_flag_q <= hash_process_flag_d;
		end
	reg [2:0] sel_data;
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_data)
			3'd0: shaf_rdata_o = fifo_rdata_i[71-:64];
			3'd1:
				if ((digest_mode_flag_q == 4'b0001) || ~MultimodeEn)
					(* full_case, parallel_case *)
					case (message_length_i[4:3])
						2'b00: shaf_rdata_o = 64'h0000000080000000;
						2'b01: shaf_rdata_o = {32'h00000000, fifo_rdata_i[39:32], 24'h800000};
						2'b10: shaf_rdata_o = {32'h00000000, fifo_rdata_i[39:24], 16'h8000};
						default: shaf_rdata_o = {32'h00000000, fifo_rdata_i[39:16], 8'h80};
					endcase
				else
					(* full_case, parallel_case *)
					case (message_length_i[5:3])
						3'b000: shaf_rdata_o = 64'h8000000000000000;
						3'b001: shaf_rdata_o = {fifo_rdata_i[71:64], 56'h80000000000000};
						3'b010: shaf_rdata_o = {fifo_rdata_i[71:56], 48'h800000000000};
						3'b011: shaf_rdata_o = {fifo_rdata_i[71:48], 40'h8000000000};
						3'b100: shaf_rdata_o = {fifo_rdata_i[71:40], 32'h80000000};
						3'b101: shaf_rdata_o = {fifo_rdata_i[71:32], 24'h800000};
						3'b110: shaf_rdata_o = {fifo_rdata_i[71:24], 16'h8000};
						default: shaf_rdata_o = {fifo_rdata_i[71:16], 8'h80};
					endcase
			3'd2: shaf_rdata_o = 1'sb0;
			3'd3: shaf_rdata_o = ((digest_mode_flag_q == 4'b0001) || ~MultimodeEn ? {32'b00000000000000000000000000000000, message_length_i[63:32]} : message_length_i[127:64]);
			3'd4: shaf_rdata_o = ((digest_mode_flag_q == 4'b0001) || ~MultimodeEn ? {32'b00000000000000000000000000000000, message_length_i[31:0]} : message_length_i[63:0]);
			default: shaf_rdata_o = 1'sb0;
		endcase
		if (!MultimodeEn)
			shaf_rdata_o[63:32] = 32'b00000000000000000000000000000000;
	end
	reg [2:0] st_q;
	reg [2:0] st_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			st_q <= 3'd0;
		else
			st_q <= st_d;
	always @(*) begin
		if (_sv2v_0)
			;
		shaf_rvalid_o = 1'b0;
		inc_txcount = 1'b0;
		sel_data = 3'd0;
		fifo_rready_o = 1'b0;
		st_d = 3'd0;
		(* full_case, parallel_case *)
		case (st_q)
			3'd0: begin
				sel_data = 3'd0;
				shaf_rvalid_o = 1'b0;
				if (sha_en_i && hash_go) begin
					inc_txcount = 1'b0;
					st_d = 3'd1;
				end
				else
					st_d = 3'd0;
			end
			3'd1: begin
				sel_data = 3'd0;
				if (fifo_partial && fifo_rvalid_i) begin
					shaf_rvalid_o = 1'b0;
					inc_txcount = 1'b0;
					fifo_rready_o = 1'b0;
					st_d = 3'd2;
				end
				else if (!hash_process_flag_q) begin
					fifo_rready_o = shaf_rready_i;
					shaf_rvalid_o = fifo_rvalid_i;
					inc_txcount = shaf_rready_i;
					st_d = 3'd1;
				end
				else if (txcnt_eq_msg_len) begin
					shaf_rvalid_o = 1'b0;
					inc_txcount = 1'b0;
					fifo_rready_o = 1'b0;
					st_d = 3'd2;
				end
				else begin
					shaf_rvalid_o = fifo_rvalid_i;
					fifo_rready_o = shaf_rready_i;
					inc_txcount = shaf_rready_i;
					st_d = 3'd1;
				end
				if (txcnt_eq_msg_len && hash_stop_flag_q) begin
					shaf_rvalid_o = 1'b0;
					inc_txcount = 1'b0;
					fifo_rready_o = 1'b0;
					st_d = 3'd0;
				end
			end
			3'd2: begin
				sel_data = 3'd1;
				shaf_rvalid_o = 1'b1;
				fifo_rready_o = ((digest_mode_flag_q == 4'b0001) || ~MultimodeEn ? shaf_rready_i && |message_length_i[4:3] : shaf_rready_i && |message_length_i[5:3]);
				if (shaf_rready_i && txcnt_eq_1a0) begin
					st_d = 3'd4;
					inc_txcount = 1'b1;
				end
				else if (shaf_rready_i && !txcnt_eq_1a0) begin
					st_d = 3'd3;
					inc_txcount = 1'b1;
				end
				else begin
					st_d = 3'd2;
					inc_txcount = 1'b0;
				end
			end
			3'd3: begin
				sel_data = 3'd2;
				shaf_rvalid_o = 1'b1;
				if (shaf_rready_i) begin
					inc_txcount = 1'b1;
					if (txcnt_eq_1a0)
						st_d = 3'd4;
					else
						st_d = 3'd3;
				end
				else
					st_d = 3'd3;
			end
			3'd4: begin
				sel_data = 3'd3;
				shaf_rvalid_o = 1'b1;
				st_d = 3'd4;
				inc_txcount = 1'b0;
				if (shaf_rready_i) begin
					st_d = 3'd5;
					inc_txcount = 1'b1;
				end
			end
			3'd5: begin
				sel_data = 3'd4;
				shaf_rvalid_o = 1'b1;
				st_d = 3'd5;
				inc_txcount = 1'b0;
				if (shaf_rready_i) begin
					st_d = 3'd0;
					inc_txcount = 1'b1;
				end
			end
			default: st_d = 3'd0;
		endcase
		if (!sha_en_i)
			st_d = 3'd0;
		else if (hash_go && |{st_q == 3'd0, st_q == 3'd1})
			st_d = 3'd1;
	end
	always @(*) begin
		if (_sv2v_0)
			;
		tx_count_d = tx_count;
		if (hash_start_i)
			tx_count_d = 1'sb0;
		else if (hash_continue_i)
			tx_count_d = message_length_i;
		else if (inc_txcount) begin
			if ((digest_mode_flag_q == 4'b0001) || !MultimodeEn)
				tx_count_d[127:5] = tx_count[127:5] + 1'b1;
			else
				tx_count_d[127:6] = tx_count[127:6] + 1'b1;
		end
	end
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			tx_count <= 1'sb0;
		else
			tx_count <= tx_count_d;
	assign digest_mode_flag_d = (hash_start_i || hash_continue_i ? digest_mode_i : (hash_done_i ? 4'b1000 : digest_mode_flag_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			digest_mode_flag_q <= 4'b1000;
		else
			digest_mode_flag_q <= digest_mode_flag_d;
	assign msg_feed_complete_o = (hash_process_flag_q || hash_stop_flag_q) && (st_q == 3'd0);
	initial _sv2v_0 = 0;
endmodule
