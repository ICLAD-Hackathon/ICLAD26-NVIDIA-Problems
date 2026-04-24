module prim_esc_receiver (
	clk_i,
	rst_ni,
	esc_req_o,
	esc_rx_o,
	esc_tx_i
);
	reg _sv2v_0;
	parameter signed [31:0] N_ESC_SEV = 4;
	parameter signed [31:0] PING_CNT_DW = 16;
	parameter [31:0] SkewCycles = 1;
	localparam signed [31:0] MarginFactor = 4;
	localparam signed [31:0] NumWaitCounts = 2;
	localparam signed [31:0] NumTimeoutCounts = 2;
	parameter signed [31:0] TimeoutCntDw = ((2 + $clog2(N_ESC_SEV)) + 2) + PING_CNT_DW;
	input clk_i;
	input rst_ni;
	output wire esc_req_o;
	output wire [1:0] esc_rx_o;
	input wire [1:0] esc_tx_i;
	wire esc_level;
	wire esc_p;
	wire esc_n;
	wire sigint_detected;
	prim_buf #(.Width(2)) u_prim_buf_esc(
		.in_i({esc_tx_i[0], esc_tx_i[1]}),
		.out_o({esc_n, esc_p})
	);
	prim_diff_decode #(
		.AsyncOn(1'b0),
		.SkewCycles(SkewCycles)
	) u_decode_esc(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(esc_p),
		.diff_ni(esc_n),
		.level_o(esc_level),
		.rise_o(),
		.fall_o(),
		.event_o(),
		.sigint_o(sigint_detected)
	);
	reg ping_en;
	wire timeout_cnt_error;
	wire timeout_cnt_set;
	wire timeout_cnt_en;
	wire [TimeoutCntDw - 1:0] timeout_cnt;
	assign timeout_cnt_set = ping_en && !(&timeout_cnt);
	assign timeout_cnt_en = timeout_cnt > {TimeoutCntDw {1'sb0}};
	function automatic signed [TimeoutCntDw - 1:0] sv2v_cast_FC2B8_signed;
		input reg signed [TimeoutCntDw - 1:0] inp;
		sv2v_cast_FC2B8_signed = inp;
	endfunction
	prim_count #(
		.Width(TimeoutCntDw),
		.EnableAlertTriggerSVA(0),
		.PossibleActions(4'h2 | 4'h4)
	) u_prim_count(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.set_i(timeout_cnt_set),
		.set_cnt_i(sv2v_cast_FC2B8_signed(1)),
		.incr_en_i(timeout_cnt_en),
		.decr_en_i(1'b0),
		.step_i(sv2v_cast_FC2B8_signed(1)),
		.commit_i(1'b1),
		.cnt_o(timeout_cnt),
		.cnt_after_commit_o(),
		.err_o(timeout_cnt_error)
	);
	reg esc_req;
	wire esc_req_d;
	reg esc_req_q;
	assign esc_req_d = (esc_req || &timeout_cnt) || timeout_cnt_error;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			esc_req_q <= 1'b0;
		else
			esc_req_q <= esc_req_d;
	prim_sec_anchor_buf #(.Width(1)) u_prim_buf_esc_req(
		.in_i(esc_req_q),
		.out_o(esc_req_o)
	);
	reg [2:0] state_d;
	reg [2:0] state_q;
	reg resp_pd;
	wire resp_pq;
	reg resp_nd;
	wire resp_nq;
	prim_sec_anchor_flop #(
		.Width(2),
		.ResetValue(2'b10)
	) u_prim_flop_esc(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i({resp_nd, resp_pd}),
		.q_o({resp_nq, resp_pq})
	);
	assign esc_rx_o[1] = resp_pq;
	assign esc_rx_o[0] = resp_nq;
	always @(*) begin : p_fsm
		if (_sv2v_0)
			;
		state_d = state_q;
		resp_pd = 1'b0;
		resp_nd = 1'b1;
		esc_req = 1'b0;
		ping_en = 1'b0;
		(* full_case, parallel_case *)
		case (state_q)
			3'd0:
				if (esc_level) begin
					state_d = 3'd1;
					resp_pd = ~resp_pq;
					resp_nd = resp_pq;
				end
			3'd1: begin
				state_d = 3'd2;
				resp_pd = ~resp_pq;
				resp_nd = resp_pq;
				if (esc_level) begin
					state_d = 3'd3;
					esc_req = 1'b1;
				end
			end
			3'd2: begin
				state_d = 3'd0;
				resp_pd = ~resp_pq;
				resp_nd = resp_pq;
				ping_en = 1'b1;
				if (esc_level) begin
					state_d = 3'd3;
					esc_req = 1'b1;
				end
			end
			3'd3: begin
				state_d = 3'd0;
				if (esc_level) begin
					state_d = 3'd3;
					resp_pd = ~resp_pq;
					resp_nd = resp_pq;
					esc_req = 1'b1;
				end
			end
			3'd4: begin
				state_d = 3'd0;
				esc_req = 1'b1;
				if (sigint_detected) begin
					state_d = 3'd4;
					resp_pd = ~resp_pq;
					resp_nd = ~resp_pq;
				end
			end
			default: state_d = 3'd0;
		endcase
		if (sigint_detected && (state_q != 3'd4)) begin
			state_d = 3'd4;
			resp_pd = 1'b0;
			resp_nd = 1'b0;
		end
	end
	always @(posedge clk_i or negedge rst_ni) begin : p_regs
		if (!rst_ni)
			state_q <= 3'd0;
		else
			state_q <= state_d;
	end
	initial _sv2v_0 = 0;
endmodule
