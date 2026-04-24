module prim_present (
	data_i,
	key_i,
	idx_i,
	data_o,
	key_o,
	idx_o
);
	parameter signed [31:0] DataWidth = 64;
	parameter signed [31:0] KeyWidth = 128;
	parameter signed [31:0] NumRounds = 31;
	parameter signed [31:0] NumPhysRounds = NumRounds;
	parameter [0:0] Decrypt = 0;
	input [DataWidth - 1:0] data_i;
	input [KeyWidth - 1:0] key_i;
	input [4:0] idx_i;
	output wire [DataWidth - 1:0] data_o;
	output wire [KeyWidth - 1:0] key_o;
	output wire [4:0] idx_o;
	wire [(NumPhysRounds >= 0 ? ((NumPhysRounds + 1) * DataWidth) - 1 : ((1 - NumPhysRounds) * DataWidth) + ((NumPhysRounds * DataWidth) - 1)):(NumPhysRounds >= 0 ? 0 : NumPhysRounds * DataWidth)] data_state;
	wire [(NumPhysRounds >= 0 ? ((NumPhysRounds + 1) * KeyWidth) - 1 : ((1 - NumPhysRounds) * KeyWidth) + ((NumPhysRounds * KeyWidth) - 1)):(NumPhysRounds >= 0 ? 0 : NumPhysRounds * KeyWidth)] round_key;
	wire [(NumPhysRounds >= 0 ? ((NumPhysRounds + 1) * 5) - 1 : ((1 - NumPhysRounds) * 5) + ((NumPhysRounds * 5) - 1)):(NumPhysRounds >= 0 ? 0 : NumPhysRounds * 5)] round_idx;
	assign data_state[(NumPhysRounds >= 0 ? 0 : NumPhysRounds) * DataWidth+:DataWidth] = data_i;
	assign round_key[(NumPhysRounds >= 0 ? 0 : NumPhysRounds) * KeyWidth+:KeyWidth] = key_i;
	assign round_idx[(NumPhysRounds >= 0 ? 0 : NumPhysRounds) * 5+:5] = idx_i;
	genvar _gv_k_1;
	localparam [159:0] prim_cipher_pkg_PRESENT_PERM32 = 160'hfdde7f59c6ed5a5e5184dcd63d4942cc521c4100;
	localparam [159:0] prim_cipher_pkg_PRESENT_PERM32_INV = 160'hfeef37ace3f6ad2728c2ee6b16a4a1e629062080;
	localparam [383:0] prim_cipher_pkg_PRESENT_PERM64 = 384'hfef7cffae78ef6d74df2c70ceeb6cbeaa68ae69649e28608de75c7da6586d65545d24504ce34c3ca2482c61441c20400;
	localparam [383:0] prim_cipher_pkg_PRESENT_PERM64_INV = 384'hffbdf3beb9e37db5d33cb1c3fbadb2baa9a279a59238a182f79d71b69961759551349141f38d30b28920718510308100;
	localparam [63:0] prim_cipher_pkg_PRESENT_SBOX4 = 64'h21748fe3da09b65c;
	localparam [63:0] prim_cipher_pkg_PRESENT_SBOX4_INV = 64'ha970364bd21c8fe5;
	function automatic [31:0] prim_cipher_pkg_perm_32bit;
		input reg [31:0] state_in;
		input reg [159:0] perm;
		reg [31:0] state_out;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] k;
				for (k = 0; k < 32; k = k + 1)
					state_out[perm[k * 5+:5]] = state_in[k];
			end
			prim_cipher_pkg_perm_32bit = state_out;
		end
	endfunction
	function automatic [63:0] prim_cipher_pkg_perm_64bit;
		input reg [63:0] state_in;
		input reg [383:0] perm;
		reg [63:0] state_out;
		begin
			begin : sv2v_autoblock_2
				reg signed [31:0] k;
				for (k = 0; k < 64; k = k + 1)
					state_out[perm[k * 6+:6]] = state_in[k];
			end
			prim_cipher_pkg_perm_64bit = state_out;
		end
	endfunction
	function automatic [127:0] prim_cipher_pkg_present_inv_update_key128;
		input reg [127:0] key_in;
		input reg [4:0] round_idx;
		reg [127:0] key_out;
		begin
			key_out = key_in;
			key_out[66:62] = key_out[66:62] ^ round_idx;
			key_out[123-:4] = prim_cipher_pkg_PRESENT_SBOX4_INV[key_out[123-:4] * 4+:4];
			key_out[127-:4] = prim_cipher_pkg_PRESENT_SBOX4_INV[key_out[127-:4] * 4+:4];
			key_out = {key_out[60:0], key_out[127:61]};
			prim_cipher_pkg_present_inv_update_key128 = key_out;
		end
	endfunction
	function automatic [63:0] prim_cipher_pkg_present_inv_update_key64;
		input reg [63:0] key_in;
		input reg [4:0] round_idx;
		reg [63:0] key_out;
		begin
			key_out = key_in;
			key_out[19:15] = key_out[19:15] ^ round_idx;
			key_out[63-:4] = prim_cipher_pkg_PRESENT_SBOX4_INV[key_out[63-:4] * 4+:4];
			key_out = {key_out[60:0], key_out[63:61]};
			prim_cipher_pkg_present_inv_update_key64 = key_out;
		end
	endfunction
	function automatic [79:0] prim_cipher_pkg_present_inv_update_key80;
		input reg [79:0] key_in;
		input reg [4:0] round_idx;
		reg [79:0] key_out;
		begin
			key_out = key_in;
			key_out[19:15] = key_out[19:15] ^ round_idx;
			key_out[79-:4] = prim_cipher_pkg_PRESENT_SBOX4_INV[key_out[79-:4] * 4+:4];
			key_out = {key_out[60:0], key_out[79:61]};
			prim_cipher_pkg_present_inv_update_key80 = key_out;
		end
	endfunction
	function automatic [127:0] prim_cipher_pkg_present_update_key128;
		input reg [127:0] key_in;
		input reg [4:0] round_idx;
		reg [127:0] key_out;
		begin
			key_out = {key_in[66:0], key_in[127:67]};
			key_out[127-:4] = prim_cipher_pkg_PRESENT_SBOX4[key_out[127-:4] * 4+:4];
			key_out[123-:4] = prim_cipher_pkg_PRESENT_SBOX4[key_out[123-:4] * 4+:4];
			key_out[66:62] = key_out[66:62] ^ round_idx;
			prim_cipher_pkg_present_update_key128 = key_out;
		end
	endfunction
	function automatic [63:0] prim_cipher_pkg_present_update_key64;
		input reg [63:0] key_in;
		input reg [4:0] round_idx;
		reg [63:0] key_out;
		begin
			key_out = {key_in[2:0], key_in[63:3]};
			key_out[63-:4] = prim_cipher_pkg_PRESENT_SBOX4[key_out[63-:4] * 4+:4];
			key_out[19:15] = key_out[19:15] ^ round_idx;
			prim_cipher_pkg_present_update_key64 = key_out;
		end
	endfunction
	function automatic [79:0] prim_cipher_pkg_present_update_key80;
		input reg [79:0] key_in;
		input reg [4:0] round_idx;
		reg [79:0] key_out;
		begin
			key_out = {key_in[18:0], key_in[79:19]};
			key_out[79-:4] = prim_cipher_pkg_PRESENT_SBOX4[key_out[79-:4] * 4+:4];
			key_out[19:15] = key_out[19:15] ^ round_idx;
			prim_cipher_pkg_present_update_key80 = key_out;
		end
	endfunction
	function automatic [7:0] prim_cipher_pkg_sbox4_8bit;
		input reg [7:0] state_in;
		input reg [63:0] sbox4;
		reg [7:0] state_out;
		begin
			begin : sv2v_autoblock_3
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
			begin : sv2v_autoblock_4
				reg signed [31:0] k;
				for (k = 0; k < 4; k = k + 1)
					state_out[k * 8+:8] = prim_cipher_pkg_sbox4_8bit(state_in[k * 8+:8], sbox4);
			end
			prim_cipher_pkg_sbox4_32bit = state_out;
		end
	endfunction
	function automatic [63:0] prim_cipher_pkg_sbox4_64bit;
		input reg [63:0] state_in;
		input reg [63:0] sbox4;
		reg [63:0] state_out;
		begin
			begin : sv2v_autoblock_5
				reg signed [31:0] k;
				for (k = 0; k < 8; k = k + 1)
					state_out[k * 8+:8] = prim_cipher_pkg_sbox4_8bit(state_in[k * 8+:8], sbox4);
			end
			prim_cipher_pkg_sbox4_64bit = state_out;
		end
	endfunction
	generate
		for (_gv_k_1 = 0; _gv_k_1 < NumPhysRounds; _gv_k_1 = _gv_k_1 + 1) begin : gen_round
			localparam k = _gv_k_1;
			wire [DataWidth - 1:0] data_state_xor;
			wire [DataWidth - 1:0] data_state_sbox;
			assign data_state_xor = data_state[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * DataWidth+:DataWidth] ^ round_key[((NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth) + ((KeyWidth - 1) >= (KeyWidth - DataWidth) ? KeyWidth - 1 : ((KeyWidth - 1) + ((KeyWidth - 1) >= (KeyWidth - DataWidth) ? ((KeyWidth - 1) - (KeyWidth - DataWidth)) + 1 : ((KeyWidth - DataWidth) - (KeyWidth - 1)) + 1)) - 1)-:((KeyWidth - 1) >= (KeyWidth - DataWidth) ? ((KeyWidth - 1) - (KeyWidth - DataWidth)) + 1 : ((KeyWidth - DataWidth) - (KeyWidth - 1)) + 1)];
			if (Decrypt) begin : gen_dec
				assign round_idx[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * 5+:5] = round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5] - 1'b1;
				if (DataWidth == 64) begin : gen_d64
					assign data_state_sbox = prim_cipher_pkg_perm_64bit(data_state_xor, prim_cipher_pkg_PRESENT_PERM64_INV);
					assign data_state[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * DataWidth+:DataWidth] = prim_cipher_pkg_sbox4_64bit(data_state_sbox, prim_cipher_pkg_PRESENT_SBOX4_INV);
				end
				else begin : gen_d32
					assign data_state_sbox = prim_cipher_pkg_perm_32bit(data_state_xor, prim_cipher_pkg_PRESENT_PERM32_INV);
					assign data_state[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * DataWidth+:DataWidth] = prim_cipher_pkg_sbox4_32bit(data_state_sbox, prim_cipher_pkg_PRESENT_SBOX4_INV);
				end
				if (KeyWidth == 128) begin : gen_k128
					assign round_key[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * KeyWidth+:KeyWidth] = prim_cipher_pkg_present_inv_update_key128(round_key[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth+:KeyWidth], round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5]);
				end
				else if (KeyWidth == 80) begin : gen_k80
					assign round_key[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * KeyWidth+:KeyWidth] = prim_cipher_pkg_present_inv_update_key80(round_key[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth+:KeyWidth], round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5]);
				end
				else begin : gen_k64
					assign round_key[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * KeyWidth+:KeyWidth] = prim_cipher_pkg_present_inv_update_key64(round_key[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth+:KeyWidth], round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5]);
				end
			end
			else begin : gen_enc
				assign round_idx[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * 5+:5] = round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5] + 1'b1;
				if (DataWidth == 64) begin : gen_d64
					assign data_state_sbox = prim_cipher_pkg_sbox4_64bit(data_state_xor, prim_cipher_pkg_PRESENT_SBOX4);
					assign data_state[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * DataWidth+:DataWidth] = prim_cipher_pkg_perm_64bit(data_state_sbox, prim_cipher_pkg_PRESENT_PERM64);
				end
				else begin : gen_d32
					assign data_state_sbox = prim_cipher_pkg_sbox4_32bit(data_state_xor, prim_cipher_pkg_PRESENT_SBOX4);
					assign data_state[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * DataWidth+:DataWidth] = prim_cipher_pkg_perm_32bit(data_state_sbox, prim_cipher_pkg_PRESENT_PERM32);
				end
				if (KeyWidth == 128) begin : gen_k128
					assign round_key[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * KeyWidth+:KeyWidth] = prim_cipher_pkg_present_update_key128(round_key[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth+:KeyWidth], round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5]);
				end
				else if (KeyWidth == 80) begin : gen_k80
					assign round_key[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * KeyWidth+:KeyWidth] = prim_cipher_pkg_present_update_key80(round_key[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth+:KeyWidth], round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5]);
				end
				else begin : gen_k64
					assign round_key[(NumPhysRounds >= 0 ? k + 1 : NumPhysRounds - (k + 1)) * KeyWidth+:KeyWidth] = prim_cipher_pkg_present_update_key64(round_key[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * KeyWidth+:KeyWidth], round_idx[(NumPhysRounds >= 0 ? k : NumPhysRounds - k) * 5+:5]);
				end
			end
		end
	endgenerate
	localparam signed [31:0] LastRoundIdx = ((Decrypt != 0) || (NumRounds == 31) ? 0 : NumRounds + 1);
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	assign data_o = (sv2v_cast_32_signed(idx_o) == LastRoundIdx ? data_state[(NumPhysRounds >= 0 ? NumPhysRounds : NumPhysRounds - NumPhysRounds) * DataWidth+:DataWidth] ^ round_key[((NumPhysRounds >= 0 ? NumPhysRounds : NumPhysRounds - NumPhysRounds) * KeyWidth) + ((KeyWidth - 1) >= (KeyWidth - DataWidth) ? KeyWidth - 1 : ((KeyWidth - 1) + ((KeyWidth - 1) >= (KeyWidth - DataWidth) ? ((KeyWidth - 1) - (KeyWidth - DataWidth)) + 1 : ((KeyWidth - DataWidth) - (KeyWidth - 1)) + 1)) - 1)-:((KeyWidth - 1) >= (KeyWidth - DataWidth) ? ((KeyWidth - 1) - (KeyWidth - DataWidth)) + 1 : ((KeyWidth - DataWidth) - (KeyWidth - 1)) + 1)] : data_state[(NumPhysRounds >= 0 ? NumPhysRounds : NumPhysRounds - NumPhysRounds) * DataWidth+:DataWidth]);
	assign key_o = round_key[(NumPhysRounds >= 0 ? NumPhysRounds : NumPhysRounds - NumPhysRounds) * KeyWidth+:KeyWidth];
	assign idx_o = round_idx[(NumPhysRounds >= 0 ? NumPhysRounds : NumPhysRounds - NumPhysRounds) * 5+:5];
endmodule
