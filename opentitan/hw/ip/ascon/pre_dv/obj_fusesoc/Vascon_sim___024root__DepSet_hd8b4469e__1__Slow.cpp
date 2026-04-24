// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vascon_sim___024root.h"

VL_ATTR_COLD void Vascon_sim___024root___settle__TOP__5(Vascon_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffefULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 3U)))) 
                     << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffefULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 2U)))) 
                     << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffefULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 1U)))) 
                     << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffefULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [4U]))) << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffdfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 4U)))) 
                     << 5U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffdfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 3U)))) 
                     << 5U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffdfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 2U)))) 
                     << 5U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 1U)))) 
                     << 5U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [5U]))) << 5U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffbfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 4U)))) 
                     << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffbfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 3U)))) 
                     << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffbfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 2U)))) 
                     << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 1U)))) 
                     << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [6U]))) << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffff7fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 4U)))) 
                     << 7U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffff7fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 3U)))) 
                     << 7U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffff7fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 2U)))) 
                     << 7U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 1U)))) 
                     << 7U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [7U]))) << 7U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffeffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 4U)))) 
                     << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffeffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 3U)))) 
                     << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffeffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 2U)))) 
                     << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 1U)))) 
                     << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [8U]))) << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffdffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 4U)))) 
                     << 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffdffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 3U)))) 
                     << 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffdffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 2U)))) 
                     << 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 1U)))) 
                     << 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [9U]))) << 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffbffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 4U)))) 
                     << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffbffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 3U)))) 
                     << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffbffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 2U)))) 
                     << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 1U)))) 
                     << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xaU]))) << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffff7ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 4U)))) 
                     << 0xbU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffff7ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 3U)))) 
                     << 0xbU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffff7ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 2U)))) 
                     << 0xbU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 1U)))) 
                     << 0xbU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xbU]))) << 0xbU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffefffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 4U)))) 
                     << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffefffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 3U)))) 
                     << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffefffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 2U)))) 
                     << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffefffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 1U)))) 
                     << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffefffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xcU]))) << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffdfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 4U)))) 
                     << 0xdU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffdfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 3U)))) 
                     << 0xdU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffdfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 2U)))) 
                     << 0xdU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 1U)))) 
                     << 0xdU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xdU]))) << 0xdU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffbfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 4U)))) 
                     << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffbfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 3U)))) 
                     << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffbfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 2U)))) 
                     << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 1U)))) 
                     << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xeU]))) << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffff7fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 4U)))) 
                     << 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffff7fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 3U)))) 
                     << 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffff7fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 2U)))) 
                     << 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 1U)))) 
                     << 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xfU]))) << 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffeffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 4U)))) 
                     << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffeffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 3U)))) 
                     << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffeffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 2U)))) 
                     << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 1U)))) 
                     << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x10U]))) << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffdffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 4U)))) 
                     << 0x11U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffdffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 3U)))) 
                     << 0x11U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffdffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 2U)))) 
                     << 0x11U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 1U)))) 
                     << 0x11U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x11U]))) << 0x11U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffbffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 4U)))) 
                     << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffbffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 3U)))) 
                     << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffbffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 2U)))) 
                     << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 1U)))) 
                     << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x12U]))) << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffff7ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 4U)))) 
                     << 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffff7ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 3U)))) 
                     << 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffff7ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 2U)))) 
                     << 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 1U)))) 
                     << 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x13U]))) << 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffefffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 4U)))) 
                     << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffefffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 3U)))) 
                     << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffefffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 2U)))) 
                     << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffefffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 1U)))) 
                     << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffefffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x14U]))) << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffdfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 4U)))) 
                     << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffdfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 3U)))) 
                     << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffdfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 2U)))) 
                     << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 1U)))) 
                     << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x15U]))) << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffbfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 4U)))) 
                     << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffbfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 3U)))) 
                     << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffbfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 2U)))) 
                     << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 1U)))) 
                     << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x16U]))) << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffff7fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 4U)))) 
                     << 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffff7fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 3U)))) 
                     << 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffff7fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 2U)))) 
                     << 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 1U)))) 
                     << 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x17U]))) << 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffeffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 4U)))) 
                     << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffeffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 3U)))) 
                     << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffeffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 2U)))) 
                     << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 1U)))) 
                     << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x18U]))) << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffdffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 4U)))) 
                     << 0x19U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffdffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 3U)))) 
                     << 0x19U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffdffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 2U)))) 
                     << 0x19U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 1U)))) 
                     << 0x19U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x19U]))) << 0x19U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffbffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 4U)))) 
                     << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffbffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 3U)))) 
                     << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffbffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 2U)))) 
                     << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 1U)))) 
                     << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1aU]))) << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffff7ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 4U)))) 
                     << 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffff7ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 3U)))) 
                     << 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffff7ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 2U)))) 
                     << 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 1U)))) 
                     << 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1bU]))) << 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffefffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 4U)))) 
                     << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffefffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 3U)))) 
                     << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffefffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 2U)))) 
                     << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffefffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 1U)))) 
                     << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffefffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1cU]))) << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffdfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 4U)))) 
                     << 0x1dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffdfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 3U)))) 
                     << 0x1dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffdfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 2U)))) 
                     << 0x1dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 1U)))) 
                     << 0x1dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1dU]))) << 0x1dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffbfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 4U)))) 
                     << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffbfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 3U)))) 
                     << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffbfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 2U)))) 
                     << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 1U)))) 
                     << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1eU]))) << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffff7fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 4U)))) 
                     << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffff7fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 3U)))) 
                     << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffff7fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 2U)))) 
                     << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 1U)))) 
                     << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1fU]))) << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffeffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 4U)))) 
                     << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffeffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 3U)))) 
                     << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffeffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 2U)))) 
                     << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 1U)))) 
                     << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x20U]))) << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffdffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 4U)))) 
                     << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffdffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 3U)))) 
                     << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffdffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 2U)))) 
                     << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 1U)))) 
                     << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x21U]))) << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffbffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 4U)))) 
                     << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffbffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 3U)))) 
                     << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffbffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 2U)))) 
                     << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 1U)))) 
                     << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x22U]))) << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffff7ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 4U)))) 
                     << 0x23U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffff7ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 3U)))) 
                     << 0x23U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffff7ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 2U)))) 
                     << 0x23U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 1U)))) 
                     << 0x23U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x23U]))) << 0x23U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffefffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 4U)))) 
                     << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffefffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 3U)))) 
                     << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffefffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 2U)))) 
                     << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffefffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 1U)))) 
                     << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffefffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x24U]))) << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffdfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 4U)))) 
                     << 0x25U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffdfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 3U)))) 
                     << 0x25U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffdfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 2U)))) 
                     << 0x25U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 1U)))) 
                     << 0x25U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x25U]))) << 0x25U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffbfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 4U)))) 
                     << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffbfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 3U)))) 
                     << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffbfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 2U)))) 
                     << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 1U)))) 
                     << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x26U]))) << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffff7fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 4U)))) 
                     << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffff7fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 3U)))) 
                     << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffff7fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 2U)))) 
                     << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 1U)))) 
                     << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x27U]))) << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffeffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 4U)))) 
                     << 0x28U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffeffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 3U)))) 
                     << 0x28U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffeffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 2U)))) 
                     << 0x28U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 1U)))) 
                     << 0x28U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x28U]))) << 0x28U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffdffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 4U)))) 
                     << 0x29U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffdffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 3U)))) 
                     << 0x29U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffdffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 2U)))) 
                     << 0x29U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 1U)))) 
                     << 0x29U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x29U]))) << 0x29U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffbffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 4U)))) 
                     << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffbffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 3U)))) 
                     << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffbffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 2U)))) 
                     << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 1U)))) 
                     << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2aU]))) << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffff7ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 4U)))) 
                     << 0x2bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffff7ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 3U)))) 
                     << 0x2bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffff7ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 2U)))) 
                     << 0x2bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 1U)))) 
                     << 0x2bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2bU]))) << 0x2bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffefffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 4U)))) 
                     << 0x2cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffefffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 3U)))) 
                     << 0x2cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffefffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 2U)))) 
                     << 0x2cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffefffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 1U)))) 
                     << 0x2cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffefffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2cU]))) << 0x2cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffdfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 4U)))) 
                     << 0x2dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffdfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 3U)))) 
                     << 0x2dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffdfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 2U)))) 
                     << 0x2dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 1U)))) 
                     << 0x2dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2dU]))) << 0x2dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffbfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 4U)))) 
                     << 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffbfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 3U)))) 
                     << 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffbfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 2U)))) 
                     << 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 1U)))) 
                     << 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2eU]))) << 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffff7fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 4U)))) 
                     << 0x2fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffff7fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 3U)))) 
                     << 0x2fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffff7fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 2U)))) 
                     << 0x2fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 1U)))) 
                     << 0x2fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2fU]))) << 0x2fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffeffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 4U)))) 
                     << 0x30U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffeffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 3U)))) 
                     << 0x30U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffeffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 2U)))) 
                     << 0x30U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 1U)))) 
                     << 0x30U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x30U]))) << 0x30U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffdffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 4U)))) 
                     << 0x31U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffdffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 3U)))) 
                     << 0x31U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffdffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 2U)))) 
                     << 0x31U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 1U)))) 
                     << 0x31U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x31U]))) << 0x31U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffbffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 4U)))) 
                     << 0x32U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffbffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 3U)))) 
                     << 0x32U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffbffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 2U)))) 
                     << 0x32U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 1U)))) 
                     << 0x32U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x32U]))) << 0x32U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfff7ffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 4U)))) 
                     << 0x33U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfff7ffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 3U)))) 
                     << 0x33U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfff7ffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 2U)))) 
                     << 0x33U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 1U)))) 
                     << 0x33U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x33U]))) << 0x33U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffefffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 4U)))) 
                     << 0x34U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffefffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 3U)))) 
                     << 0x34U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffefffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 2U)))) 
                     << 0x34U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffefffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 1U)))) 
                     << 0x34U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffefffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x34U]))) << 0x34U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffdfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 4U)))) 
                     << 0x35U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffdfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 3U)))) 
                     << 0x35U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffdfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 2U)))) 
                     << 0x35U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 1U)))) 
                     << 0x35U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x35U]))) << 0x35U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffbfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 4U)))) 
                     << 0x36U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffbfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 3U)))) 
                     << 0x36U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffbfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 2U)))) 
                     << 0x36U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 1U)))) 
                     << 0x36U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x36U]))) << 0x36U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xff7fffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 4U)))) 
                     << 0x37U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xff7fffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 3U)))) 
                     << 0x37U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xff7fffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 2U)))) 
                     << 0x37U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 1U)))) 
                     << 0x37U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x37U]))) << 0x37U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfeffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 4U)))) 
                     << 0x38U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfeffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 3U)))) 
                     << 0x38U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfeffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 2U)))) 
                     << 0x38U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 1U)))) 
                     << 0x38U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x38U]))) << 0x38U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 4U)))) 
                     << 0x39U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 3U)))) 
                     << 0x39U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 2U)))) 
                     << 0x39U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 1U)))) 
                     << 0x39U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x39U]))) << 0x39U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 4U)))) 
                     << 0x3aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 3U)))) 
                     << 0x3aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 2U)))) 
                     << 0x3aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 1U)))) 
                     << 0x3aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3aU]))) << 0x3aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 4U)))) 
                     << 0x3bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 3U)))) 
                     << 0x3bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 2U)))) 
                     << 0x3bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 1U)))) 
                     << 0x3bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3bU]))) << 0x3bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 4U)))) 
                     << 0x3cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 3U)))) 
                     << 0x3cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 2U)))) 
                     << 0x3cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 1U)))) 
                     << 0x3cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3cU]))) << 0x3cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 4U)))) 
                     << 0x3dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 3U)))) 
                     << 0x3dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 2U)))) 
                     << 0x3dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 1U)))) 
                     << 0x3dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3dU]))) << 0x3dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 4U)))) 
                     << 0x3eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 3U)))) 
                     << 0x3eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 2U)))) 
                     << 0x3eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 1U)))) 
                     << 0x3eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3eU]))) << 0x3eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 4U)))) 
                     << 0x3fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 3U)))) 
                     << 0x3fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 2U)))) 
                     << 0x3fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 1U)))) 
                     << 0x3fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3fU]))) << 0x3fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[0U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[1U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [0U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[2U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[3U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [1U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[4U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[5U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [2U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[6U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[7U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [3U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[8U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [4U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[9U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [4U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[0U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[0U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[1U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[2U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[2U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[4U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[3U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[6U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[4U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[8U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [0U] ^ (((QData)((IData)((0x7ffffU & (IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                         [0U])))) 
                     << 0x2dU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [0U] >> 0x13U))) 
           ^ (((QData)((IData)((0xfffffffU & (IData)(
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                     [0U])))) 
               << 0x24U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                            [0U] >> 0x1cU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [1U] ^ ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                     [1U] << 3U) | (QData)((IData)(
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                               [1U] 
                                                               >> 0x3dU))))))) 
           ^ ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
               [1U] << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                            [1U] 
                                                            >> 0x27U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [2U] ^ (((QData)((IData)((1U & (IData)(
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                   [2U])))) 
                     << 0x3fU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [2U] >> 1U))) ^ (
                                                   ((QData)((IData)(
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                                               [2U])))) 
                                                    << 0x3aU) 
                                                   | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                      [2U] 
                                                      >> 6U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [3U] ^ (((QData)((IData)((0x3ffU & (IData)(
                                                       vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                       [3U])))) 
                     << 0x36U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [3U] >> 0xaU))) ^ 
           (((QData)((IData)((0x1ffffU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                 [3U])))) 
             << 0x2fU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                          [3U] >> 0x11U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[4U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [4U] ^ (((QData)((IData)((0x7fU & (IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                      [4U])))) 
                     << 0x39U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [4U] >> 7U))) ^ (
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                    [4U] 
                                                    << 0x17U) 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                                                [4U] 
                                                                                >> 0x29U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[0U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[1U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [0U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[2U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[3U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [1U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[4U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[5U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [2U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[6U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[7U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [3U] >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[8U] 
        = (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [4U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[9U] 
        = (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [4U] >> 0x20U));
}

VL_ATTR_COLD void Vascon_sim___024root___initial__TOP__6(Vascon_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root___initial__TOP__6\n"); );
    // Body
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[1U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[1U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[1U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[1U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[2U][0U] = 0xde04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[2U][1U] = 0xcfefbeadU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[2U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[2U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[3U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[3U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[3U][2U] = 3U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[3U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[4U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[4U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[4U][2U] = 3U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[4U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[5U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[5U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[5U][2U] = 3U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[5U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[6U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[6U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[6U][2U] = 3U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[6U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[7U][0U] = 0xca04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[7U][1U] = 0xf0df0feU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[7U][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[7U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[8U][0U] = 0xde04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[8U][1U] = 0x4fefbeadU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[8U][2U] = 0U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[8U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[9U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[9U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[9U][2U] = 0U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[9U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xaU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xaU][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xaU][2U] = 0U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xaU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xbU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xbU][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xbU][2U] = 1U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xbU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xcU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xcU][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xcU][2U] = 1U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xcU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xdU][0U] = 0xca04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xdU][1U] = 0x8f0df0feU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xdU][2U] = 1U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xdU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xeU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xeU][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xeU][2U] = 1U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xeU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xfU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xfU][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xfU][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0xfU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x10U][0U] = 0x904ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x10U][1U] = 0x4f000099U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x10U][2U] = 9U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x10U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x11U][0U] = 0x904ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x11U][1U] = 0x4f000099U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x11U][2U] = 9U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x11U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x12U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x12U][1U] = 0xf089690U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x12U][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x12U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x13U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x13U][1U] = 0xf089690U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x13U][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x13U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x14U][0U] = 0x1204ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x14U][1U] = 0x4f785634U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x14U][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x14U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x15U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x15U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x15U][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x15U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x16U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x16U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x16U][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x16U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x17U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x17U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x17U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x17U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x18U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x18U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x18U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x18U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x19U][0U] = 0x9a04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x19U][1U] = 0x8ff0debcU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x19U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x19U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1aU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1aU][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1aU][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1aU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1bU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1bU][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1bU][2U] = 6U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1bU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1cU][0U] = 0x104ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1cU][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1cU][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1cU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1dU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1dU][1U] = 0xf089990U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1dU][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1dU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1eU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1eU][1U] = 0xf089990U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1eU][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1eU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1fU][0U] = 0xde04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1fU][1U] = 0x4fefbeadU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1fU][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x1fU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x20U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x20U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x20U][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x20U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x21U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x21U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x21U][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x21U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x22U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x22U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x22U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x22U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x23U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x23U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x23U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x23U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x24U][0U] = 0xca04ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x24U][1U] = 0x8f0df0feU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x24U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x24U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x25U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x25U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x25U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x25U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x26U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x26U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x26U][2U] = 6U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x26U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x27U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x27U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x27U][2U] = 7U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x27U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x28U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x28U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x28U][2U] = 7U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x28U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x29U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x29U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x29U][2U] = 7U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x29U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2aU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2aU][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2aU][2U] = 8U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2aU][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2bU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2bU][1U] = 0xf026990U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2bU][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2bU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2cU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2cU][1U] = 0xf026990U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2cU][2U] = 0xaU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2cU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2dU][0U] = 0xf004ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2dU][1U] = 0x4ff0f0f0U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2dU][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2dU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2eU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2eU][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2eU][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2eU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2fU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2fU][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2fU][2U] = 4U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x2fU][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x30U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x30U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x30U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x30U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x31U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x31U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x31U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x31U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x32U][0U] = 0xe004ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x32U][1U] = 0x8fe0e0e0U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x32U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x32U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x33U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x33U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x33U][2U] = 5U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x33U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x34U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x34U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x34U][2U] = 6U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x34U][3U] = 0x1020U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x35U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x35U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x35U][2U] = 7U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x35U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x36U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x36U][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x36U][2U] = 7U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x36U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x37U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x37U][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x37U][2U] = 7U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x37U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x38U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x38U][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x38U][2U] = 8U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x38U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x39U][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x39U][1U] = 0x4f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x39U][2U] = 8U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x39U][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3aU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3aU][1U] = 0x8f000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3aU][2U] = 8U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3aU][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3bU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3bU][1U] = 0xcf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3bU][2U] = 8U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3bU][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3cU][0U] = 0x4ffffU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3cU][1U] = 0xf000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3cU][2U] = 9U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus[0x3cU][3U] = 0x1820U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0U][0U] = 0x25b4fffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0U][1U] = 0x4400057fU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[1U][0U] = 0x1060fffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[1U][1U] = 0x4400a948U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[1U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[2U][0U] = 0xfffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[2U][1U] = 0x44000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[2U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[3U][0U] = 0xfffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[3U][1U] = 0x44000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[3U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[4U][0U] = 0x5a47fffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[4U][1U] = 0x44000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[4U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[5U][0U] = 0xfffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[5U][1U] = 0x44000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[5U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[6U][0U] = 0xfffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[6U][1U] = 0x44000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[6U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[7U][0U] = 0xfffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[7U][1U] = 0x44000000U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[7U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[8U][0U] = 0x1abffffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[8U][1U] = 0x44007115U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[8U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[9U][0U] = 0x8bdbfffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[9U][1U] = 0x440095bdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[9U][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0xaU][0U] = 0xbe47fffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0xaU][1U] = 0x44008387U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0xaU][2U] = 2U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0xbU][0U] = 0x7dd5fffdU;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0xbU][1U] = 0x44007992U;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response[0xbU][2U] = 2U;
}

extern const VlUnpacked<CData/*2:0*/, 128> Vascon_sim__ConstPool__TABLE_ha722f71e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vascon_sim__ConstPool__TABLE_h241fa081_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vascon_sim__ConstPool__TABLE_h01e04116_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vascon_sim__ConstPool__TABLE_h19c48ed9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vascon_sim__ConstPool__TABLE_h194c3898_0;

VL_ATTR_COLD void Vascon_sim___024root___settle__TOP__7(Vascon_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root___settle__TOP__7\n"); );
    // Init
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__;
    CData/*0:0*/ ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__73__Vfuncout;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__73__tl;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__74__Vfuncout;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__74__tl;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__76__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__76__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__78__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__78__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__79__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__79__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__80__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__80__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__81__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__81__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__83__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__83__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__84__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__84__val;
    CData/*0:0*/ __Vfunc_mubi4_test_false_strict__85__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_false_strict__85__val;
    CData/*0:0*/ __Vfunc_mubi4_test_false_strict__86__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_false_strict__86__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__87__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__87__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__88__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__88__val;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__89__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__89__vector_in;
    VlWide<4>/*127:0*/ __Vfunc_bin2thermo__95__Vfuncout;
    CData/*4:0*/ __Vfunc_bin2thermo__95__valid_bytes;
    VlWide<4>/*127:0*/ __Vfunc_bin2thermo__95__valid_bytes_mask;
    VlWide<4>/*127:0*/ __Vfunc_get_padding_mask__96__Vfuncout;
    CData/*4:0*/ __Vfunc_get_padding_mask__96__valid_bytes;
    VlWide<4>/*127:0*/ __Vfunc_get_padding_mask__96__padding_byte_mask;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__97__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__97__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__104__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__104__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__105__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__105__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__106__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__106__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__107__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__107__val;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__108__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__108__val;
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    VlWide<3>/*95:0*/ __Vtemp_h4f1d0437__0;
    VlWide<3>/*95:0*/ __Vtemp_hda9d2b81__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c76f8c5__0;
    VlWide<3>/*95:0*/ __Vtemp_h49df9be1__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e559aea__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2154b9e__0;
    VlWide<4>/*127:0*/ __Vtemp_h169d061f__0;
    VlWide<4>/*127:0*/ __Vtemp_h7cd0880a__0;
    VlWide<4>/*127:0*/ __Vtemp_h43db26e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h2859c052__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a3fcbf3__0;
    VlWide<3>/*95:0*/ __Vtemp_habb9371e__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c55c32d__0;
    VlWide<3>/*95:0*/ __Vtemp_h0684ac93__0;
    VlWide<3>/*95:0*/ __Vtemp_he801fd73__0;
    VlWide<4>/*127:0*/ __Vtemp_h43292deb__0;
    VlWide<4>/*127:0*/ __Vtemp_h23f4b984__0;
    VlWide<4>/*127:0*/ __Vtemp_h6462a35b__0;
    // Body
    if (VL_GTS_III(32, 0x3dU, vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter)) {
        if ((0x3cU >= (0x3fU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter))) {
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                [(0x3fU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter)][0U];
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] 
                = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                [(0x3fU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter)][1U];
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[2U] 
                = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                [(0x3fU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter)][2U];
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] 
                = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus
                [(0x3fU & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter)][3U];
        } else {
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] = 0U;
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] = 0U;
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[2U] = 0U;
            vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] = 0U;
        }
    } else {
        vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] = 0xff04ffffU;
        vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] = 0xffffffU;
        vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[2U] = 0U;
        vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U] = 0U;
    }
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = (QData)((IData)(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U] 
                            << 8U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U] 
                                      >> 0x18U))));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x7effffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x20U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x7dffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x21U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x7bffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x22U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x77ffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x23U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x6fffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x24U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x5fffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x25U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = ((0x3fffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc))))) 
              << 0x26U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
        = (0x2a00000000ULL ^ vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc);
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
        = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[0U];
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U] 
        = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[1U];
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[2U] 
        = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[2U];
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U] 
        = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_selected[3U];
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
        = ((0xffffff01U & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U]) 
           | (0xfeU & ((IData)((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__data_39_32_enc 
                                >> 0x20U)) << 1U)));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = (QData)((IData)(((vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U] 
                            << 8U) | (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U] 
                                      >> 0x18U))));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7effffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x20U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7dffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x21U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7bffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x22U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x77ffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x23U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x6fffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x24U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x5fffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x25U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x3fffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x26U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = (0x2a00000000ULL ^ vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o);
    __Vfunc_extract_h2d_cmd_intg__73__tl[0U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U];
    __Vfunc_extract_h2d_cmd_intg__73__tl[1U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U];
    __Vfunc_extract_h2d_cmd_intg__73__tl[2U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[2U];
    __Vfunc_extract_h2d_cmd_intg__73__tl[3U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__73__payload 
        = ((0x78000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__73__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__73__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__73__tl[1U] 
                                           >> 0x1cU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__73__tl[3U] 
                                                   >> 5U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__73__tl[1U] 
                                             >> 0x18U)))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__73__payload 
        = ((0x7fffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__73__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__73__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__73__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__73__payload;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__73__Vfuncout;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT__cmd;
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x39U));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3aU));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3bU));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3cU));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3dU));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3eU));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3fU));
    vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o);
    vlSelf->ascon_sim__DOT__tl_i[0U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U];
    vlSelf->ascon_sim__DOT__tl_i[1U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U];
    vlSelf->ascon_sim__DOT__tl_i[2U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[2U];
    vlSelf->ascon_sim__DOT__tl_i[3U] = vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[3U];
    vlSelf->ascon_sim__DOT__tl_i[0U] = ((0xffffffU 
                                         & vlSelf->ascon_sim__DOT__tl_i[0U]) 
                                        | (0xff000000U 
                                           & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[0U]));
    vlSelf->ascon_sim__DOT__tl_i[1U] = ((0xff000000U 
                                         & vlSelf->ascon_sim__DOT__tl_i[1U]) 
                                        | (0xffffffU 
                                           & vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_data_intg[1U]));
    vlSelf->ascon_sim__DOT__tl_i[0U] = ((0xffff8001U 
                                         & vlSelf->ascon_sim__DOT__tl_i[0U]) 
                                        | (0xfffffffeU 
                                           & ((0x7f00U 
                                               & ((IData)(
                                                          (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o 
                                                           >> 0x39U)) 
                                                  << 8U)) 
                                              | (0xfeU 
                                                 & ((IData)(
                                                            (vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__u_tlul_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
                                                             >> 0x20U)) 
                                                    << 1U)))));
    vlSelf->ascon_sim__DOT__pop_response = (((vlSelf->ascon_sim__DOT__tl_i[0U] 
                                              & (vlSelf->ascon_sim__DOT__tl_o[2U] 
                                                 >> 1U)) 
                                             & (0xaU 
                                                == vlSelf->ascon_sim__DOT__delay_counter)) 
                                            & (1U == 
                                               (7U 
                                                & ((vlSelf->ascon_sim__DOT__tl_o[2U] 
                                                    << 2U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_o[1U] 
                                                      >> 0x1eU)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
        = (((QData)((IData)((0x7fU & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                      >> 1U)))) << 0x20U) 
           | (QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                               << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                         >> 0x18U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit = 0ULL;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffffffffff8ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | (IData)((IData)((((8U == (0xfcU & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                               << 2U) | (((4U == (0xfcU 
                                                  & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                      << 4U) 
                                                     | (0xcU 
                                                        & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                           >> 0x1cU))))) 
                                          << 1U) | 
                                         (0U == (0xfcU 
                                                 & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                     << 4U) 
                                                    | (0xcU 
                                                       & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          >> 0x1cU))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7fffffffffc7ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x14U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x10U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0xcU == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffffffffe3fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x20U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x1cU == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x18U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffffffff1ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x2cU == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x28U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x24U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7fffffff8fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x38U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x34U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x30U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffffffc7fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x44U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x40U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x3cU == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7fffffe3ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x50U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x4cU == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x48U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7fffff1fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x5cU == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x58U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x54U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffff8ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x68U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x64U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x60U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7fffc7ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x74U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x70U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x6cU == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ffe3fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x80U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x7cU == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x78U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7ff1ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x8cU == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x88U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x84U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7f8fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0x98U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0x94U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x90U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x7c7fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0xa4U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0xa0U == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0x9cU == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x63ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0xb0U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 2U) | (((0xacU == 
                                            (0xfcU 
                                             & ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                                 << 4U) 
                                                | (0xcU 
                                                   & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x1cU))))) 
                                           << 1U) | 
                                          (0xa8U == 
                                           (0xfcU & 
                                            ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                              << 4U) 
                                             | (0xcU 
                                                & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x1cU))))))))) 
              << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
        = ((0x1fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
           | ((QData)((IData)((((0xb8U == (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU))))) 
                                << 1U) | (0xb4U == 
                                          (0xfcU & 
                                           ((vlSelf->ascon_sim__DOT__tl_i[2U] 
                                             << 4U) 
                                            | (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x1cU)))))))) 
              << 0x2dU));
    __Vfunc_extract_h2d_cmd_intg__74__tl[0U] = vlSelf->ascon_sim__DOT__tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__74__tl[1U] = vlSelf->ascon_sim__DOT__tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__74__tl[2U] = vlSelf->ascon_sim__DOT__tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__74__tl[3U] = vlSelf->ascon_sim__DOT__tl_i[3U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload 
        = ((0x78000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__74__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__74__tl[1U] 
                                           >> 0x1cU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__74__tl[3U] 
                                                   >> 5U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__74__tl[1U] 
                                             >> 0x18U)))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload 
        = ((0x7fffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__74__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__74__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__74__Vfuncout;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    if ((0x1000U & vlSelf->ascon_sim__DOT__tl_i[3U])) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = (1U & ((0U == (3U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                   >> 4U))) | ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                    >> 4U)))
                                                ? (~ 
                                                   (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    >> 0x1cU))
                                                : (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x30U 
                                                             & vlSelf->ascon_sim__DOT__tl_i[3U])) 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                             >> 0x1cU))))))))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        if ((0U == (3U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                          >> 4U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       >> 0x18U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                           >> 0x1cU))))))))));
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                    << 8U) | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                              >> 0x18U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                            >> 0x1cU))))));
        } else if ((1U == (3U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                 >> 4U)))) {
            if ((0x20000000U & vlSelf->ascon_sim__DOT__tl_i[1U])) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                >> 0x18U))))));
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                    >> 0x1aU)));
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  >> 0x18U))))));
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                    >> 0x18U)));
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                      >> 4U))));
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (IData)(((0xf000000U == (0xf000000U 
                                           & vlSelf->ascon_sim__DOT__tl_i[1U])) 
                           & (0x20U == (0x30U & vlSelf->ascon_sim__DOT__tl_i[3U]))));
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    __Vfunc_mubi4_test_true_strict__76__val = (0xfU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0xfU));
    __Vfunc_mubi4_test_true_strict__76__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__76__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = __Vfunc_mubi4_test_true_strict__76__Vfuncout;
    __Vfunc_mubi4_test_true_strict__78__val = (0xfU 
                                               & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0xfU));
    __Vfunc_mubi4_test_true_strict__78__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__78__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = ((IData)(__Vfunc_mubi4_test_true_strict__78__Vfuncout) 
           & ((0U == (7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                            >> 9U))) | (1U == (7U & 
                                               (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                >> 9U)))));
    __Vfunc_mubi4_test_invalid__79__val = (0xfU & (
                                                   vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                   >> 0xfU));
    __Vfunc_mubi4_test_invalid__79__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__79__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__79__val)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__79__Vfuncout;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (IData)(((vlSelf->ascon_sim__DOT__tl_i[3U] 
                    >> 0xcU) & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 1U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 2U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 3U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 4U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 5U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 6U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffcU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                     ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffff3U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 2U))) << 2U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffcfU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 4U))) << 4U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffff3fU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 6U))) << 6U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffcffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 8U))) << 8U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0xaU))) << 0xaU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffcfffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xcU))) 
                            << 0xcU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffff3fffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xeU))) 
                            << 0xeU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffcffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffcfffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xff3fffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfcffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xcfffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0x3fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (1U & VL_REDXOR_8(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
               & (0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
        = (((QData)((IData)((0x7fU & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                      >> 8U)))) << 0x39U) 
           | vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__cmd);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x800U == (0xe00U & vlSelf->ascon_sim__DOT__tl_i[3U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelf->ascon_sim__DOT__tl_i[3U] 
                            >> 9U))) | (1U == (7U & 
                                               (vlSelf->ascon_sim__DOT__tl_i[3U] 
                                                >> 9U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x303fff800007fffULL 
                                 & (0x5400000000000000ULL 
                                    ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x57c1ff801ff801fULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 1U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x9bde1f87e0781e1ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 2U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x11deee3b8e388e22ULL 
                                  & (0x5400000000000000ULL 
                                     ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 3U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 4U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 5U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                     & (0x5400000000000000ULL 
                                        ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 6U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffffcULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                 >> 1U))) 
                                     << 1U)) | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffff3ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 3U))) 
                                      << 1U)) | (1U 
                                                 & ((0x13U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 2U))))))) 
              << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffffcfULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xdU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 5U))) 
                                      << 1U)) | (1U 
                                                 & ((0x43U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 4U))))))) 
              << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffff3fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x25U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 7U))) 
                                      << 1U)) | (1U 
                                                 & ((0x15U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 6U))))))) 
              << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffcffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 9U))) 
                                      << 1U)) | (1U 
                                                 & ((0x45U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 8U))))))) 
              << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffff3ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xbU))) 
                                      << 1U)) | (1U 
                                                 & ((0x29U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xaU))))))) 
              << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffcfffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x51U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xdU))) 
                                      << 1U)) | (1U 
                                                 & ((0x31U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xcU))))))) 
              << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffff3fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xfU))) 
                                      << 1U)) | (1U 
                                                 & ((0x61U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xeU))))))) 
              << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffcffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x11U))) 
                                      << 1U)) | (1U 
                                                 & ((0x16U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x10U))))))) 
              << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffff3ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1aU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x13U))) 
                                      << 1U)) | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x12U))))))) 
              << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffcfffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4aU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x15U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2aU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x14U))))))) 
              << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffff3fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x52U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x17U))) 
                                      << 1U)) | (1U 
                                                 & ((0x32U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x16U))))))) 
              << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffcffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1cU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x19U))) 
                                      << 1U)) | (1U 
                                                 & ((0x62U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x18U))))))) 
              << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffff3ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4cU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x2cU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffcfffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x34U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffff3fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x38U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x64U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffcffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x21U))) 
                                      << 1U)) | (1U 
                                                 & ((0x58U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x20U))))))) 
              << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffff3ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1fU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x23U))) 
                                      << 1U)) | (1U 
                                                 & ((0x70U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x22U))))))) 
              << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffcfffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4fU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x25U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x24U))))))) 
              << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffff3fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x57U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x27U))) 
                                      << 1U)) | (1U 
                                                 & ((0x37U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x26U))))))) 
              << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffcffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3bU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x29U))) 
                                      << 1U)) | (1U 
                                                 & ((0x67U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x28U))))))) 
              << 0x28U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fff3ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6bU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5bU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffcfffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3dU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x73U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ff3fffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6dU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5dU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fcffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x79U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x31U))) 
                                      << 1U)) | (1U 
                                                 & ((0x75U 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x30U))))))) 
              << 0x30U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1f3ffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x5eU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x33U))) 
                                      << 1U)) | (1U 
                                                 & ((0x3eU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x32U))))))) 
              << 0x32U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1cfffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x76U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x35U))) 
                                      << 1U)) | (1U 
                                                 & ((0x6eU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x34U))))))) 
              << 0x34U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x13fffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x7cU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x37U))) 
                                      << 1U)) | (1U 
                                                 & ((0x7aU 
                                                     == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x36U))))))) 
              << 0x36U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0xffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)((1U & ((0x7fU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                     ^ (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (1U & VL_REDXOR_8(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err)) 
               & (0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                   & (0U != (3U & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                   >> 0x1cU)))) | (
                                                   ((~ 
                                                     ((((0U 
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
                                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err))) 
                 | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__instr_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__intg_err 
        = ((vlSelf->ascon_sim__DOT__tl_i[3U] >> 0xcU) 
           & ((0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__err)) 
              | (0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we) 
           & ((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
                                                            & (0U 
                                                               != 
                                                               (1U 
                                                                & (~ 
                                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                       >> 0x18U)))))) 
                                                           | ((IData)(
                                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                       >> 1U)) 
                                                              & (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (~ 
                                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                         >> 0x18U))))))) 
                                                          | ((IData)(
                                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                      >> 2U)) 
                                                             & (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (~ 
                                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                        >> 0x18U))))))) 
                                                         | ((IData)(
                                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                     >> 3U)) 
                                                            & (0U 
                                                               != 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                       >> 0x18U))))))) 
                                                        | ((IData)(
                                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                    >> 4U)) 
                                                           & (0U 
                                                              != 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                      >> 0x18U))))))) 
                                                       | ((IData)(
                                                                  (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                   >> 5U)) 
                                                          & (0U 
                                                             != 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     >> 0x18U))))))) 
                                                      | ((IData)(
                                                                 (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                  >> 6U)) 
                                                         & (0U 
                                                            != 
                                                            (0xfU 
                                                             & (~ 
                                                                ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                  << 8U) 
                                                                 | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    >> 0x18U))))))) 
                                                     | ((IData)(
                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                 >> 7U)) 
                                                        & (0U 
                                                           != 
                                                           (0xfU 
                                                            & (~ 
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   >> 0x18U))))))) 
                                                    | ((IData)(
                                                               (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                >> 8U)) 
                                                       & (0U 
                                                          != 
                                                          (0xfU 
                                                           & (~ 
                                                              ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                << 8U) 
                                                               | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                  >> 0x18U))))))) 
                                                   | ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 9U)) 
                                                      & (0U 
                                                         != 
                                                         (0xfU 
                                                          & (~ 
                                                             ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                               << 8U) 
                                                              | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 >> 0x18U))))))) 
                                                  | ((IData)(
                                                             (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                              >> 0xaU)) 
                                                     & (0U 
                                                        != 
                                                        (0xfU 
                                                         & (~ 
                                                            ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                              << 8U) 
                                                             | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                >> 0x18U))))))) 
                                                 | ((IData)(
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                             >> 0xbU)) 
                                                    & (0U 
                                                       != 
                                                       (0xfU 
                                                        & (~ 
                                                           ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                             << 8U) 
                                                            | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                               >> 0x18U))))))) 
                                                | ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                            >> 0xcU)) 
                                                   & (0U 
                                                      != 
                                                      (0xfU 
                                                       & (~ 
                                                          ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                            << 8U) 
                                                           | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                              >> 0x18U))))))) 
                                               | ((IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                           >> 0xdU)) 
                                                  & (0U 
                                                     != 
                                                     (0xfU 
                                                      & (~ 
                                                         ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                           << 8U) 
                                                          | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                             >> 0x18U))))))) 
                                              | ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                          >> 0xeU)) 
                                                 & (0U 
                                                    != 
                                                    (0xfU 
                                                     & (~ 
                                                        ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          << 8U) 
                                                         | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                            >> 0x18U))))))) 
                                             | ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                         >> 0xfU)) 
                                                & (0U 
                                                   != 
                                                   (0xfU 
                                                    & (~ 
                                                       ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         << 8U) 
                                                        | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                           >> 0x18U))))))) 
                                            | ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                        >> 0x10U)) 
                                               & (0U 
                                                  != 
                                                  (0xfU 
                                                   & (~ 
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          >> 0x18U))))))) 
                                           | ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                       >> 0x11U)) 
                                              & (0U 
                                                 != 
                                                 (0xfU 
                                                  & (~ 
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         >> 0x18U))))))) 
                                          | ((IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                      >> 0x12U)) 
                                             & (0U 
                                                != 
                                                (0xfU 
                                                 & (~ 
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        >> 0x18U))))))) 
                                         | ((IData)(
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                     >> 0x13U)) 
                                            & (0U != 
                                               (0xfU 
                                                & (~ 
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       >> 0x18U))))))) 
                                        | ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                    >> 0x14U)) 
                                           & (0U != 
                                              (0xfU 
                                               & (~ 
                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x18U))))))) 
                                       | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                   >> 0x15U)) 
                                          & (0U != 
                                             (0xfU 
                                              & (~ 
                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     >> 0x18U))))))) 
                                      | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x16U)) 
                                         & (0U != (0xfU 
                                                   & (~ 
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          >> 0x18U))))))) 
                                     | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x17U)) 
                                        & (0U != (0xfU 
                                                  & (~ 
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         >> 0x18U))))))) 
                                    | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                >> 0x18U)) 
                                       & (0U != (0xfU 
                                                 & (~ 
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        >> 0x18U))))))) 
                                   | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                               >> 0x19U)) 
                                      & (0U != (0xfU 
                                                & (~ 
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       >> 0x18U))))))) 
                                  | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                              >> 0x1aU)) 
                                     & (0U != (0xfU 
                                               & (~ 
                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x18U))))))) 
                                 | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                             >> 0x1bU)) 
                                    & (0U != (0xfU 
                                              & (~ 
                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     >> 0x18U))))))) 
                                | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                            >> 0x1cU)) 
                                   & (0U != (0xfU & 
                                             (~ ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  << 8U) 
                                                 | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    >> 0x18U))))))) 
                               | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                           >> 0x1dU)) 
                                  & (0U != (0xfU & 
                                            (~ ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x18U))))))) 
                              | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                          >> 0x1eU)) 
                                 & (0U != (0xfU & (~ 
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       >> 0x18U))))))) 
                             | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                         >> 0x1fU)) 
                                & (0U != (0xfU & (~ 
                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x18U))))))) 
                            | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                        >> 0x20U)) 
                               & (0U != (0xfU & (~ 
                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     >> 0x18U))))))) 
                           | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                       >> 0x21U)) & 
                              (0U != (0xfU & (~ ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  << 8U) 
                                                 | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    >> 0x18U))))))) 
                          | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                      >> 0x22U)) & 
                             (0U != (0xfU & (~ ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   >> 0x18U))))))) 
                         | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                     >> 0x23U)) & (0U 
                                                   != 
                                                   (0xfU 
                                                    & (~ 
                                                       ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         << 8U) 
                                                        | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                           >> 0x18U))))))) 
                        | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                    >> 0x24U)) & (0U 
                                                  != 
                                                  (0xfU 
                                                   & (~ 
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          >> 0x18U))))))) 
                       | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                   >> 0x25U)) & (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         >> 0x18U))))))) 
                      | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x26U)) & (0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        >> 0x18U))))))) 
                     | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                 >> 0x27U)) & (0U != 
                                               (1U 
                                                & (~ 
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       >> 0x18U))))))) 
                    | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                >> 0x28U)) & (0U != 
                                              (0xfU 
                                               & (~ 
                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x18U))))))) 
                   | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                               >> 0x29U)) & (0U != 
                                             (1U & 
                                              (~ ((
                                                   vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     >> 0x18U))))))) 
                  | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                              >> 0x2aU)) & (0U != (1U 
                                                   & (~ 
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          >> 0x18U))))))) 
                 | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                             >> 0x2bU)) & (0U != (1U 
                                                  & (~ 
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         >> 0x18U))))))) 
                | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                            >> 0x2cU)) & (0U != (0xfU 
                                                 & (~ 
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        >> 0x18U))))))) 
               | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                           >> 0x2dU)) & (0U != (1U 
                                                & (~ 
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       >> 0x18U))))))) 
              | ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                          >> 0x2eU)) & (0U != (1U & 
                                               (~ (
                                                   (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      >> 0x18U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addrmiss 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)((0U != vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addrmiss) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__wr_err)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__intg_err));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_re 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x26U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_re 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x28U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x25U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
        = ((0x3fffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x1dU)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
        = ((0xff800000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x1dU)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 0xaU) | ((IData)(((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x1dU)) 
                                                      & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                     & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                    >> 0x20U)) << 0x16U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
        = ((0x7fffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x1eU)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
        = ((0xff000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x1eU)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 9U) | ((IData)(((QData)((IData)((
                                                   ((IData)(
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x1eU)) 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                  >> 0x20U)) << 0x17U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
        = ((0xffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x1fU)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
        = ((0xfe000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x1fU)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 8U) | ((IData)(((QData)((IData)((
                                                   ((IData)(
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x1fU)) 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                  >> 0x20U)) << 0x18U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
        = ((0x1ffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x20U)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x19U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
        = ((0xfc000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x20U)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 7U) | ((IData)(((QData)((IData)((
                                                   ((IData)(
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x20U)) 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                   & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                  >> 0x20U)) << 0x19U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
        = ((0x3ffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x21U)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
        = ((0xfff80000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x21U)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 0xeU) | ((IData)(((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x21U)) 
                                                      & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                     & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                    >> 0x20U)) << 0x12U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
        = ((0x7ffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x22U)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
        = ((0xfff00000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x22U)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 0xdU) | ((IData)(((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x22U)) 
                                                      & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                     & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                    >> 0x20U)) << 0x13U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
        = ((0xfffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x23U)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
        = ((0xffe00000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x23U)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 0xcU) | ((IData)(((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x23U)) 
                                                      & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                     & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                    >> 0x20U)) << 0x14U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
        = ((0x1fffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U]) 
           | ((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                 >> 0x24U)) 
                                        & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
              << 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
        = ((0xffc00000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U]) 
           | (((IData)((QData)((IData)((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                  >> 0x24U)) 
                                         & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                        & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)))))) 
               >> 0xbU) | ((IData)(((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x24U)) 
                                                      & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_re)) 
                                                     & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))))) 
                                    >> 0x20U)) << 0x15U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x19U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x1aU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x1bU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x1cU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_regwen_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x27U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__fsm_state_regren_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x2dU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__trigger_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x29U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we 
        = ((((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                      >> 0x26U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error))) 
           & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x28U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x25U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 1U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 2U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 3U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 4U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 5U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 6U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 7U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 8U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 9U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0xaU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0xbU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0xcU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0xdU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0xeU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0xfU)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x10U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x11U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x12U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x13U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x14U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x15U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x16U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_2_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x17U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_3_we 
        = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                     >> 0x18U)) & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit) 
            & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_error)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_0__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_we)
            ? ((vlSelf->ascon_sim__DOT__tl_i[1U] << 8U) 
               | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                  >> 0x18U)) : 0U);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_1__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_we)
            ? ((vlSelf->ascon_sim__DOT__tl_i[1U] << 8U) 
               | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                  >> 0x18U)) : 0U);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_2__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_we)
            ? ((vlSelf->ascon_sim__DOT__tl_i[1U] << 8U) 
               | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                  >> 0x18U)) : 0U);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_tag_in_3__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_we)
            ? ((vlSelf->ascon_sim__DOT__tl_i[1U] << 8U) 
               | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                  >> 0x18U)) : 0U);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q) 
           & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_regwen_we)) 
              | (vlSelf->ascon_sim__DOT__tl_i[0U] >> 0x18U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__q) 
           & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__fsm_state_regren_we)) 
              | (vlSelf->ascon_sim__DOT__tl_i[0U] >> 0x18U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
           & (vlSelf->ascon_sim__DOT__tl_i[0U] >> 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
           & (vlSelf->ascon_sim__DOT__tl_i[0U] >> 0x19U));
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data 
            = (0xfffU & ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                          << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                    >> 0x18U)));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data 
            = (0xfffU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                         >> 4U));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data 
            = (0x1fU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                        >> 0x10U));
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data = 0U;
    }
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data 
            = (7U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                     >> 0x18U));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data 
            = (3U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                     >> 0x1bU));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data 
            = (1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                     >> 0x1dU));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data 
            = (1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                     >> 0x1eU));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data 
            = (vlSelf->ascon_sim__DOT__tl_i[0U] >> 0x1fU);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data 
            = (0xfU & vlSelf->ascon_sim__DOT__tl_i[1U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data 
            = (0xfU & (vlSelf->ascon_sim__DOT__tl_i[1U] 
                       >> 4U));
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data = 0U;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
        = ((0x3ffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we)))) 
              << 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we)))) 
            >> 0xeU) | (((IData)((((QData)((IData)(
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                       >> 0x18U)))) 
                                   << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we)))) 
                         << 0x13U) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                     >> 0x18U)))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we))) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
        = ((0xfff00000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U]) 
           | (((0x3ffffU & ((IData)((((QData)((IData)(
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                          >> 0x18U)))) 
                                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we)))) 
                            >> 0xdU)) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                        >> 0x18U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we))) 
                                                  >> 0x20U)) 
                                         >> 0xeU)) 
              | ((0x40000U & ((IData)((((QData)((IData)(
                                                        ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          << 8U) 
                                                         | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                            >> 0x18U)))) 
                                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we)))) 
                              >> 0xdU)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                        << 8U) 
                                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                          >> 0x18U)))) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we))) 
                                                    >> 0x20U)) 
                                           << 0x13U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
        = ((0xfffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we)))) 
              << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we)))) 
            >> 0xcU) | (((IData)((((QData)((IData)(
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                       >> 0x18U)))) 
                                   << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we)))) 
                         << 0x15U) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                     >> 0x18U)))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
        = ((0x3c00000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U]) 
           | (0x3ffffffU & (((0xfffffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                        >> 0x18U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we)))) 
                                          >> 0xbU)) 
                             | ((IData)(((((QData)((IData)(
                                                           ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                             << 8U) 
                                                            | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                               >> 0x18U)))) 
                                           << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we))) 
                                         >> 0x20U)) 
                                >> 0xcU)) | ((0x100000U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                             << 8U) 
                                                                            | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                               >> 0x18U)))) 
                                                           << 1U) 
                                                          | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we)))) 
                                                 >> 0xbU)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                             << 8U) 
                                                                            | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                               >> 0x18U)))) 
                                                           << 1U) 
                                                          | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we))) 
                                                         >> 0x20U)) 
                                                << 0x15U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
        = ((0x3fffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we)))) 
              << 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we)))) 
            >> 0x12U) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we)))) 
                          << 0xfU) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                     >> 0x18U)))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we))) 
                                               >> 0x20U)) 
                                      << 0xeU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
        = ((0xffff0000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U]) 
           | (((0x3fffU & ((IData)((((QData)((IData)(
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                         >> 0x18U)))) 
                                     << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we)))) 
                           >> 0x11U)) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                        >> 0x18U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we))) 
                                                  >> 0x20U)) 
                                         >> 0x12U)) 
              | ((0x4000U & ((IData)((((QData)((IData)(
                                                       ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         << 8U) 
                                                        | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                           >> 0x18U)))) 
                                       << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we)))) 
                             >> 0x11U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                        << 8U) 
                                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                          >> 0x18U)))) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we))) 
                                                    >> 0x20U)) 
                                           << 0xfU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
        = ((0xffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we)))) 
              << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we)))) 
            >> 0x10U) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we)))) 
                          << 0x11U) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                      >> 0x18U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we))) 
                                                >> 0x20U)) 
                                       << 0x10U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
        = ((0xfffc0000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U]) 
           | (((0xffffU & ((IData)((((QData)((IData)(
                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                       << 8U) 
                                                      | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                         >> 0x18U)))) 
                                     << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we)))) 
                           >> 0xfU)) | ((IData)(((((QData)((IData)(
                                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                       >> 0x18U)))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we))) 
                                                 >> 0x20U)) 
                                        >> 0x10U)) 
              | ((0x10000U & ((IData)((((QData)((IData)(
                                                        ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                          << 8U) 
                                                         | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                            >> 0x18U)))) 
                                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we)))) 
                              >> 0xfU)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                        << 8U) 
                                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                          >> 0x18U)))) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we))) 
                                                    >> 0x20U)) 
                                           << 0x11U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
        = ((0x3ffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we)))) 
              << 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we)))) 
            >> 0x16U) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we)))) 
                          << 0xbU) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                     >> 0x18U)))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we))) 
                                               >> 0x20U)) 
                                      << 0xaU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
        = ((0xfffff000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU]) 
           | (((0x3ffU & ((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we)))) 
                          >> 0x15U)) | ((IData)(((((QData)((IData)(
                                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                       >> 0x18U)))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we))) 
                                                 >> 0x20U)) 
                                        >> 0x16U)) 
              | ((0x400U & ((IData)((((QData)((IData)(
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                          >> 0x18U)))) 
                                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we)))) 
                            >> 0x15U)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                       << 8U) 
                                                                      | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                         >> 0x18U)))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we))) 
                                                   >> 0x20U)) 
                                          << 0xbU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
        = ((0xfffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we)))) 
              << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we)))) 
            >> 0x14U) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we)))) 
                          << 0xdU) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                     >> 0x18U)))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we))) 
                                               >> 0x20U)) 
                                      << 0xcU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
        = ((0xffffc000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU]) 
           | (((0xfffU & ((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we)))) 
                          >> 0x13U)) | ((IData)(((((QData)((IData)(
                                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                       >> 0x18U)))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we))) 
                                                 >> 0x20U)) 
                                        >> 0x14U)) 
              | ((0x1000U & ((IData)((((QData)((IData)(
                                                       ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         << 8U) 
                                                        | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                           >> 0x18U)))) 
                                       << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we)))) 
                             >> 0x13U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                        << 8U) 
                                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                          >> 0x18U)))) 
                                                      << 1U) 
                                                     | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we))) 
                                                    >> 0x20U)) 
                                           << 0xdU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
        = ((0x3fU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we)))) 
              << 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we)))) 
            >> 0x1aU) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we)))) 
                          << 7U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                   >> 0x18U)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we))) 
                                             >> 0x20U)) 
                                    << 6U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
        = ((0xffffff00U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U]) 
           | (((0x3fU & ((IData)((((QData)((IData)(
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                       >> 0x18U)))) 
                                   << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we)))) 
                         >> 0x19U)) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                      >> 0x18U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we))) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
              ((0x40U & ((IData)((((QData)((IData)(
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                       >> 0x18U)))) 
                                   << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we)))) 
                         >> 0x19U)) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                      >> 0x18U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we))) 
                                                >> 0x20U)) 
                                       << 7U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
        = ((0xffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we)))) 
              << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we)))) 
            >> 0x18U) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we)))) 
                          << 9U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                   >> 0x18U)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we))) 
                                             >> 0x20U)) 
                                    << 8U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
        = ((0xfffffc00U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU]) 
           | (((0xffU & ((IData)((((QData)((IData)(
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                       >> 0x18U)))) 
                                   << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we)))) 
                         >> 0x17U)) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                      >> 0x18U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we))) 
                                                >> 0x20U)) 
                                       >> 0x18U)) | 
              ((0x100U & ((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we)))) 
                          >> 0x17U)) | ((IData)(((((QData)((IData)(
                                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                     << 8U) 
                                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                       >> 0x18U)))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we))) 
                                                 >> 0x20U)) 
                                        << 9U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
        = ((3U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we)))) 
              << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we)))) 
            >> 0x1eU) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we)))) 
                          << 3U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                   >> 0x18U)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we))) 
                                             >> 0x20U)) 
                                    << 2U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
        = ((0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U]) 
           | (((3U & ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  << 8U) 
                                                 | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                    >> 0x18U)))) 
                                << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we)))) 
                      >> 0x1dU)) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                   >> 0x18U)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we))) 
                                             >> 0x20U)) 
                                    >> 0x1eU)) | ((4U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                                >> 0x18U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we)))) 
                                                      >> 0x1dU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                                >> 0x18U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we))) 
                                                              >> 0x20U)) 
                                                     << 3U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
        = ((0xfU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we)))) 
              << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we)))) 
            >> 0x1cU) | (((IData)((((QData)((IData)(
                                                    ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                      << 8U) 
                                                     | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                        >> 0x18U)))) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we)))) 
                          << 5U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                   >> 0x18U)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we))) 
                                             >> 0x20U)) 
                                    << 4U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
        = ((0xffffffc0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U]) 
           | (((0xfU & ((IData)((((QData)((IData)((
                                                   (vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                      >> 0x18U)))) 
                                  << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we)))) 
                        >> 0x1bU)) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                     >> 0x18U)))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we))) 
                                               >> 0x20U)) 
                                      >> 0x1cU)) | 
              ((0x10U & ((IData)((((QData)((IData)(
                                                   ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                     << 8U) 
                                                    | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                       >> 0x18U)))) 
                                   << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we)))) 
                         >> 0x1bU)) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                      >> 0x18U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we))) 
                                                >> 0x20U)) 
                                       << 5U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
        = ((0x3fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU]) 
           | ((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                          >> 0x18U)))) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we)))) 
              << 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xfU] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we)))) 
            >> 2U) | (((IData)((((QData)((IData)(((
                                                   vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                     >> 0x18U)))) 
                                 << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we)))) 
                       << 0x1fU) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                 << 8U) 
                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                   >> 0x18U)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we))) 
                                             >> 0x20U)) 
                                    << 0x1eU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x10U] 
        = (((0x3fffffffU & ((IData)((((QData)((IData)(
                                                      ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                        << 8U) 
                                                       | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                          >> 0x18U)))) 
                                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we)))) 
                            >> 1U)) | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                    << 8U) 
                                                                   | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                      >> 0x18U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we))) 
                                                >> 0x20U)) 
                                       >> 2U)) | ((0x40000000U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                                >> 0x18U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we)))) 
                                                      >> 1U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                                                >> 0x18U)))) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we))) 
                                                              >> 0x20U)) 
                                                     << 0x1fU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x11U] 
        = (IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                      << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                >> 0x18U)))) 
                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_2_we))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
        = (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                        << 8U) | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x18U)))) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_3_we)))) 
            << 1U) | (IData)(((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                  << 8U) 
                                                 | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                    >> 0x18U)))) 
                                << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_2_we))) 
                              >> 0x20U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
        = ((0xfffffffcU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U]) 
           | (((IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                           << 8U) | 
                                          (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                           >> 0x18U)))) 
                         << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_3_we)))) 
               >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                       ((vlSelf->ascon_sim__DOT__tl_i[1U] 
                                                         << 8U) 
                                                        | (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                           >> 0x18U)))) 
                                       << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_3_we))) 
                                     >> 0x20U)) << 1U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_flds_we 
        = (3U & (- (IData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_we))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check = 0ULL;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7ffffffffff0ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | (IData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_2_we) 
                               << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_1_we) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_0_we) 
                                           << 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_we)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7fffffffff0fULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_2_we) 
                                << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_1_we) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_0_we) 
                                            << 1U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share0_3_we)))))) 
              << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7ffffffff0ffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_2_we) 
                                << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_1_we) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_0_we) 
                                            << 1U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__key_share1_3_we)))))) 
              << 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7fffffff0fffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_2_we) 
                                << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_1_we) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_0_we) 
                                            << 1U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share0_3_we)))))) 
              << 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7ffffff0ffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_2_we) 
                                << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_1_we) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_0_we) 
                                            << 1U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__nonce_share1_3_we)))))) 
              << 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7fffff0fffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_2_we) 
                                << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_1_we) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_0_we) 
                                            << 1U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share0_3_we)))))) 
              << 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7ffff0ffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_we) 
                                << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_we) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_we) 
                                            << 1U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__data_in_share1_3_we)))))) 
              << 0x18U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7f800fffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
                                << 0xaU) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
                                             << 9U) 
                                            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_we))))) 
              << 0x1cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x787fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__trigger_we) 
                                << 2U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we) 
                                           << 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_regwen_we))))) 
              << 0x27U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
        = ((0x7ffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
           | ((QData)((IData)(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__fsm_state_regren_we) 
                               << 2U))) << 0x2bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = (1U & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we)) 
                 | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_update_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = (1U & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we)) 
                 | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_update_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we)
            ? (0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data)))
            : 0xfffU);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_update_err 
        = (((0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we)
            ? (0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data)))
            : 0xfffU);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_update_err 
        = (((0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we)
            ? (0x1fU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data)))
            : 0x1fU);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_update_err 
        = (((0x1fU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)
            ? (7U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data)))
            : 7U);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_update_err 
        = (((7U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)
            ? (3U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data)))
            : 3U);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_update_err 
        = (((3U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = (1U & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)) 
                 | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_update_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = (1U & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)) 
                 | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_update_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = (1U & ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)) 
                 | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_update_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)
            ? (0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data)))
            : 0xfU);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_update_err 
        = (((0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)
            ? (0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data)))
            : 0xfU);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_update_err 
        = (((0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__wr_data)) 
           & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__phase_q) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
        = ((0x3fffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U]) 
           | (0x3c00000U & ((((2U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                     >> 0x18U)) | (3U 
                                                   == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_flds_we))) 
                             << 0x18U) | (((2U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                                                  >> 0x17U)) 
                                           | (3U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__alert_test_flds_we))) 
                                          << 0x16U))));
    __Vtemp_h4f1d0437__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                        >> 0x2eU))))) 
                                            << 0x36U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                           >> 0x2cU))))) 
                                               << 0x35U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                              >> 0x2aU))))) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x28U))))) 
                                                     << 0x33U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x26U))))) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x24U))))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x22U))))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U))))) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1eU))))) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1cU))))) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1aU))))) 
                                                                          << 0x2cU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x18U))))) 
                                                                             << 0x2bU) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x16U))))) 
                                                                                << 0x2aU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x14U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x12U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xeU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xcU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xaU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 8U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 6U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 4U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 2U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 0x1fU) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x2cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x28U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x24U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1cU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x18U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xcU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 8U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 4U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x28U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x18U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h4f1d0437__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                         >> 0x2eU))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                            >> 0x2cU))))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                               >> 0x2aU))))) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x28U))))) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x26U))))) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x24U))))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x22U))))) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U))))) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1eU))))) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1cU))))) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1aU))))) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x18U))))) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x16U))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x14U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x12U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xeU))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xcU))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xaU))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 8U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 6U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 4U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 2U))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 0x1fU) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x2cU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x28U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x24U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x1cU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x18U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0xcU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 8U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 4U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x28U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x18U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x10U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                                >> 0x20U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hda9d2b81__0[2U] = ((0x40U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                   >> 7U)) 
                                          << 6U)) | 
                                ((0x20U & ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 6U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 5U)) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 4U)) 
                                              << 3U)) 
                                       | ((4U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 3U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 2U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 1U)))))))));
    __Vtemp_h9c76f8c5__0[2U] = ((0x2000U & ((IData)(
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                     >> 0xeU)) 
                                            << 0xdU)) 
                                | ((0x1000U & ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0xdU)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 0xcU)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 0xbU)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0xaU)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 9U)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 8U)) 
                                                      << 7U)) 
                                                  | __Vtemp_hda9d2b81__0[2U])))))));
    __Vtemp_h49df9be1__0[2U] = ((0x100000U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 0x15U)) 
                                              << 0x14U)) 
                                | ((0x80000U & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x14U)) 
                                                << 0x13U)) 
                                   | ((0x40000U & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x13U)) 
                                                   << 0x12U)) 
                                      | ((0x20000U 
                                          & ((IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                      >> 0x12U)) 
                                             << 0x11U)) 
                                         | ((0x10000U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x11U)) 
                                                << 0x10U)) 
                                            | ((0x8000U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x10U)) 
                                                   << 0xfU)) 
                                               | ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 0xfU)) 
                                                      << 0xeU)) 
                                                  | __Vtemp_h9c76f8c5__0[2U])))))));
    __Vtemp_h6e559aea__0[2U] = ((0x8000000U & ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0x1cU)) 
                                               << 0x1bU)) 
                                | ((0x4000000U & ((IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 0x1bU)) 
                                                  << 0x1aU)) 
                                   | ((0x2000000U & 
                                       ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                 >> 0x1aU)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                      >> 0x19U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x18U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x17U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 0x16U)) 
                                                      << 0x15U)) 
                                                  | __Vtemp_h49df9be1__0[2U])))))));
    __Vtemp_hd2154b9e__0[3U] = ((0x40U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                   >> 0x27U)) 
                                          << 6U)) | 
                                ((0x20U & ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 0x26U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 0x25U)) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 0x24U)) 
                                              << 3U)) 
                                       | ((4U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 0x23U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0x22U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 0x21U)))))))));
    __Vtemp_h169d061f__0[0U] = __Vtemp_h4f1d0437__0[0U];
    __Vtemp_h169d061f__0[1U] = __Vtemp_h4f1d0437__0[1U];
    __Vtemp_h169d061f__0[2U] = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                          >> 0x20U)) 
                                 << 0x1fU) | ((0x40000000U 
                                               & ((IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 0x1fU)) 
                                                  << 0x1eU)) 
                                              | ((0x20000000U 
                                                  & ((IData)(
                                                             (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                              >> 0x1eU)) 
                                                     << 0x1dU)) 
                                                 | ((0x10000000U 
                                                     & ((IData)(
                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                 >> 0x1dU)) 
                                                        << 0x1cU)) 
                                                    | __Vtemp_h6e559aea__0[2U]))));
    __Vtemp_h169d061f__0[3U] = ((0x2000U & ((IData)(
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                     >> 0x2eU)) 
                                            << 0xdU)) 
                                | ((0x1000U & ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0x2dU)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 0x2cU)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 0x2bU)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x2aU)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x29U)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 0x28U)) 
                                                      << 7U)) 
                                                  | __Vtemp_hd2154b9e__0[3U])))))));
    VL_EXTEND_WW(127,110, __Vtemp_h7cd0880a__0, __Vtemp_h169d061f__0);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree[0U] 
        = __Vtemp_h7cd0880a__0[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree[1U] 
        = __Vtemp_h7cd0880a__0[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree[2U] 
        = __Vtemp_h7cd0880a__0[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree[3U] 
        = __Vtemp_h7cd0880a__0[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__gen_no_addr_check_strict__DOT__unused_and_tree 
        = (1U & VL_REDXOR_64((0x3abababbbabbULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__ 
        = (IData)((0x300000000000ULL == (0x300000000000ULL 
                                         & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__ 
        = (IData)((0x300000000ULL == (0x300000000ULL 
                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__ 
        = (IData)((0xc00000000ULL == (0xc00000000ULL 
                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__ 
        = (IData)((0x3000000000ULL == (0x3000000000ULL 
                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__ 
        = (IData)((0xc000000000ULL == (0xc000000000ULL 
                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__ 
        = (IData)((0x30000000000ULL == (0x30000000000ULL 
                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__ 
        = (IData)((0xc0000000000ULL == (0xc0000000000ULL 
                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__ 
        = (IData)((3ULL == (3ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__ 
        = (IData)((0xcULL == (0xcULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__33__KET__ 
        = (IData)((0x30ULL == (0x30ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__34__KET__ 
        = (IData)((0xc0ULL == (0xc0ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__ 
        = (IData)((0x300ULL == (0x300ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__ 
        = (IData)((0xc00ULL == (0xc00ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__ 
        = (IData)((0x3000ULL == (0x3000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__ 
        = (IData)((0xc000ULL == (0xc000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__ 
        = (IData)((0x30000ULL == (0x30000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__ 
        = (IData)((0xc0000ULL == (0xc0000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__ 
        = (IData)((0x300000ULL == (0x300000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__ 
        = (IData)((0xc00000ULL == (0xc00000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__ 
        = (IData)((0x3000000ULL == (0x3000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__ 
        = (IData)((0xc000000ULL == (0xc000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__ 
        = (IData)((0x30000000ULL == (0x30000000ULL 
                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__ 
        = (IData)((0xc0000000ULL == (0xc0000000ULL 
                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__ 
        = (IData)((0ULL != (0x300000000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ 
        = (IData)((0ULL != (0x300000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ 
        = (IData)((0ULL != (0xc00000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__ 
        = (IData)((0ULL != (0x3000000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__ 
        = (IData)((0ULL != (0xc000000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__ 
        = (IData)((0ULL != (0x30000000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__ 
        = (IData)((0ULL != (0xc0000000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__ 
        = (IData)((0ULL != (3ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__ 
        = (IData)((0ULL != (0xcULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__ 
        = (IData)((0ULL != (0x30ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__ 
        = (IData)((0ULL != (0xc0ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__ 
        = (IData)((0ULL != (0x300ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__ 
        = (IData)((0ULL != (0xc00ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__ 
        = (IData)((0ULL != (0x3000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__ 
        = (IData)((0ULL != (0xc000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__ 
        = (IData)((0ULL != (0x30000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__ 
        = (IData)((0ULL != (0xc0000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = (IData)((0ULL != (0x300000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__ 
        = (IData)((0ULL != (0xc00000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__ 
        = (IData)((0ULL != (0x3000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__ 
        = (IData)((0ULL != (0xc000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__ 
        = (IData)((0ULL != (0x30000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ 
        = (IData)((0ULL != (0xc0000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd 
                = (0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd 
                = (0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd 
                = (0x1fU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd 
                = (7U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd 
                = (3U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd 
                = (0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_we 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__phase_q)) 
            & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_update_err))) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_storage_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_we = 0U;
    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_storage_err)))) {
        if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_update_err) 
             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_re))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd 
                = (0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_q)));
        } else if (((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__phase_q)) 
                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_we))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_we = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_wd 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__shadowed_update_err 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_update_err) 
           | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_update_err) 
              | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_update_err) 
                 | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_update_err) 
                    | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_update_err) 
                       | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_update_err) 
                          | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_update_err) 
                             | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_update_err) 
                                | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_update_err) 
                                   | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_update_err) 
                                      | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_update_err) 
                                         | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_update_err))))))))))));
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_read) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_d = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_d = 0U;
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_d 
            = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_q) 
               | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
                         >> 2U)) | ((4U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
                                           >> 2U)) 
                                    | ((2U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
                                              >> 2U)) 
                                       | (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
                                                >> 2U))))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_d 
            = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_q) 
               | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
                         << 2U)) | ((4U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x11U] 
                                           << 2U)) 
                                    | ((2U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xfU] 
                                              >> 0x1eU)) 
                                       | (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
                                                >> 0x1eU))))));
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_d 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_we)
            ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_q) 
                    | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                              >> 0x16U)) | ((4U & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                   >> 0x16U)) 
                                            | ((2U 
                                                & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                                   >> 0x16U)) 
                                               | (1U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
                                                     >> 0x16U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_d 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_we)
            ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q) 
                    | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                              >> 0x12U)) | ((4U & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                   >> 0x12U)) 
                                            | ((2U 
                                                & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                                   >> 0x12U)) 
                                               | (1U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                     >> 0x12U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
            << 0xdU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
                        >> 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
            << 0x11U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
                         >> 0xfU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
            << 0xcU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
                        >> 0x14U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
            << 0x10U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
                         >> 0x10U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
            << 0xbU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
                        >> 0x15U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
            << 0xfU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
                        >> 0x11U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_d[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U] 
            << 0xaU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
                        >> 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_d[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
            << 0xeU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
                        >> 0x12U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
            << 0x1dU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
                         >> 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xfU] 
            << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
                      >> 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
            << 0x1cU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x14U] 
                         >> 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[1U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x10U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
            << 0x1bU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x15U] 
                         >> 5U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
            << 0x1fU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x11U] 
                         >> 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_d[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
            << 0x1aU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x16U] 
                         >> 6U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_d[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x13U] 
            << 0x1eU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x12U] 
                         >> 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
            << 0x15U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
                         >> 0xbU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
            << 0x19U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
                         >> 7U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
            << 0x14U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
                         >> 0xcU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
            << 0x18U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
                         >> 8U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
            << 0x13U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
                         >> 0xdU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
            << 0x17U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
                         >> 9U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_d[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
            << 0x12U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
                         >> 0xeU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_d[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
            << 0x16U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
                         >> 0xaU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
            << 9U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
                      >> 0x17U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[1U] 
        = (IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                                      << 7U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                >> 0x19U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                  << 8U) 
                                                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                                    >> 0x18U))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[2U] 
        = (IData)(((((QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                                       << 7U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                 >> 0x19U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[8U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[7U] 
                                                     >> 0x18U))))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_msg_out_q[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
            << 6U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[9U] 
                      >> 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
            << 0xdU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                        >> 0x13U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[1U] 
        = (IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                                      << 0xbU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                  >> 0x15U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                  << 0xcU) 
                                                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                                    >> 0x14U))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[2U] 
        = (IData)(((((QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                                       << 0xbU) | (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                   >> 0x15U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[4U] 
                                                   << 0xcU) 
                                                  | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[3U] 
                                                     >> 0x14U))))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__unused_tag_out_q[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[6U] 
            << 0xaU) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[5U] 
                        >> 0x16U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                                if (
                                                    (2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                         >> 5U)))) {
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                                }
                                            }
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset 
                                                = (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                        >> 5U)))
                                                    ? 6U
                                                    : 4U);
                                        } else {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U != 
                                             (3U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                        }
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset 
                                            = ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                    >> 5U)))
                                                ? 6U
                                                : 4U);
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                        }
                    } else {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                    }
                                }
                            }
                        }
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
            }
        } else {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                        } else {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                }
                            } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                 >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U != 
                                             (3U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 1U;
                                        }
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        if ((1U == 
                                             (3U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 0U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 0U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        if ((2U == 
                                             (3U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
        }
    } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                        if ((1U == 
                                             (7U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 2U)))) {
                                            if ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                     >> 5U)))) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                            }
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                        >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                        }
                                    }
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset 
                                        = ((1U == (3U 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                      >> 5U)))
                                            ? 6U : 4U);
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
                }
            } else {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                }
                            }
                        }
                    }
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
            }
        } else {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
        }
    } else {
        if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                            }
                        }
                    }
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset = 0U;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
        = ((0xfU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U]) 
           | ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)) 
                        << 4U) | (QData)((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                         << 1U)) 
                                                     | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce) 
                                                         << 1U) 
                                                        | (1U 
                                                           & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                              >> 1U))))))))) 
              << 4U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = ((0xffffff00U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]) 
           | (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)) 
                         << 4U) | (QData)((IData)((
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                          << 1U)) 
                                                      | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                               >> 1U))))))))) 
               >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)) 
                                       << 4U) | (QData)((IData)(
                                                                (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key) 
                                                                  << 3U) 
                                                                 | ((4U 
                                                                     & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                                        << 1U)) 
                                                                    | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce) 
                                                                        << 1U) 
                                                                       | (1U 
                                                                          & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                                             >> 1U)))))))) 
                                     >> 0x20U)) << 4U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__alert_test 
        = (((IData)((0x3000000U == (0x3000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U]))) 
            << 1U) | (IData)((0xc00000U == (0xc00000U 
                                            & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x27U]))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3 = 1U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            if ((1U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                     >> 5U)))) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3 = 0U;
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 1U;
                                            } else {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                            }
                                        } else {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 1U;
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                                if (
                                                    (2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                         >> 5U)))) {
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 0U;
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
        } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                             >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U == 
                                             (3U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 1U;
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            if ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                     >> 5U)))) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                            if ((1U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                         >> 5U)))) {
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 0U;
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
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
            << 5U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
                      >> 0x1bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[1U] 
        = (IData)((((QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                                      << 3U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                                >> 0x1dU)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                                  << 4U) 
                                                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
                                                    >> 0x1cU))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[2U] 
        = (IData)(((((QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                                       << 3U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                                 >> 0x1dU)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                                   << 4U) 
                                                  | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
                                                     >> 0x1cU))))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
            << 2U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                      >> 0x1eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__order_error 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_received_q) 
           & ((0x969U == (0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                    >> 3U))) | (0x969U 
                                                == 
                                                (0xfffU 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                    >> 0xfU)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok 
        = (1U & ((vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                  >> 1U) & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key) 
                               | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding = 2U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                        if ((1U != 
                                             (3U & 
                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                               >> 5U)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                    >> 2U)))
                                                ? 0U
                                                : 1U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_get_padding_mask__96__valid_bytes = (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                 >> 0x1bU);
    if ((8U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))) {
        if ((4U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))) {
            __Vtemp_h43db26e7__0[0U] = ((2U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
            __Vtemp_h43db26e7__0[1U] = 0U;
        } else {
            __Vtemp_h43db26e7__0[0U] = 0U;
            __Vtemp_h43db26e7__0[1U] = ((2U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
        }
        __Vtemp_h43db26e7__0[2U] = 0U;
        __Vtemp_h43db26e7__0[3U] = 0U;
    } else {
        __Vtemp_h43db26e7__0[0U] = 0U;
        __Vtemp_h43db26e7__0[1U] = 0U;
        if ((4U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))) {
            __Vtemp_h43db26e7__0[2U] = ((2U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
            __Vtemp_h43db26e7__0[3U] = 0U;
        } else {
            __Vtemp_h43db26e7__0[2U] = 0U;
            __Vtemp_h43db26e7__0[3U] = ((2U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x80U
                                             : 0x8000U)
                                         : ((1U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))
                                             ? 0x800000U
                                             : 0x80000000U));
        }
    }
    if ((0x10U & (IData)(__Vfunc_get_padding_mask__96__valid_bytes))) {
        __Vfunc_get_padding_mask__96__padding_byte_mask[0U] = 0U;
        __Vfunc_get_padding_mask__96__padding_byte_mask[1U] = 0U;
        __Vfunc_get_padding_mask__96__padding_byte_mask[2U] = 0U;
        __Vfunc_get_padding_mask__96__padding_byte_mask[3U] = 0U;
    } else {
        __Vfunc_get_padding_mask__96__padding_byte_mask[0U] 
            = __Vtemp_h43db26e7__0[0U];
        __Vfunc_get_padding_mask__96__padding_byte_mask[1U] 
            = __Vtemp_h43db26e7__0[1U];
        __Vfunc_get_padding_mask__96__padding_byte_mask[2U] 
            = __Vtemp_h43db26e7__0[2U];
        __Vfunc_get_padding_mask__96__padding_byte_mask[3U] 
            = __Vtemp_h43db26e7__0[3U];
    }
    __Vfunc_get_padding_mask__96__Vfuncout[0U] = __Vfunc_get_padding_mask__96__padding_byte_mask[0U];
    __Vfunc_get_padding_mask__96__Vfuncout[1U] = __Vfunc_get_padding_mask__96__padding_byte_mask[1U];
    __Vfunc_get_padding_mask__96__Vfuncout[2U] = __Vfunc_get_padding_mask__96__padding_byte_mask[2U];
    __Vfunc_get_padding_mask__96__Vfuncout[3U] = __Vfunc_get_padding_mask__96__padding_byte_mask[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[0U] 
        = __Vfunc_get_padding_mask__96__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[1U] 
        = __Vfunc_get_padding_mask__96__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[2U] 
        = __Vfunc_get_padding_mask__96__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[3U] 
        = __Vfunc_get_padding_mask__96__Vfuncout[3U];
    __Vfunc_mubi4_test_invalid__80__val = (0xfU & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                   >> 0xeU));
    __Vfunc_mubi4_test_invalid__80__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__80__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__80__val)))));
    if (__Vfunc_mubi4_test_invalid__80__Vfuncout) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad_mubi4invalid = 1U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad = 9U;
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad_mubi4invalid = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad 
            = (0xfU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                       >> 0xeU));
    }
    __Vfunc_mubi4_test_invalid__81__val = (0xfU & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                                   >> 0xaU));
    __Vfunc_mubi4_test_invalid__81__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__81__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__81__val)))));
    if (__Vfunc_mubi4_test_invalid__81__Vfuncout) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg_mubi4invalid = 1U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg = 6U;
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg_mubi4invalid = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg 
            = (0xfU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                       >> 0xaU));
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__complete_block 
        = (((IData)(((0x40000000U == (0xf8000000U & 
                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U])) 
                     & (0x20U == (0x60U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U])))) 
            | (IData)(((0x80000000U == (0xf8000000U 
                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U])) 
                       & (0x40U == (0x60U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U])))))
            ? 6U : 9U);
    __Vfunc_bin2thermo__95__valid_bytes = (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                           >> 0x1bU);
    if ((8U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))) {
        if ((4U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))) {
            __Vtemp_h2859c052__0[0U] = ((2U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
            __Vtemp_h2859c052__0[1U] = 0xffffffffU;
        } else {
            __Vtemp_h2859c052__0[0U] = 0U;
            __Vtemp_h2859c052__0[1U] = ((2U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
        }
        __Vtemp_h2859c052__0[2U] = 0xffffffffU;
        __Vtemp_h2859c052__0[3U] = 0xffffffffU;
    } else {
        __Vtemp_h2859c052__0[0U] = 0U;
        __Vtemp_h2859c052__0[1U] = 0U;
        if ((4U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))) {
            __Vtemp_h2859c052__0[2U] = ((2U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
            __Vtemp_h2859c052__0[3U] = 0xffffffffU;
        } else {
            __Vtemp_h2859c052__0[2U] = 0U;
            __Vtemp_h2859c052__0[3U] = ((2U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                         ? ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xffffff00U
                                             : 0xffff0000U)
                                         : ((1U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))
                                             ? 0xff000000U
                                             : 0U));
        }
    }
    if ((0x10U & (IData)(__Vfunc_bin2thermo__95__valid_bytes))) {
        __Vfunc_bin2thermo__95__valid_bytes_mask[0U] = 0xffffffffU;
        __Vfunc_bin2thermo__95__valid_bytes_mask[1U] = 0xffffffffU;
        __Vfunc_bin2thermo__95__valid_bytes_mask[2U] = 0xffffffffU;
        __Vfunc_bin2thermo__95__valid_bytes_mask[3U] = 0xffffffffU;
    } else {
        __Vfunc_bin2thermo__95__valid_bytes_mask[0U] 
            = __Vtemp_h2859c052__0[0U];
        __Vfunc_bin2thermo__95__valid_bytes_mask[1U] 
            = __Vtemp_h2859c052__0[1U];
        __Vfunc_bin2thermo__95__valid_bytes_mask[2U] 
            = __Vtemp_h2859c052__0[2U];
        __Vfunc_bin2thermo__95__valid_bytes_mask[3U] 
            = __Vtemp_h2859c052__0[3U];
    }
    __Vfunc_bin2thermo__95__Vfuncout[0U] = __Vfunc_bin2thermo__95__valid_bytes_mask[0U];
    __Vfunc_bin2thermo__95__Vfuncout[1U] = __Vfunc_bin2thermo__95__valid_bytes_mask[1U];
    __Vfunc_bin2thermo__95__Vfuncout[2U] = __Vfunc_bin2thermo__95__valid_bytes_mask[2U];
    __Vfunc_bin2thermo__95__Vfuncout[3U] = __Vfunc_bin2thermo__95__valid_bytes_mask[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[0U] 
        = __Vfunc_bin2thermo__95__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[1U] 
        = __Vfunc_bin2thermo__95__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[2U] 
        = __Vfunc_bin2thermo__95__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[3U] 
        = __Vfunc_bin2thermo__95__Vfuncout[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__ 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
            & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                       >> 0x2eU))) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
           | (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
              >> 0x2eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__49__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__50__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__51__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__52__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__33__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__34__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__ 
        = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
             & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d 
        = ((0xf0U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d)) 
           | (0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter)
                       ? (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset)
                       : (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                           & (~ (IData)((0xfU == (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))))))
                           ? (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                               & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                  >> 4U)) ? 0xfU : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                           : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d 
        = ((0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d)) 
           | (0xf0U & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter)
                         ? ((IData)(0xfU) - (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__perm_offset))
                         : (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                             & (0U != (0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                               >> 4U))))
                             ? (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) 
                                 & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                    >> 4U)) ? 0U : (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                             : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                >> 4U))) << 4U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert_test) 
                 | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert_test) 
                    >> 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[6U] 
        = (IData)(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3)
                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3)
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))
                    : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U])))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[7U] 
        = (IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3)
                     ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word3)
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))
                     : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U])))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[4U] 
        = (IData)(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2)
                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2)
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))
                    : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U])))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[5U] 
        = (IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2)
                     ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word2)
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))
                     : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U])))) 
                   >> 0x20U));
    __Vfunc_mubi4_test_false_strict__86__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_idle;
    __Vfunc_mubi4_test_false_strict__86__Vfuncout = 
        (9U == (IData)(__Vfunc_mubi4_test_false_strict__86__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
        = ((0xfffffff3U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U]) 
           | (0xfffffffcU & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__order_error) 
                              << 3U) | ((IData)(__Vfunc_mubi4_test_false_strict__86__Vfuncout) 
                                        << 2U))));
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_d = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_d = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_d = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_d = 0U;
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_d 
            = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_q) 
               | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x26U] 
                         >> 0x12U)) | ((4U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x25U] 
                                              >> 0x12U)) 
                                       | ((2U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x24U] 
                                                 >> 0x12U)) 
                                          | (1U & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x23U] 
                                                   >> 0x12U))))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_d 
            = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_q) 
               | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x22U] 
                         >> 0xeU)) | ((4U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x21U] 
                                             >> 0xeU)) 
                                      | ((2U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x20U] 
                                                >> 0xeU)) 
                                         | (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1fU] 
                                                  >> 0xeU))))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_d 
            = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_q) 
               | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1eU] 
                         >> 0xaU)) | ((4U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1dU] 
                                             >> 0xaU)) 
                                      | ((2U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1cU] 
                                                >> 0xaU)) 
                                         | (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1bU] 
                                                  >> 0xaU))))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_d 
            = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_q) 
               | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x1aU] 
                         >> 6U)) | ((4U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x19U] 
                                           >> 6U)) 
                                    | ((2U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x18U] 
                                              >> 6U)) 
                                       | (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0x17U] 
                                                >> 6U))))));
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_d 
        = (((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok))
            ? 0U : ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_q) 
                    | ((8U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
                              >> 0x1aU)) | ((4U & (
                                                   vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
                                                   >> 0x1aU)) 
                                            | ((2U 
                                                & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
                                                   >> 0x1aU)) 
                                               | (1U 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
                                                     >> 0x1aU)))))));
    __Vfunc_mubi4_test_true_strict__84__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg;
    __Vfunc_mubi4_test_true_strict__84__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__84__val));
    __Vfunc_mubi4_test_true_strict__83__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad;
    __Vfunc_mubi4_test_true_strict__83__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__83__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__flag_error 
        = (((IData)(__Vfunc_mubi4_test_true_strict__83__Vfuncout) 
            & ((0x969U == (0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                     >> 3U))) | (0x969U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                     >> 0xfU))))) 
           | ((IData)(__Vfunc_mubi4_test_true_strict__84__Vfuncout) 
              & ((0x699U == (0xfffU & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                       >> 3U))) | (0x699U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                       >> 0xfU))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                        = ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                            ? 0x11eU : ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                         ? ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                             ? 0x11eU
                                             : ((4U 
                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                   ? 0x2aeU
                                                   : 0x11eU)
                                                  : 0x11eU)
                                                 : 0x11eU))
                                         : 0x11eU));
                } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                        vlSelf->__Vfunc_mubi4_test_true_strict__99__val 
                            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__complete_block;
                        vlSelf->__Vfunc_mubi4_test_true_strict__99__Vfuncout 
                            = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__99__val));
                        vlSelf->__Vfunc_mubi4_test_true_strict__98__val 
                            = ((0x969U == (0xfffU & 
                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                            >> 0xfU)))
                                ? 6U : 9U);
                        vlSelf->__Vfunc_mubi4_test_true_strict__98__Vfuncout 
                            = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__98__val));
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                            = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__98__Vfuncout)
                                ? ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__99__Vfuncout)
                                    ? 0xbcU : 0x282U)
                                : 0x36dU);
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                            = ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                ? ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x11eU : ((2U 
                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x282U
                                                  : 0x11eU)
                                                 : 0x11eU))
                                : 0x11eU);
                    } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((0xbU == (0xfU 
                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x390U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if ((0xbU == (0xfU 
                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x12cU;
                            }
                        } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                                } else if ((0xbU == 
                                            (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x53U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                            } else if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__start_ok) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x186U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0xbU == (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x132U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                = ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                    ? 0x11eU : ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                 ? 0x11eU : ((0x10U 
                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                              ? ((8U 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                   ? 0x11eU
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                     ? 0xd0U
                                                     : 0x11eU)
                                                    : 0x11eU))
                                                  : 0x11eU)
                                              : 0x11eU)));
        }
    } else if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                = ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                    ? 0x11eU : ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                 ? 0x11eU : ((0x10U 
                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                              ? 0x11eU
                                              : ((8U 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x11eU
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                                     ? 0x11eU
                                                     : 0x2f6U)
                                                    : 0x11eU)
                                                   : 0x11eU)))));
        } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    } else {
                        vlSelf->__Vfunc_mubi4_test_true_strict__100__val 
                            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg;
                        vlSelf->__Vfunc_mubi4_test_true_strict__100__Vfuncout 
                            = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__100__val));
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                            = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__100__Vfuncout)
                                ? 0x12cU : 0xe3U);
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                    = ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                ? 0x11eU : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))
                                             ? 0x11eU
                                             : 0x21bU))
                            : 0x11eU) : 0x11eU);
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        }
    } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                            vlSelf->__Vfunc_mubi4_test_true_strict__102__val 
                                = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__complete_block;
                            vlSelf->__Vfunc_mubi4_test_true_strict__102__Vfuncout 
                                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__102__val));
                            vlSelf->__Vfunc_mubi4_test_true_strict__101__val 
                                = ((0x699U == (0xfffU 
                                               & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                  >> 0xfU)))
                                    ? 6U : 9U);
                            vlSelf->__Vfunc_mubi4_test_true_strict__101__Vfuncout 
                                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__101__val));
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                                = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__101__Vfuncout)
                                    ? ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__102__Vfuncout)
                                        ? 0x2f8U : 0x21bU)
                                    : 0x4cU);
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0xbU == (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x3d7U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                        } else if ((0xbU == (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x37bU;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        }
    } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->__Vfunc_mubi4_test_true_strict__103__val 
                        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad;
                    vlSelf->__Vfunc_mubi4_test_true_strict__103__Vfuncout 
                        = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__103__val));
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d 
                        = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__103__Vfuncout)
                            ? 0x132U : 0x390U);
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
                } else if ((0xbU == (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0xe3U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__fsm_state_d = 0x11eU;
    }
    __Vfunc_mubi4_test_invalid__108__val = ((0x699U 
                                             == (0xfffU 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                    >> 0xfU)))
                                             ? 6U : 9U);
    __Vfunc_mubi4_test_invalid__108__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__108__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__108__val)))));
    __Vfunc_mubi4_test_invalid__107__val = ((0x969U 
                                             == (0xfffU 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
                                                    >> 0xfU)))
                                             ? 6U : 9U);
    __Vfunc_mubi4_test_invalid__107__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__107__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__107__val)))));
    __Vfunc_mubi4_test_invalid__106__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__complete_block;
    __Vfunc_mubi4_test_invalid__106__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__106__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__106__val)))));
    __Vfunc_mubi4_test_invalid__105__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg;
    __Vfunc_mubi4_test_invalid__105__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__105__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__105__val)))));
    __Vfunc_mubi4_test_invalid__104__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad;
    __Vfunc_mubi4_test_invalid__104__Vfuncout = (1U 
                                                 & (~ 
                                                    ((6U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__104__val)) 
                                                     | (9U 
                                                        == (IData)(__Vfunc_mubi4_test_invalid__104__val)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__mubi_error 
        = (((((IData)(__Vfunc_mubi4_test_invalid__104__Vfuncout) 
              | (IData)(__Vfunc_mubi4_test_invalid__105__Vfuncout)) 
             | (IData)(__Vfunc_mubi4_test_invalid__106__Vfuncout)) 
            | (IData)(__Vfunc_mubi4_test_invalid__107__Vfuncout)) 
           | (IData)(__Vfunc_mubi4_test_invalid__108__Vfuncout));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[0U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[0U] 
           & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[1U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[1U] 
           & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[2U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[2U] 
           & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[3U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[3U] 
           & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[0U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[0U] 
            ^ (IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))) 
           & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[1U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[1U] 
            ^ (IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                       >> 0x20U))) & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[2U] 
            ^ (IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))) 
           & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[3U] 
            ^ (IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                       >> 0x20U))) & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__valid_bytes_bit_mask[3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__24__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d;
    __Vfunc_mubi4_test_true_strict__88__val = ((0U 
                                                == 
                                                ((((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[0U] 
                                                    ^ 
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[0U]) 
                                                   | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[1U] 
                                                      ^ 
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[1U])) 
                                                  | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[2U] 
                                                     ^ 
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[2U])) 
                                                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_q[3U] 
                                                    ^ 
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[3U])))
                                                ? 6U
                                                : 9U);
    __Vfunc_mubi4_test_true_strict__88__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__88__val));
    __Vfunc_mubi4_test_true_strict__87__val = (((0xfU 
                                                 == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_in_new_d)) 
                                                & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_ready)))
                                                ? 6U
                                                : 9U);
    __Vfunc_mubi4_test_true_strict__87__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__87__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = ((0xfffff9ffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]) 
           | (((IData)(__Vfunc_mubi4_test_true_strict__87__Vfuncout)
                ? ((IData)(__Vfunc_mubi4_test_true_strict__88__Vfuncout)
                    ? 1U : 2U) : 0U) << 9U));
    __Vfunc_mubi4_test_false_strict__85__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_idle;
    __Vfunc_mubi4_test_false_strict__85__Vfuncout = 
        (9U == (IData)(__Vfunc_mubi4_test_false_strict__85__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
        = ((0xfffffffcU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U]) 
           | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__flag_error) 
               << 1U) | (IData)(__Vfunc_mubi4_test_false_strict__85__Vfuncout)));
    __Vfunc_swap_endianess_byte__89__vector_in[0U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[0U];
    __Vfunc_swap_endianess_byte__89__vector_in[1U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[1U];
    __Vfunc_swap_endianess_byte__89__vector_in[2U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[2U];
    __Vfunc_swap_endianess_byte__89__vector_in[3U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[3U];
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[3U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[3U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__89__vector_in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__89__vector_in[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__89__vector_in[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[2U] 
        = ((0xffffU & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[2U]) 
           | (0xffff0000U & ((__Vfunc_swap_endianess_byte__89__vector_in[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_swap_endianess_byte__89__vector_in[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[3U]) 
           | (0xffffU & (__Vfunc_swap_endianess_byte__89__vector_in[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[1U]) 
           | (__Vfunc_swap_endianess_byte__89__vector_in[2U] 
              << 0x18U));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[2U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_swap_endianess_byte__89__vector_in[1U] 
                                       >> 8U)) | (__Vfunc_swap_endianess_byte__89__vector_in[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[1U]) 
           | ((0xff0000U & (__Vfunc_swap_endianess_byte__89__vector_in[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_swap_endianess_byte__89__vector_in[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_swap_endianess_byte__89__vector_in[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[0U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[0U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__89__vector_in[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__89__vector_in[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__89__vector_in[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[0U]) 
           | (__Vfunc_swap_endianess_byte__89__vector_in[3U] 
              >> 0x18U));
    __Vfunc_swap_endianess_byte__89__Vfuncout[0U] = 
        vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[0U];
    __Vfunc_swap_endianess_byte__89__Vfuncout[1U] = 
        vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[1U];
    __Vfunc_swap_endianess_byte__89__Vfuncout[2U] = 
        vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[2U];
    __Vfunc_swap_endianess_byte__89__Vfuncout[3U] = 
        vlSelf->__Vfunc_swap_endianess_byte__89__vector_out[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[0U] 
        = __Vfunc_swap_endianess_byte__89__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[1U] 
        = __Vfunc_swap_endianess_byte__89__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[2U] 
        = __Vfunc_swap_endianess_byte__89__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_d[3U] 
        = __Vfunc_swap_endianess_byte__89__Vfuncout[3U];
    __Vfunc_mubi4_test_true_strict__97__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__complete_block;
    __Vfunc_mubi4_test_true_strict__97__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__97__val));
    if (__Vfunc_mubi4_test_true_strict__97__Vfuncout) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[0U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[0U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[1U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[1U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[2U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[2U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[3U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[3U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[0U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[0U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[1U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[1U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[2U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[2U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[3U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[3U];
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[0U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[0U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[0U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[1U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[1U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[1U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[2U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[2U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[2U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[3U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_valid_bytes[3U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[3U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[0U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[0U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[0U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[1U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[1U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[1U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[2U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[2U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[2U]);
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[3U] 
            = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out[3U] 
               | vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__padding_byte_bit_mask[3U]);
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[0U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[0U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[1U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[1U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[2U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[2U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[3U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_in_padded[3U];
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_padding))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[0U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[0U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[1U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[1U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[2U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[2U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[3U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_out_padded[3U];
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[0U] = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[1U] = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[2U] = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[3U] = 0x80000000U;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__));
    ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[0U] 
        = (IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[2U]))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[1U] 
        = (IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[2U]))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[2U] 
        = (IData)(((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1)
                    ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1)
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))
                    : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[0U])))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[3U] 
        = (IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1)
                     ? ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_key_word1)
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))
                     : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__data_to_duplex[0U])))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__0__KET__ 
        = ((((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__)) 
            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
           | (IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[0U] 
        = (IData)(((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0))
                    ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0))
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[0U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))
                    : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0))
                        ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                           ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[0U]))))
                        : ((1U == (3U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                         >> 5U))) ? 0x80400c0600000000ULL
                            : 0x80800c0800000000ULL))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[1U] 
        = (IData)((((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0))
                     ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0))
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[0U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))
                     : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0))
                         ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                            ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[0U]))))
                         : ((1U == (3U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
                                          >> 5U))) ? 0x80400c0600000000ULL
                             : 0x80800c0800000000ULL))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[2U] 
        = (IData)(((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1))
                    ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1))
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[2U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))
                    : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1))
                        ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                           ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[2U]))))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[3U] 
        = (IData)((((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1))
                     ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1))
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[2U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))
                     : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word1))
                         ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                            ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[2U]))))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]))))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[4U] 
        = (IData)(((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2))
                    ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2))
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[4U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U]))))
                    : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2))
                        ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U]))) 
                           ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[4U]))))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U]))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[5U] 
        = (IData)((((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2))
                     ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2))
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[4U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U]))))
                     : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2))
                         ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U]))) 
                            ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[4U]))))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U]))))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[6U] 
        = (IData)(((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3))
                    ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3))
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[6U])))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]))))
                    : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3))
                        ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                           ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[6U]))))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[2U]))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[7U] 
        = (IData)((((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3))
                     ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3))
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[6U])))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]))))
                     : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word3))
                         ? ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                            ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[6U]))))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[2U]))))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[8U] 
        = (IData)(((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4))
                    ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4))
                        ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[8U])))
                        : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__word4_dom_sep)
                    : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4))
                        ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__word4_dom_sep 
                           ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[8U]))))
                        : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[0U]))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_d[9U] 
        = (IData)((((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4))
                     ? ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4))
                         ? (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__state_from_round[8U])))
                         : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__word4_dom_sep)
                     : ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4))
                         ? (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__word4_dom_sep 
                            ^ (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[8U]))))
                         : (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[0U]))))) 
                   >> 0x20U));
    __Vtemp_h8a3fcbf3__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                        >> 0x2eU))))) 
                                            << 0x36U) 
                                           | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__)) 
                                               << 0x35U) 
                                              | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__)) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__)) 
                                                     << 0x33U) 
                                                    | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__)) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__)) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__)) 
                                                                       << 0x2dU) 
                                                                      | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
                                                                          << 0x2cU) 
                                                                         | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__)) 
                                                                             << 0x2bU) 
                                                                            | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
                                                                                << 0x2aU) 
                                                                               | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
                                                                                << 0x19U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__) 
                                                                                << 0x18U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                                                                                << 0x17U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__) 
                                                                                << 0x16U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                                                                                << 0x15U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__) 
                                                                                << 0x14U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                                                                                << 0x13U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__) 
                                                                                << 0x12U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                                                                                << 0x11U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__) 
                                                                                << 0x10U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                                                                                << 0xfU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__) 
                                                                                << 0xcU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                                                                                << 0xbU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__) 
                                                                                << 0xaU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                                                                                << 9U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__) 
                                                                                << 8U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                                                                                << 7U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                                                                                << 5U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__) 
                                                                                << 4U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                                                                                << 3U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h8a3fcbf3__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                         >> 0x2eU))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__52__KET__)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__51__KET__)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__50__KET__)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__49__KET__)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
                                                                                << 0x19U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__) 
                                                                                << 0x18U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                                                                                << 0x17U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__) 
                                                                                << 0x16U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                                                                                << 0x15U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__) 
                                                                                << 0x14U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                                                                                << 0x13U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__) 
                                                                                << 0x12U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                                                                                << 0x11U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__) 
                                                                                << 0x10U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                                                                                << 0xfU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__) 
                                                                                << 0xcU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                                                                                << 0xbU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__) 
                                                                                << 0xaU) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                                                                                << 9U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__) 
                                                                                << 8U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                                                                                << 7U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                                                                                << 5U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__) 
                                                                                << 4U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                                                                                << 3U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                                                                                << 2U) 
                                                                                | (((IData)(ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_habb9371e__0[2U] = ((0x40U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                   >> 7U)) 
                                          << 6U)) | 
                                ((0x20U & ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 6U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 5U)) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 4U)) 
                                              << 3U)) 
                                       | ((4U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 3U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 2U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 1U)))))))));
    __Vtemp_h0c55c32d__0[2U] = ((0x2000U & ((IData)(
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                     >> 0xeU)) 
                                            << 0xdU)) 
                                | ((0x1000U & ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0xdU)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 0xcU)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 0xbU)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0xaU)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 9U)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 8U)) 
                                                      << 7U)) 
                                                  | __Vtemp_habb9371e__0[2U])))))));
    __Vtemp_h0684ac93__0[2U] = ((0x100000U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 0x15U)) 
                                              << 0x14U)) 
                                | ((0x80000U & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x14U)) 
                                                << 0x13U)) 
                                   | ((0x40000U & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x13U)) 
                                                   << 0x12U)) 
                                      | ((0x20000U 
                                          & ((IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                      >> 0x12U)) 
                                             << 0x11U)) 
                                         | ((0x10000U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x11U)) 
                                                << 0x10U)) 
                                            | ((0x8000U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x10U)) 
                                                   << 0xfU)) 
                                               | ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 0xfU)) 
                                                      << 0xeU)) 
                                                  | __Vtemp_h0c55c32d__0[2U])))))));
    __Vtemp_he801fd73__0[2U] = ((0x8000000U & ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0x1cU)) 
                                               << 0x1bU)) 
                                | ((0x4000000U & ((IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 0x1bU)) 
                                                  << 0x1aU)) 
                                   | ((0x2000000U & 
                                       ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                 >> 0x1aU)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((IData)(
                                                     (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                      >> 0x19U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x18U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x17U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 0x16U)) 
                                                      << 0x15U)) 
                                                  | __Vtemp_h0684ac93__0[2U])))))));
    __Vtemp_h43292deb__0[3U] = ((0x40U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                   >> 0x27U)) 
                                          << 6U)) | 
                                ((0x20U & ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 0x26U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 0x25U)) 
                                              << 4U)) 
                                    | ((8U & ((IData)(
                                                      (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                       >> 0x24U)) 
                                              << 3U)) 
                                       | ((4U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 0x23U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0x22U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 0x21U)))))))));
    __Vtemp_h23f4b984__0[0U] = __Vtemp_h8a3fcbf3__0[0U];
    __Vtemp_h23f4b984__0[1U] = __Vtemp_h8a3fcbf3__0[1U];
    __Vtemp_h23f4b984__0[2U] = (((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                          >> 0x20U)) 
                                 << 0x1fU) | ((0x40000000U 
                                               & ((IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                           >> 0x1fU)) 
                                                  << 0x1eU)) 
                                              | ((0x20000000U 
                                                  & ((IData)(
                                                             (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                              >> 0x1eU)) 
                                                     << 0x1dU)) 
                                                 | ((0x10000000U 
                                                     & ((IData)(
                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                                 >> 0x1dU)) 
                                                        << 0x1cU)) 
                                                    | __Vtemp_he801fd73__0[2U]))));
    __Vtemp_h23f4b984__0[3U] = ((0x2000U & ((IData)(
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                     >> 0x2eU)) 
                                            << 0xdU)) 
                                | ((0x1000U & ((IData)(
                                                       (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                        >> 0x2dU)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((IData)(
                                                         (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                          >> 0x2cU)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                    >> 0x2bU)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((IData)(
                                                        (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                         >> 0x2aU)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((IData)(
                                                           (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                            >> 0x29U)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_check 
                                                               >> 0x28U)) 
                                                      << 7U)) 
                                                  | __Vtemp_h43292deb__0[3U])))))));
    VL_EXTEND_WW(127,110, __Vtemp_h6462a35b__0, __Vtemp_h23f4b984__0);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[0U] 
        = __Vtemp_h6462a35b__0[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[1U] 
        = __Vtemp_h6462a35b__0[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[2U] 
        = __Vtemp_h6462a35b__0[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree[3U] 
        = __Vtemp_h6462a35b__0[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_err 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__0__KET__) 
           | ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we) 
                  & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addrmiss)))) 
              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__alert = (
                                                   ((((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q) 
                                                        | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error)) 
                                                       | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__mubi_error)) 
                                                      | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__err_q) 
                                                          | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__intg_err)) 
                                                         | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_we_err))) 
                                                     | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_storage_err) 
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
                                                                                | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_storage_err))))))))))))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_ad_mubi4invalid) 
                                                       | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_msg_mubi4invalid)) 
                                                      | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__shadowed_update_err)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger 
        = (1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert) 
                 | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger 
        = (IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert) 
                    >> 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = ((0xffe07fffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]) 
           | (0xffff8000U & (0xa8000U | (((((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key) 
                                              | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce)) 
                                             | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__flag_error)) 
                                            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__order_error)) 
                                           << 0x14U) 
                                          | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__shadowed_update_err) 
                                             << 0x12U)) 
                                         | (0x10000U 
                                            & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__alert) 
                                               << 0xfU))))));
    __Vtableidx1 = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 6U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger) 
                                << 5U) | ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger) 
                                            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                            << 3U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vascon_sim__ConstPool__TABLE_ha722f71e_0[__Vtableidx1];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vascon_sim__ConstPool__TABLE_h241fa081_0[__Vtableidx1];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vascon_sim__ConstPool__TABLE_h01e04116_0[__Vtableidx1];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vascon_sim__ConstPool__TABLE_h19c48ed9_0[__Vtableidx1];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vascon_sim__ConstPool__TABLE_h194c3898_0[__Vtableidx1];
    __Vtableidx2 = ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 6U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger) 
                                << 5U) | ((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger) 
                                            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                            << 3U) 
                                           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vascon_sim__ConstPool__TABLE_ha722f71e_0[__Vtableidx2];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vascon_sim__ConstPool__TABLE_h241fa081_0[__Vtableidx2];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vascon_sim__ConstPool__TABLE_h01e04116_0[__Vtableidx2];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vascon_sim__ConstPool__TABLE_h19c48ed9_0[__Vtableidx2];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vascon_sim__ConstPool__TABLE_h194c3898_0[__Vtableidx2];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_en 
        = (1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__trigger_we) 
                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                    >> 0x1dU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_en 
        = (1U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__trigger_we) 
                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                    >> 0x1bU)));
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__trigger_we) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data 
            = (1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                     >> 0x18U));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_data 
            = (1U & (vlSelf->ascon_sim__DOT__tl_i[0U] 
                     >> 0x19U));
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data 
            = (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                     >> 0x1eU));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_trigger_wipe__DOT__wr_data 
            = (1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                     >> 0x1cU));
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0xffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit))
                ? (0xfffffffcU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next)
                : 0U);
    } else if ((IData)((0ULL != (0xff00ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next = 0U;
    } else if ((IData)((0ULL != (0xff0000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next = 0U;
    } else if ((IData)((0ULL != (0xff000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                              >> 0x18U))) ? 0U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x19U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                >> 0x1bU)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x1cU)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                  >> 0x1dU)))
                                                       ? 
                                                      ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
                                                        << 1U) 
                                                       | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
                                                          >> 0x1fU))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                                                   >> 0x1eU)))
                                                        ? 
                                                       ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
                                                         << 1U) 
                                                        | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
                                                           >> 0x1fU))
                                                        : 
                                                       ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
                                                         << 1U) 
                                                        | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
                                                           >> 0x1fU)))))))));
    } else if ((IData)((0ULL != (0xff00000000ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                           >> 0x20U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
                    << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
                              >> 0x1fU));
        } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x21U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
                    << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                              >> 0x1fU));
        } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x22U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
                    << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
                              >> 0x1fU));
        } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x23U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
                    << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
                              >> 0x1fU));
        } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x24U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
                    << 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
                              >> 0x1fU));
        } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x25U)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff80U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_q) 
                       << 6U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_q) 
                                  << 5U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_q) 
                                             << 3U) 
                                            | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_q)))));
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff007fU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_q) 
                       << 0xcU) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_q) 
                                    << 8U) | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_q) 
                                              << 7U))));
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
                = ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x26U))) ? ((0xfffffffcU 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                                                 | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_q)))
                    : ((0xfffffffeU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q)));
        }
    } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                              >> 0x28U)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xe0000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q) 
                   << 0x18U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q) 
                                 << 0xcU) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q))));
    } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                              >> 0x29U)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_wipe__q) 
                   << 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_start__q)));
    } else if ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                              >> 0x2aU)))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_ascon_error__DOT__q) 
                   << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_wait_edn__DOT__q) 
                              << 2U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_stall__DOT__q) 
                                         << 1U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_idle__DOT__q)))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffffcfU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q) 
                   << 5U) | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q) 
                             << 4U)));
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next 
            = ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                              >> 0x2bU))) ? ((0xfffffff0U 
                                              & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                                             | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_tag_comparison_valid__DOT__q) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_tag_valid__DOT__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_output_valid_msg_valid__DOT__q))))
                : ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                  >> 0x2cU))) ? ((vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
                                                  << 0x18U) 
                                                 | (vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0U] 
                                                    >> 8U))
                    : ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                      >> 0x2dU))) ? 
                       ((0xfffffffeU & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                        | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_fsm_state_regren__DOT__q))
                        : ((1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__addr_hit 
                                          >> 0x2eU)))
                            ? ((0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__reg_rdata_next) 
                               | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_flag_input_missmatch__DOT__q) 
                                   << 3U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_wrong_order__DOT__q) 
                                              << 2U) 
                                             | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_no_nonce__DOT__q) 
                                                 << 1U) 
                                                | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_error_no_key__DOT__q)))))
                            : 0xffffffffU))));
    }
}
