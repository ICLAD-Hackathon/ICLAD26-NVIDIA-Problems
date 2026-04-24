module aes_mix_columns (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	output wire [127:0] data_o;
	wire [127:0] data_i_transposed;
	wire [127:0] data_o_transposed;
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	assign data_i_transposed = aes_pkg_aes_transpose(data_i);
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < 4; _gv_i_1 = _gv_i_1 + 1) begin : gen_mix_column
			localparam i = _gv_i_1;
			aes_mix_single_column u_aes_mix_column_i(
				.op_i(op_i),
				.data_i(data_i_transposed[8 * (i * 4)+:32]),
				.data_o(data_o_transposed[8 * (i * 4)+:32])
			);
		end
	endgenerate
	assign data_o = aes_pkg_aes_transpose(data_o_transposed);
endmodule
