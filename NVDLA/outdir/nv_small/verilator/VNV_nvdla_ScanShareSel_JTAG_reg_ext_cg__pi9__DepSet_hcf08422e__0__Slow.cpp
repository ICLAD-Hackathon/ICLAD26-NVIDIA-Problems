// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9.h"

VL_ATTR_COLD void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0__65(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0__65\n"); );
    // Body
    vlSelf->__PVT__Q = ((0xfffffffffffffff0ULL & vlSelf->__PVT__Q) 
                        | (IData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))))));
    vlSelf->__PVT__Q = ((0xffffffffffffff0fULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 4U));
    vlSelf->__PVT__Q = ((0xfffffffffffff0ffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 8U));
    vlSelf->__PVT__Q = ((0xffffffffffff0fffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0xcU));
    vlSelf->__PVT__Q = ((0xfffffffffff0ffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x10U));
    vlSelf->__PVT__Q = ((0xffffffffff0fffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x14U));
    vlSelf->__PVT__Q = ((0xfffffffff0ffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x18U));
    vlSelf->__PVT__Q = ((0xffffffff0fffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x1cU));
    vlSelf->__PVT__Q = ((0xfffffff0ffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x20U));
    vlSelf->__PVT__Q = ((0xffffff0fffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x24U));
    vlSelf->__PVT__Q = ((0xfffff0ffffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x28U));
    vlSelf->__PVT__Q = ((0xffff0fffffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x2cU));
    vlSelf->__PVT__Q = ((0xfff0ffffffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x30U));
    vlSelf->__PVT__Q = ((0xff0fffffffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x34U));
    vlSelf->__PVT__Q = ((0xf0ffffffffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x38U));
    vlSelf->__PVT__Q = ((0xfffffffffffffffULL & vlSelf->__PVT__Q) 
                        | ((QData)((IData)((((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q)))))) 
                           << 0x3cU));
}

VL_ATTR_COLD void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9___ctor_var_reset(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_ = VL_RAND_RESET_I(1);
    vlSelf->__PVT__scanin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__shiftDR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__scanout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__Q = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
}
