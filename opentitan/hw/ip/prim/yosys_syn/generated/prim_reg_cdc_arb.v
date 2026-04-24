module prim_reg_cdc_arb (
	clk_src_i,
	rst_src_ni,
	clk_dst_i,
	rst_dst_ni,
	src_ack_o,
	src_update_o,
	dst_req_i,
	dst_req_o,
	dst_update_i,
	dst_ds_i,
	dst_qs_i,
	dst_qs_o
);
	reg _sv2v_0;
	parameter signed [31:0] DataWidth = 32;
	parameter [DataWidth - 1:0] ResetVal = 32'h00000000;
	parameter [0:0] DstWrReq = 0;
	input clk_src_i;
	input rst_src_ni;
	input clk_dst_i;
	input rst_dst_ni;
	output wire src_ack_o;
	output wire src_update_o;
	input dst_req_i;
	output wire dst_req_o;
	input dst_update_i;
	input [DataWidth - 1:0] dst_ds_i;
	input [DataWidth - 1:0] dst_qs_i;
	output reg [DataWidth - 1:0] dst_qs_o;
	wire dst_update;
	assign dst_update = dst_update_i & (dst_qs_o != dst_ds_i);
	generate
		if (DstWrReq) begin : gen_wr_req
			reg dst_lat_q;
			reg dst_lat_d;
			wire dst_update_req;
			wire dst_update_ack;
			reg id_q;
			reg idle_q;
			reg idle_d;
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					idle_q <= 1'b1;
				else
					idle_q <= idle_d;
			reg dst_req_q;
			wire dst_req;
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					dst_req_q <= 1'sb0;
				else if (dst_req_q && dst_lat_d)
					dst_req_q <= 1'sb0;
				else if (dst_req_i && !idle_q)
					dst_req_q <= 1'b1;
			assign dst_req = dst_req_q | dst_req_i;
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					dst_qs_o <= ResetVal;
				else if (dst_lat_d)
					dst_qs_o <= dst_ds_i;
				else if (dst_lat_q)
					dst_qs_o <= dst_qs_i;
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					id_q <= 1'd0;
				else if (dst_update_ack)
					id_q <= 1'd0;
				else if (dst_req && dst_lat_d)
					id_q <= 1'd0;
				else if (!dst_req && dst_lat_d)
					id_q <= 1'd1;
				else if (dst_lat_q)
					id_q <= 1'd1;
			assign dst_req_o = idle_q & dst_req;
			reg dst_hold_req;
			always @(*) begin
				if (_sv2v_0)
					;
				idle_d = idle_q;
				dst_hold_req = 1'sb0;
				dst_lat_q = 1'sb0;
				dst_lat_d = 1'sb0;
				if (idle_q) begin
					if (dst_req) begin
						idle_d = 1'b0;
						dst_lat_d = 1'b1;
					end
					else if (dst_update) begin
						idle_d = 1'b0;
						dst_lat_d = 1'b1;
					end
					else if (dst_qs_o != dst_qs_i) begin
						idle_d = 1'b0;
						dst_lat_q = 1'b1;
					end
				end
				else begin
					dst_hold_req = 1'b1;
					if (dst_update_ack)
						idle_d = 1'b1;
				end
			end
			assign dst_update_req = (dst_hold_req | dst_lat_d) | dst_lat_q;
			wire src_req;
			prim_sync_reqack u_dst_update_sync(
				.clk_src_i(clk_dst_i),
				.rst_src_ni(rst_dst_ni),
				.clk_dst_i(clk_src_i),
				.rst_dst_ni(rst_src_ni),
				.req_chk_i(1'b1),
				.src_req_i(dst_update_req),
				.src_ack_o(dst_update_ack),
				.dst_req_o(src_req),
				.dst_ack_i(src_req)
			);
			assign src_ack_o = src_req & (id_q == 1'd0);
			assign src_update_o = src_req & (id_q == 1'd1);
		end
		else begin : gen_passthru
			wire [DataWidth:1] sv2v_tmp_660CD;
			assign sv2v_tmp_660CD = dst_qs_i;
			always @(*) dst_qs_o = sv2v_tmp_660CD;
			assign dst_req_o = dst_req_i;
			assign src_update_o = 1'sb0;
			prim_pulse_sync u_dst_to_src_ack(
				.clk_src_i(clk_dst_i),
				.rst_src_ni(rst_dst_ni),
				.clk_dst_i(clk_src_i),
				.rst_dst_ni(rst_src_ni),
				.src_pulse_i(dst_req_i),
				.dst_pulse_o(src_ack_o)
			);
			wire unused_sigs;
			assign unused_sigs = |{dst_ds_i, dst_update};
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
