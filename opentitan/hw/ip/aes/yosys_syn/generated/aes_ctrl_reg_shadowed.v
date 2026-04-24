module aes_ctrl_reg_shadowed (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	qe_o,
	we_i,
	phase_o,
	operation_o,
	mode_o,
	key_len_o,
	sideload_o,
	prng_reseed_rate_o,
	manual_operation_o,
	err_update_o,
	err_storage_o,
	reg2hw_ctrl_i,
	hw2reg_ctrl_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] AESGCMEnable = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	output wire qe_o;
	input wire we_i;
	output wire phase_o;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	output wire [1:0] operation_o;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	output wire [5:0] mode_o;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	output wire [2:0] key_len_o;
	output wire sideload_o;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	output wire [2:0] prng_reseed_rate_o;
	output wire manual_operation_o;
	output wire err_update_o;
	output wire err_storage_o;
	input wire [27:0] reg2hw_ctrl_i;
	output wire [15:0] hw2reg_ctrl_o;
	reg [15:0] ctrl_wd;
	wire [1:0] op;
	wire [5:0] mode;
	wire [2:0] key_len;
	wire [2:0] prng_reseed_rate;
	wire phase_operation;
	wire phase_mode;
	wire phase_key_len;
	wire phase_key_sideload;
	wire phase_prng_reseed_rate;
	wire phase_manual_operation;
	wire err_update_operation;
	wire err_update_mode;
	wire err_update_key_len;
	wire err_update_sideload;
	wire err_update_prng_reseed_rate;
	wire err_update_manual_operation;
	wire err_storage_operation;
	wire err_storage_mode;
	wire err_storage_key_len;
	wire err_storage_sideload;
	wire err_storage_prng_reseed_rate;
	wire err_storage_manual_operation;
	assign qe_o = ((((reg2hw_ctrl_i[1] & reg2hw_ctrl_i[5]) & reg2hw_ctrl_i[13]) & reg2hw_ctrl_i[18]) & reg2hw_ctrl_i[21]) & reg2hw_ctrl_i[26];
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op = sv2v_cast_63054(reg2hw_ctrl_i[3-:2]);
	always @(*) begin : operation_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (op)
			sv2v_cast_63054(2'b01): ctrl_wd[1-:aes_pkg_AES_OP_WIDTH] = sv2v_cast_63054(2'b01);
			sv2v_cast_63054(2'b10): ctrl_wd[1-:aes_pkg_AES_OP_WIDTH] = sv2v_cast_63054(2'b10);
			default: ctrl_wd[1-:aes_pkg_AES_OP_WIDTH] = sv2v_cast_63054(2'b01);
		endcase
	end
	function automatic [5:0] sv2v_cast_86B6A;
		input reg [5:0] inp;
		sv2v_cast_86B6A = inp;
	endfunction
	assign mode = sv2v_cast_86B6A(reg2hw_ctrl_i[11-:6]);
	always @(*) begin : mode_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (mode)
			sv2v_cast_86B6A(6'b000001): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b000001);
			sv2v_cast_86B6A(6'b000010): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b000010);
			sv2v_cast_86B6A(6'b000100): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b000100);
			sv2v_cast_86B6A(6'b001000): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b001000);
			sv2v_cast_86B6A(6'b010000): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b010000);
			sv2v_cast_86B6A(6'b100000): ctrl_wd[7-:6] = (AESGCMEnable ? sv2v_cast_86B6A(6'b100000) : sv2v_cast_86B6A(6'b111111));
			default: ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b111111);
		endcase
	end
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	assign key_len = sv2v_cast_2BC67(reg2hw_ctrl_i[16-:3]);
	always @(*) begin : key_len_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (key_len)
			sv2v_cast_2BC67(3'b001): ctrl_wd[10-:3] = sv2v_cast_2BC67(3'b001);
			sv2v_cast_2BC67(3'b100): ctrl_wd[10-:3] = sv2v_cast_2BC67(3'b100);
			sv2v_cast_2BC67(3'b010): ctrl_wd[10-:3] = (AES192Enable ? sv2v_cast_2BC67(3'b010) : sv2v_cast_2BC67(3'b100));
			default: ctrl_wd[10-:3] = sv2v_cast_2BC67(3'b100);
		endcase
	end
	wire [1:1] sv2v_tmp_8C8FB;
	assign sv2v_tmp_8C8FB = reg2hw_ctrl_i[19];
	always @(*) ctrl_wd[11] = sv2v_tmp_8C8FB;
	function automatic [2:0] sv2v_cast_421A6;
		input reg [2:0] inp;
		sv2v_cast_421A6 = inp;
	endfunction
	assign prng_reseed_rate = sv2v_cast_421A6(reg2hw_ctrl_i[24-:3]);
	always @(*) begin : prng_reseed_rate_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (prng_reseed_rate)
			sv2v_cast_421A6(3'b001): ctrl_wd[14-:3] = sv2v_cast_421A6(3'b001);
			sv2v_cast_421A6(3'b010): ctrl_wd[14-:3] = sv2v_cast_421A6(3'b010);
			sv2v_cast_421A6(3'b100): ctrl_wd[14-:3] = sv2v_cast_421A6(3'b100);
			default: ctrl_wd[14-:3] = sv2v_cast_421A6(3'b001);
		endcase
	end
	wire [1:1] sv2v_tmp_958A1;
	assign sv2v_tmp_958A1 = reg2hw_ctrl_i[27];
	always @(*) ctrl_wd[15] = sv2v_tmp_958A1;
	localparam [1:0] aes_reg_pkg_AES_CTRL_SHADOWED_OPERATION_RESVAL = 2'h1;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_OP_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_OPERATION_RESVAL)
	) u_ctrl_reg_shadowed_operation(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[0]),
		.we(we_i),
		.wd({ctrl_wd[1-:aes_pkg_AES_OP_WIDTH]}),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(hw2reg_ctrl_o[1-:2]),
		.qs(),
		.ds(),
		.phase(phase_operation),
		.err_update(err_update_operation),
		.err_storage(err_storage_operation)
	);
	localparam [5:0] aes_reg_pkg_AES_CTRL_SHADOWED_MODE_RESVAL = 6'h3f;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_MODE_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_MODE_RESVAL)
	) u_ctrl_reg_shadowed_mode(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[4]),
		.we(we_i),
		.wd({ctrl_wd[7-:6]}),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(hw2reg_ctrl_o[7-:6]),
		.qs(),
		.ds(),
		.phase(phase_mode),
		.err_update(err_update_mode),
		.err_storage(err_storage_mode)
	);
	localparam [2:0] aes_reg_pkg_AES_CTRL_SHADOWED_KEY_LEN_RESVAL = 3'h1;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_KEYLEN_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_KEY_LEN_RESVAL)
	) u_ctrl_reg_shadowed_key_len(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[12]),
		.we(we_i),
		.wd({ctrl_wd[10-:3]}),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(hw2reg_ctrl_o[10-:3]),
		.qs(),
		.ds(),
		.phase(phase_key_len),
		.err_update(err_update_key_len),
		.err_storage(err_storage_key_len)
	);
	localparam [0:0] aes_reg_pkg_AES_CTRL_SHADOWED_SIDELOAD_RESVAL = 1'h0;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_SIDELOAD_RESVAL)
	) u_ctrl_reg_shadowed_sideload(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[17]),
		.we(we_i),
		.wd(ctrl_wd[11]),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(hw2reg_ctrl_o[11]),
		.qs(),
		.ds(),
		.phase(phase_key_sideload),
		.err_update(err_update_sideload),
		.err_storage(err_storage_sideload)
	);
	localparam [2:0] aes_reg_pkg_AES_CTRL_SHADOWED_PRNG_RESEED_RATE_RESVAL = 3'h1;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_PRNGRESEEDRATE_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_PRNG_RESEED_RATE_RESVAL)
	) u_ctrl_reg_shadowed_prng_reseed_rate(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[20]),
		.we(we_i),
		.wd({ctrl_wd[14-:3]}),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(hw2reg_ctrl_o[14-:3]),
		.qs(),
		.ds(),
		.phase(phase_prng_reseed_rate),
		.err_update(err_update_prng_reseed_rate),
		.err_storage(err_storage_prng_reseed_rate)
	);
	localparam [0:0] aes_reg_pkg_AES_CTRL_SHADOWED_MANUAL_OPERATION_RESVAL = 1'h0;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_MANUAL_OPERATION_RESVAL)
	) u_ctrl_reg_shadowed_manual_operation(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[25]),
		.we(we_i),
		.wd(ctrl_wd[15]),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(hw2reg_ctrl_o[15]),
		.qs(),
		.ds(),
		.phase(phase_manual_operation),
		.err_update(err_update_manual_operation),
		.err_storage(err_storage_manual_operation)
	);
	assign phase_o = ((((phase_operation | phase_mode) | phase_key_len) | phase_key_sideload) | phase_prng_reseed_rate) | phase_manual_operation;
	assign err_update_o = ((((err_update_operation | err_update_mode) | err_update_key_len) | err_update_sideload) | err_update_prng_reseed_rate) | err_update_manual_operation;
	assign err_storage_o = ((((err_storage_operation | err_storage_mode) | err_storage_key_len) | err_storage_sideload) | err_storage_prng_reseed_rate) | err_storage_manual_operation;
	assign operation_o = sv2v_cast_63054(hw2reg_ctrl_o[1-:2]);
	assign mode_o = sv2v_cast_86B6A(hw2reg_ctrl_o[7-:6]);
	assign key_len_o = sv2v_cast_2BC67(hw2reg_ctrl_o[10-:3]);
	assign sideload_o = hw2reg_ctrl_o[11];
	assign prng_reseed_rate_o = sv2v_cast_421A6(hw2reg_ctrl_o[14-:3]);
	assign manual_operation_o = hw2reg_ctrl_o[15];
	initial _sv2v_0 = 0;
endmodule
