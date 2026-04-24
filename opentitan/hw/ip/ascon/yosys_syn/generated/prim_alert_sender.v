module prim_alert_sender (
	clk_i,
	rst_ni,
	alert_test_i,
	alert_req_i,
	alert_ack_o,
	alert_state_o,
	alert_rx_i,
	alert_tx_o
);
	reg _sv2v_0;
	parameter [0:0] AsyncOn = 1'b1;
	parameter [31:0] SkewCycles = 1;
	parameter [0:0] IsFatal = 1'b0;
	input clk_i;
	input rst_ni;
	input alert_test_i;
	input alert_req_i;
	output wire alert_ack_o;
	output wire alert_state_o;
	input wire [3:0] alert_rx_i;
	output wire [1:0] alert_tx_o;
	wire ping_sigint;
	wire ping_event;
	wire ping_n;
	wire ping_p;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_ping(
		.in_i({alert_rx_i[2], alert_rx_i[3]}),
		.out_o({ping_n, ping_p})
	);
	prim_diff_decode #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles)
	) u_decode_ping(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(ping_p),
		.diff_ni(ping_n),
		.level_o(),
		.rise_o(),
		.fall_o(),
		.event_o(ping_event),
		.sigint_o(ping_sigint)
	);
	wire ack_sigint;
	wire ack_level;
	wire ack_n;
	wire ack_p;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_ack(
		.in_i({alert_rx_i[0], alert_rx_i[1]}),
		.out_o({ack_n, ack_p})
	);
	prim_diff_decode #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles)
	) u_decode_ack(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(ack_p),
		.diff_ni(ack_n),
		.level_o(ack_level),
		.rise_o(),
		.fall_o(),
		.event_o(),
		.sigint_o(ack_sigint)
	);
	reg [2:0] state_d;
	reg [2:0] state_q;
	wire alert_pq;
	wire alert_nq;
	reg alert_pd;
	reg alert_nd;
	wire sigint_detected;
	assign sigint_detected = ack_sigint | ping_sigint;
	assign alert_tx_o[1] = alert_pq;
	assign alert_tx_o[0] = alert_nq;
	wire alert_set_d;
	reg alert_set_q;
	reg alert_clr;
	wire alert_test_set_d;
	reg alert_test_set_q;
	wire ping_set_d;
	reg ping_set_q;
	reg ping_clr;
	wire alert_req_trigger;
	wire alert_test_trigger;
	wire ping_trigger;
	wire alert_req;
	prim_sec_anchor_buf #(.Width(1)) u_prim_buf_in_req(
		.in_i(alert_req_i),
		.out_o(alert_req)
	);
	assign alert_req_trigger = alert_req | alert_set_q;
	generate
		if (IsFatal) begin : gen_fatal
			assign alert_set_d = alert_req_trigger;
		end
		else begin : gen_recov
			assign alert_set_d = (alert_clr ? 1'b0 : alert_req_trigger);
		end
	endgenerate
	assign alert_test_trigger = alert_test_i | alert_test_set_q;
	assign alert_test_set_d = (alert_clr ? 1'b0 : alert_test_trigger);
	wire alert_trigger;
	assign alert_trigger = alert_req_trigger | alert_test_trigger;
	assign ping_trigger = ping_set_q | ping_event;
	assign ping_set_d = (ping_clr ? 1'b0 : ping_trigger);
	assign alert_ack_o = alert_clr & alert_set_q;
	assign alert_state_o = alert_set_q;
	always @(*) begin : p_fsm
		if (_sv2v_0)
			;
		state_d = state_q;
		alert_pd = 1'b0;
		alert_nd = 1'b1;
		ping_clr = 1'b0;
		alert_clr = 1'b0;
		(* full_case, parallel_case *)
		case (state_q)
			3'd0:
				if (alert_trigger || ping_trigger) begin
					state_d = (alert_trigger ? 3'd1 : 3'd3);
					alert_pd = 1'b1;
					alert_nd = 1'b0;
				end
			3'd1:
				if (ack_level)
					state_d = 3'd2;
				else begin
					alert_pd = 1'b1;
					alert_nd = 1'b0;
				end
			3'd2:
				if (!ack_level) begin
					state_d = 3'd5;
					alert_clr = 1'b1;
				end
			3'd3:
				if (ack_level)
					state_d = 3'd4;
				else begin
					alert_pd = 1'b1;
					alert_nd = 1'b0;
				end
			3'd4:
				if (!ack_level) begin
					ping_clr = 1'b1;
					state_d = 3'd5;
				end
			3'd5: state_d = 3'd6;
			3'd6: state_d = 3'd0;
			default: state_d = 3'd0;
		endcase
		if (sigint_detected) begin
			state_d = 3'd0;
			alert_pd = 1'b0;
			alert_nd = 1'b0;
			ping_clr = 1'b1;
			alert_clr = 1'b0;
		end
	end
	prim_sec_anchor_flop #(
		.Width(2),
		.ResetValue(2'b10)
	) u_prim_flop_alert(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i({alert_nd, alert_pd}),
		.q_o({alert_nq, alert_pq})
	);
	always @(posedge clk_i or negedge rst_ni) begin : p_reg
		if (!rst_ni) begin
			state_q <= 3'd0;
			alert_set_q <= 1'b0;
			alert_test_set_q <= 1'b0;
			ping_set_q <= 1'b0;
		end
		else begin
			state_q <= state_d;
			alert_set_q <= alert_set_d;
			alert_test_set_q <= alert_test_set_d;
			ping_set_q <= ping_set_d;
		end
	end
	initial _sv2v_0 = 0;
endmodule
