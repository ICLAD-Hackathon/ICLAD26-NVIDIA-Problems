// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22.h"

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0__3(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0__3\n"); );
    // Body
    vlSelf->Q[2U] = (3U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                            << 1U) | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q)));
    vlSelf->Q[0U] = ((0xfffffff0U & vlSelf->Q[0U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[0U] = ((0xffffff0fU & vlSelf->Q[0U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[0U] = ((0xfffff0ffU & vlSelf->Q[0U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[0U] = ((0xffff0fffU & vlSelf->Q[0U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[0U] = ((0xfff0ffffU & vlSelf->Q[0U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[0U] = ((0xff0fffffU & vlSelf->Q[0U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[0U] = ((0xf0ffffffU & vlSelf->Q[0U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[0U] = ((0xfffffffU & vlSelf->Q[0U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
    vlSelf->Q[1U] = ((0xfffffff0U & vlSelf->Q[1U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[1U] = ((0xffffff0fU & vlSelf->Q[1U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[1U] = ((0xfffff0ffU & vlSelf->Q[1U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[1U] = ((0xffff0fffU & vlSelf->Q[1U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[1U] = ((0xfff0ffffU & vlSelf->Q[1U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[1U] = ((0xff0fffffU & vlSelf->Q[1U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[1U] = ((0xf0ffffffU & vlSelf->Q[1U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[1U] = ((0xfffffffU & vlSelf->Q[1U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
}
