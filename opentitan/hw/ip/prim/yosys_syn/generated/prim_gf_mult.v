module prim_gf_mult (
	clk_i,
	rst_ni,
	req_i,
	operand_a_i,
	operand_b_i,
	ack_pre_o,
	ack_o,
	prod_o
);
	parameter signed [31:0] Width = 32;
	parameter signed [31:0] StagesPerCycle = Width;
	function automatic [Width - 1:0] sv2v_cast_62596;
		input reg [Width - 1:0] inp;
		sv2v_cast_62596 = inp;
	endfunction
	parameter [Width - 1:0] IPoly = (((((sv2v_cast_62596(1'b1) << 15) | (sv2v_cast_62596(1'b1) << 9)) | (sv2v_cast_62596(1'b1) << 7)) | (sv2v_cast_62596(1'b1) << 4)) | (sv2v_cast_62596(1'b1) << 3)) | (sv2v_cast_62596(1'b1) << 0);
	parameter [0:0] OutputZeroUntilAck = 1'b0;
	input clk_i;
	input rst_ni;
	input req_i;
	input [Width - 1:0] operand_a_i;
	input [Width - 1:0] operand_b_i;
	output wire ack_pre_o;
	output wire ack_o;
	output wire [Width - 1:0] prod_o;
	localparam signed [31:0] Loops = Width / StagesPerCycle;
	localparam signed [31:0] CntWidth = (Loops == 1 ? 1 : $clog2(Loops));
	wire [(Loops * StagesPerCycle) - 1:0] reformat_data;
	wire [StagesPerCycle - 1:0] op_i_slice;
	wire [(StagesPerCycle * Width) - 1:0] matrix;
	reg [Width - 1:0] vector;
	reg [CntWidth - 1:0] cnt;
	wire first;
	reg [Width - 1:0] prod_q;
	wire [Width - 1:0] prod_d;
	wire [Width - 1:0] out_int;
	assign reformat_data = operand_b_i;
	assign op_i_slice = reformat_data[cnt * StagesPerCycle+:StagesPerCycle];
	assign first = cnt == 0;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	generate
		if (StagesPerCycle == Width) begin : gen_all_combo
			assign ack_o = 1'b1;
			wire [CntWidth:1] sv2v_tmp_594CD;
			assign sv2v_tmp_594CD = 1'sb0;
			always @(*) cnt = sv2v_tmp_594CD;
			wire [Width:1] sv2v_tmp_8D786;
			assign sv2v_tmp_8D786 = 1'sb0;
			always @(*) prod_q = sv2v_tmp_8D786;
			wire [Width:1] sv2v_tmp_96718;
			assign sv2v_tmp_96718 = 1'sb0;
			always @(*) vector = sv2v_tmp_96718;
		end
		else begin : gen_decomposed
			assign ack_pre_o = sv2v_cast_32_signed(cnt) == (Loops - 2);
			assign ack_o = sv2v_cast_32_signed(cnt) == (Loops - 1);
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					cnt <= 1'sb0;
				else if (req_i && ack_o)
					cnt <= 1'sb0;
				else if (req_i && (sv2v_cast_32_signed(cnt) < (Loops - 1)))
					cnt <= cnt + 1'b1;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					prod_q <= 1'sb0;
					vector <= 1'sb0;
				end
				else if (ack_o) begin
					prod_q <= 1'sb0;
					vector <= 1'sb0;
				end
				else if (req_i) begin
					prod_q <= prod_d;
					vector <= matrix[(StagesPerCycle - 1) * Width+:Width];
				end
		end
	endgenerate
	function automatic [Width - 1:0] gf_mult2;
		input reg [Width - 1:0] operand;
		reg [Width - 1:0] mult_out;
		begin
			mult_out = (operand[Width - 1] ? (operand << 1) ^ IPoly : operand << 1);
			gf_mult2 = mult_out;
		end
	endfunction
	function automatic [(StagesPerCycle * Width) - 1:0] gen_matrix;
		input reg [Width - 1:0] seed;
		input reg init;
		reg [(StagesPerCycle * Width) - 1:0] matrix_out;
		begin
			matrix_out[0+:Width] = (init ? seed : gf_mult2(seed));
			matrix_out[Width * (((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : ((StagesPerCycle - 1) + ((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : 3 - StagesPerCycle)) - 1) - (((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : 3 - StagesPerCycle) - 1))+:Width * ((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : 3 - StagesPerCycle)] = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 1; i < StagesPerCycle; i = i + 1)
					matrix_out[i * Width+:Width] = gf_mult2(matrix_out[(i - 1) * Width+:Width]);
			end
			gen_matrix = matrix_out;
		end
	endfunction
	assign matrix = (first ? gen_matrix(operand_a_i, 1'b1) : gen_matrix(vector, 1'b0));
	function automatic [Width - 1:0] gf_mult;
		input reg [(StagesPerCycle * Width) - 1:0] matrix_;
		input reg [StagesPerCycle - 1:0] operand;
		reg [Width - 1:0] mult_out;
		reg [Width - 1:0] add_vector;
		begin
			mult_out = 1'sb0;
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < StagesPerCycle; i = i + 1)
					begin
						add_vector = (operand[i] ? matrix_[i * Width+:Width] : {Width {1'sb0}});
						mult_out = mult_out ^ add_vector;
					end
			end
			gf_mult = mult_out;
		end
	endfunction
	assign prod_d = prod_q ^ gf_mult(matrix, op_i_slice);
	generate
		if (OutputZeroUntilAck) begin : gen_out_int_zero
			assign out_int = 1'sb0;
		end
		else begin : gen_out_int_op_a
			assign out_int = operand_a_i;
		end
	endgenerate
	assign prod_o = (ack_o ? prod_d : out_int);
endmodule
