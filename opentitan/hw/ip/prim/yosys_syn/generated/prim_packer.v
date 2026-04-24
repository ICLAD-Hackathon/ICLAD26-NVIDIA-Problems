module prim_packer (
	clk_i,
	rst_ni,
	valid_i,
	data_i,
	mask_i,
	ready_o,
	valid_o,
	data_o,
	mask_o,
	ready_i,
	flush_i,
	flush_done_o,
	err_o
);
	reg _sv2v_0;
	parameter [31:0] InW = 32;
	parameter [31:0] OutW = 32;
	parameter signed [31:0] HintByteData = 0;
	parameter [0:0] EnProtection = 1'b0;
	input clk_i;
	input rst_ni;
	input valid_i;
	input [InW - 1:0] data_i;
	input [InW - 1:0] mask_i;
	output wire ready_o;
	output wire valid_o;
	output wire [OutW - 1:0] data_o;
	output wire [OutW - 1:0] mask_o;
	input ready_i;
	input flush_i;
	output wire flush_done_o;
	output wire err_o;
	localparam [31:0] Width = InW + OutW;
	localparam [31:0] ConcatW = Width + InW;
	localparam [31:0] PtrW = $clog2(ConcatW + 1);
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] IdxW = prim_util_pkg_vbits(InW);
	localparam [31:0] OnesCntW = $clog2(InW + 1);
	wire valid_next;
	wire ready_next;
	reg [Width - 1:0] stored_data;
	reg [Width - 1:0] stored_mask;
	wire [ConcatW - 1:0] concat_data;
	wire [ConcatW - 1:0] concat_mask;
	wire [ConcatW - 1:0] shiftl_data;
	wire [ConcatW - 1:0] shiftl_mask;
	wire [InW - 1:0] shiftr_data;
	wire [InW - 1:0] shiftr_mask;
	reg [PtrW - 1:0] pos_q;
	reg [IdxW - 1:0] lod_idx;
	reg [OnesCntW - 1:0] inmask_ones;
	wire ack_in;
	wire ack_out;
	reg flush_valid;
	reg flush_done;
	function automatic [OnesCntW - 1:0] sv2v_cast_75604;
		input reg [OnesCntW - 1:0] inp;
		sv2v_cast_75604 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		inmask_ones = 1'sb0;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < InW; i = i + 1)
				inmask_ones = inmask_ones + sv2v_cast_75604(mask_i[i]);
		end
	end
	wire [PtrW - 1:0] pos_with_input;
	function automatic [PtrW - 1:0] sv2v_cast_09B00;
		input reg [PtrW - 1:0] inp;
		sv2v_cast_09B00 = inp;
	endfunction
	assign pos_with_input = pos_q + sv2v_cast_09B00(inmask_ones);
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	generate
		if (EnProtection == 1'b0) begin : g_pos_nodup
			reg [PtrW - 1:0] pos_d;
			always @(*) begin
				if (_sv2v_0)
					;
				pos_d = pos_q;
				(* full_case, parallel_case *)
				case ({ack_in, ack_out})
					2'b00: pos_d = pos_q;
					2'b01: pos_d = (sv2v_cast_32_signed(pos_q) <= OutW ? {PtrW {1'sb0}} : pos_q - sv2v_cast_09B00(OutW));
					2'b10: pos_d = pos_with_input;
					2'b11: pos_d = (sv2v_cast_32_signed(pos_with_input) <= OutW ? {PtrW {1'sb0}} : pos_with_input - sv2v_cast_09B00(OutW));
					default: pos_d = pos_q;
				endcase
			end
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					pos_q <= 1'sb0;
				else if (flush_done)
					pos_q <= 1'sb0;
				else
					pos_q <= pos_d;
			assign err_o = 1'b0;
		end
		else begin : g_pos_dupcnt
			wire cnt_incr_en;
			wire cnt_decr_en;
			wire cnt_set_en;
			wire [PtrW - 1:0] cnt_step;
			reg [PtrW - 1:0] cnt_set;
			assign cnt_incr_en = ack_in && !ack_out;
			assign cnt_decr_en = !ack_in && ack_out;
			assign cnt_set_en = ack_in && ack_out;
			assign cnt_step = (cnt_incr_en ? sv2v_cast_09B00(inmask_ones) : sv2v_cast_09B00(OutW));
			always @(*) begin : cnt_set_logic
				if (_sv2v_0)
					;
				cnt_set = 1'sb0;
				if (pos_with_input > sv2v_cast_09B00(OutW))
					cnt_set = pos_with_input - sv2v_cast_09B00(OutW);
			end
			prim_count #(
				.Width(PtrW),
				.ResetValue(1'sb0)
			) u_pos(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(flush_done),
				.set_i(cnt_set_en),
				.set_cnt_i(cnt_set),
				.incr_en_i(cnt_incr_en),
				.decr_en_i(cnt_decr_en),
				.step_i(cnt_step),
				.commit_i(1'b1),
				.cnt_o(pos_q),
				.cnt_after_commit_o(),
				.err_o(err_o)
			);
		end
	endgenerate
	function automatic [IdxW - 1:0] sv2v_cast_C23A3;
		input reg [IdxW - 1:0] inp;
		sv2v_cast_C23A3 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		lod_idx = 0;
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = InW - 1; i >= 0; i = i - 1)
				if (mask_i[i] == 1'b1)
					lod_idx = sv2v_cast_C23A3($unsigned(i));
		end
	end
	assign ack_in = valid_i & ready_o;
	assign ack_out = valid_o & ready_i;
	assign shiftr_data = (valid_i ? data_i >> lod_idx : {InW {1'sb0}});
	assign shiftr_mask = (valid_i ? mask_i >> lod_idx : {InW {1'sb0}});
	function automatic [ConcatW - 1:0] sv2v_cast_BA551;
		input reg [ConcatW - 1:0] inp;
		sv2v_cast_BA551 = inp;
	endfunction
	assign shiftl_data = sv2v_cast_BA551(shiftr_data) << pos_q;
	assign shiftl_mask = sv2v_cast_BA551(shiftr_mask) << pos_q;
	assign concat_data = {{InW {1'b0}}, stored_data & stored_mask} | (shiftl_data & shiftl_mask);
	assign concat_mask = {{InW {1'b0}}, stored_mask} | shiftl_mask;
	reg [Width - 1:0] stored_data_next;
	reg [Width - 1:0] stored_mask_next;
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case ({ack_in, ack_out})
			2'b00: begin
				stored_data_next = stored_data;
				stored_mask_next = stored_mask;
			end
			2'b01: begin
				stored_data_next = {{OutW {1'b0}}, stored_data[Width - 1:OutW]};
				stored_mask_next = {{OutW {1'b0}}, stored_mask[Width - 1:OutW]};
			end
			2'b10: begin
				stored_data_next = concat_data[0+:Width];
				stored_mask_next = concat_mask[0+:Width];
			end
			2'b11: begin
				stored_data_next = concat_data[ConcatW - 1:OutW];
				stored_mask_next = concat_mask[ConcatW - 1:OutW];
			end
			default: begin
				stored_data_next = stored_data;
				stored_mask_next = stored_mask;
			end
		endcase
	end
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			stored_data <= 1'sb0;
			stored_mask <= 1'sb0;
		end
		else if (flush_done) begin
			stored_data <= 1'sb0;
			stored_mask <= 1'sb0;
		end
		else begin
			stored_data <= stored_data_next;
			stored_mask <= stored_mask_next;
		end
	reg flush_st;
	reg flush_st_next;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			flush_st <= 1'd0;
		else
			flush_st <= flush_st_next;
	always @(*) begin
		if (_sv2v_0)
			;
		flush_st_next = 1'd0;
		flush_valid = 1'b0;
		flush_done = 1'b0;
		(* full_case, parallel_case *)
		case (flush_st)
			1'd0:
				if (flush_i)
					flush_st_next = 1'd1;
				else
					flush_st_next = 1'd0;
			1'd1:
				if (pos_q == {PtrW {1'sb0}}) begin
					flush_st_next = 1'd0;
					flush_valid = 1'b0;
					flush_done = 1'b1;
				end
				else begin
					flush_st_next = 1'd1;
					flush_valid = 1'b1;
					flush_done = 1'b0;
				end
			default: begin
				flush_st_next = 1'd0;
				flush_valid = 1'b0;
				flush_done = 1'b0;
			end
		endcase
	end
	assign flush_done_o = flush_done;
	assign valid_next = (sv2v_cast_32_signed(pos_q) >= OutW ? 1'b1 : flush_valid);
	assign ready_next = sv2v_cast_32_signed(pos_q) <= OutW;
	assign valid_o = valid_next;
	assign data_o = stored_data[OutW - 1:0];
	assign mask_o = stored_mask[OutW - 1:0];
	assign ready_o = ready_next;
	generate
		if (HintByteData != 0) begin : g_byte_assert
			genvar _gv_i_1;
			genvar _gv_i_2;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
