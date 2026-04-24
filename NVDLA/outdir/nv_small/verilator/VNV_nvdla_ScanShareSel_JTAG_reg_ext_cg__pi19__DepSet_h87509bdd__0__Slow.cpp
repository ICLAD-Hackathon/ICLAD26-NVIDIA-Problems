// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19.h"

VL_ATTR_COLD void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__1(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__1\n"); );
    // Body
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_ATTR_COLD void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___ctor_var_reset(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_ = VL_RAND_RESET_I(1);
    vlSelf->scanin = VL_RAND_RESET_I(1);
    vlSelf->sel = VL_RAND_RESET_I(1);
    vlSelf->shiftDR = VL_RAND_RESET_I(1);
    vlSelf->scanout = VL_RAND_RESET_I(1);
    vlSelf->D = VL_RAND_RESET_I(7);
    vlSelf->Q = VL_RAND_RESET_I(7);
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
}
