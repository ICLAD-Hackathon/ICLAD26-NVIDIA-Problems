module prim_mubi16_sender (
	clk_i,
	rst_ni,
	mubi_i,
	mubi_o
);
	parameter [0:0] AsyncOn = 1;
	parameter [0:0] EnSecBuf = 0;
	localparam signed [31:0] prim_mubi_pkg_MuBi16Width = 16;
	function automatic [15:0] sv2v_cast_B8818;
		input reg [15:0] inp;
		sv2v_cast_B8818 = inp;
	endfunction
	parameter [15:0] ResetValue = sv2v_cast_B8818(16'h6969);
	input clk_i;
	input rst_ni;
	input wire [15:0] mubi_i;
	output wire [15:0] mubi_o;
	wire [15:0] mubi;
	wire [15:0] mubi_int;
	wire [15:0] mubi_out;
	function automatic [15:0] sv2v_cast_16;
		input reg [15:0] inp;
		sv2v_cast_16 = inp;
	endfunction
	assign mubi = sv2v_cast_16(mubi_i);
	generate
		if (AsyncOn) begin : gen_flops
			prim_flop #(
				.Width(prim_mubi_pkg_MuBi16Width),
				.ResetValue(sv2v_cast_16(ResetValue))
			) u_prim_flop(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(mubi),
				.q_o(mubi_int)
			);
		end
		else begin : gen_no_flops
			assign mubi_int = mubi;
			reg [15:0] unused_logic;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					unused_logic <= sv2v_cast_B8818(16'h6969);
				else
					unused_logic <= mubi_i;
		end
		if (EnSecBuf) begin : gen_sec_buf
			prim_sec_anchor_buf #(.Width(16)) u_prim_sec_buf(
				.in_i(mubi_int),
				.out_o(mubi_out)
			);
		end
		else if (!AsyncOn) begin : gen_prim_buf
			prim_buf #(.Width(16)) u_prim_buf(
				.in_i(mubi_int),
				.out_o(mubi_out)
			);
		end
		else begin : gen_feedthru
			assign mubi_out = mubi_int;
		end
	endgenerate
	assign mubi_o = sv2v_cast_B8818(mubi_out);
endmodule
