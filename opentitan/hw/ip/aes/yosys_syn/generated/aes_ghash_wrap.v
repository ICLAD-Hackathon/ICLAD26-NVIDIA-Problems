module aes_ghash_wrap (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	op_i,
	gcm_phase_i,
	num_valid_bytes_i,
	load_hash_subkey_i,
	clear_i,
	first_block_o,
	alert_fatal_i,
	alert_o,
	hash_subkey_i,
	s_i,
	prd_i,
	data_in_prev_i,
	data_out_i,
	ghash_state_done_o,
	cyc_ctr_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_i;
	output wire in_ready_o;
	output wire out_valid_o;
	input wire out_ready_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire [4:0] num_valid_bytes_i;
	input wire load_hash_subkey_i;
	input wire clear_i;
	output wire first_block_o;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire [255:0] hash_subkey_i;
	input wire [255:0] s_i;
	input wire [255:0] prd_i;
	input wire [127:0] data_in_prev_i;
	input wire [127:0] data_out_i;
	output wire [127:0] ghash_state_done_o;
	output wire [7:0] cyc_ctr_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] in_valid;
	wire [2:0] in_ready;
	wire [2:0] out_valid;
	wire [2:0] out_ready;
	wire [2:0] load_hash_subkey;
	wire [255:0] cipher_state_done;
	wire [255:0] cipher_state_done_buf;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign in_valid = (in_valid_i ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign out_ready = (out_ready_i ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign load_hash_subkey = (load_hash_subkey_i ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign in_ready_o = (in_ready == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) ? 1'b1 : 1'b0);
	assign out_valid_o = (out_valid == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) ? 1'b1 : 1'b0);
	assign cipher_state_done = (in_valid_i && clear_i ? prd_i : (in_valid_i && load_hash_subkey_i ? hash_subkey_i : (in_valid_i && !load_hash_subkey_i ? s_i : prd_i)));
	prim_buf #(.Width(128)) u_prim_buf_0(
		.in_i(cipher_state_done[128+:128]),
		.out_o(cipher_state_done_buf[128+:128])
	);
	prim_buf #(.Width(128)) u_prim_buf_1(
		.in_i(cipher_state_done[0+:128]),
		.out_o(cipher_state_done_buf[0+:128])
	);
	aes_ghash #(
		.SecMasking(1),
		.GFMultCycles(4)
	) u_aes_ghash(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(in_valid),
		.in_ready_o(in_ready),
		.out_valid_o(out_valid),
		.out_ready_i(out_ready),
		.op_i(op_i),
		.gcm_phase_i(gcm_phase_i),
		.num_valid_bytes_i(num_valid_bytes_i),
		.load_hash_subkey_i(load_hash_subkey),
		.clear_i(clear_i),
		.first_block_o(first_block_o),
		.alert_fatal_i(alert_fatal_i),
		.alert_o(alert_o),
		.data_in_prev_i(data_in_prev_i),
		.data_out_i(data_out_i),
		.cipher_state_done_i(cipher_state_done_buf),
		.ghash_state_done_o(ghash_state_done_o)
	);
	wire [7:0] cyc_ctr_d;
	reg [7:0] cyc_ctr_q;
	assign cyc_ctr_d = cyc_ctr_q + 8'd1;
	always @(posedge clk_i or negedge rst_ni) begin : cyc_ctr_reg
		if (!rst_ni)
			cyc_ctr_q <= 1'sb0;
		else
			cyc_ctr_q <= cyc_ctr_d;
	end
	assign cyc_ctr_o = cyc_ctr_q;
endmodule
