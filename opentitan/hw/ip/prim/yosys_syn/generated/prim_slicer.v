module prim_slicer (
	sel_i,
	data_i,
	data_o
);
	parameter signed [31:0] InW = 64;
	parameter signed [31:0] OutW = 8;
	parameter signed [31:0] IndexW = 4;
	input [IndexW - 1:0] sel_i;
	input [InW - 1:0] data_i;
	output wire [OutW - 1:0] data_o;
	localparam signed [31:0] UnrollW = OutW * (2 ** IndexW);
	wire [UnrollW - 1:0] unrolled_data;
	function automatic [UnrollW - 1:0] sv2v_cast_13D93;
		input reg [UnrollW - 1:0] inp;
		sv2v_cast_13D93 = inp;
	endfunction
	assign unrolled_data = sv2v_cast_13D93(data_i);
	assign data_o = unrolled_data[sel_i * OutW+:OutW];
endmodule
