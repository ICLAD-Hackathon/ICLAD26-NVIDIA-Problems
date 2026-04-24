module prim_sync_reqack (
	clk_src_i,
	rst_src_ni,
	clk_dst_i,
	rst_dst_ni,
	req_chk_i,
	src_req_i,
	src_ack_o,
	dst_req_o,
	dst_ack_i
);
	reg _sv2v_0;
	parameter [0:0] EnRstChks = 1'b0;
	parameter [0:0] EnRzHs = 1'b0;
	input clk_src_i;
	input rst_src_ni;
	input clk_dst_i;
	input rst_dst_ni;
	input wire req_chk_i;
	input wire src_req_i;
	output reg src_ack_o;
	output reg dst_req_o;
	input wire dst_ack_i;
	wire unused_req_chk;
	assign unused_req_chk = req_chk_i;
	generate
		if (EnRzHs) begin : gen_rz_hs_protocol
			reg src_fsm_d;
			reg src_fsm_q;
			reg dst_fsm_d;
			reg dst_fsm_q;
			wire src_ack;
			reg dst_ack;
			reg src_req;
			wire dst_req;
			always @(*) begin : src_fsm
				if (_sv2v_0)
					;
				src_fsm_d = src_fsm_q;
				src_ack_o = 1'b0;
				src_req = 1'b0;
				(* full_case, parallel_case *)
				case (src_fsm_q)
					1'd0:
						if (!src_ack && src_req_i)
							src_fsm_d = 1'd1;
					1'd1: begin
						src_req = 1'b1;
						src_ack_o = src_ack;
						if (!src_req_i || src_ack)
							src_fsm_d = 1'd0;
					end
					default:
						;
				endcase
			end
			prim_flop_2sync #(.Width(1)) ack_sync(
				.clk_i(clk_src_i),
				.rst_ni(rst_src_ni),
				.d_i(dst_ack),
				.q_o(src_ack)
			);
			always @(posedge clk_src_i or negedge rst_src_ni)
				if (!rst_src_ni)
					src_fsm_q <= 1'd0;
				else
					src_fsm_q <= src_fsm_d;
			always @(*) begin : dst_fsm
				if (_sv2v_0)
					;
				dst_fsm_d = dst_fsm_q;
				dst_req_o = 1'b0;
				dst_ack = 1'b0;
				(* full_case, parallel_case *)
				case (dst_fsm_q)
					1'd0:
						if (dst_req) begin
							dst_req_o = 1'b1;
							if (dst_ack_i)
								dst_fsm_d = 1'd1;
						end
					1'd1: begin
						dst_ack = 1'b1;
						if (!dst_req)
							dst_fsm_d = 1'd0;
					end
					default:
						;
				endcase
			end
			prim_flop_2sync #(.Width(1)) req_sync(
				.clk_i(clk_dst_i),
				.rst_ni(rst_dst_ni),
				.d_i(src_req),
				.q_o(dst_req)
			);
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					dst_fsm_q <= 1'd0;
				else
					dst_fsm_q <= dst_fsm_d;
		end
		else begin : gen_nrz_hs_protocol
			reg src_fsm_ns;
			reg src_fsm_cs;
			reg dst_fsm_ns;
			reg dst_fsm_cs;
			reg src_req_d;
			reg src_req_q;
			wire src_ack;
			reg dst_ack_d;
			reg dst_ack_q;
			wire dst_req;
			wire src_handshake;
			wire dst_handshake;
			assign src_handshake = src_req_i & src_ack_o;
			assign dst_handshake = dst_req_o & dst_ack_i;
			prim_flop_2sync #(.Width(1)) req_sync(
				.clk_i(clk_dst_i),
				.rst_ni(rst_dst_ni),
				.d_i(src_req_q),
				.q_o(dst_req)
			);
			prim_flop_2sync #(.Width(1)) ack_sync(
				.clk_i(clk_src_i),
				.rst_ni(rst_src_ni),
				.d_i(dst_ack_q),
				.q_o(src_ack)
			);
			always @(*) begin : src_fsm
				if (_sv2v_0)
					;
				src_fsm_ns = src_fsm_cs;
				src_req_d = src_req_q;
				src_ack_o = 1'b0;
				(* full_case, parallel_case *)
				case (src_fsm_cs)
					1'd0: begin
						src_req_d = src_req_i;
						src_ack_o = src_ack;
						if (src_handshake)
							src_fsm_ns = 1'd1;
					end
					1'd1: begin
						src_req_d = ~src_req_i;
						src_ack_o = ~src_ack;
						if (src_handshake)
							src_fsm_ns = 1'd0;
					end
					default:
						;
				endcase
			end
			always @(*) begin : dst_fsm
				if (_sv2v_0)
					;
				dst_fsm_ns = dst_fsm_cs;
				dst_req_o = 1'b0;
				dst_ack_d = dst_ack_q;
				(* full_case, parallel_case *)
				case (dst_fsm_cs)
					1'd0: begin
						dst_req_o = dst_req;
						dst_ack_d = dst_ack_i;
						if (dst_handshake)
							dst_fsm_ns = 1'd1;
					end
					1'd1: begin
						dst_req_o = ~dst_req;
						dst_ack_d = ~dst_ack_i;
						if (dst_handshake)
							dst_fsm_ns = 1'd0;
					end
					default:
						;
				endcase
			end
			always @(posedge clk_src_i or negedge rst_src_ni)
				if (!rst_src_ni) begin
					src_fsm_cs <= 1'd0;
					src_req_q <= 1'b0;
				end
				else begin
					src_fsm_cs <= src_fsm_ns;
					src_req_q <= src_req_d;
				end
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni) begin
					dst_fsm_cs <= 1'd0;
					dst_ack_q <= 1'b0;
				end
				else begin
					dst_fsm_cs <= dst_fsm_ns;
					dst_ack_q <= dst_ack_d;
				end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
