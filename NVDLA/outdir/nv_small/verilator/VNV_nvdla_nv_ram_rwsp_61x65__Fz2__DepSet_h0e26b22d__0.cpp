// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_61x65__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_popping) 
             & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync))) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_ce_r0_1p))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__24(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__24\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__28(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__28\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__32(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__32\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WrClk0;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__radr_q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_popping)
                          ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0)));
    }
    __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK 
        = (((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB)) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR 
            = (0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0));
    }
    __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WrClk0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF) 
             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                   >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core))) 
           & (~ ((((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL))) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF)) 
                  | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL)))) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))) 
                 >> 6U)));
    if (__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF))][0U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF))][1U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF))][2U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U];
    }
    if (__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
            = ((- (IData)((IData)(__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK))) 
               & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))][0U]);
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
            = ((- (IData)((IData)(__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK))) 
               & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))][1U]);
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[2U] 
            = ((- (IData)((IData)(__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK))) 
               & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))][2U]);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | ((8U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                     & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                            >> 7U))))))) 
              | ((4U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))) 
                 | ((2U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))) 
                    | (1U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xfU & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                      & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                             >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[2U] 
        = (3U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[2U] 
                 & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                        >> 7U)))))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_popping) 
             & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync))) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_ce_r0_1p))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__23(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__23\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__27(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__27\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__31(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__31\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WrClk0;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__radr_q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_popping)
                          ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0)));
    }
    __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK 
        = (((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB)) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR 
            = (0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0));
    }
    __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WrClk0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF) 
             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                   >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core))) 
           & (~ ((((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL))) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF)) 
                  | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL)))) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))) 
                 >> 6U)));
    if (__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF))][0U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF))][1U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr[(0x3fU 
                                                                                & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF))][2U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U];
    }
    if (__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
            = ((- (IData)((IData)(__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK))) 
               & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))][0U]);
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
            = ((- (IData)((IData)(__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK))) 
               & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))][1U]);
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[2U] 
            = ((- (IData)((IData)(__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RECLK))) 
               & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR))][2U]);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | ((8U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                     & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                            >> 7U))))))) 
              | ((4U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))) 
                 | ((2U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))) 
                    | (1U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[0U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[0U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xfU & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                      & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                             >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[1U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[1U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut[2U] 
        = (3U & (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout[2U] 
                 & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                                        >> 7U)))))));
}
