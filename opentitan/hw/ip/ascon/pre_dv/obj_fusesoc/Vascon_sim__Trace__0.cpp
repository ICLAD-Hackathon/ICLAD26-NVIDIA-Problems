// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vascon_sim__Syms.h"


void Vascon_sim___024root__trace_chg_sub_0(Vascon_sim___024root* vlSelf, VerilatedFst* tracep);

void Vascon_sim___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root__trace_chg_top_0\n"); );
    // Init
    Vascon_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_sim___024root*>(voidSelf);
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vascon_sim___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<10>/*319:0*/ Vascon_sim__ConstPool__CONST_hab76c978_0;

void Vascon_sim___024root__trace_chg_sub_0(Vascon_sim___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h526b542b__0;
    VlWide<10>/*319:0*/ __Vtemp_ha5586424__0;
    VlWide<4>/*127:0*/ __Vtemp_hcad25c33__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgBit(oldp+0,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [0U][3U] >> 0xcU))));
        tracep->chgCData(oldp+1,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0U][3U] >> 9U))),3);
        tracep->chgCData(oldp+2,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0U][3U] >> 6U))),3);
        tracep->chgCData(oldp+3,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0U][3U] >> 4U))),2);
        tracep->chgCData(oldp+4,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0U][3U] 
                                            << 4U) 
                                           | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0U][2U] 
                                              >> 0x1cU)))),8);
        tracep->chgIData(oldp+5,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                   [0U][2U] << 4U) 
                                  | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+6,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0U][1U] 
                                          >> 0x18U))),4);
        tracep->chgIData(oldp+7,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                   [0U][1U] << 8U) 
                                  | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+8,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [0U][0U] 
                                           >> 0x13U))),5);
        tracep->chgCData(oldp+9,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0U][0U] 
                                          >> 0xfU))),4);
        tracep->chgCData(oldp+10,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+11,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+12,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [0U][0U])));
        tracep->chgBit(oldp+13,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [1U][3U] >> 0xcU))));
        tracep->chgCData(oldp+14,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [1U][3U] >> 9U))),3);
        tracep->chgCData(oldp+15,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [1U][3U] >> 6U))),3);
        tracep->chgCData(oldp+16,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [1U][3U] >> 4U))),2);
        tracep->chgCData(oldp+17,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [1U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [1U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+18,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [1U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [1U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+19,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [1U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+20,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [1U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [1U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+21,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [1U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+22,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [1U][0U] 
                                           >> 0xfU))),4);
        tracep->chgCData(oldp+23,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [1U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+24,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [1U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+25,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [1U][0U])));
        tracep->chgBit(oldp+26,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [2U][3U] >> 0xcU))));
        tracep->chgCData(oldp+27,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [2U][3U] >> 9U))),3);
        tracep->chgCData(oldp+28,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [2U][3U] >> 6U))),3);
        tracep->chgCData(oldp+29,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [2U][3U] >> 4U))),2);
        tracep->chgCData(oldp+30,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [2U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [2U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+31,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [2U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [2U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+32,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [2U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+33,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [2U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [2U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+34,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [2U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+35,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [2U][0U] 
                                           >> 0xfU))),4);
        tracep->chgCData(oldp+36,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [2U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+37,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [2U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+38,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [2U][0U])));
        tracep->chgBit(oldp+39,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [3U][3U] >> 0xcU))));
        tracep->chgCData(oldp+40,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [3U][3U] >> 9U))),3);
        tracep->chgCData(oldp+41,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [3U][3U] >> 6U))),3);
        tracep->chgCData(oldp+42,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [3U][3U] >> 4U))),2);
        tracep->chgCData(oldp+43,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [3U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [3U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+44,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [3U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [3U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+45,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [3U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+46,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [3U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [3U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+47,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [3U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+48,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [3U][0U] 
                                           >> 0xfU))),4);
        tracep->chgCData(oldp+49,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [3U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+50,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [3U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+51,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [3U][0U])));
        tracep->chgBit(oldp+52,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [4U][3U] >> 0xcU))));
        tracep->chgCData(oldp+53,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [4U][3U] >> 9U))),3);
        tracep->chgCData(oldp+54,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [4U][3U] >> 6U))),3);
        tracep->chgCData(oldp+55,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [4U][3U] >> 4U))),2);
        tracep->chgCData(oldp+56,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [4U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [4U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+57,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [4U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [4U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+58,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [4U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+59,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [4U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [4U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+60,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [4U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+61,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [4U][0U] 
                                           >> 0xfU))),4);
        tracep->chgCData(oldp+62,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [4U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+63,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [4U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+64,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [4U][0U])));
        tracep->chgBit(oldp+65,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [5U][3U] >> 0xcU))));
        tracep->chgCData(oldp+66,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [5U][3U] >> 9U))),3);
        tracep->chgCData(oldp+67,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [5U][3U] >> 6U))),3);
        tracep->chgCData(oldp+68,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [5U][3U] >> 4U))),2);
        tracep->chgCData(oldp+69,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [5U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [5U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+70,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [5U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [5U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+71,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [5U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+72,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [5U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [5U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+73,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [5U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+74,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [5U][0U] 
                                           >> 0xfU))),4);
        tracep->chgCData(oldp+75,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [5U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+76,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [5U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+77,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [5U][0U])));
        tracep->chgBit(oldp+78,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [6U][3U] >> 0xcU))));
        tracep->chgCData(oldp+79,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [6U][3U] >> 9U))),3);
        tracep->chgCData(oldp+80,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [6U][3U] >> 6U))),3);
        tracep->chgCData(oldp+81,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [6U][3U] >> 4U))),2);
        tracep->chgCData(oldp+82,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [6U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [6U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+83,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [6U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [6U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+84,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [6U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+85,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [6U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [6U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+86,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [6U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+87,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [6U][0U] 
                                           >> 0xfU))),4);
        tracep->chgCData(oldp+88,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [6U][0U] 
                                            >> 8U))),7);
        tracep->chgCData(oldp+89,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [6U][0U] 
                                            >> 1U))),7);
        tracep->chgBit(oldp+90,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                 [6U][0U])));
        tracep->chgBit(oldp+91,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [7U][3U] >> 0xcU))));
        tracep->chgCData(oldp+92,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [7U][3U] >> 9U))),3);
        tracep->chgCData(oldp+93,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [7U][3U] >> 6U))),3);
        tracep->chgCData(oldp+94,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                         [7U][3U] >> 4U))),2);
        tracep->chgCData(oldp+95,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [7U][3U] 
                                             << 4U) 
                                            | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                               [7U][2U] 
                                               >> 0x1cU)))),8);
        tracep->chgIData(oldp+96,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [7U][2U] << 4U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [7U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+97,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                           [7U][1U] 
                                           >> 0x18U))),4);
        tracep->chgIData(oldp+98,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                    [7U][1U] << 8U) 
                                   | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                      [7U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+99,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [7U][0U] 
                                            >> 0x13U))),5);
        tracep->chgCData(oldp+100,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [7U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+101,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [7U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+102,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [7U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+103,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [7U][0U])));
        tracep->chgBit(oldp+104,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [8U][3U] >> 0xcU))));
        tracep->chgCData(oldp+105,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [8U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+106,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [8U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+107,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [8U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+108,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [8U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [8U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+109,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [8U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [8U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+110,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [8U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+111,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [8U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [8U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+112,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [8U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+113,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [8U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+114,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [8U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+115,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [8U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+116,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [8U][0U])));
        tracep->chgBit(oldp+117,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [9U][3U] >> 0xcU))));
        tracep->chgCData(oldp+118,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [9U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+119,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [9U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+120,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [9U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+121,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [9U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [9U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+122,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [9U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [9U][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+123,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [9U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+124,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [9U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [9U][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+125,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [9U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+126,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [9U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+127,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [9U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+128,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [9U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+129,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [9U][0U])));
        tracep->chgBit(oldp+130,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0xaU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+131,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xaU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+132,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xaU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+133,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xaU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+134,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0xaU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0xaU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+135,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xaU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xaU][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+136,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xaU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+137,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xaU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xaU][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+138,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xaU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+139,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xaU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+140,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xaU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+141,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xaU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+142,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0xaU][0U])));
        tracep->chgBit(oldp+143,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0xbU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+144,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xbU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+145,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xbU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+146,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xbU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+147,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0xbU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0xbU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+148,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xbU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xbU][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+149,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xbU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+150,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xbU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xbU][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+151,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xbU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+152,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xbU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+153,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xbU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+154,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xbU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+155,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0xbU][0U])));
        tracep->chgBit(oldp+156,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0xcU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+157,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xcU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+158,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xcU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+159,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xcU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+160,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0xcU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0xcU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+161,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xcU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xcU][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+162,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xcU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+163,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xcU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xcU][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+164,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xcU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+165,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xcU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+166,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xcU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+167,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xcU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+168,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0xcU][0U])));
        tracep->chgBit(oldp+169,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0xdU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+170,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xdU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+171,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xdU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+172,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xdU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+173,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0xdU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0xdU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+174,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xdU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xdU][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+175,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xdU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+176,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xdU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xdU][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+177,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xdU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+178,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xdU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+179,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xdU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+180,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xdU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+181,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0xdU][0U])));
        tracep->chgBit(oldp+182,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0xeU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+183,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xeU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+184,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xeU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+185,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xeU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+186,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0xeU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0xeU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+187,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xeU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xeU][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+188,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xeU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+189,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xeU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xeU][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+190,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xeU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+191,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xeU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+192,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xeU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+193,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xeU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+194,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0xeU][0U])));
        tracep->chgBit(oldp+195,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0xfU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+196,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xfU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+197,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xfU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+198,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0xfU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+199,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0xfU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0xfU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+200,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xfU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xfU][1U] >> 0x1cU))),32);
        tracep->chgCData(oldp+201,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xfU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+202,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0xfU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0xfU][0U] >> 0x18U))),32);
        tracep->chgCData(oldp+203,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xfU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+204,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0xfU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+205,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xfU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+206,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0xfU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+207,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0xfU][0U])));
        tracep->chgBit(oldp+208,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x10U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+209,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x10U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+210,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x10U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+211,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x10U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+212,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x10U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x10U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+213,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x10U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x10U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+214,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x10U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+215,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x10U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x10U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+216,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x10U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+217,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x10U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+218,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x10U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+219,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x10U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+220,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x10U][0U])));
        tracep->chgBit(oldp+221,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x11U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+222,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x11U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+223,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x11U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+224,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x11U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+225,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x11U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x11U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+226,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x11U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x11U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+227,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x11U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+228,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x11U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x11U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+229,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x11U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+230,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x11U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+231,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x11U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+232,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x11U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+233,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x11U][0U])));
        tracep->chgBit(oldp+234,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x12U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+235,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x12U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+236,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x12U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+237,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x12U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+238,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x12U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x12U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+239,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x12U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x12U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+240,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x12U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+241,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x12U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x12U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+242,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x12U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+243,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x12U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+244,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x12U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+245,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x12U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+246,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x12U][0U])));
        tracep->chgBit(oldp+247,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x13U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+248,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x13U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+249,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x13U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+250,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x13U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+251,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x13U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x13U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+252,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x13U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x13U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+253,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x13U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+254,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x13U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x13U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+255,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x13U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+256,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x13U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+257,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x13U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+258,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x13U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+259,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x13U][0U])));
        tracep->chgBit(oldp+260,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x14U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+261,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x14U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+262,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x14U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+263,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x14U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+264,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x14U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x14U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+265,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x14U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x14U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+266,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x14U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+267,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x14U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x14U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+268,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x14U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+269,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x14U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+270,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x14U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+271,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x14U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+272,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x14U][0U])));
        tracep->chgBit(oldp+273,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x15U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+274,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x15U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+275,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x15U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+276,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x15U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+277,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x15U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x15U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+278,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x15U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x15U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+279,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x15U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+280,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x15U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x15U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+281,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x15U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+282,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x15U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+283,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x15U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+284,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x15U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+285,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x15U][0U])));
        tracep->chgBit(oldp+286,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x16U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+287,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x16U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+288,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x16U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+289,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x16U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+290,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x16U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x16U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+291,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x16U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x16U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+292,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x16U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+293,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x16U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x16U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+294,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x16U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+295,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x16U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+296,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x16U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+297,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x16U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+298,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x16U][0U])));
        tracep->chgBit(oldp+299,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x17U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+300,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x17U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+301,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x17U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+302,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x17U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+303,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x17U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x17U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+304,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x17U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x17U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+305,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x17U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+306,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x17U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x17U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+307,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x17U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+308,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x17U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+309,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x17U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+310,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x17U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+311,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x17U][0U])));
        tracep->chgBit(oldp+312,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x18U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+313,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x18U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+314,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x18U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+315,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x18U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+316,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x18U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x18U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+317,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x18U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x18U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+318,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x18U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+319,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x18U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x18U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+320,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x18U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+321,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x18U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+322,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x18U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+323,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x18U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+324,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x18U][0U])));
        tracep->chgBit(oldp+325,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x19U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+326,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x19U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+327,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x19U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+328,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x19U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+329,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x19U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x19U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+330,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x19U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x19U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+331,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x19U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+332,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x19U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x19U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+333,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x19U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+334,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x19U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+335,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x19U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+336,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x19U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+337,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x19U][0U])));
        tracep->chgBit(oldp+338,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x1aU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+339,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1aU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+340,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1aU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+341,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1aU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+342,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x1aU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x1aU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+343,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1aU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1aU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+344,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1aU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+345,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1aU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1aU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+346,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1aU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+347,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1aU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+348,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1aU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+349,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1aU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+350,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x1aU][0U])));
        tracep->chgBit(oldp+351,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x1bU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+352,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1bU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+353,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1bU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+354,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1bU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+355,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x1bU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x1bU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+356,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1bU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1bU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+357,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1bU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+358,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1bU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1bU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+359,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1bU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+360,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1bU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+361,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1bU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+362,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1bU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+363,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x1bU][0U])));
        tracep->chgBit(oldp+364,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x1cU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+365,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1cU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+366,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1cU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+367,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1cU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+368,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x1cU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x1cU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+369,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1cU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1cU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+370,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1cU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+371,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1cU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1cU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+372,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1cU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+373,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1cU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+374,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1cU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+375,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1cU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+376,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x1cU][0U])));
        tracep->chgBit(oldp+377,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x1dU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+378,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1dU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+379,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1dU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+380,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1dU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+381,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x1dU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x1dU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+382,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1dU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1dU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+383,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1dU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+384,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1dU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1dU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+385,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1dU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+386,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1dU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+387,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1dU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+388,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1dU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+389,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x1dU][0U])));
        tracep->chgBit(oldp+390,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x1eU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+391,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1eU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+392,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1eU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+393,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1eU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+394,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x1eU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x1eU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+395,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1eU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1eU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+396,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1eU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+397,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1eU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1eU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+398,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1eU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+399,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1eU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+400,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1eU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+401,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1eU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+402,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x1eU][0U])));
        tracep->chgBit(oldp+403,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x1fU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+404,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1fU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+405,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1fU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+406,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x1fU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+407,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x1fU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x1fU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+408,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1fU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1fU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+409,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1fU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+410,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x1fU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x1fU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+411,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1fU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+412,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x1fU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+413,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1fU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+414,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x1fU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+415,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x1fU][0U])));
        tracep->chgBit(oldp+416,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x20U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+417,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x20U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+418,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x20U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+419,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x20U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+420,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x20U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x20U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+421,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x20U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x20U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+422,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x20U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+423,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x20U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x20U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+424,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x20U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+425,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x20U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+426,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x20U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+427,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x20U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+428,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x20U][0U])));
        tracep->chgBit(oldp+429,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x21U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+430,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x21U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+431,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x21U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+432,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x21U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+433,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x21U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x21U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+434,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x21U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x21U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+435,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x21U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+436,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x21U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x21U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+437,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x21U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+438,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x21U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+439,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x21U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+440,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x21U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+441,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x21U][0U])));
        tracep->chgBit(oldp+442,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x22U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+443,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x22U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+444,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x22U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+445,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x22U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+446,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x22U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x22U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+447,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x22U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x22U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+448,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x22U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+449,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x22U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x22U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+450,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x22U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+451,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x22U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+452,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x22U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+453,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x22U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+454,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x22U][0U])));
        tracep->chgBit(oldp+455,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x23U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+456,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x23U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+457,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x23U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+458,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x23U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+459,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x23U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x23U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+460,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x23U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x23U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+461,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x23U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+462,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x23U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x23U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+463,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x23U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+464,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x23U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+465,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x23U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+466,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x23U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+467,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x23U][0U])));
        tracep->chgBit(oldp+468,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x24U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+469,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x24U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+470,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x24U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+471,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x24U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+472,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x24U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x24U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+473,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x24U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x24U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+474,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x24U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+475,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x24U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x24U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+476,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x24U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+477,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x24U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+478,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x24U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+479,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x24U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+480,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x24U][0U])));
        tracep->chgBit(oldp+481,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x25U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+482,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x25U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+483,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x25U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+484,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x25U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+485,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x25U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x25U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+486,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x25U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x25U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+487,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x25U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+488,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x25U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x25U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+489,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x25U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+490,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x25U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+491,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x25U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+492,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x25U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+493,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x25U][0U])));
        tracep->chgBit(oldp+494,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x26U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+495,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x26U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+496,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x26U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+497,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x26U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+498,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x26U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x26U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+499,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x26U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x26U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+500,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x26U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+501,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x26U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x26U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+502,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x26U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+503,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x26U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+504,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x26U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+505,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x26U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+506,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x26U][0U])));
        tracep->chgBit(oldp+507,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x27U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+508,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x27U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+509,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x27U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+510,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x27U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+511,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x27U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x27U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+512,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x27U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x27U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+513,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x27U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+514,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x27U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x27U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+515,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x27U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+516,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x27U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+517,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x27U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+518,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x27U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+519,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x27U][0U])));
        tracep->chgBit(oldp+520,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x28U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+521,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x28U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+522,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x28U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+523,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x28U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+524,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x28U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x28U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+525,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x28U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x28U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+526,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x28U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+527,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x28U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x28U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+528,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x28U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+529,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x28U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+530,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x28U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+531,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x28U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+532,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x28U][0U])));
        tracep->chgBit(oldp+533,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x29U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+534,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x29U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+535,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x29U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+536,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x29U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+537,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x29U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x29U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+538,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x29U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x29U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+539,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x29U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+540,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x29U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x29U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+541,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x29U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+542,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x29U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+543,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x29U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+544,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x29U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+545,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x29U][0U])));
        tracep->chgBit(oldp+546,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x2aU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+547,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2aU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+548,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2aU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+549,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2aU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+550,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x2aU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x2aU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+551,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2aU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2aU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+552,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2aU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+553,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2aU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2aU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+554,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2aU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+555,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2aU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+556,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2aU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+557,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2aU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+558,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x2aU][0U])));
        tracep->chgBit(oldp+559,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x2bU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+560,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2bU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+561,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2bU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+562,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2bU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+563,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x2bU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x2bU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+564,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2bU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2bU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+565,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2bU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+566,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2bU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2bU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+567,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2bU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+568,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2bU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+569,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2bU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+570,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2bU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+571,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x2bU][0U])));
        tracep->chgBit(oldp+572,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x2cU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+573,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2cU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+574,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2cU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+575,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2cU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+576,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x2cU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x2cU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+577,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2cU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2cU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+578,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2cU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+579,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2cU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2cU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+580,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2cU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+581,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2cU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+582,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2cU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+583,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2cU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+584,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x2cU][0U])));
        tracep->chgBit(oldp+585,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x2dU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+586,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2dU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+587,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2dU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+588,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2dU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+589,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x2dU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x2dU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+590,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2dU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2dU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+591,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2dU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+592,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2dU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2dU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+593,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2dU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+594,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2dU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+595,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2dU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+596,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2dU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+597,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x2dU][0U])));
        tracep->chgBit(oldp+598,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x2eU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+599,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2eU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+600,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2eU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+601,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2eU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+602,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x2eU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x2eU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+603,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2eU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2eU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+604,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2eU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+605,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2eU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2eU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+606,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2eU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+607,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2eU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+608,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2eU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+609,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2eU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+610,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x2eU][0U])));
        tracep->chgBit(oldp+611,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x2fU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+612,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2fU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+613,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2fU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+614,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x2fU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+615,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x2fU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x2fU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+616,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2fU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2fU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+617,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2fU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+618,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x2fU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x2fU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+619,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2fU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+620,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x2fU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+621,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2fU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+622,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x2fU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+623,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x2fU][0U])));
        tracep->chgBit(oldp+624,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x30U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+625,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x30U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+626,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x30U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+627,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x30U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+628,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x30U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x30U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+629,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x30U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x30U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+630,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x30U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+631,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x30U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x30U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+632,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x30U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+633,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x30U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+634,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x30U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+635,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x30U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+636,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x30U][0U])));
        tracep->chgBit(oldp+637,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x31U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+638,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x31U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+639,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x31U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+640,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x31U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+641,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x31U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x31U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+642,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x31U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x31U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+643,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x31U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+644,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x31U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x31U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+645,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x31U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+646,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x31U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+647,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x31U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+648,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x31U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+649,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x31U][0U])));
        tracep->chgBit(oldp+650,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x32U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+651,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x32U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+652,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x32U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+653,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x32U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+654,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x32U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x32U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+655,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x32U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x32U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+656,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x32U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+657,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x32U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x32U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+658,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x32U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+659,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x32U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+660,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x32U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+661,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x32U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+662,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x32U][0U])));
        tracep->chgBit(oldp+663,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x33U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+664,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x33U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+665,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x33U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+666,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x33U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+667,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x33U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x33U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+668,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x33U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x33U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+669,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x33U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+670,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x33U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x33U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+671,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x33U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+672,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x33U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+673,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x33U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+674,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x33U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+675,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x33U][0U])));
        tracep->chgBit(oldp+676,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x34U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+677,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x34U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+678,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x34U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+679,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x34U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+680,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x34U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x34U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+681,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x34U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x34U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+682,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x34U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+683,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x34U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x34U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+684,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x34U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+685,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x34U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+686,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x34U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+687,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x34U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+688,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x34U][0U])));
        tracep->chgBit(oldp+689,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x35U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+690,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x35U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+691,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x35U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+692,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x35U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+693,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x35U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x35U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+694,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x35U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x35U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+695,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x35U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+696,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x35U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x35U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+697,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x35U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+698,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x35U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+699,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x35U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+700,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x35U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+701,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x35U][0U])));
        tracep->chgBit(oldp+702,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x36U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+703,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x36U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+704,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x36U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+705,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x36U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+706,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x36U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x36U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+707,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x36U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x36U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+708,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x36U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+709,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x36U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x36U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+710,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x36U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+711,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x36U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+712,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x36U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+713,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x36U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+714,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x36U][0U])));
        tracep->chgBit(oldp+715,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x37U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+716,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x37U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+717,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x37U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+718,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x37U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+719,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x37U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x37U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+720,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x37U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x37U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+721,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x37U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+722,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x37U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x37U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+723,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x37U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+724,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x37U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+725,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x37U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+726,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x37U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+727,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x37U][0U])));
        tracep->chgBit(oldp+728,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x38U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+729,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x38U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+730,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x38U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+731,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x38U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+732,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x38U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x38U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+733,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x38U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x38U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+734,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x38U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+735,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x38U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x38U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+736,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x38U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+737,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x38U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+738,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x38U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+739,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x38U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+740,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x38U][0U])));
        tracep->chgBit(oldp+741,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x39U][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+742,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x39U][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+743,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x39U][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+744,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x39U][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+745,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x39U][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x39U][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+746,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x39U][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x39U][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+747,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x39U][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+748,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x39U][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x39U][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+749,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x39U][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+750,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x39U][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+751,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x39U][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+752,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x39U][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+753,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x39U][0U])));
        tracep->chgBit(oldp+754,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x3aU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+755,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3aU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+756,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3aU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+757,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3aU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+758,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x3aU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x3aU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+759,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x3aU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x3aU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+760,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x3aU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+761,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x3aU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x3aU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+762,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3aU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+763,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x3aU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+764,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3aU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+765,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3aU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+766,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x3aU][0U])));
        tracep->chgBit(oldp+767,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x3bU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+768,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3bU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+769,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3bU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+770,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3bU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+771,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x3bU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x3bU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+772,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x3bU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x3bU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+773,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x3bU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+774,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x3bU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x3bU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+775,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3bU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+776,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x3bU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+777,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3bU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+778,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3bU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+779,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x3bU][0U])));
        tracep->chgBit(oldp+780,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                        [0x3cU][3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+781,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3cU][3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+782,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3cU][3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+783,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                          [0x3cU][3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+784,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                              [0x3cU][3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                                [0x3cU][2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+785,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x3cU][2U] << 4U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x3cU][1U] 
                                       >> 0x1cU))),32);
        tracep->chgCData(oldp+786,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x3cU][1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+787,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                     [0x3cU][1U] << 8U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                       [0x3cU][0U] 
                                       >> 0x18U))),32);
        tracep->chgCData(oldp+788,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3cU][0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+789,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                            [0x3cU][0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+790,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3cU][0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+791,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                             [0x3cU][0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+792,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                                  [0x3cU][0U])));
        tracep->chgBit(oldp+793,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0U][2U] >> 1U))));
        tracep->chgCData(oldp+794,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [0U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [0U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+795,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [0U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+796,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [0U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+797,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+798,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0U][1U] >> 0x10U))));
        tracep->chgIData(oldp+799,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [0U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [0U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+800,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+801,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+802,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0U][0U] >> 1U))));
        tracep->chgBit(oldp+803,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [0U][0U])));
        tracep->chgBit(oldp+804,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [1U][2U] >> 1U))));
        tracep->chgCData(oldp+805,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [1U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [1U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+806,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [1U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+807,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [1U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+808,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [1U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+809,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [1U][1U] >> 0x10U))));
        tracep->chgIData(oldp+810,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [1U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [1U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+811,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [1U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+812,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [1U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+813,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [1U][0U] >> 1U))));
        tracep->chgBit(oldp+814,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [1U][0U])));
        tracep->chgBit(oldp+815,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [2U][2U] >> 1U))));
        tracep->chgCData(oldp+816,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [2U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [2U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+817,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [2U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+818,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [2U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+819,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [2U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+820,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [2U][1U] >> 0x10U))));
        tracep->chgIData(oldp+821,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [2U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [2U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+822,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [2U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+823,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [2U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+824,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [2U][0U] >> 1U))));
        tracep->chgBit(oldp+825,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [2U][0U])));
        tracep->chgBit(oldp+826,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [3U][2U] >> 1U))));
        tracep->chgCData(oldp+827,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [3U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [3U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+828,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [3U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+829,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [3U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+830,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [3U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+831,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [3U][1U] >> 0x10U))));
        tracep->chgIData(oldp+832,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [3U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [3U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+833,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [3U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+834,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [3U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+835,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [3U][0U] >> 1U))));
        tracep->chgBit(oldp+836,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [3U][0U])));
        tracep->chgBit(oldp+837,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [4U][2U] >> 1U))));
        tracep->chgCData(oldp+838,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [4U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [4U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+839,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [4U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+840,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [4U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+841,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [4U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+842,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [4U][1U] >> 0x10U))));
        tracep->chgIData(oldp+843,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [4U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [4U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+844,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [4U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+845,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [4U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+846,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [4U][0U] >> 1U))));
        tracep->chgBit(oldp+847,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [4U][0U])));
        tracep->chgBit(oldp+848,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [5U][2U] >> 1U))));
        tracep->chgCData(oldp+849,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [5U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [5U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+850,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [5U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+851,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [5U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+852,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [5U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+853,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [5U][1U] >> 0x10U))));
        tracep->chgIData(oldp+854,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [5U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [5U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+855,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [5U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+856,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [5U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+857,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [5U][0U] >> 1U))));
        tracep->chgBit(oldp+858,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [5U][0U])));
        tracep->chgBit(oldp+859,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [6U][2U] >> 1U))));
        tracep->chgCData(oldp+860,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [6U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [6U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+861,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [6U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+862,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [6U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+863,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [6U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+864,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [6U][1U] >> 0x10U))));
        tracep->chgIData(oldp+865,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [6U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [6U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+866,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [6U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+867,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [6U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+868,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [6U][0U] >> 1U))));
        tracep->chgBit(oldp+869,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [6U][0U])));
        tracep->chgBit(oldp+870,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [7U][2U] >> 1U))));
        tracep->chgCData(oldp+871,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [7U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [7U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+872,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [7U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+873,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [7U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+874,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [7U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+875,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [7U][1U] >> 0x10U))));
        tracep->chgIData(oldp+876,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [7U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [7U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+877,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [7U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+878,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [7U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+879,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [7U][0U] >> 1U))));
        tracep->chgBit(oldp+880,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [7U][0U])));
        tracep->chgBit(oldp+881,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [8U][2U] >> 1U))));
        tracep->chgCData(oldp+882,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [8U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [8U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+883,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [8U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+884,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [8U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+885,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [8U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+886,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [8U][1U] >> 0x10U))));
        tracep->chgIData(oldp+887,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [8U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [8U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+888,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [8U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+889,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [8U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+890,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [8U][0U] >> 1U))));
        tracep->chgBit(oldp+891,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [8U][0U])));
        tracep->chgBit(oldp+892,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [9U][2U] >> 1U))));
        tracep->chgCData(oldp+893,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [9U][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [9U][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+894,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [9U][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+895,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [9U][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+896,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [9U][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+897,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [9U][1U] >> 0x10U))));
        tracep->chgIData(oldp+898,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [9U][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [9U][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+899,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [9U][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+900,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [9U][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+901,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [9U][0U] >> 1U))));
        tracep->chgBit(oldp+902,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [9U][0U])));
        tracep->chgBit(oldp+903,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0xaU][2U] 
                                        >> 1U))));
        tracep->chgCData(oldp+904,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [0xaU][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [0xaU][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+905,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [0xaU][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+906,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [0xaU][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+907,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0xaU][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+908,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0xaU][1U] 
                                        >> 0x10U))));
        tracep->chgIData(oldp+909,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [0xaU][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [0xaU][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+910,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0xaU][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+911,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0xaU][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+912,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0xaU][0U] 
                                        >> 1U))));
        tracep->chgBit(oldp+913,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [0xaU][0U])));
        tracep->chgBit(oldp+914,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0xbU][2U] 
                                        >> 1U))));
        tracep->chgCData(oldp+915,((7U & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [0xbU][2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [0xbU][1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+916,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [0xbU][1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+917,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [0xbU][1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+918,((0xffU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0xbU][1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+919,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0xbU][1U] 
                                        >> 0x10U))));
        tracep->chgIData(oldp+920,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                     [0xbU][1U] << 0x10U) 
                                    | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                       [0xbU][0U] >> 0x10U))),32);
        tracep->chgCData(oldp+921,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0xbU][0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+922,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                             [0xbU][0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+923,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [0xbU][0U] 
                                        >> 1U))));
        tracep->chgBit(oldp+924,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                  [0xbU][0U])));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+925,((1U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+926,((7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+927,((7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+928,((3U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+929,((0xffU & ((vlSelf->ascon_sim__DOT__tl_i[3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+930,(((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                     << 4U) | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                               >> 0x1cU))),32);
        tracep->chgCData(oldp+931,((0xfU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+932,(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                     << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                               >> 0x18U))),32);
        tracep->chgCData(oldp+933,((0x1fU & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+934,((0xfU & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+935,((0x7fU & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+936,((0x7fU & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+937,((1U & vlSelf->ascon_sim__DOT__tl_i[0U])));
        tracep->chgBit(oldp+938,((1U & (vlSelf->ascon_sim__DOT__tl_o[2U] 
                                        >> 1U))));
        tracep->chgCData(oldp+939,((7U & ((vlSelf->ascon_sim__DOT__tl_o[2U] 
                                           << 2U) | 
                                          (vlSelf->ascon_sim__DOT__tl_o[1U] 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+940,((7U & (vlSelf->ascon_sim__DOT__tl_o[1U] 
                                          >> 0x1bU))),3);
        tracep->chgCData(oldp+941,((3U & (vlSelf->ascon_sim__DOT__tl_o[1U] 
                                          >> 0x19U))),2);
        tracep->chgCData(oldp+942,((0xffU & (vlSelf->ascon_sim__DOT__tl_o[1U] 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+943,((1U & (vlSelf->ascon_sim__DOT__tl_o[1U] 
                                        >> 0x10U))));
        tracep->chgIData(oldp+944,(((vlSelf->ascon_sim__DOT__tl_o[1U] 
                                     << 0x10U) | (vlSelf->ascon_sim__DOT__tl_o[0U] 
                                                  >> 0x10U))),32);
        tracep->chgCData(oldp+945,((0x7fU & (vlSelf->ascon_sim__DOT__tl_o[0U] 
                                             >> 9U))),7);
        tracep->chgCData(oldp+946,((0x7fU & (vlSelf->ascon_sim__DOT__tl_o[0U] 
                                             >> 2U))),7);
        tracep->chgBit(oldp+947,((1U & (vlSelf->ascon_sim__DOT__tl_o[0U] 
                                        >> 1U))));
        tracep->chgBit(oldp+948,((1U & vlSelf->ascon_sim__DOT__tl_o[0U])));
        tracep->chgBit(oldp+949,((1U & (((0xbU >= (0xfU 
                                                   & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                          ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                         [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][2U]
                                          : 0U) >> 1U))));
        tracep->chgCData(oldp+950,((7U & ((((0xbU >= 
                                             (0xfU 
                                              & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                             ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                            [(0xfU 
                                              & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][2U]
                                             : 0U) 
                                           << 2U) | 
                                          (((0xbU >= 
                                             (0xfU 
                                              & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                             ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                            [(0xfU 
                                              & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                             : 0U) 
                                           >> 0x1eU)))),3);
        tracep->chgCData(oldp+951,((7U & (((0xbU >= 
                                            (0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                            ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                            : 0U) >> 0x1bU))),3);
        tracep->chgCData(oldp+952,((3U & (((0xbU >= 
                                            (0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                            ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                           [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                            : 0U) >> 0x19U))),2);
        tracep->chgCData(oldp+953,((0xffU & (((0xbU 
                                               >= (0xfU 
                                                   & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                               ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                              [(0xfU 
                                                & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                               : 0U) 
                                             >> 0x11U))),8);
        tracep->chgBit(oldp+954,((1U & (((0xbU >= (0xfU 
                                                   & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                          ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                         [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                          : 0U) >> 0x10U))));
        tracep->chgIData(oldp+955,(((((0xbU >= (0xfU 
                                                & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                       ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                      [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                       : 0U) << 0x10U) 
                                    | (((0xbU >= (0xfU 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                         ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][0U]
                                         : 0U) >> 0x10U))),32);
        tracep->chgCData(oldp+956,((0x7fU & (((0xbU 
                                               >= (0xfU 
                                                   & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                               ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                              [(0xfU 
                                                & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][0U]
                                               : 0U) 
                                             >> 9U))),7);
        tracep->chgCData(oldp+957,((0x7fU & (((0xbU 
                                               >= (0xfU 
                                                   & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                               ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                              [(0xfU 
                                                & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][0U]
                                               : 0U) 
                                             >> 2U))),7);
        tracep->chgBit(oldp+958,((1U & (((0xbU >= (0xfU 
                                                   & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                          ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                         [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][0U]
                                          : 0U) >> 1U))));
        tracep->chgBit(oldp+959,(((0xbU >= (0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                   ? (1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                      [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][0U])
                                   : 0U)));
        tracep->chgBit(oldp+960,((VL_LTES_III(32, 0xbU, vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter) 
                                  & VL_LTES_III(32, 0x3dU, vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter))));
        tracep->chgBit(oldp+961,(((vlSelf->ascon_sim__DOT__tl_o[0U] 
                                   & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                      >> 0xcU)) & (0xaU 
                                                   == vlSelf->ascon_sim__DOT__delay_counter))));
        tracep->chgBit(oldp+962,(vlSelf->ascon_sim__DOT__pop_response));
        tracep->chgIData(oldp+963,(vlSelf->ascon_sim__DOT__delay_counter),32);
        tracep->chgBit(oldp+964,((0xaU == vlSelf->ascon_sim__DOT__delay_counter)));
        tracep->chgBit(oldp+965,(vlSelf->ascon_sim__DOT__test_passed_q));
        tracep->chgBit(oldp+966,((((vlSelf->ascon_sim__DOT__tl_o[1U] 
                                    << 0x10U) | (vlSelf->ascon_sim__DOT__tl_o[0U] 
                                                 >> 0x10U)) 
                                  == ((((0xbU >= (0xfU 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                         ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                        [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][1U]
                                         : 0U) << 0x10U) 
                                      | (((0xbU >= 
                                           (0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter))
                                           ? vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response
                                          [(0xfU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter)][0U]
                                           : 0U) >> 0x10U)))));
        tracep->chgBit(oldp+967,(vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o));
        tracep->chgBit(oldp+968,((1U & ((IData)(vlSelf->ascon_sim__DOT____Vcellout__u_ascon__alert_tx_o) 
                                        >> 1U))));
        tracep->chgBit(oldp+969,((1U & (IData)(vlSelf->ascon_sim__DOT____Vcellout__u_ascon__alert_tx_o))));
        tracep->chgBit(oldp+970,((1U & ((IData)(vlSelf->ascon_sim__DOT____Vcellout__u_ascon__alert_tx_o) 
                                        >> 3U))));
        tracep->chgBit(oldp+971,((1U & ((IData)(vlSelf->ascon_sim__DOT____Vcellout__u_ascon__alert_tx_o) 
                                        >> 2U))));
        tracep->chgIData(oldp+972,(vlSelf->ascon_sim__DOT__entropy_q),32);
        tracep->chgBit(oldp+973,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+974,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+975,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+976,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+977,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+978,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[2U] 
                                     << 4U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] 
                                               >> 0x1cU))),32);
        tracep->chgCData(oldp+979,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+980,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] 
                                     << 8U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                               >> 0x18U))),32);
        tracep->chgCData(oldp+981,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+982,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+983,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+984,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+985,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U])));
        tracep->chgBit(oldp+986,((1U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U] 
                                        >> 0xcU))));
        tracep->chgCData(oldp+987,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U] 
                                          >> 9U))),3);
        tracep->chgCData(oldp+988,((7U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U] 
                                          >> 6U))),3);
        tracep->chgCData(oldp+989,((3U & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U] 
                                          >> 4U))),2);
        tracep->chgCData(oldp+990,((0xffU & ((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U] 
                                              << 4U) 
                                             | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[2U] 
                                                >> 0x1cU)))),8);
        tracep->chgIData(oldp+991,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[2U] 
                                     << 4U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U] 
                                               >> 0x1cU))),32);
        tracep->chgCData(oldp+992,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U] 
                                            >> 0x18U))),4);
        tracep->chgIData(oldp+993,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U] 
                                     << 8U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                               >> 0x18U))),32);
        tracep->chgCData(oldp+994,((0x1fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                             >> 0x13U))),5);
        tracep->chgCData(oldp+995,((0xfU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                            >> 0xfU))),4);
        tracep->chgCData(oldp+996,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                             >> 8U))),7);
        tracep->chgCData(oldp+997,((0x7fU & (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                             >> 1U))),7);
        tracep->chgBit(oldp+998,((1U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U])));
        tracep->chgIData(oldp+999,(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter),32);
        tracep->chgIData(oldp+1000,(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter),32);
        tracep->chgQData(oldp+1001,(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc),39);
        tracep->chgCData(oldp+1003,((0xfU & (IData)(
                                                    (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd 
                                                     >> 0x27U)))),4);
        tracep->chgIData(oldp+1004,((IData)((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd 
                                             >> 7U))),32);
        tracep->chgCData(oldp+1005,((7U & (IData)((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd 
                                                   >> 4U)))),3);
        tracep->chgCData(oldp+1006,((0xfU & (IData)(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd))),4);
        tracep->chgQData(oldp+1007,((0x1ffffffffffffffULL 
                                     & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o)),57);
        tracep->chgCData(oldp+1009,((0x7fU & (IData)(
                                                     (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
                                                      >> 0x39U)))),7);
        tracep->chgIData(oldp+1010,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U] 
                                      << 8U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                                >> 0x18U))),32);
        tracep->chgCData(oldp+1011,((0x7fU & (IData)(
                                                     (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
                                                      >> 0x20U)))),7);
        tracep->chgBit(oldp+1012,((1U & VL_REDXOR_32(
                                                     (((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                                        ^ 
                                                        vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U]) 
                                                       ^ 
                                                       vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[2U]) 
                                                      ^ 
                                                      vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U])))));
        tracep->chgIData(oldp+1013,((IData)(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o)),32);
        tracep->chgQData(oldp+1014,(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o),39);
        tracep->chgQData(oldp+1016,(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd),57);
        tracep->chgQData(oldp+1018,(vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o),64);
        tracep->chgIData(oldp+1020,(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] 
                                      << 8U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                                >> 0x18U))),32);
        tracep->chgBit(oldp+1021,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[0]));
        tracep->chgBit(oldp+1022,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[1]));
        tracep->chgBit(oldp+1023,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[2]));
        tracep->chgBit(oldp+1024,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[3]));
        tracep->chgBit(oldp+1025,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[4]));
        tracep->chgBit(oldp+1026,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[5]));
        tracep->chgBit(oldp+1027,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[6]));
        tracep->chgBit(oldp+1028,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[7]));
        tracep->chgBit(oldp+1029,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[8]));
        tracep->chgBit(oldp+1030,(vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[9]));
        tracep->chgCData(oldp+1031,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_idle),4);
        tracep->chgBit(oldp+1032,(vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o));
        tracep->chgBit(oldp+1033,((1U & (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                                                 >> 0x21U)))));
        tracep->chgBit(oldp+1034,((1U & (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                                                 >> 0x20U)))));
        tracep->chgIData(oldp+1035,((IData)(vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i)),32);
        tracep->chgBit(oldp+1036,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1037,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1038,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
                                         >> 0x17U))));
        tracep->chgBit(oldp+1039,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
                                         >> 0x16U))));
        tracep->chgIData(oldp+1040,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
                                      << 0xdU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
                                                  >> 0x13U))),32);
        tracep->chgBit(oldp+1041,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
                                         >> 0x12U))));
        tracep->chgIData(oldp+1042,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
                                      << 0xcU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
                                                  >> 0x14U))),32);
        tracep->chgBit(oldp+1043,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
                                         >> 0x13U))));
        tracep->chgIData(oldp+1044,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
                                      << 0xbU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
                                                  >> 0x15U))),32);
        tracep->chgBit(oldp+1045,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
                                         >> 0x14U))));
        tracep->chgIData(oldp+1046,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
                                      << 0xaU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
                                                  >> 0x16U))),32);
        tracep->chgBit(oldp+1047,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
                                         >> 0x15U))));
        tracep->chgIData(oldp+1048,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
                                      << 0x11U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
                                                   >> 0xfU))),32);
        tracep->chgBit(oldp+1049,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
                                         >> 0xeU))));
        tracep->chgIData(oldp+1050,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
                                      << 0x10U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
                                                   >> 0x10U))),32);
        tracep->chgBit(oldp+1051,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
                                         >> 0xfU))));
        tracep->chgIData(oldp+1052,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
                                      << 0xfU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
                                                  >> 0x11U))),32);
        tracep->chgBit(oldp+1053,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
                                         >> 0x10U))));
        tracep->chgIData(oldp+1054,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
                                      << 0xeU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
                                                  >> 0x12U))),32);
        tracep->chgBit(oldp+1055,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
                                         >> 0x11U))));
        tracep->chgIData(oldp+1056,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
                                      << 0x15U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
                                                   >> 0xbU))),32);
        tracep->chgBit(oldp+1057,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
                                         >> 0xaU))));
        tracep->chgIData(oldp+1058,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
                                      << 0x14U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
                                                   >> 0xcU))),32);
        tracep->chgBit(oldp+1059,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
                                         >> 0xbU))));
        tracep->chgIData(oldp+1060,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
                                      << 0x13U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
                                                   >> 0xdU))),32);
        tracep->chgBit(oldp+1061,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
                                         >> 0xcU))));
        tracep->chgIData(oldp+1062,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
                                      << 0x12U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
                                                   >> 0xeU))),32);
        tracep->chgBit(oldp+1063,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
                                         >> 0xdU))));
        tracep->chgIData(oldp+1064,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
                                      << 0x19U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
                                                   >> 7U))),32);
        tracep->chgBit(oldp+1065,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
                                         >> 6U))));
        tracep->chgIData(oldp+1066,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
                                      << 0x18U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
                                                   >> 8U))),32);
        tracep->chgBit(oldp+1067,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
                                         >> 7U))));
        tracep->chgIData(oldp+1068,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
                                      << 0x17U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
                                                   >> 9U))),32);
        tracep->chgBit(oldp+1069,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
                                         >> 8U))));
        tracep->chgIData(oldp+1070,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
                                      << 0x16U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
                                                   >> 0xaU))),32);
        tracep->chgBit(oldp+1071,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
                                         >> 9U))));
        tracep->chgIData(oldp+1072,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
                                      << 0x1dU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
                                                   >> 3U))),32);
        tracep->chgBit(oldp+1073,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
                                         >> 2U))));
        tracep->chgIData(oldp+1074,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
                                      << 0x1cU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
                                                   >> 4U))),32);
        tracep->chgBit(oldp+1075,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
                                         >> 3U))));
        tracep->chgIData(oldp+1076,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
                                      << 0x1bU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
                                                   >> 5U))),32);
        tracep->chgBit(oldp+1077,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
                                         >> 4U))));
        tracep->chgIData(oldp+1078,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
                                      << 0x1aU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
                                                   >> 6U))),32);
        tracep->chgBit(oldp+1079,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
                                         >> 5U))));
        tracep->chgIData(oldp+1080,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xfU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+1081,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
                                         >> 0x1eU))));
        tracep->chgIData(oldp+1082,(vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x10U]),32);
        tracep->chgBit(oldp+1083,((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xfU] 
                                   >> 0x1fU)));
        tracep->chgIData(oldp+1084,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
                                      << 0x1fU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x11U] 
                                                   >> 1U))),32);
        tracep->chgBit(oldp+1085,((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x11U])));
        tracep->chgIData(oldp+1086,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
                                      << 0x1eU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
                                                   >> 2U))),32);
        tracep->chgBit(oldp+1087,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
                                         >> 1U))));
        tracep->chgIData(oldp+1088,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
                                      << 5U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
                                                >> 0x1bU))),32);
        tracep->chgBit(oldp+1089,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
                                         >> 0x1aU))));
        tracep->chgIData(oldp+1090,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                      << 4U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
                                                >> 0x1cU))),32);
        tracep->chgBit(oldp+1091,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
                                         >> 0x1bU))));
        tracep->chgIData(oldp+1092,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                                      << 3U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                                >> 0x1dU))),32);
        tracep->chgBit(oldp+1093,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                         >> 0x1cU))));
        tracep->chgIData(oldp+1094,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
                                      << 2U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                                                >> 0x1eU))),32);
        tracep->chgBit(oldp+1095,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                                         >> 0x1dU))));
        tracep->chgIData(oldp+1096,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                      << 9U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
                                                >> 0x17U))),32);
        tracep->chgBit(oldp+1097,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
                                         >> 0x16U))));
        tracep->chgIData(oldp+1098,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                      << 8U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                                >> 0x18U))),32);
        tracep->chgBit(oldp+1099,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                         >> 0x17U))));
        tracep->chgIData(oldp+1100,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                                      << 7U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                >> 0x19U))),32);
        tracep->chgBit(oldp+1101,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                         >> 0x18U))));
        tracep->chgIData(oldp+1102,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
                                      << 6U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                                                >> 0x1aU))),32);
        tracep->chgBit(oldp+1103,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                                         >> 0x19U))));
        tracep->chgIData(oldp+1104,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                      << 0xdU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                  >> 0x13U))),32);
        tracep->chgBit(oldp+1105,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 0x12U))));
        tracep->chgIData(oldp+1106,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                      << 0xcU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                                  >> 0x14U))),32);
        tracep->chgBit(oldp+1107,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                         >> 0x13U))));
        tracep->chgIData(oldp+1108,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                                      << 0xbU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                  >> 0x15U))),32);
        tracep->chgBit(oldp+1109,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                         >> 0x14U))));
        tracep->chgIData(oldp+1110,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
                                      << 0xaU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                                                  >> 0x16U))),32);
        tracep->chgBit(oldp+1111,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                                         >> 0x15U))));
        tracep->chgCData(oldp+1112,((0xfU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                             >> 0xeU))),4);
        tracep->chgCData(oldp+1113,((0xfU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                             >> 0xaU))),4);
        tracep->chgBit(oldp+1114,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 9U))));
        tracep->chgBit(oldp+1115,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 8U))));
        tracep->chgBit(oldp+1116,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 7U))));
        tracep->chgCData(oldp+1117,((3U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                           >> 5U))),2);
        tracep->chgCData(oldp+1118,((7U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                           >> 2U))),3);
        tracep->chgBit(oldp+1119,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 1U))));
        tracep->chgBit(oldp+1120,((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U])));
        tracep->chgCData(oldp+1121,((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                     >> 0x1bU)),5);
        tracep->chgSData(oldp+1122,((0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                               >> 0xfU))),12);
        tracep->chgSData(oldp+1123,((0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                               >> 3U))),12);
        tracep->chgBit(oldp+1124,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                         >> 2U))));
        tracep->chgBit(oldp+1125,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                         >> 1U))));
        tracep->chgIData(oldp+1126,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                      << 0x1fU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0U] 
                                                   >> 1U))),32);
        tracep->chgBit(oldp+1127,((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0U])));
        tracep->chgIData(oldp+1128,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1129,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1130,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1131,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x21U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1132,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1133,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1134,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1135,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1136,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1137,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1138,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1139,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1140,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1141,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1142,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1143,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1144,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1145,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1146,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1147,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1148,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1149,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1150,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1151,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1152,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1153,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1154,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1155,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1156,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1157,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1158,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+1159,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+1160,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1161,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+1162,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1163,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1164,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+1165,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1166,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1167,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x17U))));
        tracep->chgBit(oldp+1168,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1169,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1170,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x14U))));
        tracep->chgBit(oldp+1171,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1172,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1173,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x11U))));
        tracep->chgBit(oldp+1174,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1175,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1176,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1177,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1178,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1179,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 0xbU))));
        tracep->chgCData(oldp+1180,((3U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                           >> 9U))),2);
        tracep->chgBit(oldp+1181,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                         >> 8U))));
        tracep->chgIData(oldp+1182,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                      << 0x18U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                                   >> 8U))),32);
        tracep->chgBit(oldp+1183,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1184,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 6U))));
        tracep->chgBit(oldp+1185,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 5U))));
        tracep->chgBit(oldp+1186,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 4U))));
        tracep->chgBit(oldp+1187,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 3U))));
        tracep->chgBit(oldp+1188,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 2U))));
        tracep->chgBit(oldp+1189,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                         >> 1U))));
        tracep->chgBit(oldp+1190,((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U])));
        tracep->chgIData(oldp+1191,((IData)(vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i)),32);
        tracep->chgBit(oldp+1192,(vlSelf->ascon_sim__DOT__u_ascon__DOT__edn_ack));
        tracep->chgCData(oldp+1193,(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert),2);
        tracep->chgBit(oldp+1194,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q) 
                                    | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error)) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__mubi_error))));
        tracep->chgBit(oldp+1195,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad_mubi4invalid) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg_mubi4invalid))));
        tracep->chgBit(oldp+1196,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__err_q) 
                                    | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__intg_err)) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_err))));
        tracep->chgBit(oldp+1197,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_storage_err) 
                                   | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_storage_err) 
                                      | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_storage_err) 
                                         | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_storage_err) 
                                            | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_storage_err) 
                                               | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_storage_err) 
                                                  | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_storage_err) 
                                                     | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_storage_err) 
                                                        | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_storage_err) 
                                                           | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_storage_err) 
                                                              | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_storage_err) 
                                                                 | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_storage_err))))))))))))));
        tracep->chgBit(oldp+1198,(vlSelf->ascon_sim__DOT__u_ascon__DOT__shadowed_update_err));
        tracep->chgBit(oldp+1199,((1U & (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                                                 >> 0x20U)))));
        tracep->chgCData(oldp+1200,(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert_test),2);
        tracep->chgBit(oldp+1201,((1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert) 
                                         >> 1U))));
        tracep->chgIData(oldp+1202,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[0U]),32);
        tracep->chgIData(oldp+1203,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[1U]),32);
        tracep->chgIData(oldp+1204,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[2U]),32);
        tracep->chgIData(oldp+1205,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[3U]),32);
        tracep->chgIData(oldp+1206,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[0U]),32);
        tracep->chgIData(oldp+1207,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[1U]),32);
        tracep->chgIData(oldp+1208,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[2U]),32);
        tracep->chgIData(oldp+1209,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[3U]),32);
        tracep->chgCData(oldp+1210,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_read)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
                                                     >> 2U)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
                                                        >> 2U)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
                                                             >> 2U)))))))),4);
        tracep->chgCData(oldp+1211,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_q),4);
        tracep->chgBit(oldp+1212,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_q))));
        tracep->chgBit(oldp+1213,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_read));
        tracep->chgIData(oldp+1214,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[0U]),32);
        tracep->chgIData(oldp+1215,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[1U]),32);
        tracep->chgIData(oldp+1216,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[2U]),32);
        tracep->chgIData(oldp+1217,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[3U]),32);
        tracep->chgIData(oldp+1218,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[0U]),32);
        tracep->chgIData(oldp+1219,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[1U]),32);
        tracep->chgIData(oldp+1220,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[2U]),32);
        tracep->chgIData(oldp+1221,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[3U]),32);
        tracep->chgCData(oldp+1222,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_read)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
                                                     << 2U)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x11U] 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xfU] 
                                                           >> 0x1eU)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
                                                             >> 0x1eU)))))))),4);
        tracep->chgCData(oldp+1223,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_q),4);
        tracep->chgBit(oldp+1224,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_q))));
        tracep->chgIData(oldp+1225,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[0U]),32);
        tracep->chgIData(oldp+1226,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[1U]),32);
        tracep->chgIData(oldp+1227,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[2U]),32);
        tracep->chgIData(oldp+1228,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[3U]),32);
        tracep->chgCData(oldp+1229,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_d),4);
        tracep->chgCData(oldp+1230,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_q),4);
        tracep->chgBit(oldp+1231,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_d))));
        tracep->chgBit(oldp+1232,(((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q)) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok))));
        tracep->chgIData(oldp+1233,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[0U]),32);
        tracep->chgIData(oldp+1234,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[1U]),32);
        tracep->chgIData(oldp+1235,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[2U]),32);
        tracep->chgIData(oldp+1236,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[3U]),32);
        tracep->chgIData(oldp+1237,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[0U]),32);
        tracep->chgIData(oldp+1238,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[1U]),32);
        tracep->chgIData(oldp+1239,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[2U]),32);
        tracep->chgIData(oldp+1240,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[3U]),32);
        tracep->chgCData(oldp+1241,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
                                                     >> 0xaU)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
                                                        >> 0xaU)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
                                                           >> 0xaU)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
                                                             >> 0xaU)))))))),4);
        tracep->chgCData(oldp+1242,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_q),4);
        tracep->chgBit(oldp+1243,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_q))));
        tracep->chgBit(oldp+1244,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok));
        tracep->chgIData(oldp+1245,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[0U]),32);
        tracep->chgIData(oldp+1246,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[1U]),32);
        tracep->chgIData(oldp+1247,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[2U]),32);
        tracep->chgIData(oldp+1248,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[3U]),32);
        tracep->chgIData(oldp+1249,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[0U]),32);
        tracep->chgIData(oldp+1250,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[1U]),32);
        tracep->chgIData(oldp+1251,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[2U]),32);
        tracep->chgIData(oldp+1252,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[3U]),32);
        tracep->chgCData(oldp+1253,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
                                                     >> 6U)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
                                                        >> 6U)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
                                                           >> 6U)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
                                                             >> 6U)))))))),4);
        tracep->chgCData(oldp+1254,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_q),4);
        tracep->chgBit(oldp+1255,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_q))));
        tracep->chgIData(oldp+1256,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[0U]),32);
        tracep->chgIData(oldp+1257,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[1U]),32);
        tracep->chgIData(oldp+1258,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[2U]),32);
        tracep->chgIData(oldp+1259,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[3U]),32);
        tracep->chgIData(oldp+1260,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[0U]),32);
        tracep->chgIData(oldp+1261,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[1U]),32);
        tracep->chgIData(oldp+1262,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[2U]),32);
        tracep->chgIData(oldp+1263,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[3U]),32);
        tracep->chgCData(oldp+1264,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
                                                     >> 0x12U)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
                                                        >> 0x12U)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
                                                           >> 0x12U)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
                                                             >> 0x12U)))))))),4);
        tracep->chgCData(oldp+1265,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_q),4);
        tracep->chgBit(oldp+1266,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_q))));
        tracep->chgIData(oldp+1267,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[0U]),32);
        tracep->chgIData(oldp+1268,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[1U]),32);
        tracep->chgIData(oldp+1269,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[2U]),32);
        tracep->chgIData(oldp+1270,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[3U]),32);
        tracep->chgIData(oldp+1271,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[0U]),32);
        tracep->chgIData(oldp+1272,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[1U]),32);
        tracep->chgIData(oldp+1273,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[2U]),32);
        tracep->chgIData(oldp+1274,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[3U]),32);
        tracep->chgCData(oldp+1275,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
                                                     >> 0xeU)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
                                                        >> 0xeU)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
                                                           >> 0xeU)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
                                                             >> 0xeU)))))))),4);
        tracep->chgCData(oldp+1276,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_q),4);
        tracep->chgBit(oldp+1277,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_q))));
        tracep->chgBit(oldp+1278,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 1U))));
        tracep->chgBit(oldp+1279,((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U])));
        tracep->chgBit(oldp+1280,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 7U))));
        tracep->chgBit(oldp+1281,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                         >> 1U))));
        tracep->chgBit(oldp+1282,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                         >> 2U))));
        tracep->chgBit(oldp+1283,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 8U))));
        tracep->chgBit(oldp+1284,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 9U))));
        tracep->chgCData(oldp+1285,((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                     >> 0x1bU)),5);
        tracep->chgCData(oldp+1286,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad),4);
        tracep->chgCData(oldp+1287,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg),4);
        tracep->chgSData(oldp+1288,((0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                               >> 0xfU))),12);
        tracep->chgSData(oldp+1289,((0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                               >> 3U))),12);
        tracep->chgCData(oldp+1290,((7U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                           >> 2U))),3);
        tracep->chgCData(oldp+1291,((3U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                           >> 5U))),2);
        tracep->chgWData(oldp+1292,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out),128);
        tracep->chgIData(oldp+1296,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[0U]),32);
        tracep->chgIData(oldp+1297,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[1U]),32);
        tracep->chgIData(oldp+1298,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[2U]),32);
        tracep->chgIData(oldp+1299,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[3U]),32);
        tracep->chgIData(oldp+1300,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[0U]),32);
        tracep->chgIData(oldp+1301,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[1U]),32);
        tracep->chgIData(oldp+1302,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[2U]),32);
        tracep->chgIData(oldp+1303,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[3U]),32);
        tracep->chgBit(oldp+1304,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_valid));
        tracep->chgBit(oldp+1305,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_we));
        tracep->chgIData(oldp+1306,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[0U]),32);
        tracep->chgIData(oldp+1307,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[1U]),32);
        tracep->chgIData(oldp+1308,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[2U]),32);
        tracep->chgIData(oldp+1309,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[3U]),32);
        tracep->chgCData(oldp+1310,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_we)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                                                     >> 0x16U)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                        >> 0x16U)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                                           >> 0x16U)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
                                                             >> 0x16U)))))))),4);
        tracep->chgCData(oldp+1311,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_q),4);
        tracep->chgBit(oldp+1312,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_q))));
        tracep->chgBit(oldp+1313,(((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_q)) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__track_reset_msg_q))));
        __Vtemp_h526b542b__0[0U] = ((IData)((((QData)((IData)(
                                                              vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U])))) 
                                    ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U]);
        __Vtemp_h526b542b__0[1U] = ((IData)(((((QData)((IData)(
                                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U]))) 
                                             >> 0x20U)) 
                                    ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U]);
        __Vtemp_h526b542b__0[2U] = ((IData)((((QData)((IData)(
                                                              vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U])))) 
                                    ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]);
        __Vtemp_h526b542b__0[3U] = ((IData)(((((QData)((IData)(
                                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                                             >> 0x20U)) 
                                    ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U]);
        tracep->chgWData(oldp+1314,(__Vtemp_h526b542b__0),128);
        tracep->chgIData(oldp+1318,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[0U]),32);
        tracep->chgIData(oldp+1319,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[1U]),32);
        tracep->chgIData(oldp+1320,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[2U]),32);
        tracep->chgIData(oldp+1321,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[3U]),32);
        tracep->chgIData(oldp+1322,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[0U]),32);
        tracep->chgIData(oldp+1323,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[1U]),32);
        tracep->chgIData(oldp+1324,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[2U]),32);
        tracep->chgIData(oldp+1325,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[3U]),32);
        tracep->chgBit(oldp+1326,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_valid));
        tracep->chgBit(oldp+1327,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_we));
        tracep->chgIData(oldp+1328,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[0U]),32);
        tracep->chgIData(oldp+1329,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[1U]),32);
        tracep->chgIData(oldp+1330,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[2U]),32);
        tracep->chgIData(oldp+1331,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[3U]),32);
        tracep->chgCData(oldp+1332,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_we)
                                      ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q) 
                                              | ((8U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                                                     >> 0x12U)) 
                                                 | ((4U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                        >> 0x12U)) 
                                                    | ((2U 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                                           >> 0x12U)) 
                                                       | (1U 
                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                             >> 0x12U)))))))),4);
        tracep->chgCData(oldp+1333,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q),4);
        tracep->chgBit(oldp+1334,((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q))));
        tracep->chgBit(oldp+1335,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_ready));
        tracep->chgBit(oldp+1336,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_done));
        tracep->chgBit(oldp+1337,(((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key) 
                                     | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce)) 
                                    | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__flag_error)) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__order_error))));
        tracep->chgCData(oldp+1338,(((0U == ((((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[0U] 
                                                ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[0U]) 
                                               | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[1U] 
                                                  ^ 
                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[1U])) 
                                              | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[2U] 
                                                 ^ 
                                                 vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[2U])) 
                                             | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[3U] 
                                                ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[3U])))
                                      ? 6U : 9U)),4);
        tracep->chgCData(oldp+1339,((((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_d)) 
                                      & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_ready)))
                                      ? 6U : 9U)),4);
        tracep->chgBit(oldp+1340,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg_mubi4invalid));
        tracep->chgBit(oldp+1341,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad_mubi4invalid));
        tracep->chgBit(oldp+1342,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid));
        tracep->chgBit(oldp+1343,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready));
        tracep->chgBit(oldp+1344,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_reg_valid));
        tracep->chgBit(oldp+1345,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_reg_valid));
        tracep->chgSData(oldp+1346,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw),10);
        tracep->chgBit(oldp+1347,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key));
        tracep->chgBit(oldp+1348,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce));
        tracep->chgBit(oldp+1349,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__flag_error));
        tracep->chgBit(oldp+1350,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__order_error));
        tracep->chgBit(oldp+1351,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_received_q));
        tracep->chgBit(oldp+1352,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__track_reset_msg_q));
        tracep->chgBit(oldp+1353,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__track_reset_tag_q));
        tracep->chgIData(oldp+1354,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[0U]),32);
        tracep->chgIData(oldp+1355,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[1U]),32);
        tracep->chgIData(oldp+1356,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[2U]),32);
        tracep->chgIData(oldp+1357,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[3U]),32);
        tracep->chgIData(oldp+1358,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[0U]),32);
        tracep->chgIData(oldp+1359,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[1U]),32);
        tracep->chgIData(oldp+1360,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[2U]),32);
        tracep->chgIData(oldp+1361,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[3U]),32);
        tracep->chgIData(oldp+1362,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[0U]),32);
        tracep->chgIData(oldp+1363,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[1U]),32);
        tracep->chgIData(oldp+1364,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[2U]),32);
        tracep->chgIData(oldp+1365,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[3U]),32);
        tracep->chgCData(oldp+1366,(((0x969U == (0xfffU 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                    >> 0xfU)))
                                      ? 6U : 9U)),4);
        tracep->chgCData(oldp+1367,(((0x699U == (0xfffU 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                    >> 0xfU)))
                                      ? 6U : 9U)),4);
        tracep->chgBit(oldp+1368,((1U & VL_REDXOR_32(
                                                     (0xfU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
                                                         >> 0x16U))))));
        tracep->chgWData(oldp+1369,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i),128);
        tracep->chgWData(oldp+1373,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i),128);
        tracep->chgWData(oldp+1377,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i),128);
        tracep->chgBit(oldp+1381,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q));
        tracep->chgBit(oldp+1382,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error));
        tracep->chgBit(oldp+1383,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter));
        tracep->chgBit(oldp+1384,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter));
        tracep->chgQData(oldp+1385,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U])))),64);
        tracep->chgQData(oldp+1387,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U])))),64);
        tracep->chgQData(oldp+1389,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U])))),64);
        tracep->chgQData(oldp+1391,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U])))),64);
        tracep->chgQData(oldp+1393,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U])))),64);
        tracep->chgQData(oldp+1395,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[0U])))),64);
        tracep->chgQData(oldp+1397,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[2U])))),64);
        tracep->chgQData(oldp+1399,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[4U])))),64);
        tracep->chgQData(oldp+1401,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[6U])))),64);
        tracep->chgQData(oldp+1403,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[8U])))),64);
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input) {
            __Vtemp_ha5586424__0[0U] = Vascon_sim__ConstPool__CONST_hab76c978_0[0U];
            __Vtemp_ha5586424__0[1U] = Vascon_sim__ConstPool__CONST_hab76c978_0[1U];
            __Vtemp_ha5586424__0[2U] = Vascon_sim__ConstPool__CONST_hab76c978_0[2U];
            __Vtemp_ha5586424__0[3U] = Vascon_sim__ConstPool__CONST_hab76c978_0[3U];
            __Vtemp_ha5586424__0[4U] = Vascon_sim__ConstPool__CONST_hab76c978_0[4U];
            __Vtemp_ha5586424__0[5U] = Vascon_sim__ConstPool__CONST_hab76c978_0[5U];
            __Vtemp_ha5586424__0[6U] = Vascon_sim__ConstPool__CONST_hab76c978_0[6U];
            __Vtemp_ha5586424__0[7U] = Vascon_sim__ConstPool__CONST_hab76c978_0[7U];
            __Vtemp_ha5586424__0[8U] = Vascon_sim__ConstPool__CONST_hab76c978_0[8U];
            __Vtemp_ha5586424__0[9U] = Vascon_sim__ConstPool__CONST_hab76c978_0[9U];
        } else {
            __Vtemp_ha5586424__0[0U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U];
            __Vtemp_ha5586424__0[1U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U];
            __Vtemp_ha5586424__0[2U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U];
            __Vtemp_ha5586424__0[3U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U];
            __Vtemp_ha5586424__0[4U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U];
            __Vtemp_ha5586424__0[5U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U];
            __Vtemp_ha5586424__0[6U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U];
            __Vtemp_ha5586424__0[7U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U];
            __Vtemp_ha5586424__0[8U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U];
            __Vtemp_ha5586424__0[9U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U];
        }
        tracep->chgWData(oldp+1405,(__Vtemp_ha5586424__0),320);
        tracep->chgWData(oldp+1415,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round),320);
        tracep->chgQData(oldp+1425,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[0U])))),64);
        tracep->chgQData(oldp+1427,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[2U])))),64);
        tracep->chgQData(oldp+1429,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[4U])))),64);
        tracep->chgQData(oldp+1431,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[6U])))),64);
        tracep->chgQData(oldp+1433,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[8U])))),64);
        tracep->chgSData(oldp+1435,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d),10);
        tracep->chgCData(oldp+1436,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset),4);
        tracep->chgQData(oldp+1437,(((1U == (3U & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                   >> 5U)))
                                      ? 0x80400c0600000000ULL
                                      : 0x80800c0800000000ULL)),64);
        tracep->chgCData(oldp+1439,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__complete_block),4);
        tracep->chgWData(oldp+1440,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask),128);
        tracep->chgWData(oldp+1444,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask),128);
        tracep->chgWData(oldp+1448,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes),128);
        tracep->chgWData(oldp+1452,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded),128);
        tracep->chgWData(oldp+1456,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded),128);
        tracep->chgCData(oldp+1460,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))),4);
        tracep->chgCData(oldp+1461,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding),2);
        tracep->chgCData(oldp+1462,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0),2);
        tracep->chgCData(oldp+1463,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1),2);
        tracep->chgCData(oldp+1464,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2),2);
        tracep->chgCData(oldp+1465,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3),2);
        tracep->chgCData(oldp+1466,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4),2);
        tracep->chgBit(oldp+1467,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1));
        tracep->chgBit(oldp+1468,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2));
        tracep->chgBit(oldp+1469,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3));
        tracep->chgBit(oldp+1470,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input));
        tracep->chgBit(oldp+1471,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_dom_sep));
        tracep->chgQData(oldp+1472,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[0U])))),64);
        tracep->chgQData(oldp+1474,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[2U])))),64);
        tracep->chgQData(oldp+1476,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[4U])))),64);
        tracep->chgQData(oldp+1478,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[6U])))),64);
        tracep->chgQData(oldp+1480,((((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[8U])))),64);
        tracep->chgQData(oldp+1482,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__word4_dom_sep),64);
        tracep->chgWData(oldp+1484,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex),128);
        tracep->chgBit(oldp+1488,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__mubi_error));
        tracep->chgCData(oldp+1489,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i),8);
        tracep->chgWData(oldp+1490,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w),320);
        tracep->chgWData(oldp+1500,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w),320);
        tracep->chgQData(oldp+1510,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[0]),64);
        tracep->chgQData(oldp+1512,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[1]),64);
        tracep->chgQData(oldp+1514,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[2]),64);
        tracep->chgQData(oldp+1516,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[3]),64);
        tracep->chgQData(oldp+1518,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[4]),64);
        tracep->chgCData(oldp+1520,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0]),5);
        tracep->chgCData(oldp+1521,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[1]),5);
        tracep->chgCData(oldp+1522,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[2]),5);
        tracep->chgCData(oldp+1523,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[3]),5);
        tracep->chgCData(oldp+1524,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[4]),5);
        tracep->chgCData(oldp+1525,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[5]),5);
        tracep->chgCData(oldp+1526,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[6]),5);
        tracep->chgCData(oldp+1527,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[7]),5);
        tracep->chgCData(oldp+1528,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[8]),5);
        tracep->chgCData(oldp+1529,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[9]),5);
        tracep->chgCData(oldp+1530,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[10]),5);
        tracep->chgCData(oldp+1531,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[11]),5);
        tracep->chgCData(oldp+1532,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[12]),5);
        tracep->chgCData(oldp+1533,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[13]),5);
        tracep->chgCData(oldp+1534,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[14]),5);
        tracep->chgCData(oldp+1535,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[15]),5);
        tracep->chgCData(oldp+1536,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[16]),5);
        tracep->chgCData(oldp+1537,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[17]),5);
        tracep->chgCData(oldp+1538,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[18]),5);
        tracep->chgCData(oldp+1539,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[19]),5);
        tracep->chgCData(oldp+1540,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[20]),5);
        tracep->chgCData(oldp+1541,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[21]),5);
        tracep->chgCData(oldp+1542,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[22]),5);
        tracep->chgCData(oldp+1543,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[23]),5);
        tracep->chgCData(oldp+1544,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[24]),5);
        tracep->chgCData(oldp+1545,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[25]),5);
        tracep->chgCData(oldp+1546,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[26]),5);
        tracep->chgCData(oldp+1547,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[27]),5);
        tracep->chgCData(oldp+1548,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[28]),5);
        tracep->chgCData(oldp+1549,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[29]),5);
        tracep->chgCData(oldp+1550,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[30]),5);
        tracep->chgCData(oldp+1551,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[31]),5);
        tracep->chgCData(oldp+1552,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[32]),5);
        tracep->chgCData(oldp+1553,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[33]),5);
        tracep->chgCData(oldp+1554,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[34]),5);
        tracep->chgCData(oldp+1555,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[35]),5);
        tracep->chgCData(oldp+1556,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[36]),5);
        tracep->chgCData(oldp+1557,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[37]),5);
        tracep->chgCData(oldp+1558,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[38]),5);
        tracep->chgCData(oldp+1559,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[39]),5);
        tracep->chgCData(oldp+1560,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[40]),5);
        tracep->chgCData(oldp+1561,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[41]),5);
        tracep->chgCData(oldp+1562,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[42]),5);
        tracep->chgCData(oldp+1563,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[43]),5);
        tracep->chgCData(oldp+1564,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[44]),5);
        tracep->chgCData(oldp+1565,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[45]),5);
        tracep->chgCData(oldp+1566,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[46]),5);
        tracep->chgCData(oldp+1567,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[47]),5);
        tracep->chgCData(oldp+1568,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[48]),5);
        tracep->chgCData(oldp+1569,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[49]),5);
        tracep->chgCData(oldp+1570,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[50]),5);
        tracep->chgCData(oldp+1571,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[51]),5);
        tracep->chgCData(oldp+1572,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[52]),5);
        tracep->chgCData(oldp+1573,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[53]),5);
        tracep->chgCData(oldp+1574,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[54]),5);
        tracep->chgCData(oldp+1575,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[55]),5);
        tracep->chgCData(oldp+1576,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[56]),5);
        tracep->chgCData(oldp+1577,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[57]),5);
        tracep->chgCData(oldp+1578,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[58]),5);
        tracep->chgCData(oldp+1579,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[59]),5);
        tracep->chgCData(oldp+1580,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[60]),5);
        tracep->chgCData(oldp+1581,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[61]),5);
        tracep->chgCData(oldp+1582,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[62]),5);
        tracep->chgCData(oldp+1583,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[63]),5);
        tracep->chgCData(oldp+1584,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0]),5);
        tracep->chgCData(oldp+1585,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[1]),5);
        tracep->chgCData(oldp+1586,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[2]),5);
        tracep->chgCData(oldp+1587,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[3]),5);
        tracep->chgCData(oldp+1588,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[4]),5);
        tracep->chgCData(oldp+1589,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[5]),5);
        tracep->chgCData(oldp+1590,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[6]),5);
        tracep->chgCData(oldp+1591,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[7]),5);
        tracep->chgCData(oldp+1592,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[8]),5);
        tracep->chgCData(oldp+1593,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[9]),5);
        tracep->chgCData(oldp+1594,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[10]),5);
        tracep->chgCData(oldp+1595,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[11]),5);
        tracep->chgCData(oldp+1596,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[12]),5);
        tracep->chgCData(oldp+1597,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[13]),5);
        tracep->chgCData(oldp+1598,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[14]),5);
        tracep->chgCData(oldp+1599,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[15]),5);
        tracep->chgCData(oldp+1600,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[16]),5);
        tracep->chgCData(oldp+1601,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[17]),5);
        tracep->chgCData(oldp+1602,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[18]),5);
        tracep->chgCData(oldp+1603,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[19]),5);
        tracep->chgCData(oldp+1604,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[20]),5);
        tracep->chgCData(oldp+1605,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[21]),5);
        tracep->chgCData(oldp+1606,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[22]),5);
        tracep->chgCData(oldp+1607,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[23]),5);
        tracep->chgCData(oldp+1608,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[24]),5);
        tracep->chgCData(oldp+1609,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[25]),5);
        tracep->chgCData(oldp+1610,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[26]),5);
        tracep->chgCData(oldp+1611,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[27]),5);
        tracep->chgCData(oldp+1612,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[28]),5);
        tracep->chgCData(oldp+1613,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[29]),5);
        tracep->chgCData(oldp+1614,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[30]),5);
        tracep->chgCData(oldp+1615,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[31]),5);
        tracep->chgCData(oldp+1616,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[32]),5);
        tracep->chgCData(oldp+1617,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[33]),5);
        tracep->chgCData(oldp+1618,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[34]),5);
        tracep->chgCData(oldp+1619,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[35]),5);
        tracep->chgCData(oldp+1620,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[36]),5);
        tracep->chgCData(oldp+1621,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[37]),5);
        tracep->chgCData(oldp+1622,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[38]),5);
        tracep->chgCData(oldp+1623,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[39]),5);
        tracep->chgCData(oldp+1624,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[40]),5);
        tracep->chgCData(oldp+1625,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[41]),5);
        tracep->chgCData(oldp+1626,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[42]),5);
        tracep->chgCData(oldp+1627,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[43]),5);
        tracep->chgCData(oldp+1628,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[44]),5);
        tracep->chgCData(oldp+1629,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[45]),5);
        tracep->chgCData(oldp+1630,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[46]),5);
        tracep->chgCData(oldp+1631,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[47]),5);
        tracep->chgCData(oldp+1632,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[48]),5);
        tracep->chgCData(oldp+1633,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[49]),5);
        tracep->chgCData(oldp+1634,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[50]),5);
        tracep->chgCData(oldp+1635,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[51]),5);
        tracep->chgCData(oldp+1636,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[52]),5);
        tracep->chgCData(oldp+1637,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[53]),5);
        tracep->chgCData(oldp+1638,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[54]),5);
        tracep->chgCData(oldp+1639,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[55]),5);
        tracep->chgCData(oldp+1640,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[56]),5);
        tracep->chgCData(oldp+1641,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[57]),5);
        tracep->chgCData(oldp+1642,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[58]),5);
        tracep->chgCData(oldp+1643,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[59]),5);
        tracep->chgCData(oldp+1644,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[60]),5);
        tracep->chgCData(oldp+1645,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[61]),5);
        tracep->chgCData(oldp+1646,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[62]),5);
        tracep->chgCData(oldp+1647,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[63]),5);
        tracep->chgQData(oldp+1648,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0]),64);
        tracep->chgQData(oldp+1650,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1]),64);
        tracep->chgQData(oldp+1652,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2]),64);
        tracep->chgQData(oldp+1654,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3]),64);
        tracep->chgQData(oldp+1656,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4]),64);
        tracep->chgQData(oldp+1658,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[0]),64);
        tracep->chgQData(oldp+1660,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[1]),64);
        tracep->chgQData(oldp+1662,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[2]),64);
        tracep->chgQData(oldp+1664,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[3]),64);
        tracep->chgQData(oldp+1666,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[4]),64);
        tracep->chgQData(oldp+1668,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[0]),64);
        tracep->chgQData(oldp+1670,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[1]),64);
        tracep->chgQData(oldp+1672,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[2]),64);
        tracep->chgQData(oldp+1674,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[3]),64);
        tracep->chgQData(oldp+1676,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[4]),64);
        tracep->chgCData(oldp+1678,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1679,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0U]),5);
        tracep->chgCData(oldp+1680,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1681,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1682,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1683,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0xaU]),5);
        tracep->chgCData(oldp+1684,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1685,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1686,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1687,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0xbU]),5);
        tracep->chgCData(oldp+1688,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1689,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1690,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1691,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0xcU]),5);
        tracep->chgCData(oldp+1692,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1693,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1694,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1695,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0xdU]),5);
        tracep->chgCData(oldp+1696,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1697,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1698,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1699,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0xeU]),5);
        tracep->chgCData(oldp+1700,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1701,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1702,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1703,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0xfU]),5);
        tracep->chgCData(oldp+1704,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1705,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1706,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1707,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x10U]),5);
        tracep->chgCData(oldp+1708,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1709,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1710,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1711,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x11U]),5);
        tracep->chgCData(oldp+1712,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1713,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1714,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1715,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x12U]),5);
        tracep->chgCData(oldp+1716,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1717,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1718,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1719,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x13U]),5);
        tracep->chgCData(oldp+1720,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1721,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1722,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1723,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [1U]),5);
        tracep->chgCData(oldp+1724,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1725,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1726,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1727,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x14U]),5);
        tracep->chgCData(oldp+1728,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1729,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1730,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1731,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x15U]),5);
        tracep->chgCData(oldp+1732,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1733,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1734,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1735,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x16U]),5);
        tracep->chgCData(oldp+1736,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1737,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1738,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1739,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x17U]),5);
        tracep->chgCData(oldp+1740,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1741,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1742,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1743,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x18U]),5);
        tracep->chgCData(oldp+1744,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1745,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1746,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1747,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x19U]),5);
        tracep->chgCData(oldp+1748,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1749,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1750,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1751,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x1aU]),5);
        tracep->chgCData(oldp+1752,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1753,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1754,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1755,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x1bU]),5);
        tracep->chgCData(oldp+1756,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1757,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1758,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1759,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x1cU]),5);
        tracep->chgCData(oldp+1760,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1761,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1762,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1763,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x1dU]),5);
        tracep->chgCData(oldp+1764,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1765,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1766,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1767,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [2U]),5);
        tracep->chgCData(oldp+1768,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1769,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1770,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1771,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x1eU]),5);
        tracep->chgCData(oldp+1772,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1773,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1774,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1775,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x1fU]),5);
        tracep->chgCData(oldp+1776,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1777,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1778,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1779,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x20U]),5);
        tracep->chgCData(oldp+1780,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1781,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1782,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1783,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x21U]),5);
        tracep->chgCData(oldp+1784,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1785,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1786,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1787,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x22U]),5);
        tracep->chgCData(oldp+1788,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1789,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1790,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1791,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x23U]),5);
        tracep->chgCData(oldp+1792,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1793,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1794,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1795,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x24U]),5);
        tracep->chgCData(oldp+1796,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1797,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1798,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1799,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x25U]),5);
        tracep->chgCData(oldp+1800,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1801,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1802,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1803,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x26U]),5);
        tracep->chgCData(oldp+1804,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1805,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1806,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1807,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x27U]),5);
        tracep->chgCData(oldp+1808,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1809,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1810,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1811,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [3U]),5);
        tracep->chgCData(oldp+1812,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1813,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1814,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1815,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x28U]),5);
        tracep->chgCData(oldp+1816,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1817,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1818,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1819,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x29U]),5);
        tracep->chgCData(oldp+1820,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1821,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1822,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1823,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x2aU]),5);
        tracep->chgCData(oldp+1824,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1825,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1826,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1827,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x2bU]),5);
        tracep->chgCData(oldp+1828,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1829,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1830,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1831,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x2cU]),5);
        tracep->chgCData(oldp+1832,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1833,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1834,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1835,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x2dU]),5);
        tracep->chgCData(oldp+1836,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1837,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1838,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1839,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x2eU]),5);
        tracep->chgCData(oldp+1840,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1841,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1842,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1843,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x2fU]),5);
        tracep->chgCData(oldp+1844,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1845,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1846,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1847,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x30U]),5);
        tracep->chgCData(oldp+1848,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1849,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1850,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1851,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x31U]),5);
        tracep->chgCData(oldp+1852,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1853,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1854,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1855,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [4U]),5);
        tracep->chgCData(oldp+1856,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1857,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1858,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1859,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x32U]),5);
        tracep->chgCData(oldp+1860,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1861,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1862,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1863,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x33U]),5);
        tracep->chgCData(oldp+1864,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1865,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1866,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1867,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x34U]),5);
        tracep->chgCData(oldp+1868,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1869,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1870,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1871,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x35U]),5);
        tracep->chgCData(oldp+1872,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1873,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1874,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1875,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x36U]),5);
        tracep->chgCData(oldp+1876,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1877,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1878,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1879,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x37U]),5);
        tracep->chgCData(oldp+1880,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1881,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1882,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1883,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x38U]),5);
        tracep->chgCData(oldp+1884,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1885,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1886,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1887,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x39U]),5);
        tracep->chgCData(oldp+1888,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1889,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1890,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1891,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x3aU]),5);
        tracep->chgCData(oldp+1892,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1893,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1894,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1895,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x3bU]),5);
        tracep->chgCData(oldp+1896,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1897,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1898,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1899,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [5U]),5);
        tracep->chgCData(oldp+1900,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1901,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1902,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1903,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x3cU]),5);
        tracep->chgCData(oldp+1904,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1905,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1906,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1907,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x3dU]),5);
        tracep->chgCData(oldp+1908,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1909,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1910,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1911,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x3eU]),5);
        tracep->chgCData(oldp+1912,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1913,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1914,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1915,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [0x3fU]),5);
        tracep->chgCData(oldp+1916,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1917,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1918,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1919,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [6U]),5);
        tracep->chgCData(oldp+1920,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1921,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1922,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1923,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [7U]),5);
        tracep->chgCData(oldp+1924,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1925,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1926,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1927,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [8U]),5);
        tracep->chgCData(oldp+1928,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1929,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1930,(((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                     | ((8U & (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                               << 3U)) 
                                        | ((4U & ((~ 
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                    >> 2U)) 
                                                  << 2U)) 
                                           | (3U & 
                                              ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                               ^ ((2U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        >> 4U))))))))),5);
        tracep->chgCData(oldp+1931,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                    [9U]),5);
        tracep->chgCData(oldp+1932,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+1933,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+1934,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d))),4);
        tracep->chgCData(oldp+1935,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d))),4);
        tracep->chgCData(oldp+1936,((0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d) 
                                             >> 4U))),4);
        tracep->chgCData(oldp+1937,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed))),4);
        tracep->chgCData(oldp+1938,((0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                                             >> 4U))),4);
        tracep->chgCData(oldp+1939,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))),4);
        tracep->chgCData(oldp+1940,((0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                             >> 4U))),4);
        tracep->chgCData(oldp+1941,((0x1fU & ((0xfU 
                                               & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                              + (0xfU 
                                                 & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                                    >> 4U))))),5);
        tracep->chgBit(oldp+1942,((0xfU != (0x1fU & 
                                            ((0xfU 
                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                             + (0xfU 
                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                                   >> 4U)))))));
        tracep->chgCData(oldp+1943,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt),5);
        tracep->chgBit(oldp+1944,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 4U))));
        tracep->chgCData(oldp+1945,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                      & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                         >> 4U)) ? 0xfU
                                      : (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))),4);
        tracep->chgBit(oldp+1946,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                   & (~ (IData)((0xfU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))))))));
        tracep->chgCData(oldp+1947,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),4);
        tracep->chgCData(oldp+1948,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed))),4);
        tracep->chgCData(oldp+1949,((0xfU & ((IData)(0xfU) 
                                             - (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset)))),4);
        tracep->chgCData(oldp+1950,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt),5);
        tracep->chgBit(oldp+1951,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U))));
        tracep->chgCData(oldp+1952,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                      & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                         >> 4U)) ? 0U
                                      : (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))),4);
        tracep->chgBit(oldp+1953,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                   & (0U != (0xfU & 
                                             ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                              >> 4U))))));
        tracep->chgCData(oldp+1954,(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),4);
        tracep->chgCData(oldp+1955,((0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                                             >> 4U))),4);
        tracep->chgBit(oldp+1956,((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert_test))));
        tracep->chgBit(oldp+1957,((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert))));
        tracep->chgBit(oldp+1958,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q))));
        tracep->chgBit(oldp+1959,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
        tracep->chgBit(oldp+1960,((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
        tracep->chgBit(oldp+1961,((1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                         >> 1U))));
        tracep->chgBit(oldp+1962,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
        tracep->chgBit(oldp+1963,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o))));
        tracep->chgBit(oldp+1964,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint));
        tracep->chgBit(oldp+1965,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
        tracep->chgCData(oldp+1966,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d),3);
        tracep->chgCData(oldp+1967,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q),3);
        tracep->chgBit(oldp+1968,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        tracep->chgBit(oldp+1969,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd));
        tracep->chgBit(oldp+1970,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint))));
        tracep->chgBit(oldp+1971,(((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger))));
        tracep->chgBit(oldp+1972,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr));
        tracep->chgBit(oldp+1973,(((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
        tracep->chgBit(oldp+1974,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
        tracep->chgBit(oldp+1975,(((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger))));
        tracep->chgBit(oldp+1976,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
        tracep->chgBit(oldp+1977,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr));
        tracep->chgBit(oldp+1978,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger));
        tracep->chgBit(oldp+1979,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
        tracep->chgBit(oldp+1980,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
        tracep->chgBit(oldp+1981,((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert))));
        tracep->chgBit(oldp+1982,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
        tracep->chgBit(oldp+1983,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o));
        tracep->chgBit(oldp+1984,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o));
        tracep->chgBit(oldp+1985,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o))));
        tracep->chgBit(oldp+1986,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q));
        tracep->chgCData(oldp+1987,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d),2);
        tracep->chgCData(oldp+1988,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q),2);
        tracep->chgBit(oldp+1989,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge));
        tracep->chgBit(oldp+1990,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge));
        tracep->chgBit(oldp+1991,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok));
        tracep->chgBit(oldp+1992,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
        tracep->chgBit(oldp+1993,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq));
        tracep->chgBit(oldp+1994,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq));
        tracep->chgBit(oldp+1995,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
        tracep->chgBit(oldp+1996,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
        tracep->chgBit(oldp+1997,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q));
        tracep->chgBit(oldp+1998,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        tracep->chgBit(oldp+1999,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        tracep->chgBit(oldp+2000,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
        tracep->chgBit(oldp+2001,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o));
        tracep->chgBit(oldp+2002,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o));
        tracep->chgBit(oldp+2003,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q));
        tracep->chgCData(oldp+2004,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d),2);
        tracep->chgCData(oldp+2005,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q),2);
        tracep->chgBit(oldp+2006,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge));
        tracep->chgBit(oldp+2007,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge));
        tracep->chgBit(oldp+2008,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok));
        tracep->chgBit(oldp+2009,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
        tracep->chgBit(oldp+2010,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq));
        tracep->chgBit(oldp+2011,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq));
        tracep->chgBit(oldp+2012,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
        tracep->chgBit(oldp+2013,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
        tracep->chgBit(oldp+2014,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q));
        tracep->chgBit(oldp+2015,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        tracep->chgBit(oldp+2016,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        tracep->chgBit(oldp+2017,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert)))));
        tracep->chgCData(oldp+2018,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                                      << 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd))),2);
        tracep->chgCData(oldp+2019,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o),2);
        tracep->chgBit(oldp+2020,((1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert_test) 
                                         >> 1U))));
        tracep->chgBit(oldp+2021,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q))));
        tracep->chgBit(oldp+2022,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
        tracep->chgBit(oldp+2023,((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
        tracep->chgBit(oldp+2024,((1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                         >> 1U))));
        tracep->chgBit(oldp+2025,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
        tracep->chgBit(oldp+2026,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o))));
        tracep->chgBit(oldp+2027,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint));
        tracep->chgBit(oldp+2028,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
        tracep->chgCData(oldp+2029,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d),3);
        tracep->chgCData(oldp+2030,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q),3);
        tracep->chgBit(oldp+2031,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        tracep->chgBit(oldp+2032,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd));
        tracep->chgBit(oldp+2033,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint))));
        tracep->chgBit(oldp+2034,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger));
        tracep->chgBit(oldp+2035,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr));
        tracep->chgBit(oldp+2036,(((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
        tracep->chgBit(oldp+2037,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
        tracep->chgBit(oldp+2038,(((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger))));
        tracep->chgBit(oldp+2039,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
        tracep->chgBit(oldp+2040,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr));
        tracep->chgBit(oldp+2041,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
        tracep->chgBit(oldp+2042,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
        tracep->chgBit(oldp+2043,((1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert) 
                                         >> 1U))));
        tracep->chgBit(oldp+2044,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger))));
        tracep->chgBit(oldp+2045,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o));
        tracep->chgBit(oldp+2046,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o));
        tracep->chgBit(oldp+2047,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o) 
                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o))));
        tracep->chgBit(oldp+2048,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q));
        tracep->chgCData(oldp+2049,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d),2);
        tracep->chgCData(oldp+2050,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q),2);
        tracep->chgBit(oldp+2051,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge));
        tracep->chgBit(oldp+2052,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge));
        tracep->chgBit(oldp+2053,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok));
        tracep->chgBit(oldp+2054,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
        tracep->chgBit(oldp+2055,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq));
        tracep->chgBit(oldp+2056,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq));
        tracep->chgBit(oldp+2057,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
        tracep->chgBit(oldp+2058,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
        tracep->chgBit(oldp+2059,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q));
        tracep->chgBit(oldp+2060,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        tracep->chgBit(oldp+2061,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        tracep->chgBit(oldp+2062,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
        tracep->chgBit(oldp+2063,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o));
        tracep->chgBit(oldp+2064,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o));
        tracep->chgBit(oldp+2065,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q));
        tracep->chgCData(oldp+2066,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d),2);
        tracep->chgCData(oldp+2067,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q),2);
        tracep->chgBit(oldp+2068,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge));
        tracep->chgBit(oldp+2069,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge));
        tracep->chgBit(oldp+2070,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok));
        tracep->chgBit(oldp+2071,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
        tracep->chgBit(oldp+2072,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq));
        tracep->chgBit(oldp+2073,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq));
        tracep->chgBit(oldp+2074,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
        tracep->chgBit(oldp+2075,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
        tracep->chgBit(oldp+2076,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q));
        tracep->chgBit(oldp+2077,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
        tracep->chgBit(oldp+2078,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
        tracep->chgBit(oldp+2079,((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert) 
                                            >> 1U)))));
        tracep->chgCData(oldp+2080,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                                      << 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd))),2);
        tracep->chgCData(oldp+2081,(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o),2);
        tracep->chgBit(oldp+2082,((1U & (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                                                 >> 0x21U)))));
        tracep->chgBit(oldp+2083,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs));
        tracep->chgBit(oldp+2084,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns));
        tracep->chgBit(oldp+2085,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs));
        tracep->chgBit(oldp+2086,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
        tracep->chgBit(oldp+2087,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
        tracep->chgBit(oldp+2088,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack));
        tracep->chgBit(oldp+2089,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
        tracep->chgBit(oldp+2090,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
        tracep->chgBit(oldp+2091,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req));
        tracep->chgBit(oldp+2092,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake));
        tracep->chgBit(oldp+2093,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq));
        tracep->chgBit(oldp+2094,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq));
        tracep->chgBit(oldp+2095,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we));
        tracep->chgBit(oldp+2096,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re));
        tracep->chgCData(oldp+2097,((0xfcU & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                               << 4U) 
                                              | (0xcU 
                                                 & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    >> 0x1cU))))),8);
        tracep->chgIData(oldp+2098,(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                      << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                >> 0x18U))),32);
        tracep->chgCData(oldp+2099,((0xfU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                             >> 0x18U))),4);
        tracep->chgIData(oldp+2100,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->chgBit(oldp+2101,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error));
        tracep->chgBit(oldp+2102,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addrmiss));
        tracep->chgBit(oldp+2103,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__wr_err));
        tracep->chgBit(oldp+2104,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__rst_done)))));
        tracep->chgBit(oldp+2105,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                         >> 1U))));
        tracep->chgCData(oldp+2106,((7U & ((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                            << 2U) 
                                           | (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                              >> 0x1eU)))),3);
        tracep->chgCData(oldp+2107,((7U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                           >> 0x1bU))),3);
        tracep->chgCData(oldp+2108,((3U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                           >> 0x19U))),2);
        tracep->chgCData(oldp+2109,((0xffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                              >> 0x11U))),8);
        tracep->chgBit(oldp+2110,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                         >> 0x10U))));
        tracep->chgIData(oldp+2111,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                      << 0x10U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                   >> 0x10U))),32);
        tracep->chgCData(oldp+2112,((0x7fU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                              >> 9U))),7);
        tracep->chgCData(oldp+2113,((0x7fU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                              >> 2U))),7);
        tracep->chgBit(oldp+2114,((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                         >> 1U))));
        tracep->chgBit(oldp+2115,((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U])));
        tracep->chgBit(oldp+2116,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__intg_err));
        tracep->chgBit(oldp+2117,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_err));
        tracep->chgQData(oldp+2118,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check),47);
        tracep->chgBit(oldp+2120,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__err_q));
        tracep->chgBit(oldp+2121,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_we));
        tracep->chgBit(oldp+2122,((1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                         >> 0x18U))));
        tracep->chgBit(oldp+2123,((1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                         >> 0x19U))));
        tracep->chgBit(oldp+2124,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we));
        tracep->chgBit(oldp+2125,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we));
        tracep->chgBit(oldp+2126,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we));
        tracep->chgBit(oldp+2127,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we));
        tracep->chgBit(oldp+2128,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we));
        tracep->chgBit(oldp+2129,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we));
        tracep->chgBit(oldp+2130,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we));
        tracep->chgBit(oldp+2131,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we));
        tracep->chgBit(oldp+2132,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we));
        tracep->chgBit(oldp+2133,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we));
        tracep->chgBit(oldp+2134,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we));
        tracep->chgBit(oldp+2135,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we));
        tracep->chgBit(oldp+2136,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we));
        tracep->chgBit(oldp+2137,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we));
        tracep->chgBit(oldp+2138,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we));
        tracep->chgBit(oldp+2139,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we));
        tracep->chgBit(oldp+2140,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we));
        tracep->chgBit(oldp+2141,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we));
        tracep->chgBit(oldp+2142,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we));
        tracep->chgBit(oldp+2143,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we));
        tracep->chgBit(oldp+2144,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we));
        tracep->chgBit(oldp+2145,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we));
        tracep->chgBit(oldp+2146,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_2_we));
        tracep->chgBit(oldp+2147,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_3_we));
        tracep->chgBit(oldp+2148,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_we));
        tracep->chgBit(oldp+2149,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_we));
        tracep->chgBit(oldp+2150,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_we));
        tracep->chgBit(oldp+2151,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_we));
        tracep->chgBit(oldp+2152,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x1dU)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2153,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2154,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x1eU)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2155,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2156,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x1fU)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2157,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2158,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x20U)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2159,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2160,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x21U)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2161,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2162,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x22U)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2163,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2164,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x23U)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2165,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2166,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2167,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2168,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re));
        tracep->chgBit(oldp+2169,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we));
        tracep->chgCData(oldp+2170,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_q),3);
        tracep->chgCData(oldp+2171,((7U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                           >> 0x18U))),3);
        tracep->chgBit(oldp+2172,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_storage_err));
        tracep->chgBit(oldp+2173,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_update_err));
        tracep->chgCData(oldp+2174,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_q),2);
        tracep->chgCData(oldp+2175,((3U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                           >> 0x1bU))),2);
        tracep->chgBit(oldp+2176,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_storage_err));
        tracep->chgBit(oldp+2177,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_update_err));
        tracep->chgBit(oldp+2178,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_q));
        tracep->chgBit(oldp+2179,((1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+2180,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_storage_err));
        tracep->chgBit(oldp+2181,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_update_err));
        tracep->chgBit(oldp+2182,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_q));
        tracep->chgBit(oldp+2183,((1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+2184,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_storage_err));
        tracep->chgBit(oldp+2185,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_update_err));
        tracep->chgBit(oldp+2186,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_q));
        tracep->chgBit(oldp+2187,((vlSelf->ascon_sim__DOT__tl_i[0U] 
                                   >> 0x1fU)));
        tracep->chgBit(oldp+2188,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_storage_err));
        tracep->chgBit(oldp+2189,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_update_err));
        tracep->chgCData(oldp+2190,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_q),4);
        tracep->chgCData(oldp+2191,((0xfU & vlSelf->ascon_sim__DOT__tl_i[1U])),4);
        tracep->chgBit(oldp+2192,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_storage_err));
        tracep->chgBit(oldp+2193,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_update_err));
        tracep->chgCData(oldp+2194,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_q),4);
        tracep->chgCData(oldp+2195,((0xfU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                             >> 4U))),4);
        tracep->chgBit(oldp+2196,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_storage_err));
        tracep->chgBit(oldp+2197,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_update_err));
        tracep->chgBit(oldp+2198,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_re));
        tracep->chgBit(oldp+2199,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x26U)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgBit(oldp+2200,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_q));
        tracep->chgBit(oldp+2201,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_storage_err));
        tracep->chgBit(oldp+2202,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_update_err));
        tracep->chgBit(oldp+2203,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_q));
        tracep->chgBit(oldp+2204,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_storage_err));
        tracep->chgBit(oldp+2205,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_update_err));
        tracep->chgBit(oldp+2206,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_regwen_we));
        tracep->chgBit(oldp+2207,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q));
        tracep->chgBit(oldp+2208,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_re));
        tracep->chgBit(oldp+2209,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we));
        tracep->chgSData(oldp+2210,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q),12);
        tracep->chgSData(oldp+2211,((0xfffU & ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                << 8U) 
                                               | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))),12);
        tracep->chgBit(oldp+2212,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_storage_err));
        tracep->chgBit(oldp+2213,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_update_err));
        tracep->chgSData(oldp+2214,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q),12);
        tracep->chgSData(oldp+2215,((0xfffU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                               >> 4U))),12);
        tracep->chgBit(oldp+2216,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_storage_err));
        tracep->chgBit(oldp+2217,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_update_err));
        tracep->chgCData(oldp+2218,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q),5);
        tracep->chgCData(oldp+2219,((0x1fU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                              >> 0x10U))),5);
        tracep->chgBit(oldp+2220,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_storage_err));
        tracep->chgBit(oldp+2221,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_update_err));
        tracep->chgBit(oldp+2222,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__trigger_we));
        tracep->chgBit(oldp+2223,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_start__q));
        tracep->chgBit(oldp+2224,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_wipe__q));
        tracep->chgBit(oldp+2225,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_idle__DOT__q));
        tracep->chgBit(oldp+2226,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_stall__DOT__q));
        tracep->chgBit(oldp+2227,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_wait_edn__DOT__q));
        tracep->chgBit(oldp+2228,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_ascon_error__DOT__q));
        tracep->chgBit(oldp+2229,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q));
        tracep->chgBit(oldp+2230,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q));
        tracep->chgBit(oldp+2231,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_msg_valid__DOT__q));
        tracep->chgBit(oldp+2232,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_tag_valid__DOT__q));
        tracep->chgCData(oldp+2233,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_tag_comparison_valid__DOT__q),2);
        tracep->chgBit(oldp+2234,((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x2cU)) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))));
        tracep->chgIData(oldp+2235,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                      << 0x18U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                                   >> 8U))),32);
        tracep->chgBit(oldp+2236,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__fsm_state_regren_we));
        tracep->chgBit(oldp+2237,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__q));
        tracep->chgBit(oldp+2238,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_no_key__DOT__q));
        tracep->chgBit(oldp+2239,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_no_nonce__DOT__q));
        tracep->chgBit(oldp+2240,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_wrong_order__DOT__q));
        tracep->chgBit(oldp+2241,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_flag_input_missmatch__DOT__q));
        tracep->chgBit(oldp+2242,((3U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_flds_we))));
        tracep->chgCData(oldp+2243,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_flds_we),2);
        tracep->chgBit(oldp+2244,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_qe));
        tracep->chgBit(oldp+2245,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_qe));
        tracep->chgBit(oldp+2246,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_qe));
        tracep->chgBit(oldp+2247,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_qe));
        tracep->chgBit(oldp+2248,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we));
        tracep->chgQData(oldp+2249,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit),47);
        tracep->chgBit(oldp+2251,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__rst_done));
        tracep->chgBit(oldp+2252,((1U & VL_REDXOR_32(
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                         >> 0x18U))))));
        tracep->chgBit(oldp+2253,((1U & VL_REDXOR_32(
                                                     (0xfU 
                                                      & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         >> 0x18U))))));
        tracep->chgBit(oldp+2254,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_we));
        tracep->chgSData(oldp+2255,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q))),12);
        tracep->chgBit(oldp+2256,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__phase_q));
        tracep->chgBit(oldp+2257,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_we));
        tracep->chgSData(oldp+2258,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd),12);
        tracep->chgSData(oldp+2259,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_q),12);
        tracep->chgSData(oldp+2260,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data),12);
        tracep->chgSData(oldp+2261,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data)
                                      : 0U)),12);
        tracep->chgSData(oldp+2262,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),12);
        tracep->chgSData(oldp+2263,((0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data)))),12);
        tracep->chgBit(oldp+2264,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_we));
        tracep->chgSData(oldp+2265,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q))),12);
        tracep->chgBit(oldp+2266,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__phase_q));
        tracep->chgBit(oldp+2267,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_we));
        tracep->chgSData(oldp+2268,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd),12);
        tracep->chgSData(oldp+2269,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_q),12);
        tracep->chgSData(oldp+2270,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data),12);
        tracep->chgSData(oldp+2271,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data)
                                      : 0U)),12);
        tracep->chgSData(oldp+2272,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),12);
        tracep->chgSData(oldp+2273,((0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data)))),12);
        tracep->chgBit(oldp+2274,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_we));
        tracep->chgCData(oldp+2275,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q))),5);
        tracep->chgBit(oldp+2276,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__phase_q));
        tracep->chgBit(oldp+2277,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_we));
        tracep->chgCData(oldp+2278,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd),5);
        tracep->chgCData(oldp+2279,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_q),5);
        tracep->chgCData(oldp+2280,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data),5);
        tracep->chgCData(oldp+2281,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data)
                                      : 0U)),5);
        tracep->chgCData(oldp+2282,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),5);
        tracep->chgCData(oldp+2283,((0x1fU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data)))),5);
        tracep->chgCData(oldp+2284,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err),2);
        tracep->chgBit(oldp+2285,((0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
        tracep->chgCData(oldp+2286,((0xfU & (IData)(
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__cmd 
                                                     >> 0x27U)))),4);
        tracep->chgIData(oldp+2287,((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__cmd 
                                             >> 7U))),32);
        tracep->chgCData(oldp+2288,((7U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__cmd 
                                                   >> 4U)))),3);
        tracep->chgCData(oldp+2289,((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__cmd))),4);
        tracep->chgBit(oldp+2290,((0U != (((vlSelf->ascon_sim__DOT__tl_i[0U] 
                                            | vlSelf->ascon_sim__DOT__tl_i[1U]) 
                                           | vlSelf->ascon_sim__DOT__tl_i[2U]) 
                                          | vlSelf->ascon_sim__DOT__tl_i[3U]))));
        tracep->chgQData(oldp+2291,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i),64);
        tracep->chgQData(oldp+2293,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o),57);
        tracep->chgCData(oldp+2295,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o),7);
        tracep->chgQData(oldp+2296,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i),39);
        tracep->chgCData(oldp+2298,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err),2);
        tracep->chgIData(oldp+2299,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o),32);
        tracep->chgCData(oldp+2300,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o),7);
        tracep->chgBit(oldp+2301,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_regwen_we)
                                    ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__wr_data)
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q))));
        tracep->chgBit(oldp+2302,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__wr_data));
        tracep->chgBit(oldp+2303,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_we));
        tracep->chgBit(oldp+2304,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_we)
                                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_we) 
                                       & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data))
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_q))));
        tracep->chgBit(oldp+2305,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__phase_q));
        tracep->chgBit(oldp+2306,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_we));
        tracep->chgBit(oldp+2307,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd));
        tracep->chgBit(oldp+2308,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_q));
        tracep->chgBit(oldp+2309,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data));
        tracep->chgBit(oldp+2310,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_we) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data))));
        tracep->chgBit(oldp+2311,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data));
        tracep->chgBit(oldp+2312,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data)))));
        tracep->chgBit(oldp+2313,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_we));
        tracep->chgBit(oldp+2314,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_we)
                                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_we) 
                                       & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data))
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_q))));
        tracep->chgBit(oldp+2315,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__phase_q));
        tracep->chgBit(oldp+2316,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_we));
        tracep->chgBit(oldp+2317,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd));
        tracep->chgBit(oldp+2318,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_q));
        tracep->chgBit(oldp+2319,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data));
        tracep->chgBit(oldp+2320,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_we) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data))));
        tracep->chgBit(oldp+2321,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data));
        tracep->chgBit(oldp+2322,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data)))));
        tracep->chgBit(oldp+2323,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_we));
        tracep->chgCData(oldp+2324,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_q))),2);
        tracep->chgBit(oldp+2325,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__phase_q));
        tracep->chgBit(oldp+2326,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_we));
        tracep->chgCData(oldp+2327,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd),2);
        tracep->chgCData(oldp+2328,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_q),2);
        tracep->chgCData(oldp+2329,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data),2);
        tracep->chgCData(oldp+2330,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data)
                                      : 0U)),2);
        tracep->chgCData(oldp+2331,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),2);
        tracep->chgCData(oldp+2332,((3U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data)))),2);
        tracep->chgBit(oldp+2333,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_we));
        tracep->chgBit(oldp+2334,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_we)
                                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_we) 
                                       & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data))
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_q))));
        tracep->chgBit(oldp+2335,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__phase_q));
        tracep->chgBit(oldp+2336,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_we));
        tracep->chgBit(oldp+2337,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd));
        tracep->chgBit(oldp+2338,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_q));
        tracep->chgBit(oldp+2339,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data));
        tracep->chgBit(oldp+2340,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_we) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data))));
        tracep->chgBit(oldp+2341,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data));
        tracep->chgBit(oldp+2342,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data)))));
        tracep->chgBit(oldp+2343,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_we));
        tracep->chgBit(oldp+2344,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_we)
                                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_we) 
                                       & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data))
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_q))));
        tracep->chgBit(oldp+2345,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__phase_q));
        tracep->chgBit(oldp+2346,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_we));
        tracep->chgBit(oldp+2347,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd));
        tracep->chgBit(oldp+2348,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_q));
        tracep->chgBit(oldp+2349,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data));
        tracep->chgBit(oldp+2350,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_we) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data))));
        tracep->chgBit(oldp+2351,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data));
        tracep->chgBit(oldp+2352,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data)))));
        tracep->chgBit(oldp+2353,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_we));
        tracep->chgCData(oldp+2354,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_q))),4);
        tracep->chgBit(oldp+2355,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__phase_q));
        tracep->chgBit(oldp+2356,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_we));
        tracep->chgCData(oldp+2357,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd),4);
        tracep->chgCData(oldp+2358,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_q),4);
        tracep->chgCData(oldp+2359,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data),4);
        tracep->chgCData(oldp+2360,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data)
                                      : 0U)),4);
        tracep->chgCData(oldp+2361,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),4);
        tracep->chgCData(oldp+2362,((0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data)))),4);
        tracep->chgBit(oldp+2363,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_we));
        tracep->chgCData(oldp+2364,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_q))),4);
        tracep->chgBit(oldp+2365,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__phase_q));
        tracep->chgBit(oldp+2366,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_we));
        tracep->chgCData(oldp+2367,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd),4);
        tracep->chgCData(oldp+2368,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_q),4);
        tracep->chgCData(oldp+2369,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data),4);
        tracep->chgCData(oldp+2370,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data)
                                      : 0U)),4);
        tracep->chgCData(oldp+2371,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),4);
        tracep->chgCData(oldp+2372,((0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data)))),4);
        tracep->chgBit(oldp+2373,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_we));
        tracep->chgCData(oldp+2374,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_we)
                                      ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_we)
                                          ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data)
                                          : 0U) : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_q))),3);
        tracep->chgBit(oldp+2375,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__phase_q));
        tracep->chgBit(oldp+2376,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_we));
        tracep->chgCData(oldp+2377,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd),3);
        tracep->chgCData(oldp+2378,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_q),3);
        tracep->chgCData(oldp+2379,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data),3);
        tracep->chgCData(oldp+2380,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_we)
                                      ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data)
                                      : 0U)),3);
        tracep->chgCData(oldp+2381,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data),3);
        tracep->chgCData(oldp+2382,((7U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data)))),3);
        tracep->chgBit(oldp+2383,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_we));
        tracep->chgBit(oldp+2384,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_we)
                                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_we) 
                                       & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data))
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_q))));
        tracep->chgBit(oldp+2385,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__phase_q));
        tracep->chgBit(oldp+2386,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_we));
        tracep->chgBit(oldp+2387,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd));
        tracep->chgBit(oldp+2388,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_q));
        tracep->chgBit(oldp+2389,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data));
        tracep->chgBit(oldp+2390,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_we) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data))));
        tracep->chgBit(oldp+2391,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data));
        tracep->chgBit(oldp+2392,((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data)))));
        tracep->chgIData(oldp+2393,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2394,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2395,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2396,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2397,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2398,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2399,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2400,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2401,((1U & ((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                             >> 1U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_flag_input_missmatch__DOT__q)))));
        tracep->chgBit(oldp+2402,((1U & ((0x40U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                             >> 7U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_no_key__DOT__q)))));
        tracep->chgBit(oldp+2403,((1U & ((0x10U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                             >> 5U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_no_nonce__DOT__q)))));
        tracep->chgBit(oldp+2404,((1U & ((4U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                             >> 3U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_wrong_order__DOT__q)))));
        tracep->chgBit(oldp+2405,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__fsm_state_regren_we)
                                    ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__wr_data)
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__q))));
        tracep->chgBit(oldp+2406,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__wr_data));
        tracep->chgIData(oldp+2407,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2408,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2409,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2410,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x21U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2411,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2412,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2413,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2414,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2415,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2416,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2417,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2418,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2419,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2420,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2421,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U] 
                                                >> 0x1fU))),32);
        tracep->chgIData(oldp+2422,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U] 
                                      << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U] 
                                                >> 0x1fU))),32);
        tracep->chgBit(oldp+2423,((1U & ((0x2000U & 
                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0xeU)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_msg_valid__DOT__q)))));
        tracep->chgCData(oldp+2424,((3U & ((0x100U 
                                            & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                            ? ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                                << 0x17U) 
                                               | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                                  >> 9U))
                                            : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_tag_comparison_valid__DOT__q)))),2);
        tracep->chgBit(oldp+2425,((1U & ((0x800U & 
                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0xcU)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_tag_valid__DOT__q)))));
        tracep->chgBit(oldp+2426,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we) 
                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addrmiss)))));
        tracep->chgQData(oldp+2427,((0x7fffffffffffULL 
                                     & (~ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check))),47);
        tracep->chgWData(oldp+2429,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree),127);
        tracep->chgWData(oldp+2433,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree),127);
        VL_EXTEND_WQ(127,54, __Vtemp_hcad25c33__0, 
                     (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__)) 
                       << 0x35U) | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__)) 
                                     << 0x34U) | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__)) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__)) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__)) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__)) 
                                                            << 0x30U) 
                                                           | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__)) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__)) 
                                                                  << 0x2eU) 
                                                                 | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__)) 
                                                                     << 0x2dU) 
                                                                    | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__)) 
                                                                        << 0x2cU) 
                                                                       | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__)) 
                                                                           << 0x2bU) 
                                                                          | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__)) 
                                                                              << 0x2aU) 
                                                                             | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__34__KET__)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__33__KET__)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__0__KET__))))))))))))))))))))))))))))))))))))))))))))))))));
        tracep->chgWData(oldp+2437,(__Vtemp_hcad25c33__0),127);
        tracep->chgBit(oldp+2441,(((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addrmiss)))) 
                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__))));
        tracep->chgBit(oldp+2442,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__0__KET__));
        tracep->chgBit(oldp+2443,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__gen_no_addr_check_strict__DOT__unused_and_tree));
        tracep->chgBit(oldp+2444,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
        tracep->chgBit(oldp+2445,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->chgBit(oldp+2446,((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                            >> 1U) 
                                           & vlSelf->ascon_sim__DOT__tl_i[0U]))));
        tracep->chgIData(oldp+2447,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q),32);
        tracep->chgBit(oldp+2448,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__error_q));
        tracep->chgBit(oldp+2449,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->chgBit(oldp+2450,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__instr_error));
        tracep->chgBit(oldp+2451,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))));
        tracep->chgBit(oldp+2452,((1U & (((~ ((((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                     >> 9U))) 
                                                | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                       >> 9U)))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                      >> 9U)))) 
                                              & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                 & (((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                          >> 9U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                            >> 9U)))) 
                                                    | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))) 
                                          | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err)) 
                                         | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err)))));
        tracep->chgCData(oldp+2453,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q),8);
        tracep->chgCData(oldp+2454,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q),2);
        tracep->chgCData(oldp+2455,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q),3);
        tracep->chgBit(oldp+2456,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->chgBit(oldp+2457,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        tracep->chgCData(oldp+2458,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q),3);
        tracep->chgCData(oldp+2459,((7U & (IData)((0x7fULL 
                                                   & (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                       >> 2U) 
                                                      | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                          >> 0xaU) 
                                                         | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                            >> 0x2bU))))))),3);
        tracep->chgCData(oldp+2460,((3U & (IData)((0x1ffULL 
                                                   & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                      | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                          >> 8U) 
                                                         | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                            >> 0x29U))))))),2);
        tracep->chgCData(oldp+2461,((0xffU & (IData)(
                                                     ((0x1ff00ULL 
                                                       & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                          << 8U)) 
                                                      | (0x1ffffULL 
                                                         & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                            | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                               >> 0x21U))))))),8);
        tracep->chgBit(oldp+2462,((1U & (IData)(((0x3fe00ULL 
                                                  & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                     << 9U)) 
                                                 | ((0x3fffeULL 
                                                     & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                        << 1U)) 
                                                    | (0x3ffffULL 
                                                       & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                          >> 0x20U))))))));
        tracep->chgIData(oldp+2463,((IData)(((0x3fe0000000000ULL 
                                              & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                 << 0x29U)) 
                                             | ((0x3fffe00000000ULL 
                                                 & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                    << 0x21U)) 
                                                | (0x3ffffffffffffULL 
                                                   & (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))))))),32);
        tracep->chgCData(oldp+2464,((0x7fU & (IData)(
                                                     ((0x1ff000000000000ULL 
                                                       & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                          << 0x30U)) 
                                                      | ((0x1ffff0000000000ULL 
                                                          & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                             << 0x28U)) 
                                                         | (0x1ffffffffffff80ULL 
                                                            & ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                               << 7U))))))),7);
        tracep->chgCData(oldp+2465,((0x7fU & (IData)(
                                                     (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                       << 0x37U) 
                                                      | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                          << 0x2fU) 
                                                         | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                            << 0xeU)))))),7);
        tracep->chgBit(oldp+2466,((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                            | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__rst_done)))))));
        tracep->chgBit(oldp+2467,((((0U == (7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                  >> 9U))) 
                                    | (1U == (7U & 
                                              (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                               >> 9U)))) 
                                   | (4U == (7U & (
                                                   vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                   >> 9U))))));
        tracep->chgBit(oldp+2468,((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                >> 9U))) 
                                       | (1U == (7U 
                                                 & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                    >> 9U)))) 
                                      | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgBit(oldp+2469,((0U == (7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                >> 9U)))));
        tracep->chgBit(oldp+2470,((1U == (7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                >> 9U)))));
        tracep->chgBit(oldp+2471,((4U == (7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                >> 9U)))));
        tracep->chgBit(oldp+2472,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err));
        tracep->chgBit(oldp+2473,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err));
        tracep->chgBit(oldp+2474,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        tracep->chgBit(oldp+2475,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        tracep->chgBit(oldp+2476,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        tracep->chgCData(oldp+2477,((0xfU & ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    >> 0x1cU))))),4);
        tracep->chgBit(oldp+2478,((1U & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                          ^ (VL_REDXOR_4(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                                             ^ (VL_REDXOR_2(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q) 
                                                ^ (
                                                   VL_REDXOR_8(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q) 
                                                   ^ 
                                                   VL_REDXOR_32(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))))) 
                                         ^ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                            ^ (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                                  | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__rst_done)))))))));
        tracep->chgCData(oldp+2479,((0x7fU & (IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                      >> 0x39U)))),7);
        tracep->chgCData(oldp+2480,((0x7fU & (IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                      >> 0x20U)))),7);
        tracep->chgBit(oldp+2481,((1U & VL_REDXOR_32(
                                                     ((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                       ^ 
                                                       vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U]) 
                                                      ^ 
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U])))));
        tracep->chgIData(oldp+2482,((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o)),32);
        tracep->chgIData(oldp+2483,(((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                      << 0x10U) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                   >> 0x10U))),32);
        tracep->chgQData(oldp+2484,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o),39);
        tracep->chgCData(oldp+2486,((7U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                           >> 3U))),3);
        tracep->chgCData(oldp+2487,((3U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                           >> 1U))),2);
        tracep->chgBit(oldp+2488,((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))));
        tracep->chgQData(oldp+2489,((0x1ffffffffffffffULL 
                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o)),57);
        tracep->chgQData(oldp+2491,((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))),57);
        tracep->chgQData(oldp+2493,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o),64);
        tracep->chgBit(oldp+2495,((1U & ((0x8000U & 
                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0x10U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q)))));
        tracep->chgBit(oldp+2496,((1U & ((0x20000U 
                                          & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0x12U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q)))));
        tracep->chgBit(oldp+2497,((1U & ((0x80000U 
                                          & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0x14U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_ascon_error__DOT__q)))));
        tracep->chgBit(oldp+2498,((1U & ((0x2000000U 
                                          & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0x1aU)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_idle__DOT__q)))));
        tracep->chgBit(oldp+2499,((1U & ((0x800000U 
                                          & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0x18U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_stall__DOT__q)))));
        tracep->chgBit(oldp+2500,((1U & ((0x200000U 
                                          & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U])
                                          ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                             >> 0x16U)
                                          : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_wait_edn__DOT__q)))));
        tracep->chgIData(oldp+2501,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_0__q),32);
        tracep->chgIData(oldp+2502,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_we)
                                      ? vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_0__DOT__wr_data
                                      : vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_0__q)),32);
        tracep->chgIData(oldp+2503,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_0__DOT__wr_data),32);
        tracep->chgIData(oldp+2504,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q),32);
        tracep->chgIData(oldp+2505,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_we)
                                      ? vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_1__DOT__wr_data
                                      : vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q)),32);
        tracep->chgIData(oldp+2506,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_1__DOT__wr_data),32);
        tracep->chgIData(oldp+2507,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_2__q),32);
        tracep->chgIData(oldp+2508,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_we)
                                      ? vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_2__DOT__wr_data
                                      : vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_2__q)),32);
        tracep->chgIData(oldp+2509,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_2__DOT__wr_data),32);
        tracep->chgIData(oldp+2510,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_3__q),32);
        tracep->chgIData(oldp+2511,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_we)
                                      ? vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_3__DOT__wr_data
                                      : vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_3__q)),32);
        tracep->chgIData(oldp+2512,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_3__DOT__wr_data),32);
        tracep->chgBit(oldp+2513,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_en)
                                    ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data)
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_start__q))));
        tracep->chgBit(oldp+2514,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_en));
        tracep->chgBit(oldp+2515,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data));
        tracep->chgBit(oldp+2516,(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_en)
                                    ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_data)
                                    : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_wipe__q))));
        tracep->chgBit(oldp+2517,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_en));
        tracep->chgBit(oldp+2518,(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_data));
    }
    tracep->chgBit(oldp+2519,(vlSelf->clk_i));
    tracep->chgBit(oldp+2520,(vlSelf->rst_ni));
    tracep->chgBit(oldp+2521,(vlSelf->test_done_o));
    tracep->chgBit(oldp+2522,(vlSelf->test_passed_o));
}
