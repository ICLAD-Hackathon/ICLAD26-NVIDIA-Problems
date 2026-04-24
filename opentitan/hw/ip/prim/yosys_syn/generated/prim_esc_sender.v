module prim_esc_sender (
	clk_i,
	rst_ni,
	ping_req_i,
	ping_ok_o,
	integ_fail_o,
	esc_req_i,
	esc_rx_i,
	esc_tx_o
);
	reg _sv2v_0;
	parameter [31:0] SkewCycles = 1;
	input clk_i;
	input rst_ni;
	input ping_req_i;
	output reg ping_ok_o;
	output reg integ_fail_o;
	input esc_req_i;
	input wire [1:0] esc_rx_i;
	output wire [1:0] esc_tx_o;
	wire resp;
	wire resp_n;
	wire resp_p;
	wire sigint_detected;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_resp(
		.in_i({esc_rx_i[0], esc_rx_i[1]}),
		.out_o({resp_n, resp_p})
	);
	prim_diff_decode #(
		.AsyncOn(1'b0),
		.SkewCycles(SkewCycles)
	) u_decode_resp(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(resp_p),
		.diff_ni(resp_n),
		.level_o(resp),
		.rise_o(),
		.fall_o(),
		.event_o(),
		.sigint_o(sigint_detected)
	);
	wire ping_req_d;
	reg ping_req_q;
	wire esc_req_d;
	reg esc_req_q;
	reg esc_req_q1;
	assign ping_req_d = ping_req_i;
	assign esc_req_d = esc_req_i;
	wire esc_p;
	assign esc_p = (esc_req_i | esc_req_q) | (ping_req_d & ~ping_req_q);
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_esc(
		.in_i({~esc_p, esc_p}),
		.out_o({esc_tx_o[0], esc_tx_o[1]})
	);
	reg [2:0] state_d;
	reg [2:0] state_q;
	always @(*) begin : p_fsm
		if (_sv2v_0)
			;
		state_d = state_q;
		ping_ok_o = 1'b0;
		integ_fail_o = sigint_detected;
		(* full_case, parallel_case *)
		case (state_q)
			3'd0: begin
				if (esc_req_i)
					state_d = 3'd2;
				else if (ping_req_d & ~ping_req_q)
					state_d = 3'd3;
				if (resp)
					integ_fail_o = 1'b1;
			end
			3'd1: begin
				state_d = 3'd2;
				if (!esc_tx_o[1] || resp) begin
					state_d = 3'd0;
					integ_fail_o = sigint_detected | resp;
				end
			end
			3'd2: begin
				state_d = 3'd1;
				if (!esc_tx_o[1] || !resp) begin
					state_d = 3'd0;
					integ_fail_o = sigint_detected | ~resp;
				end
			end
			3'd3: begin
				state_d = 3'd4;
				if (esc_req_i)
					state_d = 3'd1;
				else if (!resp) begin
					state_d = 3'd0;
					integ_fail_o = 1'b1;
				end
			end
			3'd4: begin
				state_d = 3'd5;
				if (esc_req_i)
					state_d = 3'd2;
				else if (resp) begin
					state_d = 3'd0;
					integ_fail_o = 1'b1;
				end
			end
			3'd5: begin
				state_d = 3'd6;
				if (esc_req_i)
					state_d = 3'd1;
				else if (!resp) begin
					state_d = 3'd0;
					integ_fail_o = 1'b1;
				end
			end
			3'd6: begin
				state_d = 3'd0;
				if (esc_req_i)
					state_d = 3'd2;
				else if (resp)
					integ_fail_o = 1'b1;
				else
					ping_ok_o = ping_req_i;
			end
			default: state_d = 3'd0;
		endcase
		if (sigint_detected) begin
			ping_ok_o = 1'b0;
			state_d = 3'd0;
		end
		if (((esc_req_i || esc_req_q) || esc_req_q1) && ping_req_i)
			ping_ok_o = 1'b1;
	end
	always @(posedge clk_i or negedge rst_ni) begin : p_regs
		if (!rst_ni) begin
			state_q <= 3'd0;
			esc_req_q <= 1'b0;
			esc_req_q1 <= 1'b0;
			ping_req_q <= 1'b0;
		end
		else begin
			state_q <= state_d;
			esc_req_q <= esc_req_d;
			esc_req_q1 <= esc_req_q;
			ping_req_q <= ping_req_d;
		end
	end
	initial _sv2v_0 = 0;
endmodule
