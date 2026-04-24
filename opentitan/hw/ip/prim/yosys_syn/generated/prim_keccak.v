module prim_keccak (
	rnd_i,
	s_i,
	s_o
);
	parameter signed [31:0] Width = 1600;
	localparam signed [31:0] W = Width / 25;
	localparam signed [31:0] L = $clog2(W);
	localparam signed [31:0] MaxRound = 12 + (2 * L);
	localparam signed [31:0] RndW = $clog2(MaxRound + 1);
	input [RndW - 1:0] rnd_i;
	input [Width - 1:0] s_i;
	output wire [Width - 1:0] s_o;
	wire [(25 * W) - 1:0] state_in;
	wire [(25 * W) - 1:0] keccak_f;
	wire [(25 * W) - 1:0] theta_data;
	wire [(25 * W) - 1:0] rho_data;
	wire [(25 * W) - 1:0] pi_data;
	wire [(25 * W) - 1:0] chi_data;
	wire [(25 * W) - 1:0] iota_data;
	function automatic [(25 * W) - 1:0] bitarray_to_box;
		input reg [Width - 1:0] s_in;
		reg [(25 * W) - 1:0] box;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] y;
				for (y = 0; y < 5; y = y + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] x;
						for (x = 0; x < 5; x = x + 1)
							begin : sv2v_autoblock_3
								reg signed [31:0] z;
								for (z = 0; z < W; z = z + 1)
									box[(((x * 5) + y) * W) + z] = s_in[(W * ((5 * y) + x)) + z];
							end
					end
			end
			bitarray_to_box = box;
		end
	endfunction
	assign state_in = bitarray_to_box(s_i);
	function automatic [(25 * W) - 1:0] theta;
		input reg [(25 * W) - 1:0] state;
		reg [(5 * W) - 1:0] c;
		reg [(5 * W) - 1:0] d;
		reg [(25 * W) - 1:0] result;
		begin
			begin : sv2v_autoblock_4
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_5
						reg signed [31:0] z;
						for (z = 0; z < W; z = z + 1)
							c[(x * W) + z] = (((state[((x * 5) * W) + z] ^ state[(((x * 5) + 1) * W) + z]) ^ state[(((x * 5) + 2) * W) + z]) ^ state[(((x * 5) + 3) * W) + z]) ^ state[(((x * 5) + 4) * W) + z];
					end
			end
			begin : sv2v_autoblock_6
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_7
						reg signed [31:0] index_x1;
						reg signed [31:0] index_x2;
						index_x1 = (x == 0 ? 4 : x - 1);
						index_x2 = (x == 4 ? 0 : x + 1);
						begin : sv2v_autoblock_8
							reg signed [31:0] z;
							for (z = 0; z < W; z = z + 1)
								begin : sv2v_autoblock_9
									reg signed [31:0] index_z;
									index_z = (z == 0 ? W - 1 : z - 1);
									d[(x * W) + z] = c[(index_x1 * W) + z] ^ c[(index_x2 * W) + index_z];
								end
						end
					end
			end
			begin : sv2v_autoblock_10
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_11
						reg signed [31:0] y;
						for (y = 0; y < 5; y = y + 1)
							begin : sv2v_autoblock_12
								reg signed [31:0] z;
								for (z = 0; z < W; z = z + 1)
									result[(((x * 5) + y) * W) + z] = state[(((x * 5) + y) * W) + z] ^ d[(x * W) + z];
							end
					end
			end
			theta = result;
		end
	endfunction
	assign theta_data = theta(state_in);
	localparam signed [799:0] PiRotate = 800'h30000000100000004000000020000000100000004000000020000000000000003000000020000000000000003000000010000000400000003000000010000000400000002000000000000000400000002000000000000000300000001;
	function automatic [(25 * W) - 1:0] pi;
		input reg [(25 * W) - 1:0] state;
		reg [(25 * W) - 1:0] result;
		begin
			begin : sv2v_autoblock_13
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_14
						reg signed [31:0] y;
						for (y = 0; y < 5; y = y + 1)
							begin : sv2v_autoblock_15
								reg signed [31:0] index_x;
								result[(((x * 5) + y) * W) + (W - 1)-:W] = state[(((PiRotate[(((4 - x) * 5) + (4 - y)) * 32+:32] * 5) + x) * W) + (W - 1)-:W];
							end
					end
			end
			pi = result;
		end
	endfunction
	assign pi_data = pi(rho_data);
	function automatic [(25 * W) - 1:0] chi;
		input reg [(25 * W) - 1:0] state;
		reg [(25 * W) - 1:0] result;
		begin
			begin : sv2v_autoblock_16
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_17
						reg signed [31:0] index_x1;
						reg signed [31:0] index_x2;
						index_x1 = (x == 4 ? 0 : x + 1);
						index_x2 = (x >= 3 ? x - 3 : x + 2);
						begin : sv2v_autoblock_18
							reg signed [31:0] y;
							for (y = 0; y < 5; y = y + 1)
								begin : sv2v_autoblock_19
									reg signed [31:0] z;
									for (z = 0; z < W; z = z + 1)
										result[(((x * 5) + y) * W) + z] = state[(((x * 5) + y) * W) + z] ^ (~state[(((index_x1 * 5) + y) * W) + z] & state[(((index_x2 * 5) + y) * W) + z]);
								end
						end
					end
			end
			chi = result;
		end
	endfunction
	assign chi_data = chi(pi_data);
	localparam [1535:0] RC = 1536'h10000000000008082800000000000808a8000000080008000000000000000808b000000008000000180000000800080818000000000008009000000000000008a00000000000000880000000080008009000000008000000a000000008000808b800000000000008b8000000000008089800000000000800380000000000080028000000000000080000000000000800a800000008000000a8000000080008081800000000000808000000000800000018000000080008008;
	function automatic [(25 * W) - 1:0] iota;
		input reg [(25 * W) - 1:0] state;
		input reg [RndW - 1:0] rnd;
		reg [(25 * W) - 1:0] result;
		begin
			result = state;
			result[W - 1-:W] = state[W - 1-:W] ^ RC[((23 - rnd) * 64) + (W - 1)-:W];
			iota = result;
		end
	endfunction
	assign iota_data = iota(chi_data, rnd_i);
	assign keccak_f = iota_data;
	function automatic [Width - 1:0] box_to_bitarray;
		input reg [(25 * W) - 1:0] state;
		reg [Width - 1:0] bitarray;
		begin
			begin : sv2v_autoblock_20
				reg signed [31:0] y;
				for (y = 0; y < 5; y = y + 1)
					begin : sv2v_autoblock_21
						reg signed [31:0] x;
						for (x = 0; x < 5; x = x + 1)
							begin : sv2v_autoblock_22
								reg signed [31:0] z;
								for (z = 0; z < W; z = z + 1)
									bitarray[(W * ((5 * y) + x)) + z] = state[(((x * 5) + y) * W) + z];
							end
					end
			end
			box_to_bitarray = bitarray;
		end
	endfunction
	assign s_o = box_to_bitarray(keccak_f);
	localparam signed [799:0] RhoOffset = 800'h240000000300000069000000d2000000010000012c0000000a0000002d00000042000000be00000006000000ab0000000f000000fd0000001c000000370000009900000015000000780000005b00000114000000e7000000880000004e;
	genvar _gv_x_1;
	generate
		for (_gv_x_1 = 0; _gv_x_1 < 5; _gv_x_1 = _gv_x_1 + 1) begin : gen_rho_x
			localparam x = _gv_x_1;
			genvar _gv_y_1;
			for (_gv_y_1 = 0; _gv_y_1 < 5; _gv_y_1 = _gv_y_1 + 1) begin : gen_rho_y
				localparam y = _gv_y_1;
				localparam signed [31:0] Offset = RhoOffset[(((4 - x) * 5) + (4 - y)) * 32+:32] % W;
				localparam signed [31:0] ShiftAmt = W - Offset;
				if (Offset == 0) begin : gen_offset0
					assign rho_data[(((x * 5) + y) * W) + (W - 1)-:W] = theta_data[(((x * 5) + y) * W) + (W - 1)-:W];
				end
				else begin : gen_others
					assign rho_data[(((x * 5) + y) * W) + (W - 1)-:W] = {theta_data[((x * 5) + y) * W+:ShiftAmt], theta_data[(((x * 5) + y) * W) + ShiftAmt+:Offset]};
				end
			end
		end
	endgenerate
endmodule
