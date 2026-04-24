module prim_edn_req (
	clk_i,
	rst_ni,
	req_chk_i,
	req_i,
	ack_o,
	data_o,
	fips_o,
	err_o,
	clk_edn_i,
	rst_edn_ni,
	edn_o,
	edn_i
);
	parameter signed [31:0] OutWidth = 32;
	parameter [0:0] RepCheck = 0;
	parameter [0:0] EnRstChks = 0;
	parameter [31:0] MaxLatency = 0;
	input clk_i;
	input rst_ni;
	input req_chk_i;
	input req_i;
	output wire ack_o;
	output wire [OutWidth - 1:0] data_o;
	output wire fips_o;
	output wire err_o;
	input clk_edn_i;
	input rst_edn_ni;
	output wire [0:0] edn_o;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	input wire [33:0] edn_i;
	wire word_req;
	wire word_ack;
	assign word_req = req_i & ~ack_o;
	wire [31:0] word_data;
	wire word_fips;
	localparam signed [31:0] SyncWidth = 33;
	prim_sync_reqack_data #(
		.Width(SyncWidth),
		.EnRstChks(EnRstChks),
		.DataSrc2Dst(1'b0),
		.DataReg(1'b0)
	) u_prim_sync_reqack_data(
		.clk_src_i(clk_i),
		.rst_src_ni(rst_ni),
		.clk_dst_i(clk_edn_i),
		.rst_dst_ni(rst_edn_ni),
		.req_chk_i(req_chk_i),
		.src_req_i(word_req),
		.src_ack_o(word_ack),
		.dst_req_o(edn_o[0]),
		.dst_ack_i(edn_i[33]),
		.data_i({edn_i[32], edn_i[31-:edn_pkg_ENDPOINT_BUS_WIDTH]}),
		.data_o({word_fips, word_data})
	);
	generate
		if (RepCheck) begin : gen_rep_chk
			reg [31:0] word_data_q;
			always @(posedge clk_i)
				if (word_ack)
					word_data_q <= word_data;
			reg chk_rep;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					chk_rep <= 1'sb0;
				else if (word_ack)
					chk_rep <= 1'b1;
			wire err_d;
			reg err_q;
			assign err_d = (req_i && ack_o ? 1'b0 : ((chk_rep && word_ack) && (word_data == word_data_q) ? 1'b1 : err_q));
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					err_q <= 1'b0;
				else
					err_q <= err_d;
			assign err_o = err_q;
		end
		else begin : gen_no_rep_chk
			assign err_o = 1'sb0;
		end
	endgenerate
	prim_packer_fifo #(
		.InW(edn_pkg_ENDPOINT_BUS_WIDTH),
		.OutW(OutWidth),
		.ClearOnRead(1'b0)
	) u_prim_packer_fifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(word_ack),
		.wdata_i(word_data),
		.wready_o(),
		.rvalid_o(ack_o),
		.rdata_o(data_o),
		.rready_i(1'b1),
		.depth_o()
	);
	wire fips_d;
	reg fips_q;
	assign fips_d = (req_i && ack_o ? 1'b1 : (word_ack ? fips_q & word_fips : fips_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			fips_q <= 1'b1;
		else
			fips_q <= fips_d;
	assign fips_o = fips_q;
	wire unused_param_maxlatency;
	assign unused_param_maxlatency = ^MaxLatency;
endmodule
