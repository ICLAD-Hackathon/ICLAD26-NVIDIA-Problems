module prim_diff_to_alert (
	clk_i,
	rst_ni,
	diff_pi,
	diff_ni,
	alert_rx_i,
	alert_tx_o
);
	parameter [0:0] AsyncOn = 1'b1;
	parameter [31:0] SkewCycles = 1;
	parameter [0:0] IsFatal = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire diff_pi;
	input wire diff_ni;
	input wire [3:0] alert_rx_i;
	output wire [1:0] alert_tx_o;
	wire diff_p_sync;
	wire diff_n_sync;
	generate
		if (AsyncOn) begin : gen_async
			prim_flop_2sync #(
				.Width(2),
				.ResetValue(2'b10)
			) u_sync(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i({diff_ni, diff_pi}),
				.q_o({diff_n_sync, diff_p_sync})
			);
		end
		else begin : gen_sync
			assign diff_p_sync = diff_pi;
			assign diff_n_sync = diff_ni;
		end
	endgenerate
	wire diff_p_buf;
	wire diff_n_buf;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_ack(
		.in_i({diff_n_sync, diff_p_sync}),
		.out_o({diff_n_buf, diff_p_buf})
	);
	wire alert_req;
	assign alert_req = diff_p_buf | ~diff_n_buf;
	prim_alert_sender #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles),
		.IsFatal(IsFatal)
	) u_prim_alert_sender(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.alert_test_i(1'b0),
		.alert_req_i(alert_req),
		.alert_ack_o(),
		.alert_state_o(),
		.alert_rx_i(alert_rx_i),
		.alert_tx_o(alert_tx_o)
	);
endmodule
