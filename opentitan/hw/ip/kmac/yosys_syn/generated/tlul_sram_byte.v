module tlul_sram_byte (
	clk_i,
	rst_ni,
	tl_i,
	tl_o,
	tl_sram_o,
	tl_sram_i,
	error_i,
	error_o,
	alert_o,
	compound_txn_in_progress_o,
	readback_en_i,
	wr_collision_i,
	write_pending_i
);
	reg _sv2v_0;
	parameter [0:0] EnableIntg = 0;
	parameter signed [31:0] Outstanding = 1;
	parameter [0:0] EnableReadback = 0;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output reg [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	output reg [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_sram_o;
	input wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_sram_i;
	input error_i;
	output wire error_o;
	output wire alert_o;
	output wire compound_txn_in_progress_o;
	input wire [3:0] readback_en_i;
	input wire wr_collision_i;
	input wire write_pending_i;
	localparam signed [31:0] StateWidth = 8;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_false_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_strict = sv2v_cast_EECFA(4'h9) == val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_loose = sv2v_cast_EECFA(4'h9) != val;
	endfunction
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	function automatic [7:0] sv2v_cast_288BE;
		input reg [7:0] inp;
		sv2v_cast_288BE = inp;
	endfunction
	function automatic [3:0] sv2v_cast_4;
		input reg [3:0] inp;
		sv2v_cast_4 = inp;
	endfunction
	function automatic [top_pkg_TL_SZW - 1:0] sv2v_cast_FDEB5;
		input reg [top_pkg_TL_SZW - 1:0] inp;
		sv2v_cast_FDEB5 = inp;
	endfunction
	function automatic [7:0] sv2v_cast_15E34;
		input reg [7:0] inp;
		sv2v_cast_15E34 = inp;
	endfunction
	function automatic [31:0] sv2v_cast_D591E;
		input reg [31:0] inp;
		sv2v_cast_D591E = inp;
	endfunction
	function automatic [top_pkg_TL_DBW - 1:0] sv2v_cast_B0D6A;
		input reg [top_pkg_TL_DBW - 1:0] inp;
		sv2v_cast_B0D6A = inp;
	endfunction
	function automatic [31:0] sv2v_cast_9783B;
		input reg [31:0] inp;
		sv2v_cast_9783B = inp;
	endfunction
	function automatic [tlul_pkg_RsvdWidth - 1:0] sv2v_cast_ED02F;
		input reg [tlul_pkg_RsvdWidth - 1:0] inp;
		sv2v_cast_ED02F = inp;
	endfunction
	function automatic [6:0] sv2v_cast_FE1F6;
		input reg [6:0] inp;
		sv2v_cast_FE1F6 = inp;
	endfunction
	function automatic [6:0] sv2v_cast_83AAC;
		input reg [6:0] inp;
		sv2v_cast_83AAC = inp;
	endfunction
	function automatic [2:0] sv2v_cast_3;
		input reg [2:0] inp;
		sv2v_cast_3 = inp;
	endfunction
	function automatic [(((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1:0] sv2v_cast_1CDE0;
		input reg [(((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1:0] inp;
		sv2v_cast_1CDE0 = inp;
	endfunction
	generate
		if (EnableIntg) begin : gen_integ_handling
			reg stall_host;
			reg wait_phase;
			reg rd_phase;
			reg rd_wait;
			reg wr_phase;
			reg rdback_phase;
			reg rdback_phase_wrreadback;
			reg rdback_wait;
			reg readback_err;
			wire sync_fifo_a_size_outputs_mismatch;
			wire sync_fifo_outputs_mismatch;
			wire tl_i_fifo_intg_err;
			wire tl_intg_err;
			reg [7:0] state_d;
			reg [7:0] state_q;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					state_q <= sv2v_cast_288BE(8'b01111110);
				else
					state_q <= state_d;
			wire a_ack;
			wire d_ack;
			wire sram_a_ack;
			wire sram_d_ack;
			wire wr_txn;
			wire byte_wr_txn;
			wire byte_req_ack;
			reg hold_tx_data;
			localparam [31:0] PendingTxnCntW = prim_util_pkg_vbits(Outstanding + 1);
			wire [(((((((6 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + tlul_pkg_RsvdWidth) + prim_mubi_pkg_MuBi4Width) - 1:0] held_data;
			wire [(tlul_pkg_H2DCmdIntgWidth + tlul_pkg_DataIntgWidth) - 1:0] held_intg;
			wire [(PendingTxnCntW + top_pkg_TL_SZW) + 0:0] sync_fifo_a_size_outputs;
			wire [(PendingTxnCntW + top_pkg_TL_SZW) + 0:0] sync_fifo_a_size_shadow_outputs;
			assign a_ack = tl_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & tl_o[0];
			assign d_ack = tl_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] & tl_i[0];
			assign sram_a_ack = tl_sram_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & tl_sram_i[0];
			assign sram_d_ack = tl_sram_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] & tl_sram_o[0];
			assign wr_txn = (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h0) | (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h1);
			assign byte_req_ack = (byte_wr_txn & a_ack) & ~error_i;
			assign byte_wr_txn = (tl_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & ~&tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)]) & wr_txn;
			assign alert_o = ((readback_err | sync_fifo_a_size_outputs_mismatch) | sync_fifo_outputs_mismatch) | tl_intg_err;
			wire rdback_chk_ok;
			wire [3:0] rdback_check_q;
			reg [3:0] rdback_check_d;
			wire [3:0] rdback_en_q;
			reg [3:0] rdback_en_d;
			wire [31:0] rdback_data_exp_q;
			reg [31:0] rdback_data_exp_d;
			wire [6:0] rdback_data_exp_intg_q;
			reg [6:0] rdback_data_exp_intg_d;
			if (EnableReadback) begin : gen_readback_logic
				wire rdback_chk_ok_unbuf;
				assign rdback_chk_ok_unbuf = rdback_data_exp_q == tl_sram_i[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
				prim_sec_anchor_buf #(.Width(1)) u_rdback_chk_ok_buf(
					.in_i(rdback_chk_ok_unbuf),
					.out_o(rdback_chk_ok)
				);
				prim_flop #(
					.Width(prim_mubi_pkg_MuBi4Width),
					.ResetValue(sv2v_cast_4(sv2v_cast_EECFA(4'h9)))
				) u_rdback_check_flop(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i(sv2v_cast_4(rdback_check_d)),
					.q_o({rdback_check_q})
				);
				prim_flop #(
					.Width(prim_mubi_pkg_MuBi4Width),
					.ResetValue(sv2v_cast_4(sv2v_cast_EECFA(4'h9)))
				) u_rdback_en_flop(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i(sv2v_cast_4(rdback_en_d)),
					.q_o({rdback_en_q})
				);
				prim_flop #(
					.Width(32),
					.ResetValue(0)
				) u_rdback_data_exp(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i(rdback_data_exp_d),
					.q_o(rdback_data_exp_q)
				);
				prim_flop #(
					.Width(tlul_pkg_DataIntgWidth),
					.ResetValue(0)
				) u_rdback_data_exp_intg(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i(rdback_data_exp_intg_d),
					.q_o(rdback_data_exp_intg_q)
				);
			end
			else begin : gen_no_readback_logic
				assign rdback_chk_ok = 1'b0;
				assign rdback_check_q = sv2v_cast_EECFA(4'h9);
				assign rdback_en_q = sv2v_cast_EECFA(4'h9);
				assign rdback_data_exp_q = 1'b0;
				assign rdback_data_exp_intg_q = 1'b0;
				wire unused_rdback;
				assign unused_rdback = ^{rdback_check_d, rdback_data_exp_d, rdback_data_exp_intg_d, rdback_en_d};
			end
			always @(*) begin
				if (_sv2v_0)
					;
				rd_wait = 1'b0;
				wait_phase = 1'b0;
				stall_host = 1'b0;
				wr_phase = 1'b0;
				rd_phase = 1'b0;
				rdback_phase = 1'b0;
				rdback_phase_wrreadback = 1'b0;
				rdback_wait = 1'b0;
				state_d = state_q;
				hold_tx_data = 1'b0;
				readback_err = 1'b0;
				rdback_check_d = rdback_check_q;
				rdback_en_d = rdback_en_q;
				rdback_data_exp_d = rdback_data_exp_q;
				rdback_data_exp_intg_d = rdback_data_exp_intg_q;
				(* full_case, parallel_case *)
				case (state_q)
					sv2v_cast_288BE(8'b01111110): begin
						if (prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q) && prim_mubi_pkg_mubi4_test_true_loose(rdback_check_q)) begin
							rdback_wait = 1'b1;
							rdback_check_d = sv2v_cast_EECFA(4'h9);
							if (!rdback_chk_ok)
								readback_err = 1'b1;
						end
						if (byte_wr_txn) begin
							rd_phase = 1'b1;
							if (byte_req_ack)
								state_d = sv2v_cast_288BE(8'b00000010);
						end
						else if ((a_ack && prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q)) && !error_i) begin
							hold_tx_data = 1'b1;
							state_d = (wr_txn ? sv2v_cast_288BE(8'b10011001) : sv2v_cast_288BE(8'b10101100));
						end
						if ((!tl_sram_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] && !tl_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) && prim_mubi_pkg_mubi4_test_false_strict(rdback_check_q))
							rdback_en_d = readback_en_i;
					end
					sv2v_cast_288BE(8'b00000010): begin
						rd_phase = 1'b1;
						stall_host = 1'b1;
						begin : sv2v_autoblock_1
							reg signed [PendingTxnCntW - 1:0] sv2v_tmp_cast;
							sv2v_tmp_cast = 1;
							if (sync_fifo_a_size_outputs[PendingTxnCntW + (top_pkg_TL_SZW + 0)-:((PendingTxnCntW + (top_pkg_TL_SZW + 0)) >= (top_pkg_TL_SZW + 1) ? ((PendingTxnCntW + (top_pkg_TL_SZW + 0)) - (top_pkg_TL_SZW + 1)) + 1 : ((top_pkg_TL_SZW + 1) - (PendingTxnCntW + (top_pkg_TL_SZW + 0))) + 1)] == sv2v_tmp_cast) begin
								rd_wait = 1'b1;
								if (sram_d_ack)
									state_d = sv2v_cast_288BE(8'b11110001);
							end
						end
					end
					sv2v_cast_288BE(8'b11110001): begin
						stall_host = 1'b1;
						wr_phase = 1'b1;
						if (sram_a_ack) begin
							state_d = (prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q) ? sv2v_cast_288BE(8'b01010111) : sv2v_cast_288BE(8'b01111110));
							rdback_check_d = (prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
							rdback_data_exp_d = tl_sram_o[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)];
							rdback_data_exp_intg_d = tl_sram_o[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth];
						end
					end
					sv2v_cast_288BE(8'b10011001): begin
						if (EnableReadback == 0) begin : gen_inv_state_StWrReadBackInit
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						begin : sv2v_autoblock_2
							reg signed [PendingTxnCntW - 1:0] sv2v_tmp_cast;
							sv2v_tmp_cast = 1;
							if (sync_fifo_a_size_outputs[PendingTxnCntW + (top_pkg_TL_SZW + 0)-:((PendingTxnCntW + (top_pkg_TL_SZW + 0)) >= (top_pkg_TL_SZW + 1) ? ((PendingTxnCntW + (top_pkg_TL_SZW + 0)) - (top_pkg_TL_SZW + 1)) + 1 : ((top_pkg_TL_SZW + 1) - (PendingTxnCntW + (top_pkg_TL_SZW + 0))) + 1)] == sv2v_tmp_cast) begin
								wait_phase = 1'b1;
								rdback_check_d = (prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
								rdback_data_exp_d = held_data[top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)-:((top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)) >= (tlul_pkg_RsvdWidth + 4) ? ((top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)) - (tlul_pkg_RsvdWidth + 4)) + 1 : ((tlul_pkg_RsvdWidth + 4) - (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) + 1)];
								rdback_data_exp_intg_d = held_intg[6-:tlul_pkg_DataIntgWidth];
								if (d_ack)
									state_d = sv2v_cast_288BE(8'b00001111);
								else
									state_d = sv2v_cast_288BE(8'b00110000);
							end
						end
					end
					sv2v_cast_288BE(8'b00001111): begin
						if (EnableReadback == 0) begin : gen_inv_state_StWrReadBack
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						rdback_phase = 1'b1;
						state_d = sv2v_cast_288BE(8'b01111110);
					end
					sv2v_cast_288BE(8'b00110000): begin
						if (EnableReadback == 0) begin : gen_inv_state_StWrReadBackDWait
							readback_err = 1'b1;
						end
						wait_phase = 1'b1;
						stall_host = 1'b1;
						if (d_ack)
							state_d = sv2v_cast_288BE(8'b00001111);
					end
					sv2v_cast_288BE(8'b01010111): begin
						if (EnableReadback == 0) begin : gen_inv_state_StByteWrReadBackInit
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						wait_phase = 1'b1;
						if (d_ack)
							state_d = sv2v_cast_288BE(8'b11100111);
						else
							state_d = sv2v_cast_288BE(8'b11111111);
					end
					sv2v_cast_288BE(8'b11100111): begin
						if (EnableReadback == 0) begin : gen_inv_state_StByteWrReadBack
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						rdback_phase_wrreadback = 1'b1;
						state_d = sv2v_cast_288BE(8'b01111110);
					end
					sv2v_cast_288BE(8'b11111111): begin
						if (EnableReadback == 0) begin : gen_inv_state_StByteWrReadBackDWait
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						wait_phase = 1'b1;
						if (d_ack)
							state_d = sv2v_cast_288BE(8'b11100111);
					end
					sv2v_cast_288BE(8'b10101100): begin
						if (EnableReadback == 0) begin : gen_inv_state_StRdReadBack
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						begin : sv2v_autoblock_3
							reg signed [PendingTxnCntW - 1:0] sv2v_tmp_cast;
							sv2v_tmp_cast = 1;
							if (sync_fifo_a_size_outputs[PendingTxnCntW + (top_pkg_TL_SZW + 0)-:((PendingTxnCntW + (top_pkg_TL_SZW + 0)) >= (top_pkg_TL_SZW + 1) ? ((PendingTxnCntW + (top_pkg_TL_SZW + 0)) - (top_pkg_TL_SZW + 1)) + 1 : ((top_pkg_TL_SZW + 1) - (PendingTxnCntW + (top_pkg_TL_SZW + 0))) + 1)] == sv2v_tmp_cast) begin
								rdback_phase = 1'b1;
								if (d_ack) begin
									state_d = sv2v_cast_288BE(8'b01111110);
									rdback_check_d = (prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
									rdback_data_exp_d = tl_o[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
									rdback_data_exp_intg_d = tl_o[((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth];
								end
								else
									state_d = sv2v_cast_288BE(8'b11000000);
							end
						end
					end
					sv2v_cast_288BE(8'b11000000): begin
						if (EnableReadback == 0) begin : gen_inv_state_StRdReadBackDWait
							readback_err = 1'b1;
						end
						stall_host = 1'b1;
						if (d_ack) begin
							state_d = sv2v_cast_288BE(8'b01111110);
							rdback_check_d = (prim_mubi_pkg_mubi4_test_true_loose(rdback_en_q) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
							rdback_data_exp_d = tl_o[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
							rdback_data_exp_intg_d = tl_o[((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth];
						end
					end
					default: readback_err = 1'b1;
				endcase
			end
			wire [(((((((6 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + tlul_pkg_RsvdWidth) + prim_mubi_pkg_MuBi4Width) - 1:0] txn_data;
			wire [(tlul_pkg_H2DCmdIntgWidth + tlul_pkg_DataIntgWidth) - 1:0] txn_intg;
			wire fifo_rdy_data;
			wire fifo_rdy_intg;
			wire txn_data_intg_wr;
			localparam signed [31:0] TxnDataWidth = ((((((6 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + tlul_pkg_RsvdWidth) + prim_mubi_pkg_MuBi4Width;
			localparam signed [31:0] TxnIntgWidth = tlul_pkg_H2DCmdIntgWidth + tlul_pkg_DataIntgWidth;
			assign txn_data = {tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)], tl_i[3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))))) ? ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) + 1 : ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)], sv2v_cast_FDEB5(tl_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)]), sv2v_cast_15E34(tl_i[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) + 1)]), sv2v_cast_D591E(tl_i[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)]), sv2v_cast_B0D6A(tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)]), sv2v_cast_9783B(tl_i[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)]), sv2v_cast_ED02F(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1) - (tlul_pkg_RsvdWidth + 17))-:((tlul_pkg_RsvdWidth + 17) >= 18 ? tlul_pkg_RsvdWidth : 19 - (tlul_pkg_RsvdWidth + 17))]), sv2v_cast_EECFA(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4])};
			assign txn_intg = {sv2v_cast_FE1F6(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 14)-:7]), sv2v_cast_83AAC(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth])};
			assign txn_data_intg_wr = hold_tx_data | byte_req_ack;
			prim_fifo_sync #(
				.Width(TxnDataWidth),
				.Pass(1'b0),
				.Depth(1),
				.OutputZeroIfEmpty(1'b0),
				.NeverClears(1'b1)
			) u_sync_fifo_data(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(1'b0),
				.wvalid_i(txn_data_intg_wr),
				.wready_o(fifo_rdy_data),
				.wdata_i(txn_data),
				.rvalid_o(),
				.rready_i(sram_a_ack),
				.rdata_o(held_data),
				.full_o(),
				.depth_o(),
				.err_o()
			);
			localparam signed [31:0] NumBufferBitsSyncIntg = 2;
			wire [1:0] buf_sync_fifo_intg_in;
			wire [1:0] buf_sync_fifo_intg_out;
			wire txn_data_intg_wr_buf;
			wire sram_a_ack_buf;
			assign buf_sync_fifo_intg_in = {txn_data_intg_wr, sram_a_ack};
			assign {txn_data_intg_wr_buf, sram_a_ack_buf} = buf_sync_fifo_intg_out;
			prim_buf #(.Width(NumBufferBitsSyncIntg)) u_sync_fifo_intg_prim_buf(
				.in_i(buf_sync_fifo_intg_in),
				.out_o(buf_sync_fifo_intg_out)
			);
			prim_fifo_sync #(
				.Width(TxnIntgWidth),
				.Pass(1'b0),
				.Depth(1),
				.OutputZeroIfEmpty(1'b0),
				.NeverClears(1'b1)
			) u_sync_fifo_intg(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(1'b0),
				.wvalid_i(txn_data_intg_wr_buf),
				.wready_o(fifo_rdy_intg),
				.wdata_i(txn_intg),
				.rvalid_o(),
				.rready_i(sram_a_ack_buf),
				.rdata_o(held_intg),
				.full_o(),
				.depth_o(),
				.err_o()
			);
			assign sync_fifo_outputs_mismatch = fifo_rdy_data != fifo_rdy_intg;
			wire [(((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1:0] tl_i_fifo_a_user;
			wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i_fifo;
			assign tl_i_fifo_a_user = {sv2v_cast_ED02F(held_data[tlul_pkg_RsvdWidth + 3-:((tlul_pkg_RsvdWidth + 3) >= 4 ? tlul_pkg_RsvdWidth : 5 - (tlul_pkg_RsvdWidth + 3))]), sv2v_cast_EECFA(held_data[3-:prim_mubi_pkg_MuBi4Width]), sv2v_cast_FE1F6(held_intg[13-:7]), sv2v_cast_83AAC(held_intg[6-:tlul_pkg_DataIntgWidth])};
			assign tl_i_fifo = {sram_a_ack, sv2v_cast_3(held_data[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))))) + 1)]), sv2v_cast_3(held_data[3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))-:((3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3)))))) >= (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4))))) ? ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))))) + 1 : ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))))) + 1)]), sv2v_cast_FDEB5(held_data[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))) + 1)]), sv2v_cast_15E34(held_data[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))) + 1)]), sv2v_cast_D591E(held_data[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))-:((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) >= (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))) + 1)]), sv2v_cast_B0D6A(held_data[top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))-:((top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) >= (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) - (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))) + 1 : ((top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) + 1)]), sv2v_cast_9783B(held_data[top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)-:((top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)) >= (tlul_pkg_RsvdWidth + 4) ? ((top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)) - (tlul_pkg_RsvdWidth + 4)) + 1 : ((tlul_pkg_RsvdWidth + 4) - (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) + 1)]), sv2v_cast_1CDE0(tl_i_fifo_a_user), 1'b1};
			tlul_cmd_intg_chk u_cmd_intg_chk(
				.tl_i(tl_i_fifo),
				.err_o(tl_i_fifo_intg_err)
			);
			reg enable_intg_check_cmp_q;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					enable_intg_check_cmp_q <= 1'b0;
				else if (txn_data_intg_wr)
					enable_intg_check_cmp_q <= 1'b1;
			assign tl_intg_err = enable_intg_check_cmp_q & tl_i_fifo_intg_err;
			reg [31:0] rsp_data;
			always @(posedge clk_i)
				if (sram_d_ack && rd_wait)
					rsp_data <= tl_sram_i[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
			reg [31:0] combined_data;
			wire [31:0] unused_data;
			always @(*) begin
				if (_sv2v_0)
					;
				begin : sv2v_autoblock_4
					reg signed [31:0] i;
					for (i = 0; i < top_pkg_TL_DBW; i = i + 1)
						combined_data[i * 8+:8] = (held_data[(top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) - ((top_pkg_TL_DBW - 1) - i)] ? held_data[(top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)) - (31 - (i * 8))+:8] : rsp_data[i * 8+:8]);
				end
			end
			wire [6:0] data_intg;
			tlul_data_integ_enc u_tlul_data_integ_enc(
				.data_i(combined_data),
				.data_intg_o({data_intg, unused_data})
			);
			reg [(((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1:0] combined_user;
			always @(*) begin
				if (_sv2v_0)
					;
				combined_user[13-:7] = held_intg[13-:7];
				combined_user[6-:tlul_pkg_DataIntgWidth] = data_intg;
				combined_user[tlul_pkg_RsvdWidth + 17-:((tlul_pkg_RsvdWidth + 17) >= 18 ? tlul_pkg_RsvdWidth : 19 - (tlul_pkg_RsvdWidth + 17))] = held_data[tlul_pkg_RsvdWidth + 3-:((tlul_pkg_RsvdWidth + 3) >= 4 ? tlul_pkg_RsvdWidth : 5 - (tlul_pkg_RsvdWidth + 3))];
				combined_user[17-:4] = held_data[3-:prim_mubi_pkg_MuBi4Width];
			end
			localparam [31:0] AccessSize = $clog2(top_pkg_TL_DBW);
			always @(*) begin
				if (_sv2v_0)
					;
				tl_sram_o = tl_i;
				tl_sram_o[0] = (tl_i[0] | rd_wait) | rdback_wait;
				if ((wr_phase | rdback_phase) | rdback_phase_wrreadback) begin
					tl_sram_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
					tl_sram_o[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = (wr_phase ? 3'h0 : 3'h4);
					tl_sram_o[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)] = (wr_phase | rdback_phase_wrreadback ? sv2v_cast_FDEB5(AccessSize) : held_data[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))) + 1)]);
					tl_sram_o[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] = (wr_phase | rdback_phase_wrreadback ? {top_pkg_TL_DBW {1'b1}} : held_data[top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))-:((top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) >= (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))) - (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))) + 1 : ((top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) + 1)]);
					tl_sram_o[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = held_data[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))-:((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) >= (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))) + 1)];
					tl_sram_o[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (32 - AccessSize):(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31] = (wr_phase | rdback_phase_wrreadback ? {(((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - (32 - AccessSize)) >= ((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 31) ? (((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (32 - AccessSize)) - ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31)) + 1 : (((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31) - ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (32 - AccessSize))) + 1) * 1 {1'sb0}} : held_data[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) - (32 - AccessSize):(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))) - 31]);
					tl_sram_o[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) + 1)] = held_data[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))) + 1)];
					tl_sram_o[3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))))) ? ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) + 1 : ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = held_data[3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))-:((3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 3)))))) >= (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + (tlul_pkg_RsvdWidth + 4))))) ? ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3))))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4))))))) + 1 : ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 4)))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + (tlul_pkg_RsvdWidth + 3)))))))) + 1)];
					tl_sram_o[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = (wr_phase ? combined_data : {((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1) * 1 {1'sb0}});
					tl_sram_o[(((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0-:(((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7) >= 1 ? (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0 : 2 - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))] = (wr_phase ? combined_user : {(((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7) >= 1 ? (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0 : 2 - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) * 1 {1'sb0}});
				end
				else if (rd_phase) begin
					tl_sram_o[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (32 - AccessSize):(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31] = 1'sb0;
					if (!error_i || stall_host) begin
						tl_sram_o[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)] = sv2v_cast_FDEB5(AccessSize);
						tl_sram_o[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] = {top_pkg_TL_DBW {1'b1}};
						tl_sram_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = tl_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & ~stall_host;
						tl_sram_o[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
					end
				end
				else if (wait_phase)
					tl_sram_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
			end
			assign error_o = error_i & ~stall_host;
			prim_fifo_sync #(
				.Width(top_pkg_TL_SZW),
				.Pass(1'b0),
				.Depth(Outstanding),
				.OutputZeroIfEmpty(1'b1),
				.NeverClears(1'b1)
			) u_sync_fifo_a_size(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(1'b0),
				.wvalid_i(a_ack),
				.wready_o(sync_fifo_a_size_outputs[0]),
				.wdata_i(tl_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)]),
				.rvalid_o(),
				.rready_i(d_ack),
				.rdata_o(sync_fifo_a_size_outputs[top_pkg_TL_SZW + 0-:((top_pkg_TL_SZW + 0) >= 1 ? top_pkg_TL_SZW + 0 : 2 - (top_pkg_TL_SZW + 0))]),
				.full_o(),
				.depth_o(sync_fifo_a_size_outputs[PendingTxnCntW + (top_pkg_TL_SZW + 0)-:((PendingTxnCntW + (top_pkg_TL_SZW + 0)) >= (top_pkg_TL_SZW + 1) ? ((PendingTxnCntW + (top_pkg_TL_SZW + 0)) - (top_pkg_TL_SZW + 1)) + 1 : ((top_pkg_TL_SZW + 1) - (PendingTxnCntW + (top_pkg_TL_SZW + 0))) + 1)]),
				.err_o()
			);
			localparam signed [31:0] NumBufferBitsSyncASize = (1 + top_pkg_TL_SZW) + 1;
			wire [NumBufferBitsSyncASize - 1:0] buf_sync_fifo_a_size_in;
			wire [NumBufferBitsSyncASize - 1:0] buf_sync_fifo_a_size_out;
			wire a_ack_buf;
			wire d_ack_buf;
			wire [top_pkg_TL_SZW - 1:0] a_size_buf;
			assign buf_sync_fifo_a_size_in = {a_ack, tl_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)], d_ack};
			assign {a_ack_buf, a_size_buf, d_ack_buf} = buf_sync_fifo_a_size_out;
			prim_buf #(.Width(NumBufferBitsSyncASize)) u_sync_fifo_a_size_prim_buf(
				.in_i(buf_sync_fifo_a_size_in),
				.out_o(buf_sync_fifo_a_size_out)
			);
			prim_fifo_sync #(
				.Width(top_pkg_TL_SZW),
				.Pass(1'b0),
				.Depth(Outstanding),
				.OutputZeroIfEmpty(1'b1),
				.NeverClears(1'b1)
			) u_sync_fifo_a_size_shadow(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(1'b0),
				.wvalid_i(a_ack_buf),
				.wready_o(sync_fifo_a_size_shadow_outputs[0]),
				.wdata_i(a_size_buf),
				.rvalid_o(),
				.rready_i(d_ack_buf),
				.rdata_o(sync_fifo_a_size_shadow_outputs[top_pkg_TL_SZW + 0-:((top_pkg_TL_SZW + 0) >= 1 ? top_pkg_TL_SZW + 0 : 2 - (top_pkg_TL_SZW + 0))]),
				.full_o(),
				.depth_o(sync_fifo_a_size_shadow_outputs[PendingTxnCntW + (top_pkg_TL_SZW + 0)-:((PendingTxnCntW + (top_pkg_TL_SZW + 0)) >= (top_pkg_TL_SZW + 1) ? ((PendingTxnCntW + (top_pkg_TL_SZW + 0)) - (top_pkg_TL_SZW + 1)) + 1 : ((top_pkg_TL_SZW + 1) - (PendingTxnCntW + (top_pkg_TL_SZW + 0))) + 1)]),
				.err_o()
			);
			assign sync_fifo_a_size_outputs_mismatch = sync_fifo_a_size_shadow_outputs != sync_fifo_a_size_outputs;
			always @(*) begin
				if (_sv2v_0)
					;
				tl_o = tl_sram_i;
				tl_o[0] = ((tl_sram_i[0] & ~stall_host) & fifo_rdy_data) & sync_fifo_a_size_outputs[0];
				tl_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] = (tl_sram_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] & ~rd_wait) & ~rdback_wait;
				tl_o[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))-:((top_pkg_TL_SZW + (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 1)))) >= (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 2))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))) + 1)] = sync_fifo_a_size_outputs[top_pkg_TL_SZW + 0-:((top_pkg_TL_SZW + 0) >= 1 ? top_pkg_TL_SZW + 0 : 2 - (top_pkg_TL_SZW + 0))];
			end
			wire unused_tl;
			assign unused_tl = |tl_sram_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))-:((top_pkg_TL_SZW + (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 1)))) >= (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 2))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))) + 1)];
			assign compound_txn_in_progress_o = (wr_phase | rdback_phase) | rdback_phase_wrreadback;
		end
		else begin : gen_no_integ_handling
			wire [(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0)):1] sv2v_tmp_3714C;
			assign sv2v_tmp_3714C = tl_i;
			always @(*) tl_sram_o = sv2v_tmp_3714C;
			wire [((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1)):1] sv2v_tmp_EF4AC;
			assign sv2v_tmp_EF4AC = tl_sram_i;
			always @(*) tl_o = sv2v_tmp_EF4AC;
			assign error_o = error_i;
			assign alert_o = 1'b0;
			assign compound_txn_in_progress_o = 1'b0;
			wire [3:0] unused_readback_en;
			assign unused_readback_en = readback_en_i;
		end
	endgenerate
	wire unused_write_pending;
	wire unused_wr_collision;
	assign unused_write_pending = write_pending_i;
	assign unused_wr_collision = wr_collision_i;
	initial _sv2v_0 = 0;
endmodule
