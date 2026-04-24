module aes_shift_rows (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	output wire [127:0] data_o;
	assign data_o[0+:32] = data_i[0+:32];
	function automatic [31:0] aes_pkg_aes_circ_byte_shift;
		input reg [31:0] in;
		input reg [1:0] shift;
		reg [31:0] out;
		reg [31:0] s;
		begin
			s = {30'b000000000000000000000000000000, shift};
			out = {in[8 * ((7 - s) % 4)+:8], in[8 * ((6 - s) % 4)+:8], in[8 * ((5 - s) % 4)+:8], in[8 * ((4 - s) % 4)+:8]};
			aes_pkg_aes_circ_byte_shift = out;
		end
	endfunction
	assign data_o[64+:32] = aes_pkg_aes_circ_byte_shift(data_i[64+:32], 2'h2);
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign data_o[32+:32] = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_circ_byte_shift(data_i[32+:32], 2'h3) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_circ_byte_shift(data_i[32+:32], 2'h1) : aes_pkg_aes_circ_byte_shift(data_i[32+:32], 2'h3)));
	assign data_o[96+:32] = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_circ_byte_shift(data_i[96+:32], 2'h1) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_circ_byte_shift(data_i[96+:32], 2'h3) : aes_pkg_aes_circ_byte_shift(data_i[96+:32], 2'h1)));
endmodule
