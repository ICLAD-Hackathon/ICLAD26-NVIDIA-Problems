module prim_alert_to_diff (
	clk_i,
	rst_ni,
	alert_rx_o,
	alert_tx_i,
	diff_po,
	diff_no
);
	parameter [0:0] AsyncOn = 1'b0;
	parameter [31:0] SkewCycles = 1;
	input wire clk_i;
	input wire rst_ni;
	output wire [3:0] alert_rx_o;
	input wire [1:0] alert_tx_i;
	output wire diff_po;
	output wire diff_no;
	wire integ_error;
	wire alert;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	prim_alert_receiver #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles)
	) u_prim_alert_receiver(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.init_trig_i(sv2v_cast_EECFA(4'h9)),
		.ping_req_i(1'b0),
		.ping_ok_o(),
		.integ_fail_o(integ_error),
		.alert_o(alert),
		.alert_rx_o(alert_rx_o),
		.alert_tx_i(alert_tx_i)
	);
	wire combined_alert;
	assign combined_alert = integ_error | alert;
	prim_diff_encode u_prim_diff_encode(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.req_i(combined_alert),
		.diff_po(diff_po),
		.diff_no(diff_no)
	);
endmodule
