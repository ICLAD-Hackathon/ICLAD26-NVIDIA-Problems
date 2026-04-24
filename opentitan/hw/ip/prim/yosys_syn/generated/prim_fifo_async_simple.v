module prim_fifo_async_simple (
	clk_wr_i,
	rst_wr_ni,
	wvalid_i,
	wready_o,
	wdata_i,
	clk_rd_i,
	rst_rd_ni,
	rvalid_o,
	rready_i,
	rdata_o
);
	parameter [31:0] Width = 16;
	parameter [0:0] EnRstChks = 1'b0;
	parameter [0:0] EnRzHs = 1'b0;
	input wire clk_wr_i;
	input wire rst_wr_ni;
	input wire wvalid_i;
	output wire wready_o;
	input wire [Width - 1:0] wdata_i;
	input wire clk_rd_i;
	input wire rst_rd_ni;
	output wire rvalid_o;
	input wire rready_i;
	output wire [Width - 1:0] rdata_o;
	wire wr_en;
	wire src_req;
	wire src_ack;
	wire pending_d;
	reg pending_q;
	reg not_in_reset_q;
	assign wready_o = !pending_q && not_in_reset_q;
	assign wr_en = wvalid_i && wready_o;
	assign src_req = pending_q || wvalid_i;
	assign pending_d = (src_ack ? 1'b0 : (wr_en ? 1'b1 : pending_q));
	wire dst_req;
	wire dst_ack;
	assign rvalid_o = dst_req;
	assign dst_ack = dst_req && rready_i;
	always @(posedge clk_wr_i or negedge rst_wr_ni)
		if (!rst_wr_ni) begin
			pending_q <= 1'b0;
			not_in_reset_q <= 1'b0;
		end
		else begin
			pending_q <= pending_d;
			not_in_reset_q <= 1'b1;
		end
	prim_sync_reqack #(
		.EnRstChks(EnRstChks),
		.EnRzHs(EnRzHs)
	) u_prim_sync_reqack(
		.clk_src_i(clk_wr_i),
		.rst_src_ni(rst_wr_ni),
		.clk_dst_i(clk_rd_i),
		.rst_dst_ni(rst_rd_ni),
		.req_chk_i(1'b0),
		.src_req_i(src_req),
		.src_ack_o(src_ack),
		.dst_req_o(dst_req),
		.dst_ack_i(dst_ack)
	);
	reg [Width - 1:0] data_q;
	always @(posedge clk_wr_i)
		if (wr_en)
			data_q <= wdata_i;
	assign rdata_o = data_q;
endmodule
