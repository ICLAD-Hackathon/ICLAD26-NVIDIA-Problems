module prim_xoshiro256pp (
	clk_i,
	rst_ni,
	seed_en_i,
	seed_i,
	xoshiro_en_i,
	entropy_i,
	data_o,
	all_zero_o
);
	parameter [31:0] OutputDw = 64;
	parameter [255:0] DefaultSeed = 256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;
	parameter [31:0] NumStages = OutputDw / 64;
	input wire clk_i;
	input wire rst_ni;
	input wire seed_en_i;
	input wire [255:0] seed_i;
	input wire xoshiro_en_i;
	input wire [255:0] entropy_i;
	output wire [OutputDw - 1:0] data_o;
	output wire all_zero_o;
	wire [255:0] unrolled_state [0:NumStages + 0];
	wire [63:0] mid [0:NumStages - 1];
	wire lockup;
	wire [255:0] xoshiro_d;
	reg [255:0] xoshiro_q;
	wire [255:0] next_xoshiro_state;
	function automatic [255:0] state_update;
		input reg [255:0] data_in;
		reg [63:0] a_in;
		reg [63:0] b_in;
		reg [63:0] c_in;
		reg [63:0] d_in;
		reg [63:0] a_out;
		reg [63:0] b_out;
		reg [63:0] c_out;
		reg [63:0] d_out;
		begin
			a_in = data_in[255:192];
			b_in = data_in[191:128];
			c_in = data_in[127:64];
			d_in = data_in[63:0];
			a_out = (a_in ^ b_in) ^ d_in;
			b_out = (a_in ^ b_in) ^ c_in;
			c_out = (a_in ^ (b_in << 17)) ^ c_in;
			d_out = {d_in[18:0], d_in[63:19]} ^ {b_in[18:0], b_in[63:19]};
			state_update = {a_out, b_out, c_out, d_out};
		end
	endfunction
	assign unrolled_state[0] = xoshiro_q;
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < NumStages; _gv_k_1 = _gv_k_1 + 1) begin : gen_state_functions
			localparam k = _gv_k_1;
			assign unrolled_state[k + 1] = state_update(unrolled_state[k]);
			assign mid[k] = unrolled_state[k][255:192] + unrolled_state[k][63:0];
			assign data_o[((k + 1) * 64) - 1:k * 64] = {mid[k][40:0], mid[k][63:41]} + unrolled_state[k][255:192];
		end
	endgenerate
	assign next_xoshiro_state = entropy_i ^ unrolled_state[NumStages];
	assign xoshiro_d = (seed_en_i ? seed_i : (xoshiro_en_i && lockup ? DefaultSeed : (xoshiro_en_i ? next_xoshiro_state : xoshiro_q)));
	always @(posedge clk_i or negedge rst_ni) begin : p_reg_state
		if (!rst_ni)
			xoshiro_q <= DefaultSeed;
		else
			xoshiro_q <= xoshiro_d;
	end
	assign lockup = ~(|xoshiro_q);
	assign all_zero_o = lockup;
endmodule
