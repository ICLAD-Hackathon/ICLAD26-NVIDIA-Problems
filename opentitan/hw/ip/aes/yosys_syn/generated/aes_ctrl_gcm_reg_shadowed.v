module aes_ctrl_gcm_reg_shadowed (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	qe_o,
	we_i,
	phase_o,
	init_done_i,
	first_block_i,
	gcm_phase_o,
	num_valid_bytes_o,
	err_update_o,
	err_storage_o,
	reg2hw_ctrl_gcm_i,
	hw2reg_ctrl_gcm_o
);
	reg _sv2v_0;
	parameter [0:0] AESGCMEnable = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	output wire qe_o;
	input wire we_i;
	output wire phase_o;
	input wire init_done_i;
	input wire first_block_i;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	output wire [5:0] gcm_phase_o;
	output wire [4:0] num_valid_bytes_o;
	output wire err_update_o;
	output wire err_storage_o;
	input wire [14:0] reg2hw_ctrl_gcm_i;
	output wire [10:0] hw2reg_ctrl_gcm_o;
	wire phase_gcm_phase;
	wire phase_num_valid_bytes;
	wire err_update_gcm_phase;
	wire err_update_num_valid_bytes;
	wire err_storage_gcm_phase;
	wire err_storage_num_valid_bytes;
	assign qe_o = reg2hw_ctrl_gcm_i[1] & reg2hw_ctrl_gcm_i[9];
	localparam [4:0] aes_reg_pkg_AES_CTRL_GCM_SHADOWED_NUM_VALID_BYTES_RESVAL = 5'h10;
	localparam [5:0] aes_reg_pkg_AES_CTRL_GCM_SHADOWED_PHASE_RESVAL = 6'h01;
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	generate
		if (AESGCMEnable) begin : gen_ctrl_gcm_reg_shadowed
			wire [10:0] ctrl_gcm_wd;
			wire [5:0] gcm_phase_reg_if;
			reg [5:0] gcm_phase;
			wire [4:0] num_valid_bytes;
			assign gcm_phase_reg_if = sv2v_cast_92B33(reg2hw_ctrl_gcm_i[7-:6]);
			always @(*) begin : gcm_phase_get
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (gcm_phase_reg_if)
					sv2v_cast_92B33(6'b000001): gcm_phase = sv2v_cast_92B33(6'b000001);
					sv2v_cast_92B33(6'b000010): gcm_phase = sv2v_cast_92B33(6'b000010);
					sv2v_cast_92B33(6'b000100): gcm_phase = sv2v_cast_92B33(6'b000100);
					sv2v_cast_92B33(6'b001000): gcm_phase = sv2v_cast_92B33(6'b001000);
					sv2v_cast_92B33(6'b010000): gcm_phase = sv2v_cast_92B33(6'b010000);
					sv2v_cast_92B33(6'b100000): gcm_phase = sv2v_cast_92B33(6'b100000);
					default: gcm_phase = sv2v_cast_92B33(6'b000001);
				endcase
				(* full_case, parallel_case *)
				case (gcm_phase_o)
					sv2v_cast_92B33(6'b000001): gcm_phase = (init_done_i && ((((gcm_phase == sv2v_cast_92B33(6'b000010)) || (gcm_phase == sv2v_cast_92B33(6'b000100))) || (gcm_phase == sv2v_cast_92B33(6'b001000))) || (gcm_phase == sv2v_cast_92B33(6'b100000))) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b000010): gcm_phase = (((gcm_phase == sv2v_cast_92B33(6'b000001)) || (gcm_phase == sv2v_cast_92B33(6'b000100))) || (gcm_phase == sv2v_cast_92B33(6'b001000)) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b000100): gcm_phase = ((((gcm_phase == sv2v_cast_92B33(6'b000001)) || (gcm_phase == sv2v_cast_92B33(6'b001000))) || ((gcm_phase == sv2v_cast_92B33(6'b010000)) && !first_block_i)) || (gcm_phase == sv2v_cast_92B33(6'b100000)) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b001000): gcm_phase = (((gcm_phase == sv2v_cast_92B33(6'b000001)) || ((gcm_phase == sv2v_cast_92B33(6'b010000)) && !first_block_i)) || (gcm_phase == sv2v_cast_92B33(6'b100000)) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b010000): gcm_phase = (gcm_phase == sv2v_cast_92B33(6'b000001) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b100000): gcm_phase = (gcm_phase == sv2v_cast_92B33(6'b000001) ? gcm_phase : gcm_phase_o);
					default: gcm_phase = gcm_phase_o;
				endcase
			end
			assign ctrl_gcm_wd[5-:aes_pkg_AES_GCMPHASE_WIDTH] = gcm_phase;
			assign num_valid_bytes = reg2hw_ctrl_gcm_i[14-:5];
			assign ctrl_gcm_wd[10-:5] = ((num_valid_bytes == 5'd0) || (num_valid_bytes > 5'd16) ? 5'd16 : num_valid_bytes);
			prim_subreg_shadow #(
				.DW(aes_pkg_AES_GCMPHASE_WIDTH),
				.SwAccess(3'd2),
				.RESVAL(aes_reg_pkg_AES_CTRL_GCM_SHADOWED_PHASE_RESVAL)
			) u_ctrl_gcm_reg_shadowed_phase(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.rst_shadowed_ni(rst_shadowed_ni),
				.re(reg2hw_ctrl_gcm_i[0]),
				.we(we_i),
				.wd({ctrl_gcm_wd[5-:aes_pkg_AES_GCMPHASE_WIDTH]}),
				.de(1'b0),
				.d(1'sb0),
				.qe(),
				.q(hw2reg_ctrl_gcm_o[5-:6]),
				.qs(),
				.ds(),
				.phase(phase_gcm_phase),
				.err_update(err_update_gcm_phase),
				.err_storage(err_storage_gcm_phase)
			);
			prim_subreg_shadow #(
				.DW(5),
				.SwAccess(3'd2),
				.RESVAL(aes_reg_pkg_AES_CTRL_GCM_SHADOWED_NUM_VALID_BYTES_RESVAL)
			) u_ctrl_gcm_reg_shadowed_num_valid_bytes(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.rst_shadowed_ni(rst_shadowed_ni),
				.re(reg2hw_ctrl_gcm_i[8]),
				.we(we_i),
				.wd({ctrl_gcm_wd[10-:5]}),
				.de(1'b0),
				.d(1'sb0),
				.qe(),
				.q(hw2reg_ctrl_gcm_o[10-:5]),
				.qs(),
				.ds(),
				.phase(phase_num_valid_bytes),
				.err_update(err_update_num_valid_bytes),
				.err_storage(err_storage_num_valid_bytes)
			);
		end
		else begin : gen_no_ctrl_gcm_reg_shadowed
			wire unused_ctrl_gcm;
			assign unused_ctrl_gcm = ^{reg2hw_ctrl_gcm_i[0], reg2hw_ctrl_gcm_i[7-:6], reg2hw_ctrl_gcm_i[8], reg2hw_ctrl_gcm_i[14-:5]};
			wire unused_we;
			wire unused_init_done;
			wire unused_first_block;
			assign unused_we = we_i;
			assign unused_init_done = init_done_i;
			assign unused_first_block = first_block_i;
			wire unused_clk;
			wire unused_rst;
			wire unused_rst_shadowed;
			assign unused_clk = clk_i;
			assign unused_rst = rst_ni;
			assign unused_rst_shadowed = rst_shadowed_ni;
			assign hw2reg_ctrl_gcm_o[5-:6] = {sv2v_cast_92B33(6'b000001)};
			assign hw2reg_ctrl_gcm_o[10-:5] = 5'd16;
			assign phase_gcm_phase = 1'b1;
			assign phase_num_valid_bytes = 1'b1;
			assign err_update_gcm_phase = 1'b0;
			assign err_update_num_valid_bytes = 1'b0;
			assign err_storage_gcm_phase = 1'b0;
			assign err_storage_num_valid_bytes = 1'b0;
		end
	endgenerate
	assign phase_o = phase_gcm_phase | phase_num_valid_bytes;
	assign err_update_o = err_update_gcm_phase | err_update_num_valid_bytes;
	assign err_storage_o = err_storage_gcm_phase | err_storage_num_valid_bytes;
	assign gcm_phase_o = sv2v_cast_92B33(hw2reg_ctrl_gcm_o[5-:6]);
	assign num_valid_bytes_o = hw2reg_ctrl_gcm_o[10-:5];
	initial _sv2v_0 = 0;
endmodule
