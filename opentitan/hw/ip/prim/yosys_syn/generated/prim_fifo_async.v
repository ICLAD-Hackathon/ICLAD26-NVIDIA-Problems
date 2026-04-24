module prim_fifo_async (
	clk_wr_i,
	rst_wr_ni,
	wvalid_i,
	wready_o,
	wdata_i,
	wdepth_o,
	clk_rd_i,
	rst_rd_ni,
	rvalid_o,
	rready_i,
	rdata_o,
	rdepth_o
);
	parameter [31:0] Width = 16;
	parameter [31:0] Depth = 4;
	parameter [0:0] OutputZeroIfEmpty = 1'b0;
	parameter [0:0] OutputZeroIfInvalid = 1'b0;
	localparam [31:0] DepthW = $clog2(Depth + 1);
	input wire clk_wr_i;
	input wire rst_wr_ni;
	input wire wvalid_i;
	output wire wready_o;
	input wire [Width - 1:0] wdata_i;
	output wire [DepthW - 1:0] wdepth_o;
	input wire clk_rd_i;
	input wire rst_rd_ni;
	output wire rvalid_o;
	input wire rready_i;
	output wire [Width - 1:0] rdata_o;
	output wire [DepthW - 1:0] rdepth_o;
	localparam [31:0] PTRV_W = (Depth == 1 ? 1 : $clog2(Depth));
	localparam [31:0] PTR_WIDTH = (Depth == 1 ? 1 : PTRV_W + 1);
	reg [PTR_WIDTH - 1:0] fifo_wptr_q;
	wire [PTR_WIDTH - 1:0] fifo_wptr_d;
	reg [PTR_WIDTH - 1:0] fifo_rptr_q;
	wire [PTR_WIDTH - 1:0] fifo_rptr_d;
	wire [PTR_WIDTH - 1:0] fifo_wptr_sync_combi;
	wire [PTR_WIDTH - 1:0] fifo_rptr_sync_combi;
	wire [PTR_WIDTH - 1:0] fifo_wptr_gray_sync;
	wire [PTR_WIDTH - 1:0] fifo_rptr_gray_sync;
	reg [PTR_WIDTH - 1:0] fifo_rptr_sync_q;
	reg [PTR_WIDTH - 1:0] fifo_wptr_gray_q;
	wire [PTR_WIDTH - 1:0] fifo_wptr_gray_d;
	reg [PTR_WIDTH - 1:0] fifo_rptr_gray_q;
	wire [PTR_WIDTH - 1:0] fifo_rptr_gray_d;
	wire fifo_incr_wptr;
	wire fifo_incr_rptr;
	wire full_wclk;
	wire full_rclk;
	wire empty_rclk;
	reg [Width - 1:0] storage [0:Depth - 1];
	assign fifo_incr_wptr = wvalid_i & wready_o;
	function automatic [PTR_WIDTH - 1:0] sv2v_cast_62A53;
		input reg [PTR_WIDTH - 1:0] inp;
		sv2v_cast_62A53 = inp;
	endfunction
	assign fifo_wptr_d = fifo_wptr_q + sv2v_cast_62A53(1'b1);
	always @(posedge clk_wr_i or negedge rst_wr_ni)
		if (!rst_wr_ni)
			fifo_wptr_q <= 1'sb0;
		else if (fifo_incr_wptr)
			fifo_wptr_q <= fifo_wptr_d;
	always @(posedge clk_wr_i or negedge rst_wr_ni)
		if (!rst_wr_ni)
			fifo_wptr_gray_q <= 1'sb0;
		else if (fifo_incr_wptr)
			fifo_wptr_gray_q <= fifo_wptr_gray_d;
	prim_flop_2sync #(.Width(PTR_WIDTH)) sync_wptr(
		.clk_i(clk_rd_i),
		.rst_ni(rst_rd_ni),
		.d_i(fifo_wptr_gray_q),
		.q_o(fifo_wptr_gray_sync)
	);
	assign fifo_incr_rptr = rvalid_o & rready_i;
	assign fifo_rptr_d = fifo_rptr_q + sv2v_cast_62A53(1'b1);
	always @(posedge clk_rd_i or negedge rst_rd_ni)
		if (!rst_rd_ni)
			fifo_rptr_q <= 1'sb0;
		else if (fifo_incr_rptr)
			fifo_rptr_q <= fifo_rptr_d;
	always @(posedge clk_rd_i or negedge rst_rd_ni)
		if (!rst_rd_ni)
			fifo_rptr_gray_q <= 1'sb0;
		else if (fifo_incr_rptr)
			fifo_rptr_gray_q <= fifo_rptr_gray_d;
	prim_flop_2sync #(.Width(PTR_WIDTH)) sync_rptr(
		.clk_i(clk_wr_i),
		.rst_ni(rst_wr_ni),
		.d_i(fifo_rptr_gray_q),
		.q_o(fifo_rptr_gray_sync)
	);
	always @(posedge clk_wr_i or negedge rst_wr_ni)
		if (!rst_wr_ni)
			fifo_rptr_sync_q <= 1'sb0;
		else
			fifo_rptr_sync_q <= fifo_rptr_sync_combi;
	wire [PTR_WIDTH - 1:0] xor_mask;
	assign xor_mask = sv2v_cast_62A53(1'b1) << (PTR_WIDTH - 1);
	assign full_wclk = fifo_wptr_q == (fifo_rptr_sync_q ^ xor_mask);
	assign full_rclk = fifo_wptr_sync_combi == (fifo_rptr_q ^ xor_mask);
	assign empty_rclk = fifo_wptr_sync_combi == fifo_rptr_q;
	function automatic [DepthW - 1:0] sv2v_cast_2DA09;
		input reg [DepthW - 1:0] inp;
		sv2v_cast_2DA09 = inp;
	endfunction
	generate
		if (Depth > 1) begin : g_depth_calc
			wire wptr_msb;
			wire rptr_sync_msb;
			wire [PTRV_W - 1:0] wptr_value;
			wire [PTRV_W - 1:0] rptr_sync_value;
			assign wptr_msb = fifo_wptr_q[PTR_WIDTH - 1];
			assign rptr_sync_msb = fifo_rptr_sync_q[PTR_WIDTH - 1];
			assign wptr_value = fifo_wptr_q[0+:PTRV_W];
			assign rptr_sync_value = fifo_rptr_sync_q[0+:PTRV_W];
			assign wdepth_o = (full_wclk ? sv2v_cast_2DA09(Depth) : (wptr_msb == rptr_sync_msb ? sv2v_cast_2DA09(wptr_value) - sv2v_cast_2DA09(rptr_sync_value) : (sv2v_cast_2DA09(Depth) - sv2v_cast_2DA09(rptr_sync_value)) + sv2v_cast_2DA09(wptr_value)));
			wire rptr_msb;
			wire wptr_sync_msb;
			wire [PTRV_W - 1:0] rptr_value;
			wire [PTRV_W - 1:0] wptr_sync_value;
			assign wptr_sync_msb = fifo_wptr_sync_combi[PTR_WIDTH - 1];
			assign rptr_msb = fifo_rptr_q[PTR_WIDTH - 1];
			assign wptr_sync_value = fifo_wptr_sync_combi[0+:PTRV_W];
			assign rptr_value = fifo_rptr_q[0+:PTRV_W];
			assign rdepth_o = (full_rclk ? sv2v_cast_2DA09(Depth) : (wptr_sync_msb == rptr_msb ? sv2v_cast_2DA09(wptr_sync_value) - sv2v_cast_2DA09(rptr_value) : (sv2v_cast_2DA09(Depth) - sv2v_cast_2DA09(rptr_value)) + sv2v_cast_2DA09(wptr_sync_value)));
		end
		else begin : g_no_depth_calc
			assign rdepth_o = full_rclk;
			assign wdepth_o = full_wclk;
		end
	endgenerate
	assign wready_o = ~full_wclk;
	assign rvalid_o = ~empty_rclk;
	wire [Width - 1:0] rdata_int;
	generate
		if (Depth > 1) begin : g_storage_mux
			always @(posedge clk_wr_i)
				if (fifo_incr_wptr)
					storage[fifo_wptr_q[PTRV_W - 1:0]] <= wdata_i;
			assign rdata_int = storage[fifo_rptr_q[PTRV_W - 1:0]];
		end
		else begin : g_storage_simple
			always @(posedge clk_wr_i)
				if (fifo_incr_wptr)
					storage[0] <= wdata_i;
			assign rdata_int = storage[0];
		end
		if (OutputZeroIfEmpty == 1'b1) begin : gen_output_zero
			if (OutputZeroIfInvalid == 1'b1) begin : gen_invalid_zero
				assign rdata_o = (empty_rclk ? {Width {1'sb0}} : (rvalid_o ? rdata_int : {Width {1'sb0}}));
			end
			else begin : gen_invalid_non_zero
				assign rdata_o = (empty_rclk ? {Width {1'sb0}} : rdata_int);
			end
		end
		else begin : gen_no_output_zero
			if (OutputZeroIfInvalid == 1'b1) begin : gen_invalid_zero
				assign rdata_o = (rvalid_o ? rdata_int : {Width {1'sb0}});
			end
			else begin : gen_invalid_non_zero
				assign rdata_o = rdata_int;
			end
		end
		if (Depth > 2) begin : g_full_gray_conversion
			function automatic [PTR_WIDTH - 1:0] dec2gray;
				input reg [PTR_WIDTH - 1:0] decval;
				reg [PTR_WIDTH - 1:0] decval_sub;
				reg [PTR_WIDTH - 1:0] decval_in;
				reg unused_decval_msb;
				begin
					decval_sub = (sv2v_cast_62A53(Depth) - {1'b0, decval[PTR_WIDTH - 2:0]}) - 1'b1;
					decval_in = (decval[PTR_WIDTH - 1] ? decval_sub : decval);
					unused_decval_msb = decval_in[PTR_WIDTH - 1];
					decval_in[PTR_WIDTH - 1] = 1'b0;
					dec2gray = decval_in;
					dec2gray = dec2gray ^ (decval_in >> 1);
					dec2gray[PTR_WIDTH - 1] = decval[PTR_WIDTH - 1];
				end
			endfunction
			function automatic [PTR_WIDTH - 1:0] gray2dec;
				input reg [PTR_WIDTH - 1:0] grayval;
				reg [PTR_WIDTH - 1:0] dec_tmp;
				reg [PTR_WIDTH - 1:0] dec_tmp_sub;
				reg unused_decsub_msb;
				begin
					dec_tmp = 1'sb0;
					begin : sv2v_autoblock_1
						reg [31:0] i;
						for (i = PTR_WIDTH - 1; i > 0; i = i - 1)
							dec_tmp[i - 1] = dec_tmp[i] ^ grayval[i - 1];
					end
					dec_tmp_sub = (sv2v_cast_62A53(Depth) - dec_tmp) - 1'b1;
					if (grayval[PTR_WIDTH - 1]) begin
						gray2dec = dec_tmp_sub;
						gray2dec[PTR_WIDTH - 1] = 1'b1;
						unused_decsub_msb = dec_tmp_sub[PTR_WIDTH - 1];
					end
					else
						gray2dec = dec_tmp;
				end
			endfunction
			assign fifo_rptr_sync_combi = gray2dec(fifo_rptr_gray_sync);
			assign fifo_wptr_sync_combi = gray2dec(fifo_wptr_gray_sync);
			assign fifo_rptr_gray_d = dec2gray(fifo_rptr_d);
			assign fifo_wptr_gray_d = dec2gray(fifo_wptr_d);
		end
		else if (Depth == 2) begin : g_simple_gray_conversion
			assign fifo_rptr_sync_combi = {fifo_rptr_gray_sync[PTR_WIDTH - 1], ^fifo_rptr_gray_sync};
			assign fifo_wptr_sync_combi = {fifo_wptr_gray_sync[PTR_WIDTH - 1], ^fifo_wptr_gray_sync};
			assign fifo_rptr_gray_d = {fifo_rptr_d[PTR_WIDTH - 1], ^fifo_rptr_d};
			assign fifo_wptr_gray_d = {fifo_wptr_d[PTR_WIDTH - 1], ^fifo_wptr_d};
		end
		else begin : g_no_gray_conversion
			assign fifo_rptr_sync_combi = fifo_rptr_gray_sync;
			assign fifo_wptr_sync_combi = fifo_wptr_gray_sync;
			assign fifo_rptr_gray_d = fifo_rptr_d;
			assign fifo_wptr_gray_d = fifo_wptr_d;
		end
	endgenerate
endmodule
