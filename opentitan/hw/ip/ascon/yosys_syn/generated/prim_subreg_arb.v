module prim_subreg_arb (
	we,
	wd,
	de,
	d,
	q,
	wr_en,
	wr_data
);
	parameter signed [31:0] DW = 32;
	parameter [2:0] SwAccess = 3'd0;
	parameter [0:0] Mubi = 1'b0;
	input we;
	input [DW - 1:0] wd;
	input de;
	input [DW - 1:0] d;
	input [DW - 1:0] q;
	output wire wr_en;
	output wire [DW - 1:0] wr_data;
	localparam signed [31:0] prim_mubi_pkg_MuBi12Width = 12;
	localparam signed [31:0] prim_mubi_pkg_MuBi16Width = 16;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] prim_mubi_pkg_MuBi8Width = 8;
	function automatic [11:0] sv2v_cast_9D81C;
		input reg [11:0] inp;
		sv2v_cast_9D81C = inp;
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_and;
		input reg [11:0] a;
		input reg [11:0] b;
		input reg [11:0] act;
		reg [11:0] a_in;
		reg [11:0] b_in;
		reg [11:0] act_in;
		reg [11:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_1
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi12Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi12_and = sv2v_cast_9D81C(out);
		end
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_and_hi;
		input reg [11:0] a;
		input reg [11:0] b;
		prim_mubi_pkg_mubi12_and_hi = prim_mubi_pkg_mubi12_and(a, b, sv2v_cast_9D81C(12'h696));
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_or;
		input reg [11:0] a;
		input reg [11:0] b;
		input reg [11:0] act;
		reg [11:0] a_in;
		reg [11:0] b_in;
		reg [11:0] act_in;
		reg [11:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_2
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi12Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi12_or = sv2v_cast_9D81C(out);
		end
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_or_hi;
		input reg [11:0] a;
		input reg [11:0] b;
		prim_mubi_pkg_mubi12_or_hi = prim_mubi_pkg_mubi12_or(a, b, sv2v_cast_9D81C(12'h696));
	endfunction
	function automatic [15:0] sv2v_cast_B8818;
		input reg [15:0] inp;
		sv2v_cast_B8818 = inp;
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_and;
		input reg [15:0] a;
		input reg [15:0] b;
		input reg [15:0] act;
		reg [15:0] a_in;
		reg [15:0] b_in;
		reg [15:0] act_in;
		reg [15:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_3
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi16Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi16_and = sv2v_cast_B8818(out);
		end
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_and_hi;
		input reg [15:0] a;
		input reg [15:0] b;
		prim_mubi_pkg_mubi16_and_hi = prim_mubi_pkg_mubi16_and(a, b, sv2v_cast_B8818(16'h9696));
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_or;
		input reg [15:0] a;
		input reg [15:0] b;
		input reg [15:0] act;
		reg [15:0] a_in;
		reg [15:0] b_in;
		reg [15:0] act_in;
		reg [15:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_4
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi16Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi16_or = sv2v_cast_B8818(out);
		end
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_or_hi;
		input reg [15:0] a;
		input reg [15:0] b;
		prim_mubi_pkg_mubi16_or_hi = prim_mubi_pkg_mubi16_or(a, b, sv2v_cast_B8818(16'h9696));
	endfunction
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_and;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_5
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi4Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi4_and = sv2v_cast_EECFA(out);
		end
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_and_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		prim_mubi_pkg_mubi4_and_hi = prim_mubi_pkg_mubi4_and(a, b, sv2v_cast_EECFA(4'h6));
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_or;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_6
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi4Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi4_or = sv2v_cast_EECFA(out);
		end
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_or_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		prim_mubi_pkg_mubi4_or_hi = prim_mubi_pkg_mubi4_or(a, b, sv2v_cast_EECFA(4'h6));
	endfunction
	function automatic [7:0] sv2v_cast_FA5F6;
		input reg [7:0] inp;
		sv2v_cast_FA5F6 = inp;
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_and;
		input reg [7:0] a;
		input reg [7:0] b;
		input reg [7:0] act;
		reg [7:0] a_in;
		reg [7:0] b_in;
		reg [7:0] act_in;
		reg [7:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_7
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi8Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi8_and = sv2v_cast_FA5F6(out);
		end
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_and_hi;
		input reg [7:0] a;
		input reg [7:0] b;
		prim_mubi_pkg_mubi8_and_hi = prim_mubi_pkg_mubi8_and(a, b, sv2v_cast_FA5F6(8'h96));
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_or;
		input reg [7:0] a;
		input reg [7:0] b;
		input reg [7:0] act;
		reg [7:0] a_in;
		reg [7:0] b_in;
		reg [7:0] act_in;
		reg [7:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_8
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi8Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi8_or = sv2v_cast_FA5F6(out);
		end
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_or_hi;
		input reg [7:0] a;
		input reg [7:0] b;
		prim_mubi_pkg_mubi8_or_hi = prim_mubi_pkg_mubi8_or(a, b, sv2v_cast_FA5F6(8'h96));
	endfunction
	generate
		if ((SwAccess == 3'd0) || (SwAccess == 3'd2)) begin : gen_w
			assign wr_en = we | de;
			assign wr_data = (we == 1'b1 ? wd : d);
			wire [DW - 1:0] unused_q;
			assign unused_q = q;
		end
		else if (SwAccess == 3'd1) begin : gen_ro
			assign wr_en = de;
			assign wr_data = d;
			wire unused_we;
			wire [DW - 1:0] unused_wd;
			wire [DW - 1:0] unused_q;
			assign unused_we = we;
			assign unused_wd = wd;
			assign unused_q = q;
		end
		else if (SwAccess == 3'd4) begin : gen_w1s
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_or_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(wd) : sv2v_cast_EECFA(4'h9)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_or_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(wd) : sv2v_cast_FA5F6(8'h69)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_or_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(wd) : sv2v_cast_9D81C(12'h969)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_or_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(wd) : sv2v_cast_B8818(16'h6969)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) | (we ? wd : {DW {1'sb0}});
			end
		end
		else if (SwAccess == 3'd3) begin : gen_w1c
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_and_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(~wd) : sv2v_cast_EECFA(4'h6)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_and_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(~wd) : sv2v_cast_FA5F6(8'h96)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_and_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(~wd) : sv2v_cast_9D81C(12'h696)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_and_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(~wd) : sv2v_cast_B8818(16'h9696)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) & (we ? ~wd : {DW {1'sb1}});
			end
		end
		else if (SwAccess == 3'd5) begin : gen_w0c
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_and_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(wd) : sv2v_cast_EECFA(4'h6)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_and_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(wd) : sv2v_cast_FA5F6(8'h96)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_and_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(wd) : sv2v_cast_9D81C(12'h696)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_and_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(wd) : sv2v_cast_B8818(16'h9696)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) & (we ? wd : {DW {1'sb1}});
			end
		end
		else if (SwAccess == 3'd6) begin : gen_rc
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_and_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(4'h9) : sv2v_cast_EECFA(4'h6)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_and_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(8'h69) : sv2v_cast_FA5F6(8'h96)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_and_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(12'h969) : sv2v_cast_9D81C(12'h696)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_and_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(wd) : sv2v_cast_B8818(16'h9696)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) & (we ? {DW {1'sb0}} : {DW {1'sb1}});
			end
			wire [DW - 1:0] unused_wd;
			assign unused_wd = wd;
		end
		else begin : gen_hw
			assign wr_en = de;
			assign wr_data = d;
			wire unused_we;
			wire [DW - 1:0] unused_wd;
			wire [DW - 1:0] unused_q;
			assign unused_we = we;
			assign unused_wd = wd;
			assign unused_q = q;
		end
	endgenerate
endmodule
