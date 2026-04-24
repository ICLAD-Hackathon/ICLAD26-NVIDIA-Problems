// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb___024root.h"

VL_INLINE_OPT void Vprim_ascon_duplex_tb___024root___sequent__TOP__5(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [2U]))) << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 4U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 3U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 2U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 1U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [3U]))) << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 4U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 3U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 2U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 1U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [4U]))) << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 4U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 3U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 2U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 1U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [5U]))) << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 4U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 3U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 2U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 1U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [6U]))) << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 4U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 3U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 2U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 1U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [7U]))) << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 4U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 3U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 2U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 1U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [8U]))) << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 4U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 3U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 2U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 1U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [9U]))) << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 4U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 3U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 2U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 1U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xaU]))) << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 4U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 3U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 2U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 1U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xbU]))) << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 4U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 3U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 2U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 1U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xcU]))) << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 4U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 3U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 2U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 1U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xdU]))) << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 4U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 3U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 2U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 1U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xeU]))) << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 4U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 3U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 2U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 1U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xfU]))) << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 4U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 3U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 2U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 1U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x10U]))) << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 4U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 3U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 2U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 1U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x11U]))) << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 4U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 3U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 2U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 1U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x12U]))) << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 4U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 3U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 2U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 1U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x13U]))) << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 4U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 3U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 2U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 1U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x14U]))) << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 4U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 3U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 2U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 1U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x15U]))) << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 4U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 3U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 2U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 1U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x16U]))) << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 4U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 3U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 2U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 1U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x17U]))) << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 4U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 3U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 2U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 1U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x18U]))) << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 4U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 3U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 2U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 1U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x19U]))) << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 4U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 3U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 2U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 1U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1aU]))) << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 4U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 3U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 2U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 1U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1bU]))) << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 4U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 3U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 2U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 1U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1cU]))) << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 4U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 3U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 2U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 1U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1dU]))) << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 4U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 3U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 2U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 1U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1eU]))) << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 4U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 3U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 2U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 1U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1fU]))) << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 4U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 3U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 2U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 1U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x20U]))) << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 4U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 3U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 2U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 1U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x21U]))) << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 4U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 3U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 2U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 1U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x22U]))) << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 4U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 3U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 2U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 1U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x23U]))) << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 4U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 3U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 2U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 1U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x24U]))) << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 4U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 3U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 2U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 1U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x25U]))) << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 4U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 3U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 2U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 1U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x26U]))) << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 4U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 3U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 2U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 1U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x27U]))) << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 4U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 3U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 2U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 1U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x28U]))) << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 4U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 3U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 2U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 1U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x29U]))) << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 4U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 3U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 2U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 1U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2aU]))) << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 4U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 3U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 2U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 1U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2bU]))) << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 4U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 3U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 2U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 1U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2cU]))) << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 4U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 3U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 2U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 1U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2dU]))) << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 4U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 3U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 2U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 1U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2eU]))) << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 4U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 3U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 2U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 1U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2fU]))) << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 4U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 3U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 2U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 1U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x30U]))) << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 4U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 3U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 2U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 1U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x31U]))) << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 4U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 3U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 2U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 1U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x32U]))) << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 4U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 3U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 2U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 1U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x33U]))) << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 4U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 3U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 2U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 1U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x34U]))) << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 4U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 3U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 2U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 1U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x35U]))) << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 4U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 3U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 2U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 1U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x36U]))) << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 4U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 3U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 2U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 1U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x37U]))) << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 4U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 3U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 2U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 1U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x38U]))) << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 4U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 3U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 2U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 1U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x39U]))) << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 4U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 3U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 2U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 1U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3aU]))) << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 4U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 3U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 2U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 1U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3bU]))) << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 4U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 3U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 2U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 1U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3cU]))) << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 4U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 3U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 2U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 1U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3dU]))) << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 4U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 3U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 2U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 1U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3eU]))) << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 4U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 3U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 2U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 1U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3fU]))) << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[0U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[1U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [0U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[2U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[3U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [1U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[4U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[5U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [2U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[6U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [3U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[7U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [3U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[8U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [4U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[9U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [4U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[0U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[0U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[1U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[2U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[2U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[4U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[3U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[6U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[4U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[8U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[0U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [0U] ^ (((QData)((IData)((0x7ffffU & (IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                         [0U])))) 
                     << 0x2dU) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [0U] >> 0x13U))) 
           ^ (((QData)((IData)((0xfffffffU & (IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                     [0U])))) 
               << 0x24U) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                            [0U] >> 0x1cU)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[1U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [1U] ^ ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                     [1U] << 3U) | (QData)((IData)(
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                               [1U] 
                                                               >> 0x3dU))))))) 
           ^ ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
               [1U] << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                            [1U] 
                                                            >> 0x27U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[2U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [2U] ^ (((QData)((IData)((1U & (IData)(
                                                   vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                   [2U])))) 
                     << 0x3fU) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [2U] >> 1U))) ^ (
                                                   ((QData)((IData)(
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                                               [2U])))) 
                                                    << 0x3aU) 
                                                   | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                      [2U] 
                                                      >> 6U)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[3U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [3U] ^ (((QData)((IData)((0x3ffU & (IData)(
                                                       vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                       [3U])))) 
                     << 0x36U) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [3U] >> 0xaU))) ^ 
           (((QData)((IData)((0x1ffffU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                 [3U])))) 
             << 0x2fU) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                          [3U] >> 0x11U)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[4U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [4U] ^ (((QData)((IData)((0x7fU & (IData)(
                                                      vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                      [4U])))) 
                     << 0x39U) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [4U] >> 7U))) ^ (
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                    [4U] 
                                                    << 0x17U) 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                                                [4U] 
                                                                                >> 0x29U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [0U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [1U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [2U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [3U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [3U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [4U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [4U] >> 0x20U));
}

VL_INLINE_OPT void Vprim_ascon_duplex_tb___024root___sequent__TOP__6(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___sequent__TOP__6\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v0;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v0;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v0;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v0;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v0;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v0;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v1;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v1;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v1;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v1;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v1;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v1;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v2;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v2;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v2;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v2;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v2;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v2;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v3;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v3;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v3;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v3;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v3;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v3;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v4;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v4;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v4;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v4;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v4;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v4;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v5;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v5;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v5;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v5;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v5;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v5;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v6;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v6;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v6;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v6;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v6;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v6;
    CData/*4:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v7;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v7;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v7;
    CData/*3:0*/ __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v7;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v7;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v7;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v8;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v8;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v0;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v0;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v9;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v9;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v1;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v1;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v10;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v10;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v2;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v2;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v11;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v11;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v3;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v3;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v12;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v12;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v4;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v4;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v13;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v13;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v5;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v5;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v14;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v14;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v6;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v6;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v15;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v15;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v7;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v7;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v16;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v16;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v8;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v8;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v17;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v17;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v9;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v9;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v18;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v18;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v10;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v10;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v19;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v19;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v11;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v11;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v20;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v20;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v12;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v12;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v21;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v21;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v13;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v13;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v22;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v22;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v14;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v14;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v23;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v23;
    CData/*7:0*/ __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v15;
    CData/*0:0*/ __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v15;
    // Body
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v0 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v1 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v2 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v3 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v4 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v5 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v6 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v7 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v8 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v9 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v10 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v11 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v12 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v13 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v14 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v15 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v0 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v1 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v2 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v3 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v4 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v5 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v6 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v7 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v8 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v9 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v10 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v11 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v12 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v13 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v14 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v15 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v16 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v17 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v18 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v19 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v20 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v21 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v22 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v23 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v0 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v1 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v2 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v3 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v4 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v5 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v6 = 0U;
    __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v7 = 0U;
    if (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid) {
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v0 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v0 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v1 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v1 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v2 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v2 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v3 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v3 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v4 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v4 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v5 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v5 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v6 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v6 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v7 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v7 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v8 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v8 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v9 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v9 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v10 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v10 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v11 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v11 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v12 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v12 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v13 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v13 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v14 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v14 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v15 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v15 = 1U;
    }
    if (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid) {
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h6019fc4c__0 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
               >> 0x18U);
        if ((9U >= (0xfU & (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                            << 3U)))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v0 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h6019fc4c__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v0 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v0 
                = (0xfU & (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                           << 3U));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90d11d7b__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
                        >> 0x10U));
        if ((9U >= (0xfU & ((IData)(1U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v1 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90d11d7b__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v1 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v1 
                = (0xfU & ((IData)(1U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab874626__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
                        >> 8U));
        if ((9U >= (0xfU & ((IData)(2U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v2 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab874626__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v2 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v2 
                = (0xfU & ((IData)(2U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90cfbeb5__0 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U]);
        if ((9U >= (0xfU & ((IData)(3U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v3 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90cfbeb5__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v3 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v3 
                = (0xfU & ((IData)(3U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90cfef48__0 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
               >> 0x18U);
        if ((9U >= (0xfU & ((IData)(4U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v4 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90cfef48__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v4 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v4 
                = (0xfU & ((IData)(4U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab87578d__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
                        >> 0x10U));
        if ((9U >= (0xfU & ((IData)(5U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v5 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab87578d__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v5 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v5 
                = (0xfU & ((IData)(5U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab868da8__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
                        >> 8U));
        if ((9U >= (0xfU & ((IData)(6U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v6 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab868da8__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v6 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v6 
                = (0xfU & ((IData)(6U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab84019a__0 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U]);
        if ((9U >= (0xfU & ((IData)(7U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                           << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v7 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab84019a__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v7 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v7 
                = (0xfU & ((IData)(7U) + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                          << 3U)));
        }
    }
    if (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid) {
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v8 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v8 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v9 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v9 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v10 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v10 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v11 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v11 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v12 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v12 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v13 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v13 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v14 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v14 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v15 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v15 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v16 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v16 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v17 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v17 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v18 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v18 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v19 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v19 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v20 
            = (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
               >> 0x18U);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v20 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v21 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
                        >> 0x10U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v21 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v22 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
                        >> 8U));
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v22 = 1U;
        __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v23 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U]);
        __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v23 = 1U;
    }
    if (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid) {
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h1db50af5__0 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
               >> 0x18U);
        if ((0x19U >= (0x1fU & (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                << 3U)))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v0 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h1db50af5__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v0 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v0 
                = (0x1fU & (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                            << 3U));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f45f71__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
                        >> 0x10U));
        if ((0x19U >= (0x1fU & ((IData)(1U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v1 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f45f71__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v1 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v1 
                = (0x1fU & ((IData)(1U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f673d9__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
                        >> 8U));
        if ((0x19U >= (0x1fU & ((IData)(2U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v2 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f673d9__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v2 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v2 
                = (0x1fU & ((IData)(2U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f6058c__0 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U]);
        if ((0x19U >= (0x1fU & ((IData)(3U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v3 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f6058c__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v3 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v3 
                = (0x1fU & ((IData)(3U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f40fa4__0 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
               >> 0x18U);
        if ((0x19U >= (0x1fU & ((IData)(4U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v4 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f40fa4__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v4 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v4 
                = (0x1fU & ((IData)(4U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f0a36a__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
                        >> 0x10U));
        if ((0x19U >= (0x1fU & ((IData)(5U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v5 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f0a36a__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v5 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v5 
                = (0x1fU & ((IData)(5U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93c347ee__0 
            = (0xffU & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
                        >> 8U));
        if ((0x19U >= (0x1fU & ((IData)(6U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v6 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93c347ee__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v6 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v6 
                = (0x1fU & ((IData)(6U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
        vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93efbaff__0 
            = (0xffU & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U]);
        if ((0x19U >= (0x1fU & ((IData)(7U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))))) {
            __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v7 
                = vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93efbaff__0;
            __Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v7 = 1U;
            __Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v7 
                = (0x1fU & ((IData)(7U) + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                           << 3U)));
        }
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v0) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v0;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v1) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[1U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v1;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v2) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[2U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v2;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v3) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[3U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v3;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v4) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[4U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v4;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v5) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[5U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v5;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v6) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[6U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v6;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v7) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[7U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v7;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v8) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[8U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v8;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v9) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[9U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v9;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v10) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0xaU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v10;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v11) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0xbU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v11;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v12) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0xcU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v12;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v13) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0xdU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v13;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v14) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0xeU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v14;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_tag__v15) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0xfU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_tag__v15;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v0) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v0] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v0;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v1) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v1] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v1;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v2) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v2] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v2;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v3) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v3] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v3;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v4) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v4] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v4;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v5) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v5] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v5;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v6) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v6] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v6;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_msg__v7) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_msg__v7] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_msg__v7;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v0) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v0] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v0;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v1) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v1] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v1;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v2) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v2] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v2;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v3) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v3] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v3;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v4) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v4] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v4;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v5) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v5] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v5;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v6) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v6] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v6;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v7) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vdlyvdim0__prim_ascon_duplex_tb__DOT__actual_ct__v7] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v7;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v8) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0xaU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v8;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v9) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0xbU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v9;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v10) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0xcU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v10;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v11) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0xdU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v11;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v12) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0xeU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v12;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v13) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0xfU] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v13;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v14) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x10U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v14;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v15) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x11U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v15;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v16) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x12U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v16;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v17) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x13U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v17;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v18) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x14U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v18;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v19) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x15U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v19;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v20) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x16U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v20;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v21) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x17U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v21;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v22) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x18U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v22;
    }
    if (__Vdlyvset__prim_ascon_duplex_tb__DOT__actual_ct__v23) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0x19U] 
            = __Vdlyvval__prim_ascon_duplex_tb__DOT__actual_ct__v23;
    }
}

VL_INLINE_OPT void Vprim_ascon_duplex_tb___024root___sequent__TOP__7(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___sequent__TOP__7\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vfunc_bin2thermo__2__Vfuncout;
    CData/*4:0*/ __Vfunc_bin2thermo__2__valid_bytes;
    VlWide<4>/*127:0*/ __Vfunc_bin2thermo__2__valid_bytes_mask;
    VlWide<4>/*127:0*/ __Vfunc_get_padding_mask__3__Vfuncout;
    CData/*4:0*/ __Vfunc_get_padding_mask__3__valid_bytes;
    VlWide<4>/*127:0*/ __Vfunc_get_padding_mask__3__padding_byte_mask;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__4__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__4__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__13__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__13__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__14__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__14__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__15__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__15__val;
    VlWide<4>/*127:0*/ __Vtemp_h6755d7b1__0;
    VlWide<4>/*127:0*/ __Vtemp_he87be25b__0;
    // Body
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[0U] 
        = (IData)((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U]))));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[1U] 
        = (IData)(((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U]))) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[2U] 
        = (0xcafef00dU ^ (IData)((((QData)((IData)(
                                                   vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U])))));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag[3U] 
        = (0xdeadbeefU ^ (IData)(((((QData)((IData)(
                                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                                  >> 0x20U)));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid = 0U;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                  >> 9U)))) {
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            if (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid) {
                                                vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst_ni) {
        vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
            = vlSelf->prim_ascon_duplex_tb__DOT__ct_count_d;
        vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
            = vlSelf->prim_ascon_duplex_tb__DOT__msg_count_d;
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q = 0U;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ct_count_d = vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q;
    if ((1U & (~ ((((((((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state) 
                        | (1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                       | (2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                      | (4U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                     | (3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                    | (5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                   | (6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                  | (7U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state))))) {
        if ((8U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if ((5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((0xaU > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q) 
                             << 3U))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ct_count_d 
                        = ((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q);
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct[2U] 
        = (IData)((((QData)((IData)(((((9U >= (0xfU 
                                               & (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                  << 3U)))
                                        ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                       [(0xfU & (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                 << 3U))]
                                        : 0U) << 0x18U) 
                                     | ((((9U >= (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                      << 3U))))
                                           ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                          [(0xfU & 
                                            ((IData)(1U) 
                                             + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                << 3U)))]
                                           : 0U) << 0x10U) 
                                        | ((((9U >= 
                                              (0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                   << 3U))))
                                              ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                             [(0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                   << 3U)))]
                                              : 0U) 
                                            << 8U) 
                                           | ((9U >= 
                                               (0xfU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                    << 3U))))
                                               ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                              [(0xfU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                    << 3U)))]
                                               : 0U)))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (9U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                         << 3U))))
                                                    ? 
                                                   vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                   [
                                                   (0xfU 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                        << 3U)))]
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((9U 
                                                       >= 
                                                       (0xfU 
                                                        & ((IData)(5U) 
                                                           + 
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                            << 3U))))
                                                       ? 
                                                      vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                      [
                                                      (0xfU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                           << 3U)))]
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((9U 
                                                          >= 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                               << 3U))))
                                                          ? 
                                                         vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                         [
                                                         (0xfU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                              << 3U)))]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((9U 
                                                           >= 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                                << 3U))))
                                                           ? 
                                                          vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                          [
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                               << 3U)))]
                                                           : 0U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct[3U] 
        = (IData)(((((QData)((IData)(((((9U >= (0xfU 
                                                & (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                   << 3U)))
                                         ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                        [(0xfU & (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                  << 3U))]
                                         : 0U) << 0x18U) 
                                      | ((((9U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                       << 3U))))
                                            ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                           [(0xfU & 
                                             ((IData)(1U) 
                                              + (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                 << 3U)))]
                                            : 0U) << 0x10U) 
                                         | ((((9U >= 
                                               (0xfU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                    << 3U))))
                                               ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                              [(0xfU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                    << 3U)))]
                                               : 0U) 
                                             << 8U) 
                                            | ((9U 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                     << 3U))))
                                                ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                               [(0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                     << 3U)))]
                                                : 0U)))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((9U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                          << 3U))))
                                                     ? 
                                                    vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                    [
                                                    (0xfU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                         << 3U)))]
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((9U 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(5U) 
                                                            + 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                             << 3U))))
                                                        ? 
                                                       vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                       [
                                                       (0xfU 
                                                        & ((IData)(5U) 
                                                           + 
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                            << 3U)))]
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((9U 
                                                           >= 
                                                           (0xfU 
                                                            & ((IData)(6U) 
                                                               + 
                                                               (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                                << 3U))))
                                                           ? 
                                                          vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                          [
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                               << 3U)))]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((9U 
                                                            >= 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                + 
                                                                (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                                 << 3U))))
                                                            ? 
                                                           vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct
                                                           [
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               (vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q 
                                                                << 3U)))]
                                                            : 0U))))))) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__msg_count_d 
        = vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q;
    if (((((((((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state) 
               | (1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
              | (2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
             | (4U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
            | (3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
           | (5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
          | (6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
         | (7U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state))) {
        if ((0U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if ((1U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((2U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                    if ((4U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                        if ((3U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                            if ((5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                                if ((0xaU > (((IData)(1U) 
                                              + vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q) 
                                             << 3U))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__msg_count_d 
                                        = ((IData)(1U) 
                                           + vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q);
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state 
            = vlSelf->prim_ascon_duplex_tb__DOT__tb_state;
        if ((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 1U;
        } else if ((1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if (vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data) {
                vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 2U;
            }
        } else if ((2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state 
                = ((8U > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q) 
                          << 3U)) ? 1U : 4U);
        } else if ((4U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 3U;
        } else if ((3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if (vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data) {
                vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 5U;
            }
        } else if ((5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state 
                = ((0xaU > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q) 
                            << 3U)) ? 3U : 6U);
        } else if ((6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid) {
                vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 0xbU;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 8U;
        }
        vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg = 9U;
        if ((0U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if ((1U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((2U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                    if ((4U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                        if ((3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                            vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg 
                                = ((0xaU > (((IData)(1U) 
                                             + vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q) 
                                            << 3U))
                                    ? 9U : 6U);
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state 
            = vlSelf->prim_ascon_duplex_tb__DOT__tb_state;
        if ((8U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if (vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data) {
                vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 9U;
            }
            vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg = 9U;
            vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg 
                = ((0xaU > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q) 
                            << 3U)) ? 9U : 6U);
        } else {
            if ((5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state 
                    = ((0xaU > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q) 
                                << 3U)) ? 8U : 0xaU);
            } else if ((6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if (vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid) {
                    vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 0xbU;
                }
            } else if ((0xbU != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state 
                    = vlSelf->prim_ascon_duplex_tb__DOT__tb_state;
            }
            vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg = 9U;
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg[2U] 
        = (IData)((((QData)((IData)(((((9U >= (0xfU 
                                               & (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                  << 3U)))
                                        ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                       [(0xfU & (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                 << 3U))]
                                        : 0U) << 0x18U) 
                                     | ((((9U >= (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                      << 3U))))
                                           ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                          [(0xfU & 
                                            ((IData)(1U) 
                                             + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                << 3U)))]
                                           : 0U) << 0x10U) 
                                        | ((((9U >= 
                                              (0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                   << 3U))))
                                              ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                             [(0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                   << 3U)))]
                                              : 0U) 
                                            << 8U) 
                                           | ((9U >= 
                                               (0xfU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                    << 3U))))
                                               ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                              [(0xfU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                    << 3U)))]
                                               : 0U)))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (9U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                         << 3U))))
                                                    ? 
                                                   vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                   [
                                                   (0xfU 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                        << 3U)))]
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((9U 
                                                       >= 
                                                       (0xfU 
                                                        & ((IData)(5U) 
                                                           + 
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                            << 3U))))
                                                       ? 
                                                      vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                      [
                                                      (0xfU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                           << 3U)))]
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((9U 
                                                          >= 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                               << 3U))))
                                                          ? 
                                                         vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                         [
                                                         (0xfU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                              << 3U)))]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((9U 
                                                           >= 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                                << 3U))))
                                                           ? 
                                                          vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                          [
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              + 
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                               << 3U)))]
                                                           : 0U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg[3U] 
        = (IData)(((((QData)((IData)(((((9U >= (0xfU 
                                                & (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                   << 3U)))
                                         ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                        [(0xfU & (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                  << 3U))]
                                         : 0U) << 0x18U) 
                                      | ((((9U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                       << 3U))))
                                            ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                           [(0xfU & 
                                             ((IData)(1U) 
                                              + (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                 << 3U)))]
                                            : 0U) << 0x10U) 
                                         | ((((9U >= 
                                               (0xfU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                    << 3U))))
                                               ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                              [(0xfU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                    << 3U)))]
                                               : 0U) 
                                             << 8U) 
                                            | ((9U 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                     << 3U))))
                                                ? vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                               [(0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                     << 3U)))]
                                                : 0U)))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((9U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                          << 3U))))
                                                     ? 
                                                    vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                    [
                                                    (0xfU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                         << 3U)))]
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((9U 
                                                        >= 
                                                        (0xfU 
                                                         & ((IData)(5U) 
                                                            + 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                             << 3U))))
                                                        ? 
                                                       vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                       [
                                                       (0xfU 
                                                        & ((IData)(5U) 
                                                           + 
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                            << 3U)))]
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((9U 
                                                           >= 
                                                           (0xfU 
                                                            & ((IData)(6U) 
                                                               + 
                                                               (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                                << 3U))))
                                                           ? 
                                                          vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                          [
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                               << 3U)))]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((9U 
                                                            >= 
                                                            (0xfU 
                                                             & ((IData)(7U) 
                                                                + 
                                                                (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                                 << 3U))))
                                                            ? 
                                                           vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg
                                                           [
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                                << 3U)))]
                                                            : 0U))))))) 
                   >> 0x20U));
    if (((((((((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state) 
               | (1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
              | (2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
             | (4U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
            | (3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
           | (5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
          | (6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
         | (7U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state))) {
        if ((0U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if ((1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes 
                    = ((8U > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q) 
                              << 3U)) ? 8U : (0x1fU 
                                              & ((IData)(8U) 
                                                 - 
                                                 (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                  << 3U))));
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] 
                    = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad[0U];
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] 
                    = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad[1U];
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] 
                    = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad[2U];
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] 
                    = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad[3U];
            } else if ((2U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((4U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                    if ((3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes 
                            = ((0xaU > (((IData)(1U) 
                                         + vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q) 
                                        << 3U)) ? 8U
                                : (0x1fU & ((IData)(0xaU) 
                                            - (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                               << 3U))));
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] 
                            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg[0U];
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] 
                            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg[1U];
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] 
                            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg[2U];
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] 
                            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg[3U];
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
                    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
                    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
                    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
            vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
            vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
            vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
        }
    } else if ((8U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
        vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes 
            = ((0xaU > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q) 
                        << 3U)) ? 8U : (0x1fU & ((IData)(0xaU) 
                                                 - 
                                                 (vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q 
                                                  << 3U))));
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct[3U];
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] = 0U;
    }
    __Vfunc_mubi4_test_invalid__15__val = vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg;
    __Vfunc_mubi4_test_invalid__15__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__15__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__15__val)))));
    __Vfunc_mubi4_test_invalid__14__val = vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad;
    __Vfunc_mubi4_test_invalid__14__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__14__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__14__val)))));
    __Vfunc_mubi4_test_invalid__13__val = ((8U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes))
                                            ? 6U : 9U);
    __Vfunc_mubi4_test_invalid__13__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__13__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__13__val)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error 
        = (((IData)(__Vfunc_mubi4_test_invalid__13__Vfuncout) 
            | (IData)(__Vfunc_mubi4_test_invalid__14__Vfuncout)) 
           | (IData)(__Vfunc_mubi4_test_invalid__15__Vfuncout));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
        = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
                        = ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                            ? 0x11eU : ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                         ? ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                             ? 0x11eU
                                             : ((4U 
                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                   ? 0x2aeU
                                                   : 0x11eU)
                                                  : 0x11eU)
                                                 : 0x11eU))
                                         : 0x11eU));
                } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid) {
                        vlSelf->__Vfunc_mubi4_test_true_strict__6__val 
                            = ((8U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes))
                                ? 6U : 9U);
                        vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                            = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__6__val));
                        vlSelf->__Vfunc_mubi4_test_true_strict__5__val 
                            = vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad;
                        vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout 
                            = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__5__val));
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
                            = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout)
                                ? ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout)
                                    ? 0xbcU : 0x282U)
                                : 0x36dU);
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
                            = ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                ? ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x11eU : ((2U 
                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x282U
                                                  : 0x11eU)
                                                 : 0x11eU))
                                : 0x11eU);
                    } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((0xbU == (0xfU 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x390U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((0xbU == (0xfU 
                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x12cU;
                            }
                        } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                                } else if ((0xbU == 
                                            (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x53U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if (vlSelf->prim_ascon_duplex_tb__DOT__start) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x186U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0xbU == (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x132U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
                = ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                    ? 0x11eU : ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                 ? 0x11eU : ((0x10U 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                              ? ((8U 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                   ? 0x11eU
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                     ? 0xd0U
                                                     : 0x11eU)
                                                    : 0x11eU))
                                                  : 0x11eU)
                                              : 0x11eU)));
        }
    } else if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
            = ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                ? ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                    ? 0x11eU : ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                 ? 0x11eU : ((0x10U 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                              ? 0x11eU
                                              : ((8U 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x11eU
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                     ? 0x11eU
                                                     : 0x2f6U)
                                                    : 0x11eU)
                                                   : 0x11eU)))))
                : ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                    ? 0x11eU : ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                 ? ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                     ? ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                         ? 0x11eU : 
                                        ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                          ? 0x11eU : 
                                         ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                           ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                               ? 0x11eU
                                               : 0xe3U)
                                           : 0x11eU)))
                                     : ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                         ? ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                             ? ((2U 
                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x11eU
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x11eU
                                                  : 0x21bU))
                                             : 0x11eU)
                                         : 0x11eU))
                                 : 0x11eU)));
    } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid) {
                            vlSelf->__Vfunc_mubi4_test_true_strict__9__val 
                                = ((8U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes))
                                    ? 6U : 9U);
                            vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout 
                                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__9__val));
                            vlSelf->__Vfunc_mubi4_test_true_strict__8__val 
                                = vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg;
                            vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__8__val));
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
                                = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout)
                                    ? ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout)
                                        ? 0x2f8U : 0x21bU)
                                    : 0x4cU);
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0xbU == (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x3d7U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        } else if ((0xbU == (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x37bU;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        }
    } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d 
                = ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                    ? 0x11eU : ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                 ? 0x11eU : ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                              ? ((1U 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x390U
                                                  : 0x11eU)
                                              : 0x11eU)));
        } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0xbU == (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0xe3U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        }
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
    }
    __Vfunc_get_padding_mask__3__valid_bytes = vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes;
    if ((8U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))) {
        if ((4U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))) {
            __Vtemp_h6755d7b1__0[0U] = ((2U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
            __Vtemp_h6755d7b1__0[1U] = 0U;
        } else {
            __Vtemp_h6755d7b1__0[0U] = 0U;
            __Vtemp_h6755d7b1__0[1U] = ((2U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
        }
        __Vtemp_h6755d7b1__0[2U] = 0U;
        __Vtemp_h6755d7b1__0[3U] = 0U;
    } else {
        __Vtemp_h6755d7b1__0[0U] = 0U;
        __Vtemp_h6755d7b1__0[1U] = 0U;
        if ((4U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))) {
            __Vtemp_h6755d7b1__0[2U] = ((2U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
            __Vtemp_h6755d7b1__0[3U] = 0U;
        } else {
            __Vtemp_h6755d7b1__0[2U] = 0U;
            __Vtemp_h6755d7b1__0[3U] = ((2U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
        }
    }
    if ((0x10U & (IData)(__Vfunc_get_padding_mask__3__valid_bytes))) {
        __Vfunc_get_padding_mask__3__padding_byte_mask[0U] = 0U;
        __Vfunc_get_padding_mask__3__padding_byte_mask[1U] = 0U;
        __Vfunc_get_padding_mask__3__padding_byte_mask[2U] = 0U;
        __Vfunc_get_padding_mask__3__padding_byte_mask[3U] = 0U;
    } else {
        __Vfunc_get_padding_mask__3__padding_byte_mask[0U] 
            = __Vtemp_h6755d7b1__0[0U];
        __Vfunc_get_padding_mask__3__padding_byte_mask[1U] 
            = __Vtemp_h6755d7b1__0[1U];
        __Vfunc_get_padding_mask__3__padding_byte_mask[2U] 
            = __Vtemp_h6755d7b1__0[2U];
        __Vfunc_get_padding_mask__3__padding_byte_mask[3U] 
            = __Vtemp_h6755d7b1__0[3U];
    }
    __Vfunc_get_padding_mask__3__Vfuncout[0U] = __Vfunc_get_padding_mask__3__padding_byte_mask[0U];
    __Vfunc_get_padding_mask__3__Vfuncout[1U] = __Vfunc_get_padding_mask__3__padding_byte_mask[1U];
    __Vfunc_get_padding_mask__3__Vfuncout[2U] = __Vfunc_get_padding_mask__3__padding_byte_mask[2U];
    __Vfunc_get_padding_mask__3__Vfuncout[3U] = __Vfunc_get_padding_mask__3__padding_byte_mask[3U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[0U] 
        = __Vfunc_get_padding_mask__3__Vfuncout[0U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[1U] 
        = __Vfunc_get_padding_mask__3__Vfuncout[1U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[2U] 
        = __Vfunc_get_padding_mask__3__Vfuncout[2U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[3U] 
        = __Vfunc_get_padding_mask__3__Vfuncout[3U];
    __Vfunc_bin2thermo__2__valid_bytes = vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes;
    if ((8U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))) {
        if ((4U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))) {
            __Vtemp_he87be25b__0[0U] = ((2U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
            __Vtemp_he87be25b__0[1U] = 0xffffffffU;
        } else {
            __Vtemp_he87be25b__0[0U] = 0U;
            __Vtemp_he87be25b__0[1U] = ((2U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
        }
        __Vtemp_he87be25b__0[2U] = 0xffffffffU;
        __Vtemp_he87be25b__0[3U] = 0xffffffffU;
    } else {
        __Vtemp_he87be25b__0[0U] = 0U;
        __Vtemp_he87be25b__0[1U] = 0U;
        if ((4U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))) {
            __Vtemp_he87be25b__0[2U] = ((2U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
            __Vtemp_he87be25b__0[3U] = 0xffffffffU;
        } else {
            __Vtemp_he87be25b__0[2U] = 0U;
            __Vtemp_he87be25b__0[3U] = ((2U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
        }
    }
    if ((0x10U & (IData)(__Vfunc_bin2thermo__2__valid_bytes))) {
        __Vfunc_bin2thermo__2__valid_bytes_mask[0U] = 0xffffffffU;
        __Vfunc_bin2thermo__2__valid_bytes_mask[1U] = 0xffffffffU;
        __Vfunc_bin2thermo__2__valid_bytes_mask[2U] = 0xffffffffU;
        __Vfunc_bin2thermo__2__valid_bytes_mask[3U] = 0xffffffffU;
    } else {
        __Vfunc_bin2thermo__2__valid_bytes_mask[0U] 
            = __Vtemp_he87be25b__0[0U];
        __Vfunc_bin2thermo__2__valid_bytes_mask[1U] 
            = __Vtemp_he87be25b__0[1U];
        __Vfunc_bin2thermo__2__valid_bytes_mask[2U] 
            = __Vtemp_he87be25b__0[2U];
        __Vfunc_bin2thermo__2__valid_bytes_mask[3U] 
            = __Vtemp_he87be25b__0[3U];
    }
    __Vfunc_bin2thermo__2__Vfuncout[0U] = __Vfunc_bin2thermo__2__valid_bytes_mask[0U];
    __Vfunc_bin2thermo__2__Vfuncout[1U] = __Vfunc_bin2thermo__2__valid_bytes_mask[1U];
    __Vfunc_bin2thermo__2__Vfuncout[2U] = __Vfunc_bin2thermo__2__valid_bytes_mask[2U];
    __Vfunc_bin2thermo__2__Vfuncout[3U] = __Vfunc_bin2thermo__2__valid_bytes_mask[3U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[0U] 
        = __Vfunc_bin2thermo__2__Vfuncout[0U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[1U] 
        = __Vfunc_bin2thermo__2__Vfuncout[1U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[2U] 
        = __Vfunc_bin2thermo__2__Vfuncout[2U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[3U] 
        = __Vfunc_bin2thermo__2__Vfuncout[3U];
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[0U] 
        = (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] 
           & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[1U] 
        = (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] 
           & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[2U] 
        = (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] 
           & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[3U] 
        = (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] 
           & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[3U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[0U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[0U] 
            ^ (IData)((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))) 
           & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[1U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[1U] 
            ^ (IData)(((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                       >> 0x20U))) & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[2U] 
            ^ (IData)((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))) 
           & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data[3U] 
            ^ (IData)(((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                       >> 0x20U))) & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[3U]);
    __Vfunc_mubi4_test_true_strict__4__val = ((8U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes))
                                               ? 6U
                                               : 9U);
    __Vfunc_mubi4_test_true_strict__4__Vfuncout = (6U 
                                                   == (IData)(__Vfunc_mubi4_test_true_strict__4__val));
    if (__Vfunc_mubi4_test_true_strict__4__Vfuncout) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[3U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U];
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[0U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[0U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[0U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[1U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[1U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[1U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[2U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[2U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[2U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[3U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes[3U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[3U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[0U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[0U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[0U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[1U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[1U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[1U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[2U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[2U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[2U]);
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[3U] 
            = (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out[3U] 
               | vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask[3U]);
    }
    if ((0U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding))) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded[3U];
    } else if ((1U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding))) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded[3U];
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[0U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[1U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[2U] = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[3U] = 0x80000000U;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U] 
        = (IData)((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[2U]))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U] 
        = (IData)(((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[2U]))) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U] 
        = (IData)(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1)
                    ? 0xdeadbeefcafef00dULL : (((QData)((IData)(
                                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[0U])))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U] 
        = (IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1)
                     ? 0xdeadbeefcafef00dULL : (((QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex[0U])))) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[0U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U]))))
                        : 0x80400c0600000000ULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[1U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U]))))
                         : 0x80400c0600000000ULL)) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[2U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U]))))
                        : 0xdeadbeefcafef00dULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[3U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U]))))
                         : 0xdeadbeefcafef00dULL)) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[4U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U]))))
                        : 0ULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[5U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U]))))
                         : 0ULL)) >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[6U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U]))))
                        : 0ULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[7U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U]))))
                         : 0ULL)) >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[8U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U])))
                        : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep)
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                        ? (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[8U]))))
                        : 0xdeadbeefcafef00dULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[9U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U])))
                         : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep)
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                         ? (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[8U]))))
                         : 0xdeadbeefcafef00dULL)) 
                   >> 0x20U));
}

void Vprim_ascon_duplex_tb___024root___sequent__TOP__4(Vprim_ascon_duplex_tb___024root* vlSelf);

void Vprim_ascon_duplex_tb___024root___eval(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vprim_ascon_duplex_tb___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vprim_ascon_duplex_tb___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vprim_ascon_duplex_tb___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vprim_ascon_duplex_tb___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vprim_ascon_duplex_tb___024root___eval_debug_assertions(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
