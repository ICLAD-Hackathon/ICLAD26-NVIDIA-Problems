// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_256x64.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__129(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__129\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__193(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__193\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__579(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__579\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__769(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__769\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RADR 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__gated_clk_core)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__1154(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__1154\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffffffffffffff0ULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | (IData)((IData)(((8U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                     & (~ (IData)((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                         >> 7U))))))))) 
                              | ((4U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                        & (~ (IData)(
                                                     (- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                            >> 7U))))))))) 
                                 | ((2U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                           & (~ (IData)(
                                                        (- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                               >> 7U))))))))) 
                                    | (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                   >> 7U))))))))));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xffffffffffffff0fULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 4U)) | ((4U 
                                                  & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                      & (~ (IData)(
                                                                   (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                     >> 4U)) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                         & (~ (IData)(
                                                                      (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                        >> 4U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                           & (~ (IData)(
                                                                        (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                          >> 4U))))))) 
              << 4U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffffffffffff0ffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 8U)) | ((4U 
                                                  & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                      & (~ (IData)(
                                                                   (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                     >> 8U)) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                         & (~ (IData)(
                                                                      (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                        >> 8U)) 
                                                    | (1U 
                                                       & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                           & (~ (IData)(
                                                                        (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                          >> 8U))))))) 
              << 8U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xffffffffffff0fffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 0xcU)) | (
                                                   (4U 
                                                    & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                        & (~ (IData)(
                                                                     (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                       >> 0xcU)) 
                                                   | ((2U 
                                                       & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                           & (~ (IData)(
                                                                        (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                          >> 0xcU)) 
                                                      | (1U 
                                                         & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                                             & (~ (IData)(
                                                                          (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                                >> 7U)))))))) 
                                                            >> 0xcU))))))) 
              << 0xcU));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffffffffff0ffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 0x10U)) | 
                               ((4U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                        & (~ (IData)(
                                                     (- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                            >> 7U)))))))) 
                                       >> 0x10U)) | 
                                ((2U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                         & (~ (IData)(
                                                      (- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                             >> 7U)))))))) 
                                        >> 0x10U)) 
                                 | (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                           & (~ (IData)(
                                                        (- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                               >> 7U)))))))) 
                                          >> 0x10U))))))) 
              << 0x10U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xffffffffff0fffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 0x14U)) | 
                               ((4U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                        & (~ (IData)(
                                                     (- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                            >> 7U)))))))) 
                                       >> 0x14U)) | 
                                ((2U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                         & (~ (IData)(
                                                      (- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                             >> 7U)))))))) 
                                        >> 0x14U)) 
                                 | (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                           & (~ (IData)(
                                                        (- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                               >> 7U)))))))) 
                                          >> 0x14U))))))) 
              << 0x14U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffffffff0ffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 0x18U)) | 
                               ((4U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                        & (~ (IData)(
                                                     (- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                            >> 7U)))))))) 
                                       >> 0x18U)) | 
                                ((2U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                         & (~ (IData)(
                                                      (- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                             >> 7U)))))))) 
                                        >> 0x18U)) 
                                 | (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                           & (~ (IData)(
                                                        (- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                               >> 7U)))))))) 
                                          >> 0x18U))))))) 
              << 0x18U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xffffffff0fffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)(((8U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                       & (~ (IData)(
                                                    (- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                           >> 7U)))))))) 
                                      >> 0x1cU)) | 
                               ((4U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                        & (~ (IData)(
                                                     (- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                            >> 7U)))))))) 
                                       >> 0x1cU)) | 
                                ((2U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                         & (~ (IData)(
                                                      (- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                             >> 7U)))))))) 
                                        >> 0x1cU)) 
                                 | (1U & (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout) 
                                           & (~ (IData)(
                                                        (- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                               >> 7U)))))))) 
                                          >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffffff0ffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x20U))))) 
              << 0x20U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xffffff0fffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x24U))))) 
              << 0x24U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffff0ffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x28U))))) 
              << 0x28U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xffff0fffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x2cU))))) 
              << 0x2cU));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfff0ffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x30U))))) 
              << 0x30U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xff0fffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x34U))))) 
              << 0x34U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xf0ffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x38U))))) 
              << 0x38U));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut 
        = ((0xfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut) 
           | ((QData)((IData)((0xfU & (IData)(((vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
                                                & (~ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_c_pd 
                                                                          >> 7U))))))) 
                                               >> 0x3cU))))) 
              << 0x3cU));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S)
                ? vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ramDataOut
                : 0ULL) : vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__130(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__130\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__582(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__582\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__131(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__131\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__585(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__585\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__132(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__132\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__588(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__588\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__133(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__133\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__591(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__591\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__134(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__134\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__594(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__594\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__135(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__135\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__597(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__597\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__136(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__136\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__600(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__600\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__137(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__137\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__603(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__603\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__138(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__138\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__606(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__606\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__139(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__139\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__609(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__609\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__140(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__140\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__612(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__612\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__141(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__141\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__615(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__615\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__142(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__142\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__618(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__618\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__143(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__143\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__621(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__621\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__144(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__144\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__624(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__624\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__145(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__145\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__627(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__627\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__146(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__146\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__630(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__630\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__147(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__147\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__633(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__633\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__148(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__148\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__636(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__636\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__149(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__149\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__639(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__639\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__150(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__150\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__642(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__642\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__151(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__151\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__645(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__645\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__152(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__152\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__648(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__648\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__153(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__153\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__651(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__651\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__154(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__154\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__654(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__654\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__155(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__155\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__657(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__657\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__156(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__156\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__660(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__660\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__157(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__157\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__663(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__663\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__158(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__158\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__666(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__666\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__159(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__159\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__669(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__669\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__160(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__160\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__672(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__672\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__161(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__161\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__675(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__675\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__162(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__162\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__678(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__678\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__163(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__163\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__681(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__681\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__164(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__164\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__684(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__684\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__165(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__165\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__687(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__687\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__166(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__166\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__690(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__690\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__167(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__167\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__693(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__693\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__168(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__168\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__696(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__696\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__169(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__169\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__699(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__699\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__170(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__170\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__702(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__702\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__171(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__171\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__705(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__705\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__172(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__172\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__708(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__708\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__173(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__173\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__711(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__711\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__174(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__174\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__714(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__714\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__175(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__175\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__717(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__717\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__176(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__176\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__720(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__720\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__177(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__177\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__723(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__723\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__178(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__178\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__726(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__726\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__179(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__179\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__729(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__729\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__180(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__180\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__732(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__732\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__181(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__181\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__735(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__735\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__182(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__182\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__738(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__738\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__183(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__183\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__741(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__741\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__184(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__184\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__744(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__744\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__185(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__185\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__747(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__747\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__186(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__186\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__750(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__750\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__187(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__187\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__753(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__753\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__188(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__188\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__756(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__756\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__189(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__189\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__759(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__759\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__190(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__190\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__762(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__762\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__191(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__191\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__765(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__765\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_rd_en_d1;
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__192(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__192\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_rd_en_d1) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_wr_en_d2)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__768(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__768\n"); );
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q))));
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_wr_en_d2;
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_rd_en_d1;
    }
}
