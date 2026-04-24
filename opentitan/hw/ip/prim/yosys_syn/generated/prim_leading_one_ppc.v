module prim_leading_one_ppc (
	in_i,
	leading_one_o,
	ppc_out_o,
	idx_o
);
	reg _sv2v_0;
	parameter [31:0] N = 8;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam signed [31:0] IdxW = prim_util_pkg_vbits(N);
	input [N - 1:0] in_i;
	output wire [N - 1:0] leading_one_o;
	output wire [N - 1:0] ppc_out_o;
	output reg [IdxW - 1:0] idx_o;
	reg [N - 1:0] ppc_out;
	always @(*) begin
		if (_sv2v_0)
			;
		ppc_out[0] = in_i[0];
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 1; i < N; i = i + 1)
				ppc_out[i] = ppc_out[i - 1] | in_i[i];
		end
	end
	assign leading_one_o = ppc_out ^ {ppc_out[N - 2:0], 1'b0};
	assign ppc_out_o = ppc_out;
	always @(*) begin
		if (_sv2v_0)
			;
		idx_o = 1'sb0;
		begin : sv2v_autoblock_2
			reg [31:0] i;
			for (i = 0; i < N; i = i + 1)
				if (leading_one_o[i])
					idx_o = i[IdxW - 1:0];
		end
	end
	initial _sv2v_0 = 0;
endmodule
