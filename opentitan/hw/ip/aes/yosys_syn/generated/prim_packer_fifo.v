module prim_packer_fifo (
	clk_i,
	rst_ni,
	clr_i,
	wvalid_i,
	wdata_i,
	wready_o,
	rvalid_o,
	rdata_o,
	rready_i,
	depth_o
);
	parameter signed [31:0] InW = 32;
	parameter signed [31:0] OutW = 8;
	parameter [0:0] ClearOnRead = 1'b1;
	localparam signed [31:0] MaxW = (InW > OutW ? InW : OutW);
	localparam signed [31:0] MinW = (InW < OutW ? InW : OutW);
	localparam signed [31:0] DepthW = $clog2(MaxW / MinW);
	input wire clk_i;
	input wire rst_ni;
	input wire clr_i;
	input wire wvalid_i;
	input wire [InW - 1:0] wdata_i;
	output wire wready_o;
	output wire rvalid_o;
	output wire [OutW - 1:0] rdata_o;
	input wire rready_i;
	output wire [DepthW:0] depth_o;
	localparam [31:0] WidthRatio = MaxW / MinW;
	localparam [DepthW:0] FullDepth = WidthRatio[DepthW:0];
	localparam [DepthW:0] DepthOne = 1;
	wire load_data;
	wire clear_data;
	wire clear_status;
	reg [DepthW:0] depth_q;
	wire [DepthW:0] depth_d;
	reg [MaxW - 1:0] data_q;
	wire [MaxW - 1:0] data_d;
	reg clr_q;
	wire clr_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			depth_q <= 1'sb0;
			data_q <= 1'sb0;
			clr_q <= 1'b1;
		end
		else begin
			depth_q <= depth_d;
			data_q <= data_d;
			clr_q <= clr_d;
		end
	assign clr_d = clr_i;
	assign depth_o = depth_q;
	generate
		if (InW < OutW) begin : gen_pack_mode
			wire [MaxW - 1:0] wdata_shifted;
			assign wdata_shifted = {{OutW - InW {1'b0}}, wdata_i} << (depth_q * InW);
			assign clear_status = (rready_i && rvalid_o) || clr_q;
			assign clear_data = (ClearOnRead && clear_status) || clr_q;
			assign load_data = wvalid_i && wready_o;
			assign depth_d = (clear_status ? {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}} : (load_data ? depth_q + DepthOne : depth_q));
			assign data_d = (clear_data ? {MaxW {1'sb0}} : (load_data ? wdata_shifted | (depth_q == 0 ? {MaxW {1'sb0}} : data_q) : data_q));
			assign wready_o = (depth_q != FullDepth) && !clr_q;
			assign rdata_o = data_q;
			assign rvalid_o = (depth_q == FullDepth) && !clr_q;
		end
		else begin : gen_unpack_mode
			wire [MaxW - 1:0] rdata_shifted;
			wire pull_data;
			reg [DepthW:0] ptr_q;
			wire [DepthW:0] ptr_d;
			wire [DepthW:0] lsb_is_one;
			wire [DepthW:0] max_value;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					ptr_q <= 1'sb0;
				else
					ptr_q <= ptr_d;
			assign lsb_is_one = {{DepthW {1'b0}}, 1'b1};
			assign max_value = FullDepth;
			assign rdata_shifted = data_q >> (ptr_q * OutW);
			assign clear_status = (rready_i && (depth_q == lsb_is_one)) || clr_q;
			assign clear_data = (ClearOnRead && clear_status) || clr_q;
			assign load_data = wvalid_i && wready_o;
			assign pull_data = rvalid_o && rready_i;
			assign depth_d = (clear_status ? {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}} : (load_data ? max_value : (pull_data ? depth_q - DepthOne : depth_q)));
			assign ptr_d = (clear_status ? {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}} : (pull_data ? ptr_q + DepthOne : ptr_q));
			assign data_d = (clear_data ? {MaxW {1'sb0}} : (load_data ? wdata_i : data_q));
			assign wready_o = (depth_q == {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}}) && !clr_q;
			assign rdata_o = rdata_shifted[OutW - 1:0];
			assign rvalid_o = (depth_q != {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}}) && !clr_q;
			if (InW > OutW) begin : gen_unused
				wire [(MaxW - MinW) - 1:0] unused_rdata_shifted;
				assign unused_rdata_shifted = rdata_shifted[MaxW - 1:MinW];
			end
		end
	endgenerate
endmodule
