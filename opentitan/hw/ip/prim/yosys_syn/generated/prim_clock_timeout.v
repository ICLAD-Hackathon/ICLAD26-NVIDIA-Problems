module prim_clock_timeout (
	clk_chk_i,
	rst_chk_ni,
	clk_i,
	rst_ni,
	en_i,
	timeout_o
);
	parameter signed [31:0] TimeOutCnt = 16;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam signed [31:0] CntWidth = prim_util_pkg_vbits(TimeOutCnt + 1);
	input clk_chk_i;
	input rst_chk_ni;
	input clk_i;
	input rst_ni;
	input en_i;
	output wire timeout_o;
	reg [CntWidth - 1:0] cnt;
	wire ack;
	wire timeout;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	assign timeout = sv2v_cast_32_signed(cnt) >= TimeOutCnt;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			cnt <= 1'sb0;
		else if (ack || !en_i)
			cnt <= 1'sb0;
		else if (timeout)
			cnt <= {CntWidth {1'b1}};
		else if (en_i)
			cnt <= cnt + 1'b1;
	wire chk_req;
	prim_sync_reqack u_ref_timeout(
		.clk_src_i(clk_i),
		.rst_src_ni(rst_ni),
		.clk_dst_i(clk_chk_i),
		.rst_dst_ni(rst_chk_ni),
		.req_chk_i(1'sb0),
		.src_req_i(1'b1),
		.src_ack_o(ack),
		.dst_req_o(chk_req),
		.dst_ack_i(chk_req)
	);
	prim_flop #(.ResetValue(1'sb0)) u_out(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(timeout),
		.q_o(timeout_o)
	);
endmodule
