// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_256x64.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__1(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__1\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__2(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__2\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__3(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__3\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__4(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__4\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__5(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__5\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__6(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__6\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__7(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__7\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__8(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__8\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__9(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__9\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__10(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__10\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__11(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__11\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__12(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__12\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__13(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__13\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__14(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__14\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__15(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__15\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__16(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__16\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__17(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__17\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__18(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__18\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__19(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__19\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__20(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__20\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__21(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__21\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__22(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__22\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__23(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__23\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__24(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__24\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__25(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__25\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__26(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__26\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__27(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__27\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__28(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__28\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__29(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__29\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__30(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__30\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__31(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__31\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__32(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__32\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__33(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__33\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__34(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__34\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__35(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__35\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__36(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__36\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__37(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__37\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__38(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__38\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__39(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__39\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__40(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__40\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__41(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__41\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__42(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__42\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__43(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__43\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__44(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__44\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__45(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__45\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__46(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__46\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__47(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__47\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__48(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__48\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__49(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__49\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__50(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__50\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__51(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__51\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__52(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__52\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__53(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__53\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__54(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__54\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__55(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__55\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__56(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__56\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__57(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__57\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__58(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__58\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__59(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__59\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__60(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__60\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__61(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__61\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__62(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__62\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__63(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__63\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__64(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__64\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_rd_en_d1;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_wr_en_d2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
}
