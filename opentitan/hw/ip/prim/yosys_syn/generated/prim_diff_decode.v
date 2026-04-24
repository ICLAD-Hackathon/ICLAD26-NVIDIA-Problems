module prim_diff_decode (
	clk_i,
	rst_ni,
	diff_pi,
	diff_ni,
	level_o,
	rise_o,
	fall_o,
	event_o,
	sigint_o
);
	reg _sv2v_0;
	parameter [0:0] AsyncOn = 1'b0;
	parameter [31:0] SkewCycles = 1;
	input clk_i;
	input rst_ni;
	input diff_pi;
	input diff_ni;
	output wire level_o;
	output reg rise_o;
	output reg fall_o;
	output wire event_o;
	output reg sigint_o;
	reg level_d;
	reg level_q;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	generate
		if (AsyncOn) begin : gen_async
			reg [1:0] state_d;
			reg [1:0] state_q;
			wire diff_p_edge;
			wire diff_n_edge;
			wire diff_check_ok;
			wire level;
			reg diff_pq;
			reg diff_nq;
			wire diff_pd;
			wire diff_nd;
			reg [prim_util_pkg_vbits(SkewCycles + 1) - 1:0] skew_cnt_d;
			reg [prim_util_pkg_vbits(SkewCycles + 1) - 1:0] skew_cnt_q;
			prim_flop_2sync #(
				.Width(1),
				.ResetValue(1'sb0)
			) i_sync_p(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(diff_pi),
				.q_o(diff_pd)
			);
			prim_flop_2sync #(
				.Width(1),
				.ResetValue(1'b1)
			) i_sync_n(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(diff_ni),
				.q_o(diff_nd)
			);
			assign diff_p_edge = diff_pq ^ diff_pd;
			assign diff_n_edge = diff_nq ^ diff_nd;
			assign diff_check_ok = diff_pd ^ diff_nd;
			assign level = diff_pd;
			assign level_o = level_d;
			assign event_o = rise_o | fall_o;
			always @(*) begin : p_diff_fsm
				if (_sv2v_0)
					;
				state_d = state_q;
				level_d = level_q;
				skew_cnt_d = skew_cnt_q;
				rise_o = 1'b0;
				fall_o = 1'b0;
				sigint_o = 1'b0;
				(* full_case, parallel_case *)
				case (state_q)
					2'd0:
						if (diff_check_ok) begin
							level_d = level;
							if (diff_p_edge && diff_n_edge) begin
								if (level)
									rise_o = 1'b1;
								else
									fall_o = 1'b1;
							end
						end
						else if (SkewCycles == 0) begin
							state_d = 2'd2;
							sigint_o = 1'b1;
						end
						else begin
							state_d = 2'd1;
							skew_cnt_d = 1;
						end
					2'd1:
						if (diff_check_ok) begin
							state_d = 2'd0;
							level_d = level;
							skew_cnt_d = 1'sb0;
							if (level)
								rise_o = 1'b1;
							else
								fall_o = 1'b1;
						end
						else if (skew_cnt_q < SkewCycles)
							skew_cnt_d = skew_cnt_q + 1;
						else begin
							state_d = 2'd2;
							sigint_o = 1'b1;
							skew_cnt_d = 1'sb0;
						end
					2'd2: begin
						sigint_o = 1'b1;
						if (diff_check_ok) begin
							state_d = 2'd0;
							sigint_o = 1'b0;
							level_d = level;
							if (level)
								rise_o = 1'b1;
							else
								fall_o = 1'b1;
						end
					end
					default:
						;
				endcase
			end
			always @(posedge clk_i or negedge rst_ni) begin : p_sync_reg
				if (!rst_ni) begin
					state_q <= 2'd0;
					diff_pq <= 1'b0;
					diff_nq <= 1'b1;
					level_q <= 1'b0;
					skew_cnt_q <= 1'sb0;
				end
				else begin
					state_q <= state_d;
					diff_pq <= diff_pd;
					diff_nq <= diff_nd;
					level_q <= level_d;
					skew_cnt_q <= skew_cnt_d;
				end
			end
		end
		else begin : gen_no_async
			reg diff_pq;
			wire diff_pd;
			assign diff_pd = diff_pi;
			prim_xnor2 #(.Width(1)) u_xnor2_sigint(
				.in0_i(diff_pi),
				.in1_i(diff_ni),
				.out_o(sigint_o)
			);
			assign level_o = (sigint_o ? level_q : diff_pi);
			wire [1:1] sv2v_tmp_AB662;
			assign sv2v_tmp_AB662 = level_o;
			always @(*) level_d = sv2v_tmp_AB662;
			wire [1:1] sv2v_tmp_8926B;
			assign sv2v_tmp_8926B = (~diff_pq & diff_pi) & ~sigint_o;
			always @(*) rise_o = sv2v_tmp_8926B;
			wire [1:1] sv2v_tmp_A5341;
			assign sv2v_tmp_A5341 = (diff_pq & ~diff_pi) & ~sigint_o;
			always @(*) fall_o = sv2v_tmp_A5341;
			assign event_o = rise_o | fall_o;
			always @(posedge clk_i or negedge rst_ni) begin : p_edge_reg
				if (!rst_ni) begin
					diff_pq <= 1'b0;
					level_q <= 1'b0;
				end
				else begin
					diff_pq <= diff_pd;
					level_q <= level_d;
				end
			end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
