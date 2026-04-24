module kmac_staterd (
	clk_i,
	rst_ni,
	tl_i,
	tl_o,
	state_i,
	endian_swap_i
);
	parameter signed [31:0] AddrW = 9;
	parameter [0:0] EnMasking = 1'b0;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	input clk_i;
	input rst_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	localparam signed [31:0] sha3_pkg_StateW = 1600;
	input [(Share * sha3_pkg_StateW) - 1:0] state_i;
	input endian_swap_i;
	localparam signed [31:0] StateAddrW = 6;
	localparam signed [31:0] SelAddrW = (AddrW - 2) - StateAddrW;
	wire tlram_req;
	wire tlram_gnt;
	wire tlram_we;
	wire [AddrW - 3:0] tlram_addr;
	wire [31:0] unused_tlram_wdata;
	wire [31:0] unused_tlram_wmask;
	reg [31:0] tlram_rdata;
	reg tlram_rvalid;
	wire [1:0] tlram_rerror;
	wire [31:0] tlram_rdata_endian;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	tlul_adapter_sram #(
		.SramAw(AddrW - 2),
		.SramDw(32),
		.Outstanding(1),
		.ByteAccess(1),
		.ErrOnWrite(1),
		.ErrOnRead(0)
	) u_tlul_adapter(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_i),
		.tl_o(tl_o),
		.en_ifetch_i(sv2v_cast_EECFA(4'h9)),
		.req_o(tlram_req),
		.req_type_o(),
		.gnt_i(tlram_gnt),
		.we_o(tlram_we),
		.addr_o(tlram_addr),
		.wdata_o(unused_tlram_wdata),
		.wmask_o(unused_tlram_wmask),
		.intg_error_o(),
		.user_rsvd_o(),
		.rdata_i(tlram_rdata),
		.rvalid_i(tlram_rvalid),
		.rerror_i(tlram_rerror),
		.compound_txn_in_progress_o(),
		.readback_en_i(sv2v_cast_EECFA(4'h9)),
		.readback_error_o(),
		.wr_collision_i(1'b0),
		.write_pending_i(1'b0)
	);
	function automatic [31:0] kmac_pkg_conv_endian32;
		input reg [31:0] v;
		input reg swap;
		reg [31:0] conv_data;
		begin
			begin : sv2v_autoblock_1
				reg [31:0] _sv2v_strm_50A87_inp;
				reg [31:0] _sv2v_strm_50A87_out;
				integer _sv2v_strm_50A87_idx;
				_sv2v_strm_50A87_inp = {v};
				for (_sv2v_strm_50A87_idx = 0; _sv2v_strm_50A87_idx <= 24; _sv2v_strm_50A87_idx = _sv2v_strm_50A87_idx + 8)
					_sv2v_strm_50A87_out[31 - _sv2v_strm_50A87_idx-:8] = _sv2v_strm_50A87_inp[_sv2v_strm_50A87_idx+:8];
				conv_data = _sv2v_strm_50A87_out << 0;
			end
			kmac_pkg_conv_endian32 = (swap ? conv_data : v);
		end
	endfunction
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			tlram_rdata <= 1'sb0;
		else if (tlram_req & ~tlram_we)
			tlram_rdata <= kmac_pkg_conv_endian32(tlram_rdata_endian, endian_swap_i);
	assign tlram_gnt = tlram_req & ~tlram_we;
	assign tlram_rerror = 1'sb0;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			tlram_rvalid <= 1'b0;
		else
			tlram_rvalid <= tlram_req & !tlram_we;
	wire [31:0] muxed_state [0:Share - 1];
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < Share; _gv_i_1 = _gv_i_1 + 1) begin : gen_slicer
			localparam i = _gv_i_1;
			prim_slicer #(
				.InW(sha3_pkg_StateW),
				.OutW(32),
				.IndexW(StateAddrW)
			) u_state_slice(
				.sel_i(tlram_addr[5:0]),
				.data_i(state_i[((Share - 1) - i) * sha3_pkg_StateW+:sha3_pkg_StateW]),
				.data_o(muxed_state[i])
			);
		end
	endgenerate
	wire [SelAddrW - 1:0] addr_sel;
	assign addr_sel = tlram_addr[StateAddrW+:SelAddrW];
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	generate
		if (EnMasking) begin : gen_state_sel_masked
			assign tlram_rdata_endian = (sv2v_cast_32_signed(addr_sel) < Share ? muxed_state[addr_sel] : 0);
		end
		else begin : gen_state_sel_unmasked
			assign tlram_rdata_endian = (sv2v_cast_32_signed(addr_sel) < Share ? muxed_state[0] : 0);
		end
	endgenerate
endmodule
