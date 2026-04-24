module prim_reg_we_check (
	clk_i,
	rst_ni,
	oh_i,
	en_i,
	err_o
);
	parameter [31:0] OneHotWidth = 32;
	input clk_i;
	input rst_ni;
	input wire [OneHotWidth - 1:0] oh_i;
	input wire en_i;
	output wire err_o;
	wire [OneHotWidth - 1:0] oh_buf;
	prim_buf #(.Width(OneHotWidth)) u_prim_buf(
		.in_i(oh_i),
		.out_o(oh_buf)
	);
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	prim_onehot_check #(
		.OneHotWidth(OneHotWidth),
		.AddrWidth(prim_util_pkg_vbits(OneHotWidth)),
		.EnableCheck(1),
		.AddrCheck(0),
		.StrictCheck(0)
	) u_prim_onehot_check(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.oh_i(oh_buf),
		.addr_i(1'sb0),
		.en_i(en_i),
		.err_o(err_o)
	);
endmodule
