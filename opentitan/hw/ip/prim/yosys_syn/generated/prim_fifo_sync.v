module prim_fifo_sync (
	clk_i,
	rst_ni,
	clr_i,
	wvalid_i,
	wready_o,
	wdata_i,
	rvalid_o,
	rready_i,
	rdata_o,
	full_o,
	depth_o,
	err_o
);
	parameter [31:0] Width = 16;
	parameter [0:0] Pass = 1'b1;
	parameter [31:0] Depth = 4;
	parameter [0:0] OutputZeroIfEmpty = 1'b1;
	parameter [0:0] NeverClears = 1'b0;
	parameter [0:0] Secure = 1'b0;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam signed [31:0] DepthW = prim_util_pkg_vbits(Depth + 1);
	input clk_i;
	input rst_ni;
	input clr_i;
	input wvalid_i;
	output wire wready_o;
	input [Width - 1:0] wdata_i;
	output wire rvalid_o;
	input rready_i;
	output wire [Width - 1:0] rdata_o;
	output wire full_o;
	output wire [DepthW - 1:0] depth_o;
	output wire err_o;
	function automatic signed [Width - 1:0] sv2v_cast_62596_signed;
		input reg signed [Width - 1:0] inp;
		sv2v_cast_62596_signed = inp;
	endfunction
	generate
		if (Depth == 0) begin : gen_passthru_fifo
			assign depth_o = 1'b0;
			assign rvalid_o = wvalid_i;
			assign rdata_o = wdata_i;
			assign wready_o = rready_i;
			assign full_o = 1'b1;
			wire unused_clr;
			assign unused_clr = clr_i;
			assign err_o = 1'b0;
		end
		else if (Depth == 1) begin : gen_singleton_fifo
			wire full_d;
			reg full_q;
			assign full_o = full_q;
			assign depth_o = full_q;
			assign wready_o = ~full_q;
			assign rvalid_o = full_q || (Pass && wvalid_i);
			assign full_d = (rvalid_o ? !rready_i : wvalid_i) && !clr_i;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					full_q <= 1'b0;
				else
					full_q <= full_d;
			reg [Width - 1:0] storage;
			always @(posedge clk_i)
				if (wvalid_i && wready_o)
					storage <= wdata_i;
			wire [Width - 1:0] rdata_int;
			assign rdata_int = (full_q || (Pass == 1'b0) ? storage : wdata_i);
			assign rdata_o = (OutputZeroIfEmpty && !rvalid_o ? sv2v_cast_62596_signed(0) : rdata_int);
			if (!Secure) begin : gen_not_secure
				assign err_o = 1'b0;
			end
			else begin : gen_secure
				wire inv_full;
				prim_flop #(
					.Width(1),
					.ResetValue(1'b1)
				) u_inv_full(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i(~full_d),
					.q_o(inv_full)
				);
				wire err_d;
				reg err_q;
				assign err_d = ~(full_q ^ inv_full);
				always @(posedge clk_i or negedge rst_ni)
					if (!rst_ni)
						err_q <= 1'b0;
					else
						err_q <= err_d;
				assign err_o = err_q;
			end
		end
		else begin : gen_normal_fifo
			localparam [31:0] PtrW = prim_util_pkg_vbits(Depth);
			wire [PtrW - 1:0] fifo_wptr;
			wire [PtrW - 1:0] fifo_rptr;
			wire fifo_incr_wptr;
			wire fifo_incr_rptr;
			wire fifo_empty;
			reg under_rst;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					under_rst <= 1'b1;
				else if (under_rst)
					under_rst <= ~under_rst;
			wire empty;
			assign wready_o = ~full_o & ~under_rst;
			prim_fifo_sync_cnt #(
				.Depth(Depth),
				.Secure(Secure),
				.NeverClears(NeverClears)
			) u_fifo_cnt(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(clr_i),
				.incr_wptr_i(fifo_incr_wptr),
				.incr_rptr_i(fifo_incr_rptr),
				.wptr_o(fifo_wptr),
				.rptr_o(fifo_rptr),
				.full_o(full_o),
				.empty_o(fifo_empty),
				.depth_o(depth_o),
				.err_o(err_o)
			);
			assign fifo_incr_wptr = wvalid_i & wready_o;
			assign fifo_incr_rptr = (rvalid_o & rready_i) & ~under_rst;
			reg [(Depth * Width) - 1:0] storage;
			wire [Width - 1:0] storage_rdata;
			assign storage_rdata = storage[fifo_rptr * Width+:Width];
			always @(posedge clk_i)
				if (fifo_incr_wptr)
					storage[fifo_wptr * Width+:Width] <= wdata_i;
			wire [Width - 1:0] rdata_int;
			if (Pass == 1'b1) begin : gen_pass
				assign rdata_int = (fifo_empty && wvalid_i ? wdata_i : storage_rdata);
				assign empty = fifo_empty & ~wvalid_i;
				assign rvalid_o = ~empty & ~under_rst;
			end
			else begin : gen_nopass
				assign rdata_int = storage_rdata;
				assign empty = fifo_empty;
				assign rvalid_o = ~empty;
			end
			if (OutputZeroIfEmpty == 1'b1) begin : gen_output_zero
				assign rdata_o = (empty ? sv2v_cast_62596_signed(0) : rdata_int);
			end
			else begin : gen_no_output_zero
				assign rdata_o = rdata_int;
			end
		end
	endgenerate
endmodule
