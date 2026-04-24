// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13.h"

VL_ATTR_COLD void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13___settle__TOP__NV_nvdla__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__DOT__r_nv_ram_rws_16x272__DOT__testInst_Data_reg_r0_271_16__2(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13___settle__TOP__NV_nvdla__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__DOT__r_nv_ram_rws_16x272__DOT__testInst_Data_reg_r0_271_16__2\n"); );
    // Body
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
    vlSelf->Q[2U] = ((0xfffffff0U & vlSelf->Q[2U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[2U] = ((0xffffff0fU & vlSelf->Q[2U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[2U] = ((0xfffff0ffU & vlSelf->Q[2U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[2U] = ((0xffff0fffU & vlSelf->Q[2U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[2U] = ((0xfff0ffffU & vlSelf->Q[2U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[2U] = ((0xff0fffffU & vlSelf->Q[2U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[2U] = ((0xf0ffffffU & vlSelf->Q[2U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[2U] = ((0xfffffffU & vlSelf->Q[2U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
    vlSelf->Q[3U] = ((0xfffffff0U & vlSelf->Q[3U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[3U] = ((0xffffff0fU & vlSelf->Q[3U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[3U] = ((0xfffff0ffU & vlSelf->Q[3U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[3U] = ((0xffff0fffU & vlSelf->Q[3U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[3U] = ((0xfff0ffffU & vlSelf->Q[3U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[3U] = ((0xff0fffffU & vlSelf->Q[3U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[3U] = ((0xf0ffffffU & vlSelf->Q[3U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[3U] = ((0xfffffffU & vlSelf->Q[3U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
    vlSelf->Q[4U] = ((0xfffffff0U & vlSelf->Q[4U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[4U] = ((0xffffff0fU & vlSelf->Q[4U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[4U] = ((0xfffff0ffU & vlSelf->Q[4U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[4U] = ((0xffff0fffU & vlSelf->Q[4U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[4U] = ((0xfff0ffffU & vlSelf->Q[4U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[4U] = ((0xff0fffffU & vlSelf->Q[4U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[4U] = ((0xf0ffffffU & vlSelf->Q[4U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[4U] = ((0xfffffffU & vlSelf->Q[4U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
    vlSelf->Q[5U] = ((0xfffffff0U & vlSelf->Q[5U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[5U] = ((0xffffff0fU & vlSelf->Q[5U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[5U] = ((0xfffff0ffU & vlSelf->Q[5U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[5U] = ((0xffff0fffU & vlSelf->Q[5U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[5U] = ((0xfff0ffffU & vlSelf->Q[5U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[5U] = ((0xff0fffffU & vlSelf->Q[5U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[5U] = ((0xf0ffffffU & vlSelf->Q[5U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[5U] = ((0xfffffffU & vlSelf->Q[5U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
    vlSelf->Q[6U] = ((0xfffffff0U & vlSelf->Q[6U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[6U] = ((0xffffff0fU & vlSelf->Q[6U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[6U] = ((0xfffff0ffU & vlSelf->Q[6U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[6U] = ((0xffff0fffU & vlSelf->Q[6U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[6U] = ((0xfff0ffffU & vlSelf->Q[6U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[6U] = ((0xff0fffffU & vlSelf->Q[6U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[6U] = ((0xf0ffffffU & vlSelf->Q[6U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[6U] = ((0xfffffffU & vlSelf->Q[6U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
    vlSelf->Q[7U] = ((0xfffffff0U & vlSelf->Q[7U]) 
                     | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                         << 3U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->Q[7U] = ((0xffffff0fU & vlSelf->Q[7U]) 
                     | (0xfffffff0U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                        << 7U) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 4U))))));
    vlSelf->Q[7U] = ((0xfffff0ffU & vlSelf->Q[7U]) 
                     | (0xffffff00U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xbU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                          << 9U) | 
                                         ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q) 
                                          << 8U))))));
    vlSelf->Q[7U] = ((0xffff0fffU & vlSelf->Q[7U]) 
                     | (0xfffff000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                          << 0xdU) 
                                         | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0xcU))))));
    vlSelf->Q[7U] = ((0xfff0ffffU & vlSelf->Q[7U]) 
                     | (0xffff0000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x13U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x11U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x10U))))));
    vlSelf->Q[7U] = ((0xff0fffffU & vlSelf->Q[7U]) 
                     | (0xfff00000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x16U) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x15U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x14U))))));
    vlSelf->Q[7U] = ((0xf0ffffffU & vlSelf->Q[7U]) 
                     | (0xff000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x1bU) | 
                                       (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0x1aU) 
                                        | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x19U) 
                                           | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0x18U))))));
    vlSelf->Q[7U] = ((0xfffffffU & vlSelf->Q[7U]) | 
                     (0xf0000000U & (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 0x1dU) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 0x1cU))))));
}

VL_ATTR_COLD void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13___ctor_var_reset(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi13___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_ = VL_RAND_RESET_I(1);
    vlSelf->scanin = VL_RAND_RESET_I(1);
    vlSelf->sel = VL_RAND_RESET_I(1);
    vlSelf->shiftDR = VL_RAND_RESET_I(1);
    vlSelf->scanout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->D);
    VL_RAND_RESET_W(256, vlSelf->Q);
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
    vlSelf->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
}
