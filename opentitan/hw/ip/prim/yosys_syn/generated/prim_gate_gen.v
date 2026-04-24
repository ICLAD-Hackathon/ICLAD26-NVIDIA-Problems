module prim_gate_gen (
	clk_i,
	rst_ni,
	valid_i,
	data_i,
	data_o,
	valid_o
);
	parameter signed [31:0] DataWidth = 32;
	parameter signed [31:0] NumGates = 1000;
	input clk_i;
	input rst_ni;
	input valid_i;
	input [DataWidth - 1:0] data_i;
	output wire [DataWidth - 1:0] data_o;
	output wire valid_o;
	localparam signed [31:0] NumInnerRounds = 2;
	localparam signed [31:0] GatesPerRound = DataWidth * 14;
	localparam signed [31:0] NumOuterRounds = (NumGates + (GatesPerRound / 2)) / GatesPerRound;
	wire [(NumOuterRounds * DataWidth) - 1:0] regs_d;
	reg [(NumOuterRounds * DataWidth) - 1:0] regs_q;
	wire [NumOuterRounds - 1:0] valid_d;
	reg [NumOuterRounds - 1:0] valid_q;
	genvar _gv_k_1;
	localparam [63:0] prim_cipher_pkg_PRINCE_SBOX4 = 64'h4d5e087619ca23fb;
	function automatic [7:0] prim_cipher_pkg_sbox4_8bit;
		input reg [7:0] state_in;
		input reg [63:0] sbox4;
		reg [7:0] state_out;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] k;
				for (k = 0; k < 2; k = k + 1)
					state_out[k * 4+:4] = sbox4[state_in[k * 4+:4] * 4+:4];
			end
			prim_cipher_pkg_sbox4_8bit = state_out;
		end
	endfunction
	function automatic [31:0] prim_cipher_pkg_sbox4_32bit;
		input reg [31:0] state_in;
		input reg [63:0] sbox4;
		reg [31:0] state_out;
		begin
			begin : sv2v_autoblock_2
				reg signed [31:0] k;
				for (k = 0; k < 4; k = k + 1)
					state_out[k * 8+:8] = prim_cipher_pkg_sbox4_8bit(state_in[k * 8+:8], sbox4);
			end
			prim_cipher_pkg_sbox4_32bit = state_out;
		end
	endfunction
	generate
		for (_gv_k_1 = 0; _gv_k_1 < NumOuterRounds; _gv_k_1 = _gv_k_1 + 1) begin : gen_outer_round
			localparam k = _gv_k_1;
			wire [(3 * DataWidth) - 1:0] inner_data;
			if (k == 0) begin : gen_first
				assign inner_data[0+:DataWidth] = data_i;
				assign valid_d[0] = valid_i;
			end
			else begin : gen_others
				assign inner_data[0+:DataWidth] = regs_q[(k - 1) * DataWidth+:DataWidth];
				assign valid_d[k] = valid_q[k - 1];
			end
			genvar _gv_l_1;
			for (_gv_l_1 = 0; _gv_l_1 < NumInnerRounds; _gv_l_1 = _gv_l_1 + 1) begin : gen_inner
				localparam l = _gv_l_1;
				assign inner_data[(l + 1) * DataWidth+:DataWidth] = prim_cipher_pkg_sbox4_32bit({inner_data[(l * DataWidth) + 1-:2], inner_data[(l * DataWidth) + ((DataWidth - 1) >= 2 ? DataWidth - 1 : ((DataWidth - 1) + ((DataWidth - 1) >= 2 ? DataWidth - 2 : 4 - DataWidth)) - 1)-:((DataWidth - 1) >= 2 ? DataWidth - 2 : 4 - DataWidth)]}, prim_cipher_pkg_PRINCE_SBOX4);
			end
			assign regs_d[k * DataWidth+:DataWidth] = inner_data[NumInnerRounds * DataWidth+:DataWidth];
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni) begin : p_regs
		if (!rst_ni) begin
			regs_q <= 1'sb0;
			valid_q <= 1'sb0;
		end
		else begin
			valid_q <= valid_d;
			begin : sv2v_autoblock_3
				reg signed [31:0] k;
				for (k = 0; k < NumOuterRounds; k = k + 1)
					if (valid_d[k])
						regs_q[k * DataWidth+:DataWidth] <= regs_d[k * DataWidth+:DataWidth];
			end
		end
	end
	assign data_o = regs_q[(NumOuterRounds - 1) * DataWidth+:DataWidth];
	assign valid_o = valid_q[NumOuterRounds - 1];
endmodule
