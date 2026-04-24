module prim_sync_reqack_data (
	clk_src_i,
	rst_src_ni,
	clk_dst_i,
	rst_dst_ni,
	req_chk_i,
	src_req_i,
	src_ack_o,
	dst_req_o,
	dst_ack_i,
	data_i,
	data_o
);
	parameter [31:0] Width = 1;
	parameter [0:0] EnRstChks = 1'b0;
	parameter [0:0] DataSrc2Dst = 1'b1;
	parameter [0:0] DataReg = 1'b0;
	parameter [0:0] EnRzHs = 1'b0;
	input clk_src_i;
	input rst_src_ni;
	input clk_dst_i;
	input rst_dst_ni;
	input wire req_chk_i;
	input wire src_req_i;
	output wire src_ack_o;
	output wire dst_req_o;
	input wire dst_ack_i;
	input wire [Width - 1:0] data_i;
	output wire [Width - 1:0] data_o;
	prim_sync_reqack #(
		.EnRstChks(EnRstChks),
		.EnRzHs(EnRzHs)
	) u_prim_sync_reqack(
		.clk_src_i(clk_src_i),
		.rst_src_ni(rst_src_ni),
		.clk_dst_i(clk_dst_i),
		.rst_dst_ni(rst_dst_ni),
		.req_chk_i(req_chk_i),
		.src_req_i(src_req_i),
		.src_ack_o(src_ack_o),
		.dst_req_o(dst_req_o),
		.dst_ack_i(dst_ack_i)
	);
	generate
		if ((DataSrc2Dst == 1'b0) && (DataReg == 1'b1)) begin : gen_data_reg
			wire data_we;
			wire [Width - 1:0] data_d;
			reg [Width - 1:0] data_q;
			assign data_we = dst_req_o & dst_ack_i;
			assign data_d = data_i;
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					data_q <= 1'sb0;
				else if (data_we)
					data_q <= data_d;
			assign data_o = data_q;
		end
		else begin : gen_no_data_reg
			assign data_o = data_i;
		end
	endgenerate
endmodule
