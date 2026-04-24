// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb___024root.h"

VL_INLINE_OPT void Vaes_tb___024root___settle__TOP__7(Vaes_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_tb___024root___settle__TOP__7\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hfdb9c645__0;
    VlWide<4>/*127:0*/ __Vtemp_he53c0c02__0;
    // Body
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[0U][0U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.out_o[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[0U][1U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.out_o[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[0U][2U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.out_o[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[0U][3U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.out_o[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[1U][0U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.out_o[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[1U][1U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.out_o[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[1U][2U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.out_o[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in[1U][3U] 
        = vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.out_o[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[0U][0U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][0U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [0U][0U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[0U][1U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][1U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [0U][1U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[0U][2U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][2U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [0U][2U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[0U][3U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][3U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [0U][3U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[1U][0U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [1U][0U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [1U][0U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[1U][1U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [1U][1U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [1U][1U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[1U][2U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [1U][2U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [1U][2U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add[1U][3U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [1U][3U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in
           [1U][3U]);
    if ((8U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
            [1U][0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
            [1U][1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
            [1U][2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
            [1U][3U];
    } else if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][3U];
    } else if ((0x3eU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
            [1U][0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
            [1U][1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
            [1U][2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
            [1U][3U];
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[1U][3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [1U][3U];
    }
    if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][0U];
        __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][1U];
        __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][2U];
        __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][3U];
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
            __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][0U];
            __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][1U];
            __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][2U];
            __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][3U];
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
            __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][0U];
            __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][1U];
            __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][2U];
            __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][3U];
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
            __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][0U];
            __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][1U];
            __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][2U];
            __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][3U];
        } else {
            __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [0U][0U];
            __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [0U][1U];
            __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [0U][2U];
            __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [0U][3U];
        }
    } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][0U];
        __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][1U];
        __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][2U];
        __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][3U];
    } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
            __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][0U];
            __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][1U];
            __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][2U];
            __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][3U];
        } else {
            __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][0U];
            __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][1U];
            __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][2U];
            __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][3U];
        }
    } else {
        __Vtemp_hfdb9c645__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][0U];
        __Vtemp_hfdb9c645__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][1U];
        __Vtemp_hfdb9c645__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][2U];
        __Vtemp_hfdb9c645__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
            [0U][3U];
    }
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                            __Vtemp_he53c0c02__0[0U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                                [0U][0U];
                            __Vtemp_he53c0c02__0[1U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                                [0U][1U];
                            __Vtemp_he53c0c02__0[2U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                                [0U][2U];
                            __Vtemp_he53c0c02__0[3U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                                [0U][3U];
                        } else {
                            __Vtemp_he53c0c02__0[0U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
                                [0U][0U];
                            __Vtemp_he53c0c02__0[1U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
                                [0U][1U];
                            __Vtemp_he53c0c02__0[2U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
                                [0U][2U];
                            __Vtemp_he53c0c02__0[3U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult
                                [0U][3U];
                        }
                    } else {
                        __Vtemp_he53c0c02__0[0U] = 
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                            [0U][0U];
                        __Vtemp_he53c0c02__0[1U] = 
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                            [0U][1U];
                        __Vtemp_he53c0c02__0[2U] = 
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                            [0U][2U];
                        __Vtemp_he53c0c02__0[3U] = 
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                            [0U][3U];
                    }
                } else {
                    __Vtemp_he53c0c02__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                        [0U][0U];
                    __Vtemp_he53c0c02__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                        [0U][1U];
                    __Vtemp_he53c0c02__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                        [0U][2U];
                    __Vtemp_he53c0c02__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                        [0U][3U];
                }
            } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                __Vtemp_he53c0c02__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][0U];
                __Vtemp_he53c0c02__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][1U];
                __Vtemp_he53c0c02__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][2U];
                __Vtemp_he53c0c02__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][3U];
            } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                __Vtemp_he53c0c02__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][0U];
                __Vtemp_he53c0c02__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][1U];
                __Vtemp_he53c0c02__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][2U];
                __Vtemp_he53c0c02__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][3U];
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel))) {
                __Vtemp_he53c0c02__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][0U];
                __Vtemp_he53c0c02__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][1U];
                __Vtemp_he53c0c02__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][2U];
                __Vtemp_he53c0c02__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                    [0U][3U];
            } else {
                __Vtemp_he53c0c02__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[0U];
                __Vtemp_he53c0c02__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[1U];
                __Vtemp_he53c0c02__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[2U];
                __Vtemp_he53c0c02__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[3U];
            }
        } else {
            __Vtemp_he53c0c02__0[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][0U];
            __Vtemp_he53c0c02__0[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][1U];
            __Vtemp_he53c0c02__0[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][2U];
            __Vtemp_he53c0c02__0[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add
                [0U][3U];
        }
    } else {
        __Vtemp_he53c0c02__0[0U] = __Vtemp_hfdb9c645__0[0U];
        __Vtemp_he53c0c02__0[1U] = __Vtemp_hfdb9c645__0[1U];
        __Vtemp_he53c0c02__0[2U] = __Vtemp_hfdb9c645__0[2U];
        __Vtemp_he53c0c02__0[3U] = __Vtemp_hfdb9c645__0[3U];
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[0U][0U] 
        = __Vtemp_he53c0c02__0[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[0U][1U] 
        = __Vtemp_he53c0c02__0[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[0U][2U] 
        = __Vtemp_he53c0c02__0[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d[0U][3U] 
        = __Vtemp_he53c0c02__0[3U];
}

extern const VlWide<8>/*255:0*/ Vaes_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<40>/*1279:0*/ Vaes_tb__ConstPool__CONST_hb51361e2_0;
void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc5_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ impl_i, CData/*0:0*/ op_i, CData/*5:0*/ mode_i, VlWide<4>/*127:0*/ iv_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, IData/*31:0*/ data_len_i, IData/*31:0*/ aad_len_i, const VlUnpacked<CData/*7:0*/, 60> &data_i, const VlUnpacked<CData/*7:0*/, 20> &aad_i, VlWide<4>/*127:0*/ tag_i, VlUnpacked<CData/*7:0*/, 60> &data_o, VlWide<4>/*127:0*/ &tag_o, IData/*31:0*/ &crypto_res);

VL_INLINE_OPT void Vaes_tb___024root___sequent__TOP__9(Vaes_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_tb___024root___sequent__TOP__9\n"); );
    // Init
    IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0;
    IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0;
    IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0;
    IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0;
    CData/*7:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    CData/*7:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__2__Vfuncout;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__2__tl;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__2__payload;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__21__Vfuncout;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__21__in;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__21__prd_lsbs;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__22__Vfuncout;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__22__in;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__22__prd_lsbs;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__23__Vfuncout;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__23__in;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__23__prd_lsbs;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__24__Vfuncout;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__24__in;
    IData/*31:0*/ __Vfunc_aes_prd_get_lsbs__24__prd_lsbs;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__271__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__271__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__271__out;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__272__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__272__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__272__transpose;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__279__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__279__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__279__transpose;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__280__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__280__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__280__out;
    VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__281__in;
    IData/*31:0*/ __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i;
    VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__282__in;
    IData/*31:0*/ __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__seed;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__seed;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed;
    VlWide<16>/*511:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand;
    VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14;
    CData/*7:0*/ __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15;
    IData/*31:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v16;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v2;
    VlWide<8>/*255:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0;
    VlWide<8>/*255:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v2;
    VlWide<8>/*255:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0;
    VlWide<8>/*255:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v2;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v2;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v1;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v3;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1;
    CData/*0:0*/ __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v2;
    CData/*4:0*/ __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt;
    CData/*4:0*/ __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v0;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v1;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v2;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v3;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v4;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v5;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v6;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v7;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v8;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v9;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v10;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v11;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v12;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v13;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v14;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v15;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v16;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v17;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v18;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v19;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v20;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v21;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v22;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v23;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v24;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v25;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v26;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v27;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v28;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v29;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v30;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v31;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v32;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v33;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v34;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v35;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v36;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v37;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v38;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v39;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v40;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v41;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v42;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v43;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v44;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v45;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v46;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v47;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v48;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v49;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v50;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v51;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v52;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v53;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v54;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v55;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v56;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v57;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v58;
    CData/*7:0*/ __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v59;
    VlWide<3>/*95:0*/ __Vtemp_h332c072b__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ab1c60f__0;
    VlWide<4>/*127:0*/ __Vtemp_h8ab1c60f__1;
    VlWide<16>/*511:0*/ __Vtemp_h7a9235f0__0;
    VlWide<4>/*127:0*/ __Vtemp_hec03be8b__0;
    VlWide<4>/*127:0*/ __Vtemp_hec03be8b__1;
    VlWide<4>/*127:0*/ __Vtemp_hec03be8b__2;
    VlWide<4>/*127:0*/ __Vtemp_hec03be8b__3;
    VlWide<4>/*127:0*/ __Vtemp_hec03be8b__4;
    VlWide<4>/*127:0*/ __Vtemp_hec03be8b__5;
    VlWide<16>/*511:0*/ __Vtemp_h68285968__0;
    VlWide<4>/*127:0*/ __Vtemp_h7eee8da7__0;
    VlWide<4>/*127:0*/ __Vtemp_h7eee8da7__1;
    VlWide<4>/*127:0*/ __Vtemp_h7eee8da7__2;
    VlWide<4>/*127:0*/ __Vtemp_h7eee8da7__3;
    VlWide<4>/*127:0*/ __Vtemp_h7eee8da7__4;
    VlWide<4>/*127:0*/ __Vtemp_h7eee8da7__5;
    VlWide<4>/*127:0*/ __Vtemp_h99c6040c__0;
    VlWide<4>/*127:0*/ __Vtemp_h99c6040c__1;
    VlWide<16>/*511:0*/ __Vtemp_h2d6c8130__0;
    VlWide<4>/*127:0*/ __Vtemp_hec88f2b7__0;
    VlWide<4>/*127:0*/ __Vtemp_hec88f2b7__1;
    VlWide<4>/*127:0*/ __Vtemp_hec88f2b7__2;
    VlWide<4>/*127:0*/ __Vtemp_hec88f2b7__3;
    VlWide<4>/*127:0*/ __Vtemp_hec88f2b7__4;
    VlWide<4>/*127:0*/ __Vtemp_hec88f2b7__5;
    VlWide<16>/*511:0*/ __Vtemp_h27b8eb12__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4375da8__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4375da8__1;
    VlWide<4>/*127:0*/ __Vtemp_hb4375da8__2;
    VlWide<4>/*127:0*/ __Vtemp_hb4375da8__3;
    VlWide<4>/*127:0*/ __Vtemp_hb4375da8__4;
    VlWide<4>/*127:0*/ __Vtemp_hb4375da8__5;
    VlWide<3>/*95:0*/ __Vtemp_hbcecca61__0;
    VlWide<4>/*127:0*/ __Vtemp_h84ce321a__0;
    VlWide<4>/*127:0*/ __Vtemp_hf6a42748__0;
    VlWide<4>/*127:0*/ __Vtemp_h80b53f61__0;
    VlWide<4>/*127:0*/ __Vtemp_h4df9d556__0;
    VlWide<8>/*255:0*/ __Vtemp_hb019a8ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h4aa51186__0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v2 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v16 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v2 = 0U;
    __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt;
    __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v2 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v2 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v1 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v3 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0 = 0U;
    __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v2 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_reg__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 8U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_reg__DOT__unnamedblk7__DOT__s = 2U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_reg__DOT__unnamedblk9__DOT__i = 8U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                << 1U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                << 1U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[0U] 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_d[0U];
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[1U] 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_d[1U];
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[2U] 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_d[2U];
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[3U] 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_d[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_d;
        vlSelf->aes_tb__DOT__data_cntr_q = vlSelf->aes_tb__DOT__data_cntr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__edn_req_hold_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__edn_req_hold_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__final_add_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__final_add_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
            = ((~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
            = ((~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
            = ((~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger));
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
            = ((~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
               & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
            = ((~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
               & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        if (vlSelf->aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o) {
            vlSelf->aes_tb__DOT__entropy_q = ((IData)(1U) 
                                              + vlSelf->aes_tb__DOT__entropy_q);
        }
        if ((3U == (7U & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_chk_raw) 
                          >> 6U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][3U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[4U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][4U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[5U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][5U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[6U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][6U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[7U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [0U][7U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0 = 1U;
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][3U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[4U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][4U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[5U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][5U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[6U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][6U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[7U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d
                [1U][7U];
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_d;
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_q = 0ULL;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = 2U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = 2U;
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q = 0U;
        vlSelf->aes_tb__DOT__data_cntr_q = 0x3cU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__edn_req_hold_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__final_add_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->aes_tb__DOT__entropy_q = 0x12345678U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v2 = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q = 0U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd)));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd)));
    if (vlSelf->rst_ni) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_d;
        if ((0x800000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0x18U));
        }
        if ((0x200000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0x16U));
        }
        if ((0x80000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_input_ready__DOT__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0x14U));
        }
        if ((0x20000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_output_valid__DOT__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0x12U));
        }
        if ((0x2000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_stall__DOT__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0xeU));
        }
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v0 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v1 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [1U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v2 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [2U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v3 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [3U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v4 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [4U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v5 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [5U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v6 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [6U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v7 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [7U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v8 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [8U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v9 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [9U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v10 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0xaU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v11 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0xbU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v12 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0xcU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v13 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0xdU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v14 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0xeU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v15 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0xfU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v16 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x10U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v17 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x11U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v18 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x12U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v19 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x13U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v20 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x14U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v21 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x15U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v22 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x16U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v23 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x17U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v24 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x18U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v25 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x19U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v26 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x1aU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v27 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x1bU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v28 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x1cU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v29 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x1dU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v30 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x1eU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v31 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x1fU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v32 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x20U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v33 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x21U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v34 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x22U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v35 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x23U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v36 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x24U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v37 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x25U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v38 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x26U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v39 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x27U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v40 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x28U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v41 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x29U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v42 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x2aU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v43 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x2bU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v44 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x2cU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v45 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x2dU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v46 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x2eU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v47 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x2fU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v48 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x30U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v49 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x31U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v50 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x32U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v51 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x33U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v52 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x34U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v53 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x35U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v54 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x36U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v55 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x37U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v56 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x38U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v57 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x39U];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v58 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x3aU];
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v59 
            = vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d
            [0x3bU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__aes_cipher_ctrl_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__aes_cipher_ctrl_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__aes_cipher_ctrl_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_d;
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_input_ready__DOT__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_output_valid__DOT__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_stall__DOT__q = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v0 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v1 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v2 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v3 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v4 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v5 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v6 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v7 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v8 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v9 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v10 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v11 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v12 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v13 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v14 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v15 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v16 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v17 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v18 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v19 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v20 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v21 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v22 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v23 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v24 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v25 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v26 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v27 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v28 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v29 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v30 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v31 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v32 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v33 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v34 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v35 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v36 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v37 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v38 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v39 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v40 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v41 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v42 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v43 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v44 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v45 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v46 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v47 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v48 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v49 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v50 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v51 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v52 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v53 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v54 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v55 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v56 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v57 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v58 = 0U;
        __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v59 = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw = 9U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw = 9U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw = 9U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q = 0U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd)));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd)));
    if (vlSelf->rst_ni) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq 
            = vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[2U] 
                          >> 0xbU)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[3U];
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[4U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[5U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_idx_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_idx_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__first_block_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__first_block_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__seed_req_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__seed_req_d;
        if ((3U == (7U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                    [0U]))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][0U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0 = 0U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 3U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][1U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1 = 0x20U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 6U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][2U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2 = 0x40U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 9U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3 = 0x60U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 0xcU)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][4U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4 = 0x80U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 0xfU)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][5U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5 = 0xa0U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 0x12U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][6U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6 = 0xc0U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [0U] >> 0x15U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [0U][7U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7 = 0xe0U;
        }
        if ((3U == (7U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                    [1U]))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][0U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8 = 0U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 3U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][1U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9 = 0x20U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 6U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][2U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10 = 0x40U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 9U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11 = 0x60U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 0xcU)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][4U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12 = 0x80U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 0xfU)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][5U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13 = 0xa0U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 0x12U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][6U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14 = 0xc0U;
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we
                          [1U] >> 0x15U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d
                [1U][7U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15 = 1U;
            __Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15 = 0xe0U;
        }
        if ((3U == (7U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_chk_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U];
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_gcm_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_gcm_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_gcm_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_flop_add_in_sel__q_o 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_d
            [1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_flop_add_in_sel__q_o 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_d
            [0U];
        if (((0U != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_expand_clear)) 
             | ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__use_rcon) 
                  & (3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en))) 
                 & (3U == ((0xfU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_out_req))
                            ? 3U : 4U))) & (3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_out_ack))))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rcon_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rcon_d;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_d;
        if ((1U & (((0U != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_err)) 
                    | ((~ ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)) 
                           | (4U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en)))) 
                       | (~ ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)) 
                             | (4U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack)))))) 
                   | ((~ ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)) 
                          | (4U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en)))) 
                      | (~ ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_out_ack)) 
                            | (4U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_out_ack)))))))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp_enc_err_q = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q 
            = (7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_data_out_clear_d));
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q 
            = (7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_prng_reseed_d));
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__lc_en 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_valid_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_valid_d;
        if ((0U != vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_err)) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp_enc_err_q = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_crypt_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_dec_key_gen_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq;
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_d) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_q = 1U;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_wd;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_wd;
        }
        if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [0U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [0U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [0U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [0U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0 = 1U;
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [1U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [1U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [1U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d
                [1U][3U];
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__aes_ghash_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q 
            = (7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_clear_d));
        if ((0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[0U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[1U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[2U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[3U] = 0U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_d[0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_d[1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_d[2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_d[3U];
        }
        if ((0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[0U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[1U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[2U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[3U] = 0U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_d[0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_d[1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_d[2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_d[3U];
        }
        if ((0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[0U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[1U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[2U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[3U] = 0U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xcU];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xdU];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xeU];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xfU];
        }
        if ((0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[0U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[1U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[2U] = 0U;
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[3U] = 0U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xcU];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xdU];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xeU];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xfU];
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__wr_data;
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__wr_en) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__wr_data;
        }
        if ((0x8000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0x10U));
        }
        if ((0x800U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U])) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q 
                = (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] 
                         >> 0xcU));
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_we) 
                   & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__wr_data));
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_we) 
                   & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__wr_data));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[1U] 
                          >> 0x10U)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U] 
                = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U]) 
                   | (0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U]));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[1U] 
                          >> 0x13U)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U] 
                = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U]) 
                   | (0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U]));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[1U] 
                          >> 0x16U)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U] 
                = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U]) 
                   | (0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U]));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[1U] 
                          >> 0x19U)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U] 
                = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U]) 
                   | (0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U]));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[1U] 
                          >> 0x1cU)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U] 
                = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U]) 
                   | (0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U]));
        }
        if ((3U == (7U & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[2U] 
                           << 1U) | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[1U] 
                                     >> 0x1fU))))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U] 
                = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U]) 
                   | (0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U]));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[2U] 
                          >> 2U)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U] 
                = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U]) 
                   | (0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U]));
        }
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[2U] 
                          >> 5U)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U] 
                = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U]) 
                   | (0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U]));
        }
        if ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req) 
              >> 1U) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__ack_o))) {
            __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt = 0U;
        } else if ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req) 
                     >> 1U) & (0x1fU > (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt)))) {
            __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt)));
        }
        if (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req) 
             & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__ack_o))) {
            __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt = 0U;
        } else if (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req) 
                    & (0x1fU > (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt)))) {
            __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt)));
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_rev_slice_q 
            = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_rev[3U] 
               >> 0x1cU);
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_d;
        if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_we))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [0U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [0U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [0U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [0U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0 = 1U;
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [1U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [1U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [1U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d
                [1U][3U];
        }
        if ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_storage_err))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_update_err)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__phase_q)));
        } else if ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_re) 
                     | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_storage_err)) 
                    | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_update_err))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__phase_q = 0U;
        }
        if ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_storage_err))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_update_err)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__phase_q)));
        } else if ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_re) 
                     | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_storage_err)) 
                    | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_update_err))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__phase_q = 0U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_we;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_we;
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_gcm_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_num_valid_bytes))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_update_num_valid_bytes)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] 
                            >> 8U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_num_valid_bytes)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_update_num_valid_bytes)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_gcm_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_gcm_phase))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_update_gcm_phase)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q)));
        } else if ((1U & ((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] 
                           | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_gcm_phase)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_update_gcm_phase)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_manual_operation))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_manual_operation)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[1U] 
                            >> 0x10U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_manual_operation)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_manual_operation)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_prng_reseed_rate))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_prng_reseed_rate)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[1U] 
                            >> 0xbU) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_prng_reseed_rate)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_prng_reseed_rate)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_sideload))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_sideload)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[1U] 
                            >> 8U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_sideload)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_sideload)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_key_len))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_key_len)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[1U] 
                            >> 3U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_key_len)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_key_len)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_mode))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_mode)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] 
                            >> 0x1bU) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_mode)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_mode)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q = 0U;
        }
        if ((((7U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we)) 
              & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_operation))) 
             & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_operation)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q)));
        } else if ((1U & (((vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] 
                            >> 0x17U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_operation)) 
                          | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_operation)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q = 0U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d;
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_regwen_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__wr_data;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d;
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_we)
                    ? (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__wr_data)
                    : 0U);
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_we)
                    ? (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__wr_data)
                    : 0U);
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__aes_ctr_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__aes_ctr_ns;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__aes_ctr_ns;
        if ((3U == (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw[2U] 
                          >> 8U)))) {
            if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_sel_ctrl))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in[0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in[1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in[2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in[3U];
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][3U];
            }
        }
        if (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__intg_err) 
             | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_we_err))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__err_q = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_in_sel_q_raw 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult1_in_sel_d;
        if ((3U == (7U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_chk_raw)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [0U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [0U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [0U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [0U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0 = 1U;
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [1U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [1U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [1U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d
                [1U][3U];
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__rst_done = 1U;
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_error) 
                   | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_error) 
                     | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next);
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->aes_tb__DOT__tl_h2d[3U] 
                         >> 4U));
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0xffU & ((vlSelf->aes_tb__DOT__tl_h2d[3U] 
                             << 4U) | (vlSelf->aes_tb__DOT__tl_h2d[2U] 
                                       >> 0x1cU)));
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
        } else if ((IData)(((vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                             >> 1U) & vlSelf->aes_tb__DOT__tl_h2d[0U]))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if ((0x800U & vlSelf->aes_tb__DOT__bus_req[0x25U])) {
            vlSelf->aes_tb__DOT__aes_mode_q = (0x3fU 
                                               & (vlSelf->aes_tb__DOT__bus_req[0x24U] 
                                                  >> 3U));
            vlSelf->aes_tb__DOT__gcm_phase_q = 0U;
        } else if ((0x88U == ((vlSelf->aes_tb__DOT__bus_req[0x27U] 
                               << 0x14U) | (vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                            >> 0xcU)))) {
            vlSelf->aes_tb__DOT__gcm_phase_q = (0x3fU 
                                                & (vlSelf->aes_tb__DOT__bus_req[0x25U] 
                                                   >> 0xcU));
        }
        if ((VL_LTES_III(32, 0x15dU, vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q) 
             | (IData)(vlSelf->aes_tb__DOT__error))) {
            vlSelf->aes_tb__DOT__test_done_q = 1U;
            vlSelf->aes_tb__DOT__test_passed_q = (1U 
                                                  & (~ (IData)(vlSelf->aes_tb__DOT__error)));
        }
        vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__pending_q 
            = vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__pending_d;
        if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_we))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [1U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [1U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [1U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
                [1U][3U];
        }
        if ((1U & (((~ (IData)(vlSelf->aes_tb__DOT__bus_wait)) 
                    & (~ (((~ (IData)(vlSelf->aes_tb__DOT__bus_wait)) 
                           & (0x84U == ((vlSelf->aes_tb__DOT__bus_req[0x27U] 
                                         << 0x14U) 
                                        | (vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                           >> 0xcU)))) 
                          & (~ (IData)((0U != (vlSelf->aes_tb__DOT__bus_rdata 
                                               & ((vlSelf->aes_tb__DOT__bus_req[0x25U] 
                                                   << 0x15U) 
                                                  | (vlSelf->aes_tb__DOT__bus_req[0x24U] 
                                                     >> 0xbU))))))))) 
                   | (vlSelf->aes_tb__DOT__bus_req[0x25U] 
                      >> 0xbU)))) {
            vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q 
                = ((IData)(1U) + vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q);
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_d;
        if ((3U == vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_we
             [0U])) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [0U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [0U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [0U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [0U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0 = 1U;
        }
        if ((3U == vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_we
             [1U])) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [1U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [1U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [1U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d
                [1U][3U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2 = 1U;
        }
        if ((3U == (7U & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_chk_raw) 
                          >> 3U)))) {
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][3U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[4U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][4U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[5U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][5U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[6U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][6U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[7U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [0U][7U];
            __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0 = 1U;
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][0U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][1U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][2U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][3U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[4U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][4U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[5U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][5U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[6U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][6U];
            __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[7U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d
                [1U][7U];
        }
        if (((IData)(((0x18U == (0x38U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_chk_raw))) 
                      & (~ ((IData)(((0x200U == (0x700U 
                                                 & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o))) 
                                     & (1U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_expand_op)))) 
                            & ((((0U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr)) 
                                 | (3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr))) 
                                | (6U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr))) 
                               | (9U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr))))))) 
             | (IData)(((0x400U == (0x700U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o))) 
                        & (0U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr)))))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__prd_q 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U];
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_we) 
                   & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__wr_data));
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_we)
                    ? (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__wr_data)
                    : 0U);
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_we) 
                   & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__wr_data));
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_we)
                    ? (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__wr_data)
                    : 0U);
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_we)
                    ? (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__wr_data)
                    : 0U);
        }
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_we) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q 
                = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_we)
                    ? (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__wr_data)
                    : 0U);
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[0U] = 0x74f1713aU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[1U] = 0xc32d580fU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[2U] = 0x4743b3c7U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[3U] = 0x23c5a4cfU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[4U] = 0xc132b57U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[5U] = 0x82a3U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_idx_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__first_block_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__seed_req_q = 0U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v16 = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_flop_add_in_sel__q_o = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_flop_add_in_sel__q_o = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rcon_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp_enc_err_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw = 9U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw = 9U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw = 9U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__lc_en = 0xaU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_valid_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp_enc_err_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw = 4U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw = 4U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_q = 0xfU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_q = 0x3eU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q = 6U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q = 6U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q = 2U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_q = 0U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v2 = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw = 0x61U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U] = 0U;
        __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt = 0U;
        __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_rev_slice_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q = 0U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v2 = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_q = 0x10U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw = 0xeU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw = 0xeU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw = 0xeU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__err_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_in_sel_q_raw = 0U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v2 = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__rst_done = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelf->aes_tb__DOT__aes_mode_q = 0U;
        vlSelf->aes_tb__DOT__gcm_phase_q = 0U;
        vlSelf->aes_tb__DOT__test_done_q = 0U;
        vlSelf->aes_tb__DOT__test_passed_q = 1U;
        vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__pending_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q = 0xc32d580f74f1713aULL;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v1 = 1U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v3 = 1U;
        __Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v2 = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__prd_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q = 1U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q = 0x3fU;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q = 1U;
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][4U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][5U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][6U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][7U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v0[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][4U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][5U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][6U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][7U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v1[7U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q__v2) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][0U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][1U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][2U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][3U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][4U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][5U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][6U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[0U][7U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][0U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][1U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][2U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][3U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][4U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][5U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][6U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q[1U][7U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v0;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[1U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v1;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[2U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v2;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[3U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v3;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[4U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v4;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[5U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v5;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[6U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v6;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[7U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v7;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[8U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v8;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[9U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v9;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0xaU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v10;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0xbU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v11;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0xcU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v12;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0xdU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v13;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0xeU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v14;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0xfU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v15;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x10U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v16;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x11U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v17;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x12U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v18;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x13U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v19;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x14U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v20;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x15U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v21;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x16U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v22;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x17U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v23;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x18U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v24;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x19U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v25;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x1aU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v26;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x1bU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v27;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x1cU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v28;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x1dU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v29;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x1eU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v30;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x1fU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v31;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x20U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v32;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x21U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v33;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x22U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v34;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x23U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v35;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x24U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v36;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x25U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v37;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x26U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v38;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x27U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v39;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x28U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v40;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x29U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v41;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x2aU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v42;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x2bU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v43;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x2cU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v44;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x2dU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v45;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x2eU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v46;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x2fU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v47;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x30U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v48;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x31U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v49;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x32U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v50;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x33U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v51;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x34U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v52;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x35U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v53;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x36U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v54;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x37U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v55;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x38U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v56;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x39U] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v57;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x3aU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v58;
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q[0x3bU] 
        = __Vdlyvval__aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q__v59;
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v0);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v1);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v2);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v3);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v4);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v5);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v6);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [0U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v7);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v8);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v9);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v10);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v11);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v12);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v13);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v14);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15), 
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
                        [1U], __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v15);
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q__v16) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][0U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][1U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][2U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][3U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][4U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][5U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][6U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[0U][7U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][0U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][1U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][2U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][3U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][4U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][5U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][6U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q[1U][7U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v1[3U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q__v2) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[0U][3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q[1U][3U] = 0U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt 
        = __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt 
        = __Vdly__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt;
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v1[3U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q__v2) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[0U][3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q[1U][3U] = 0U;
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v1[3U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q__v2) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[0U][3U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q[1U][3U] = 0U;
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v0[3U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v1) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[0U][3U] = 0U;
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v2[3U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q__v3) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][0U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][1U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][2U] = 0U;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q[1U][3U] = 0U;
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][4U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][5U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][6U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][7U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v0[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][0U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][1U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][2U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][3U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][4U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][5U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][6U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][7U] 
            = __Vdlyvval__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v1[7U];
    }
    if (__Vdlyvset__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q__v2) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][0U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][1U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][2U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][3U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][4U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][5U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][6U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[0U][7U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][0U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][1U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][2U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][3U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][4U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][5U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][6U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q[1U][7U] 
            = Vaes_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->aes_tb__DOT____Vcellout__u_aes__alert_tx_o 
        = (((8U & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                   << 3U)) | (4U & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                    << 1U))) | ((2U 
                                                 & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                      >> 1U))));
    vlSelf->aes_tb__DOT__data_mask = (VL_LTES_III(32, 4U, vlSelf->aes_tb__DOT__data_cntr_q)
                                       ? 0xffffffffU
                                       : ((3U == vlSelf->aes_tb__DOT__data_cntr_q)
                                           ? 0xffffffU
                                           : ((2U == vlSelf->aes_tb__DOT__data_cntr_q)
                                               ? 0xffffU
                                               : ((1U 
                                                   == vlSelf->aes_tb__DOT__data_cntr_q)
                                                   ? 0xffU
                                                   : 0U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq)));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq)));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o = 0U;
    if (vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 0U;
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 0U;
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 0U;
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq)));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq)));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[1U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[1U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      << 0x11U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[2U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[2U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      >> 0xfU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[2U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[2U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      << 0x11U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[3U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[3U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      >> 0xfU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[3U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[3U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      << 0x11U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[4U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[4U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      >> 0xfU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[4U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[4U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      << 0x11U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[5U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[5U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hf306e295__0 
                                                      >> 0xfU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q[5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i = 0U;
    while ((0xa0U > vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vfunc_bivium_generate_key_stream__67__state[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[0U];
        vlSelf->__Vfunc_bivium_generate_key_stream__67__state[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[1U];
        vlSelf->__Vfunc_bivium_generate_key_stream__67__state[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[2U];
        vlSelf->__Vfunc_bivium_generate_key_stream__67__state[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[3U];
        vlSelf->__Vfunc_bivium_generate_key_stream__67__state[4U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[4U];
        vlSelf->__Vfunc_bivium_generate_key_stream__67__state[5U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[5U];
        vlSelf->__Vfunc_bivium_generate_key_stream__67__add_65_92 
            = (1U & VL_REDXOR_32((0x10000002U & vlSelf->__Vfunc_bivium_generate_key_stream__67__state[2U])));
        vlSelf->__Vfunc_bivium_generate_key_stream__67__add_161_176 
            = (1U & VL_REDXOR_32((0x10002U & vlSelf->__Vfunc_bivium_generate_key_stream__67__state[5U])));
        vlSelf->__Vfunc_bivium_generate_key_stream__67__key 
            = ((IData)(vlSelf->__Vfunc_bivium_generate_key_stream__67__add_161_176) 
               ^ (IData)(vlSelf->__Vfunc_bivium_generate_key_stream__67__add_65_92));
        vlSelf->__Vfunc_bivium_generate_key_stream__67__Vfuncout 
            = vlSelf->__Vfunc_bivium_generate_key_stream__67__key;
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT____Vlvbound_hdb0c1d9a__0 
            = vlSelf->__Vfunc_bivium_generate_key_stream__67__Vfuncout;
        if (VL_LIKELY((0x9fU >= (0xffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[(7U 
                                                                                & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[
                    (7U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT____Vlvbound_hdb0c1d9a__0) 
                                        << (0x1fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__Vfunc_bivium_update_state__68__in[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[0U];
        vlSelf->__Vfunc_bivium_update_state__68__in[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[1U];
        vlSelf->__Vfunc_bivium_update_state__68__in[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[2U];
        vlSelf->__Vfunc_bivium_update_state__68__in[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[3U];
        vlSelf->__Vfunc_bivium_update_state__68__in[4U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[4U];
        vlSelf->__Vfunc_bivium_update_state__68__in[5U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[5U];
        vlSelf->__Vfunc_bivium_update_state__68__mul_90_91 
            = (IData)((0xc000000U == (0xc000000U & 
                                      vlSelf->__Vfunc_bivium_update_state__68__in[2U])));
        vlSelf->__Vfunc_bivium_update_state__68__add_65_92 
            = (1U & VL_REDXOR_32((0x10000002U & vlSelf->__Vfunc_bivium_update_state__68__in[2U])));
        vlSelf->__Vfunc_bivium_update_state__68__mul_174_175 
            = (IData)((0xc000U == (0xc000U & vlSelf->__Vfunc_bivium_update_state__68__in[5U])));
        vlSelf->__Vfunc_bivium_update_state__68__add_161_176 
            = (1U & VL_REDXOR_32((0x10002U & vlSelf->__Vfunc_bivium_update_state__68__in[5U])));
        vlSelf->__Vfunc_bivium_update_state__68__out[0U] 
            = ((0xfffffffeU & vlSelf->__Vfunc_bivium_update_state__68__out[0U]) 
               | (1U & ((vlSelf->__Vfunc_bivium_update_state__68__in[2U] 
                         >> 4U) ^ ((IData)(vlSelf->__Vfunc_bivium_update_state__68__mul_174_175) 
                                   ^ (IData)(vlSelf->__Vfunc_bivium_update_state__68__add_161_176)))));
        vlSelf->__Vfunc_bivium_update_state__68__out[2U] 
            = ((0xdfffffffU & vlSelf->__Vfunc_bivium_update_state__68__out[2U]) 
               | (0x20000000U & (((0xe0000000U & (vlSelf->__Vfunc_bivium_update_state__68__in[5U] 
                                                  << 0x13U)) 
                                  ^ ((IData)(vlSelf->__Vfunc_bivium_update_state__68__add_65_92) 
                                     << 0x1dU)) ^ ((IData)(vlSelf->__Vfunc_bivium_update_state__68__mul_90_91) 
                                                   << 0x1dU))));
        vlSelf->__Vfunc_bivium_update_state__68__out[0U] 
            = ((1U & vlSelf->__Vfunc_bivium_update_state__68__out[0U]) 
               | (vlSelf->__Vfunc_bivium_update_state__68__in[0U] 
                  << 1U));
        vlSelf->__Vfunc_bivium_update_state__68__out[1U] 
            = ((vlSelf->__Vfunc_bivium_update_state__68__in[0U] 
                >> 0x1fU) | (vlSelf->__Vfunc_bivium_update_state__68__in[1U] 
                             << 1U));
        vlSelf->__Vfunc_bivium_update_state__68__out[2U] 
            = ((0xe0000000U & vlSelf->__Vfunc_bivium_update_state__68__out[2U]) 
               | ((vlSelf->__Vfunc_bivium_update_state__68__in[1U] 
                   >> 0x1fU) | (0x1ffffffeU & (vlSelf->__Vfunc_bivium_update_state__68__in[2U] 
                                               << 1U))));
        vlSelf->__Vfunc_bivium_update_state__68__out[2U] 
            = ((0x3fffffffU & vlSelf->__Vfunc_bivium_update_state__68__out[2U]) 
               | (0xc0000000U & (vlSelf->__Vfunc_bivium_update_state__68__in[2U] 
                                 << 1U)));
        vlSelf->__Vfunc_bivium_update_state__68__out[3U] 
            = (((0x3ffffffeU & (vlSelf->__Vfunc_bivium_update_state__68__in[3U] 
                                << 1U)) | (vlSelf->__Vfunc_bivium_update_state__68__in[2U] 
                                           >> 0x1fU)) 
               | (0xc0000000U & (vlSelf->__Vfunc_bivium_update_state__68__in[3U] 
                                 << 1U)));
        vlSelf->__Vfunc_bivium_update_state__68__out[4U] 
            = (((0x3ffffffeU & (vlSelf->__Vfunc_bivium_update_state__68__in[4U] 
                                << 1U)) | (vlSelf->__Vfunc_bivium_update_state__68__in[3U] 
                                           >> 0x1fU)) 
               | (0xc0000000U & (vlSelf->__Vfunc_bivium_update_state__68__in[4U] 
                                 << 1U)));
        vlSelf->__Vfunc_bivium_update_state__68__out[5U] 
            = (0x1ffffU & ((0x3ffffffeU & (vlSelf->__Vfunc_bivium_update_state__68__in[5U] 
                                           << 1U)) 
                           | (vlSelf->__Vfunc_bivium_update_state__68__in[4U] 
                              >> 0x1fU)));
        vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[0U] 
            = vlSelf->__Vfunc_bivium_update_state__68__out[0U];
        vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[1U] 
            = vlSelf->__Vfunc_bivium_update_state__68__out[1U];
        vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[2U] 
            = vlSelf->__Vfunc_bivium_update_state__68__out[2U];
        vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[3U] 
            = vlSelf->__Vfunc_bivium_update_state__68__out[3U];
        vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[4U] 
            = vlSelf->__Vfunc_bivium_update_state__68__out[4U];
        vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[5U] 
            = vlSelf->__Vfunc_bivium_update_state__68__out[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[0U] 
            = vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[1U] 
            = vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[2U] 
            = vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[3U] 
            = vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[4U] 
            = vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update[5U] 
            = vlSelf->__Vfunc_bivium_update_state__68__Vfuncout[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[0U][7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher[1U][7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][7U];
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x15U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x15U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x16U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x16U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xdU] = 
        ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xdU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
            << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xeU] = 
        ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xeU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
            >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x16U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x16U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x17U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x17U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xeU] = 
        ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xeU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
            << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xfU] = 
        ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xfU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
            >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x17U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x17U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x18U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x18U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xfU] = 
        ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xfU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
            << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x10U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x10U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x18U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x18U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x19U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x19U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x10U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x10U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x11U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x11U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x19U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x19U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1aU] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1aU]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x11U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x11U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x12U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x12U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1aU] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1aU]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1bU] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1bU]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x12U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x12U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x13U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x13U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1bU] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1bU]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1cU] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1cU]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x13U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x13U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x14U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x14U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [0U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1cU] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1cU]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x1dU] 
        = (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hdc5681ed__0 
           >> 0xbU);
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q
        [1U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x14U] 
        = ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x14U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x15U] 
        = ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0x15U]) 
           | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_hc3a21399__0 
              >> 0xbU));
    __Vfunc_aes_prd_get_lsbs__21__in = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[0U];
    __Vfunc_aes_prd_get_lsbs__21__prd_lsbs = __Vfunc_aes_prd_get_lsbs__21__in;
    __Vfunc_aes_prd_get_lsbs__21__Vfuncout = __Vfunc_aes_prd_get_lsbs__21__prd_lsbs;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[0U] 
        = __Vfunc_aes_prd_get_lsbs__21__Vfuncout;
    __Vfunc_aes_prd_get_lsbs__22__in = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[1U];
    __Vfunc_aes_prd_get_lsbs__22__prd_lsbs = __Vfunc_aes_prd_get_lsbs__22__in;
    __Vfunc_aes_prd_get_lsbs__22__Vfuncout = __Vfunc_aes_prd_get_lsbs__22__prd_lsbs;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[1U] 
        = __Vfunc_aes_prd_get_lsbs__22__Vfuncout;
    __Vfunc_aes_prd_get_lsbs__23__in = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[2U];
    __Vfunc_aes_prd_get_lsbs__23__prd_lsbs = __Vfunc_aes_prd_get_lsbs__23__in;
    __Vfunc_aes_prd_get_lsbs__23__Vfuncout = __Vfunc_aes_prd_get_lsbs__23__prd_lsbs;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[2U] 
        = __Vfunc_aes_prd_get_lsbs__23__Vfuncout;
    __Vfunc_aes_prd_get_lsbs__24__in = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q[3U];
    __Vfunc_aes_prd_get_lsbs__24__prd_lsbs = __Vfunc_aes_prd_get_lsbs__24__in;
    __Vfunc_aes_prd_get_lsbs__24__Vfuncout = __Vfunc_aes_prd_get_lsbs__24__prd_lsbs;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[3U] 
        = __Vfunc_aes_prd_get_lsbs__24__Vfuncout;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_sel_q_raw[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_flop_add_in_sel__q_o;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_sel_q_raw[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_flop_add_in_sel__q_o;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 0U;
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req 
                                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 0U;
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req 
                                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 0U;
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req = 0U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req 
                                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq = 0xaU;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__0__KET____DOT__lc_en_out 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__lc_en;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp2v_sig_err 
        = ((0xefU & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp2v_sig_err)) 
           | (0x10U & ((~ ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw)) 
                           | (4U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw)))) 
                       << 4U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp2v_sig_err 
        = ((0xdfU & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp2v_sig_err)) 
           | (0x20U & ((~ ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw)) 
                           | (4U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw)))) 
                       << 5U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q));
    vlSelf->aes_tb__DOT__u_aes__DOT__edn_ack = 0U;
    if (vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            vlSelf->aes_tb__DOT__u_aes__DOT__edn_ack 
                = (1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack)));
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__edn_ack = vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req = 0U;
    if ((0x40U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req = 3U;
                            }
                        }
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 0U;
                        if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                        }
                    } else {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 0U;
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 0U;
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 0U;
                if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                }
            }
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_in_ready = 4U;
            if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_in_ready = 3U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 0U;
            if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                        }
                    } else {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            }
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_in_ready = 4U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req = 3U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                            if (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__first_block_q) {
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req = 2U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 0U;
        if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                        }
                    } else {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                }
            } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                    } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            } else if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            }
        } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            }
        } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_in_ready = 4U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_out_valid = 4U;
    if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_out_valid = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] = (
                                                   (0xffe1ffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U]) 
                                                   | (0xfffe0000U 
                                                      & (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q) 
                                                          << 0x14U) 
                                                         | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q) 
                                                             << 0x13U) 
                                                            | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                                                                << 0x12U) 
                                                               | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q) 
                                                                  << 0x11U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] = (
                                                   (0xfffe7fffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U]) 
                                                   | (0xffff8000U 
                                                      & (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
                                                          << 0x10U) 
                                                         | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q) 
                                                            << 0xfU))));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U] = (
                                                   (0xff9fffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[0U]) 
                                                   | (0xffe00000U 
                                                      & (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_q) 
                                                          << 0x16U) 
                                                         | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_q) 
                                                            << 0x15U))));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[9U] = (
                                                   (0x1fffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[9U]) 
                                                   | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
                                                      << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xaU] = 
        ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xaU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xaU] = 
        ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xaU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xbU] = 
        ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xbU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xbU] = 
        ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xbU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xcU] = 
        ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xcU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            >> 0xbU));
    aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xcU] = 
        ((0x1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xcU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xdU] = 
        ((0xffe00000U & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0xdU]) 
         | (aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vlvbound_h6cde1314__0 
            >> 0xbU));
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q[3U];
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[0U] 
        = ((0xff000000U & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[0U]) 
           | ((0xff0000U & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[3U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[3U] 
                                                   >> 8U)) 
                                       | (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[3U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[0U]) 
           | (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[3U] 
              << 0x18U));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[1U] 
        = ((0xffff0000U & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[1U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[2U] 
                                       >> 8U)) | (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[2U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[1U] 
        = ((0xffffU & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[1U]) 
           | (0xffff0000U & ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[2U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[2U] 
                                              << 8U)))));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[2U]) 
           | (0xffffU & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[1U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[2U] 
        = ((0xffU & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[2U]) 
           | (0xffffff00U & ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[1U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[1U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[1U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[3U] 
        = ((0xff000000U & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[3U]) 
           | ((0xff0000U & (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[0U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[0U] 
                                                   >> 8U)) 
                                       | (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[0U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[3U]) 
           | (__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__in[0U] 
              << 0x18U));
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[0U] 
        = vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[1U] 
        = vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[2U] 
        = vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[3U] 
        = vlSelf->__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_i_rev[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_i_rev[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_i_rev[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_i_rev[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__Vfuncout[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__ack_o 
        = (0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack_pre 
        = ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack_pre)) 
           | ((0x1eU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt)) 
              << 1U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack 
        = ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack)) 
           | ((0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt)) 
              << 1U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__ack_o 
        = (0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack_pre 
        = ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack_pre)) 
           | (0x1eU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack 
        = ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack)) 
           | (0x1fU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt)));
    __Vfunc_aes_ghash_reverse_bit_order__281__in[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [0U][0U];
    __Vfunc_aes_ghash_reverse_bit_order__281__in[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [0U][1U];
    __Vfunc_aes_ghash_reverse_bit_order__281__in[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [0U][2U];
    __Vfunc_aes_ghash_reverse_bit_order__281__in[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [0U][3U];
    __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i)) {
        vlSelf->__Vfunc_aes_ghash_reverse_bit_order__281__out[(3U 
                                                               & (__Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i))) 
                & vlSelf->__Vfunc_aes_ghash_reverse_bit_order__281__out[
                (3U & (__Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i 
                       >> 5U))]) | ((1U & (__Vfunc_aes_ghash_reverse_bit_order__281__in[
                                           (3U & (((IData)(0x7fU) 
                                                   - __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(0x7fU) 
                                                  - __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i)))) 
                                    << (0x1fU & __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i)));
        __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vfunc_aes_ghash_reverse_bit_order__281__unnamedblk5__DOT__i);
    }
    __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[0U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__281__out[0U];
    __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[1U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__281__out[1U];
    __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[2U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__281__out[2U];
    __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[3U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__281__out[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[0U] 
        = __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[1U] 
        = __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[2U] 
        = __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[3U] 
        = __Vfunc_aes_ghash_reverse_bit_order__281__Vfuncout[3U];
    __Vfunc_aes_ghash_reverse_bit_order__282__in[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [1U][0U];
    __Vfunc_aes_ghash_reverse_bit_order__282__in[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [1U][1U];
    __Vfunc_aes_ghash_reverse_bit_order__282__in[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [1U][2U];
    __Vfunc_aes_ghash_reverse_bit_order__282__in[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q
        [1U][3U];
    __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i)) {
        vlSelf->__Vfunc_aes_ghash_reverse_bit_order__282__out[(3U 
                                                               & (__Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i))) 
                & vlSelf->__Vfunc_aes_ghash_reverse_bit_order__282__out[
                (3U & (__Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i 
                       >> 5U))]) | ((1U & (__Vfunc_aes_ghash_reverse_bit_order__282__in[
                                           (3U & (((IData)(0x7fU) 
                                                   - __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(0x7fU) 
                                                  - __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i)))) 
                                    << (0x1fU & __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i)));
        __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vfunc_aes_ghash_reverse_bit_order__282__unnamedblk5__DOT__i);
    }
    __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[0U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__282__out[0U];
    __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[1U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__282__out[1U];
    __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[2U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__282__out[2U];
    __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[3U] 
        = vlSelf->__Vfunc_aes_ghash_reverse_bit_order__282__out[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[0U] 
        = __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[1U] 
        = __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[2U] 
        = __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[3U] 
        = __Vfunc_aes_ghash_reverse_bit_order__282__Vfuncout[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_storage_err 
        = (((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_storage_err 
        = (((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[8U] = (
                                                   (0x3ffffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[8U]) 
                                                   | ((IData)(
                                                              (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q)) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe)))) 
                                                      << 0x1aU));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[9U] = (
                                                   (0xf8000000U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[9U]) 
                                                   | (((IData)(
                                                               (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe)))) 
                                                       >> 6U) 
                                                      | ((IData)(
                                                                 ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q)) 
                                                                    << 1U) 
                                                                   | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe))) 
                                                                  >> 0x20U)) 
                                                         << 0x1aU)));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[5U] = (
                                                   (0x7fffffU 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[5U]) 
                                                   | ((IData)(
                                                              (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe)))) 
                                                      << 0x17U));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[6U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                                              << 1U) 
                                                             | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe)))) 
                                                    >> 9U) 
                                                   | (((IData)(
                                                               (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)))) 
                                                       << 0x18U) 
                                                      | ((IData)(
                                                                 ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                                                    << 1U) 
                                                                   | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe))) 
                                                                  >> 0x20U)) 
                                                         << 0x17U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[7U] = (
                                                   ((0x7fffffU 
                                                     & ((IData)(
                                                                (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q)) 
                                                                  << 1U) 
                                                                 | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)))) 
                                                        >> 8U)) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q)) 
                                                                  << 1U) 
                                                                 | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe))) 
                                                                >> 0x20U)) 
                                                       >> 9U)) 
                                                   | (((IData)(
                                                               (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                                                 << 1U) 
                                                                | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe)))) 
                                                       << 0x19U) 
                                                      | ((0x800000U 
                                                          & ((IData)(
                                                                     (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q)) 
                                                                       << 1U) 
                                                                      | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe)))) 
                                                             >> 8U)) 
                                                         | ((IData)(
                                                                    ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q)) 
                                                                       << 1U) 
                                                                      | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe))) 
                                                                     >> 0x20U)) 
                                                            << 0x18U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[8U] = (
                                                   (0xfc000000U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__reg2hw[8U]) 
                                                   | ((0x7fffffU 
                                                       & (((IData)(
                                                                   (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                                                     << 1U) 
                                                                    | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe)))) 
                                                           >> 7U) 
                                                          | ((IData)(
                                                                     ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q)) 
                                                                        << 1U) 
                                                                       | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe))) 
                                                                      >> 0x20U)) 
                                                             >> 8U))) 
                                                      | ((0x1800000U 
                                                          & ((IData)(
                                                                     (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                                                       << 1U) 
                                                                      | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe)))) 
                                                             >> 7U)) 
                                                         | ((IData)(
                                                                    ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q)) 
                                                                       << 1U) 
                                                                      | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe))) 
                                                                     >> 0x20U)) 
                                                            << 0x19U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_gcm_phase 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q) 
           | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_phase 
        = ((((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q) 
               | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q)) 
              | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q)) 
             | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q)) 
            | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q)) 
           | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_num_valid_bytes 
        = (((0x1fU & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_gcm_phase 
        = (((0x3fU & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o 
        = (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_q) 
            << 6U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_q));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__ready = 0U;
    if ((0xeU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__ready = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__ctr_we = 0U;
    if ((0xeU != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x18U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__ctr_we = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__alert = 0U;
        if ((0x18U != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__alert = 0U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ready = 0U;
    if ((0xeU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ready = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ctr_we = 0U;
    if ((0xeU != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x18U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ctr_we = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert = 0U;
        if ((0x18U != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert = 0U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ready = 0U;
    if ((0xeU == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ready = 1U;
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ctr_we = 0U;
    if ((0xeU != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x18U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ctr_we = 1U;
        }
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert = 0U;
        if ((0x18U != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert = 0U;
    }
    __Vfunc_aes_transpose__272__in[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[0U];
    __Vfunc_aes_transpose__272__in[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[1U];
    __Vfunc_aes_transpose__272__in[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[2U];
    __Vfunc_aes_transpose__272__in[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[3U];
    __Vfunc_aes_transpose__272__transpose[0U] = 0U;
    __Vfunc_aes_transpose__272__transpose[1U] = 0U;
    __Vfunc_aes_transpose__272__transpose[2U] = 0U;
    __Vfunc_aes_transpose__272__transpose[3U] = 0U;
    __Vfunc_aes_transpose__272__transpose[0U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__272__transpose[0U]) 
                                                 | (0xffU 
                                                    & __Vfunc_aes_transpose__272__in[0U]));
    __Vfunc_aes_transpose__272__transpose[1U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__272__transpose[1U]) 
                                                 | (0xffU 
                                                    & (__Vfunc_aes_transpose__272__in[0U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__272__transpose[2U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__272__transpose[2U]) 
                                                 | (0xffU 
                                                    & (__Vfunc_aes_transpose__272__in[0U] 
                                                       >> 0x10U)));
    __Vfunc_aes_transpose__272__transpose[3U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__272__transpose[3U]) 
                                                 | (__Vfunc_aes_transpose__272__in[0U] 
                                                    >> 0x18U));
    __Vfunc_aes_transpose__272__transpose[0U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__272__transpose[0U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__272__in[1U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__272__transpose[1U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__272__transpose[1U]) 
                                                 | (0xff00U 
                                                    & __Vfunc_aes_transpose__272__in[1U]));
    __Vfunc_aes_transpose__272__transpose[2U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__272__transpose[2U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__272__in[1U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__272__transpose[3U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__272__transpose[3U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__272__in[1U] 
                                                       >> 0x10U)));
    __Vfunc_aes_transpose__272__transpose[0U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[0U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__272__in[2U] 
                                                       << 0x10U)));
    __Vfunc_aes_transpose__272__transpose[1U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[1U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__272__in[2U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__272__transpose[2U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[2U]) 
                                                 | (0xff0000U 
                                                    & __Vfunc_aes_transpose__272__in[2U]));
    __Vfunc_aes_transpose__272__transpose[3U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[3U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__272__in[2U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__272__transpose[0U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[0U]) 
                                                 | (__Vfunc_aes_transpose__272__in[3U] 
                                                    << 0x18U));
    __Vfunc_aes_transpose__272__transpose[1U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[1U]) 
                                                 | (0xff000000U 
                                                    & (__Vfunc_aes_transpose__272__in[3U] 
                                                       << 0x10U)));
    __Vfunc_aes_transpose__272__transpose[2U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[2U]) 
                                                 | (0xff000000U 
                                                    & (__Vfunc_aes_transpose__272__in[3U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__272__transpose[3U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__272__transpose[3U]) 
                                                 | (0xff000000U 
                                                    & __Vfunc_aes_transpose__272__in[3U]));
    __Vfunc_aes_transpose__272__Vfuncout[0U] = __Vfunc_aes_transpose__272__transpose[0U];
    __Vfunc_aes_transpose__272__Vfuncout[1U] = __Vfunc_aes_transpose__272__transpose[1U];
    __Vfunc_aes_transpose__272__Vfuncout[2U] = __Vfunc_aes_transpose__272__transpose[2U];
    __Vfunc_aes_transpose__272__Vfuncout[3U] = __Vfunc_aes_transpose__272__transpose[3U];
    __Vfunc_aes_state_to_ghash_vec__271__in[0U] = __Vfunc_aes_transpose__272__Vfuncout[0U];
    __Vfunc_aes_state_to_ghash_vec__271__in[1U] = __Vfunc_aes_transpose__272__Vfuncout[1U];
    __Vfunc_aes_state_to_ghash_vec__271__in[2U] = __Vfunc_aes_transpose__272__Vfuncout[2U];
    __Vfunc_aes_state_to_ghash_vec__271__in[3U] = __Vfunc_aes_transpose__272__Vfuncout[3U];
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[3U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[3U]) 
           | (0xffffff00U & ((__Vfunc_aes_state_to_ghash_vec__271__in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_aes_state_to_ghash_vec__271__in[1U] 
                                               << 0x10U)) 
                                           | (0xff00U 
                                              & (__Vfunc_aes_state_to_ghash_vec__271__in[2U] 
                                                 << 8U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[2U] 
        = ((0xffffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[2U]) 
           | (0xffff0000U & ((0xff000000U & (__Vfunc_aes_state_to_ghash_vec__271__in[0U] 
                                             << 0x10U)) 
                             | (0xff0000U & (__Vfunc_aes_state_to_ghash_vec__271__in[1U] 
                                             << 8U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[3U]) 
           | (0xffU & __Vfunc_aes_state_to_ghash_vec__271__in[3U]));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[1U]) 
           | (0xff000000U & (__Vfunc_aes_state_to_ghash_vec__271__in[0U] 
                             << 8U)));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[2U]) 
           | (0xffffffU & ((0xff00U & __Vfunc_aes_state_to_ghash_vec__271__in[2U]) 
                           | (0xffU & (__Vfunc_aes_state_to_ghash_vec__271__in[3U] 
                                       >> 8U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[1U]) 
           | ((0xff0000U & __Vfunc_aes_state_to_ghash_vec__271__in[1U]) 
              | ((0xff00U & (__Vfunc_aes_state_to_ghash_vec__271__in[2U] 
                             >> 8U)) | (0xffU & (__Vfunc_aes_state_to_ghash_vec__271__in[3U] 
                                                 >> 0x10U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[0U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[0U]) 
           | (0xffffff00U & ((0xff000000U & __Vfunc_aes_state_to_ghash_vec__271__in[0U]) 
                             | ((0xff0000U & (__Vfunc_aes_state_to_ghash_vec__271__in[1U] 
                                              >> 8U)) 
                                | (0xff00U & (__Vfunc_aes_state_to_ghash_vec__271__in[2U] 
                                              >> 0x10U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[0U]) 
           | (__Vfunc_aes_state_to_ghash_vec__271__in[3U] 
              >> 0x18U));
    __Vfunc_aes_state_to_ghash_vec__271__out[0U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[0U];
    __Vfunc_aes_state_to_ghash_vec__271__out[1U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[1U];
    __Vfunc_aes_state_to_ghash_vec__271__out[2U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[2U];
    __Vfunc_aes_state_to_ghash_vec__271__out[3U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__271__byte_vec[3U];
    __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[0U] 
        = __Vfunc_aes_state_to_ghash_vec__271__out[0U];
    __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[1U] 
        = __Vfunc_aes_state_to_ghash_vec__271__out[1U];
    __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[2U] 
        = __Vfunc_aes_state_to_ghash_vec__271__out[2U];
    __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[3U] 
        = __Vfunc_aes_state_to_ghash_vec__271__out[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[0U] 
        = __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[1U] 
        = __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[2U] 
        = __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[3U] 
        = __Vfunc_aes_state_to_ghash_vec__271__Vfuncout[3U];
    __Vtemp_h332c072b__0[1U] = (((IData)((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                    << 0x2fU) 
                                                   | ((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                      << 0xeU)))))) 
                                 >> 0x1eU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                                                         << 0x3fU) 
                                                        | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                                  << 0x2fU) 
                                                                 | ((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                    << 0xeU))))) 
                                                       >> 0x20U)) 
                                              << 2U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (((IData)((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                      << 0x3fU) | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                    << 0x3cU) | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                     << 0x2fU) 
                                                    | ((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 0xeU)))))) 
            << 2U) | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                       << 1U) | (1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                          | (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__rst_done)))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = __Vtemp_h332c072b__0[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                      << 0x3fU) | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                    << 0x3cU) | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                     << 0x2fU) 
                                                    | ((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 0xeU))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (0xffff0003U & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[0U]);
    vlSelf->test_done_o = vlSelf->aes_tb__DOT__test_done_q;
    vlSelf->test_passed_o = vlSelf->aes_tb__DOT__test_passed_q;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[3U];
    if (VL_GTS_III(32, 0x15dU, vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)) {
        if ((0x15cU >= (0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q))) {
            vlSelf->aes_tb__DOT__bus_req[0U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0U];
            vlSelf->aes_tb__DOT__bus_req[1U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][1U];
            vlSelf->aes_tb__DOT__bus_req[2U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][2U];
            vlSelf->aes_tb__DOT__bus_req[3U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][3U];
            vlSelf->aes_tb__DOT__bus_req[4U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][4U];
            vlSelf->aes_tb__DOT__bus_req[5U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][5U];
            vlSelf->aes_tb__DOT__bus_req[6U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][6U];
            vlSelf->aes_tb__DOT__bus_req[7U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][7U];
            vlSelf->aes_tb__DOT__bus_req[8U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][8U];
            vlSelf->aes_tb__DOT__bus_req[9U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][9U];
            vlSelf->aes_tb__DOT__bus_req[0xaU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0xaU];
            vlSelf->aes_tb__DOT__bus_req[0xbU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0xbU];
            vlSelf->aes_tb__DOT__bus_req[0xcU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0xcU];
            vlSelf->aes_tb__DOT__bus_req[0xdU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0xdU];
            vlSelf->aes_tb__DOT__bus_req[0xeU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0xeU];
            vlSelf->aes_tb__DOT__bus_req[0xfU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0xfU];
            vlSelf->aes_tb__DOT__bus_req[0x10U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x10U];
            vlSelf->aes_tb__DOT__bus_req[0x11U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x11U];
            vlSelf->aes_tb__DOT__bus_req[0x12U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x12U];
            vlSelf->aes_tb__DOT__bus_req[0x13U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x13U];
            vlSelf->aes_tb__DOT__bus_req[0x14U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x14U];
            vlSelf->aes_tb__DOT__bus_req[0x15U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x15U];
            vlSelf->aes_tb__DOT__bus_req[0x16U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x16U];
            vlSelf->aes_tb__DOT__bus_req[0x17U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x17U];
            vlSelf->aes_tb__DOT__bus_req[0x18U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x18U];
            vlSelf->aes_tb__DOT__bus_req[0x19U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x19U];
            vlSelf->aes_tb__DOT__bus_req[0x1aU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x1aU];
            vlSelf->aes_tb__DOT__bus_req[0x1bU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x1bU];
            vlSelf->aes_tb__DOT__bus_req[0x1cU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x1cU];
            vlSelf->aes_tb__DOT__bus_req[0x1dU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x1dU];
            vlSelf->aes_tb__DOT__bus_req[0x1eU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x1eU];
            vlSelf->aes_tb__DOT__bus_req[0x1fU] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x1fU];
            vlSelf->aes_tb__DOT__bus_req[0x20U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x20U];
            vlSelf->aes_tb__DOT__bus_req[0x21U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x21U];
            vlSelf->aes_tb__DOT__bus_req[0x22U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x22U];
            vlSelf->aes_tb__DOT__bus_req[0x23U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x23U];
            vlSelf->aes_tb__DOT__bus_req[0x24U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x24U];
            vlSelf->aes_tb__DOT__bus_req[0x25U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x25U];
            vlSelf->aes_tb__DOT__bus_req[0x26U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x26U];
            vlSelf->aes_tb__DOT__bus_req[0x27U] = vlSymsp->TOP__aes_tb_pkg.requests
                [(0x1ffU & vlSelf->aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q)][0x27U];
        } else {
            __Vilp = 0U;
            while ((__Vilp <= 0x27U)) {
                vlSelf->aes_tb__DOT__bus_req[__Vilp] 
                    = Vaes_tb__ConstPool__CONST_hb51361e2_0[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x27U)) {
            vlSelf->aes_tb__DOT__bus_req[__Vilp] = 
                Vaes_tb__ConstPool__CONST_hb51361e2_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffffffffffffff0ULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | (IData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                              >> (0x3fU 
                                                  & ((0x20U 
                                                      & ((IData)(
                                                                 (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0U] 
                                                                      >> 0x12U)))) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((IData)(
                                                                    (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0U] 
                                                                         >> 0xcU)))) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((IData)(
                                                                       (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0U] 
                                                                            >> 6U)))) 
                                                               << 3U)) 
                                                           | (4U 
                                                              & ((IData)(
                                                                         (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0U]))) 
                                                                 << 2U))))))))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xffffffffffffff0fULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[1U] 
                                                                       >> 0xaU)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[1U] 
                                                                          >> 4U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[1U] 
                                                                              << 2U) 
                                                                             | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0U] 
                                                                                >> 0x1eU))))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0U] 
                                                                               >> 0x18U)))) 
                                                                  << 2U))))))))))) 
              << 4U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffffffffffff0ffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[2U] 
                                                                       >> 2U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[2U] 
                                                                           << 4U) 
                                                                          | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[1U] 
                                                                             >> 0x1cU))))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[1U] 
                                                                             >> 0x16U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[1U] 
                                                                               >> 0x10U)))) 
                                                                  << 2U))))))))))) 
              << 8U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xffffffffffff0fffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[2U] 
                                                                    >> 0x1aU))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[2U] 
                                                                          >> 0x14U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[2U] 
                                                                             >> 0xeU)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[2U] 
                                                                               >> 8U)))) 
                                                                  << 2U))))))))))) 
              << 0xcU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffffffffff0ffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[3U] 
                                                                       >> 0x12U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[3U] 
                                                                          >> 0xcU)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[3U] 
                                                                             >> 6U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[3U]))) 
                                                                  << 2U))))))))))) 
              << 0x10U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xffffffffff0fffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[4U] 
                                                                       >> 0xaU)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[4U] 
                                                                          >> 4U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[4U] 
                                                                              << 2U) 
                                                                             | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[3U] 
                                                                                >> 0x1eU))))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[3U] 
                                                                               >> 0x18U)))) 
                                                                  << 2U))))))))))) 
              << 0x14U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffffffff0ffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[5U] 
                                                                       >> 2U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[5U] 
                                                                           << 4U) 
                                                                          | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[4U] 
                                                                             >> 0x1cU))))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[4U] 
                                                                             >> 0x16U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[4U] 
                                                                               >> 0x10U)))) 
                                                                  << 2U))))))))))) 
              << 0x18U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xffffffff0fffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[5U] 
                                                                    >> 0x1aU))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[5U] 
                                                                          >> 0x14U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[5U] 
                                                                             >> 0xeU)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[5U] 
                                                                               >> 8U)))) 
                                                                  << 2U))))))))))) 
              << 0x1cU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffffff0ffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[6U] 
                                                                       >> 0x12U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[6U] 
                                                                          >> 0xcU)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[6U] 
                                                                             >> 6U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[6U]))) 
                                                                  << 2U))))))))))) 
              << 0x20U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xffffff0fffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[7U] 
                                                                       >> 0xaU)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[7U] 
                                                                          >> 4U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[7U] 
                                                                              << 2U) 
                                                                             | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[6U] 
                                                                                >> 0x1eU))))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[6U] 
                                                                               >> 0x18U)))) 
                                                                  << 2U))))))))))) 
              << 0x24U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffff0ffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[8U] 
                                                                       >> 2U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[8U] 
                                                                           << 4U) 
                                                                          | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[7U] 
                                                                             >> 0x1cU))))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[7U] 
                                                                             >> 0x16U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[7U] 
                                                                               >> 0x10U)))) 
                                                                  << 2U))))))))))) 
              << 0x28U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xffff0fffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[8U] 
                                                                    >> 0x1aU))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[8U] 
                                                                          >> 0x14U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[8U] 
                                                                             >> 0xeU)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[8U] 
                                                                               >> 8U)))) 
                                                                  << 2U))))))))))) 
              << 0x2cU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfff0ffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[9U] 
                                                                       >> 0x12U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[9U] 
                                                                          >> 0xcU)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[9U] 
                                                                             >> 6U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[9U]))) 
                                                                  << 2U))))))))))) 
              << 0x30U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xff0fffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xaU] 
                                                                       >> 0xaU)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xaU] 
                                                                          >> 4U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xaU] 
                                                                              << 2U) 
                                                                             | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[9U] 
                                                                                >> 0x1eU))))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[9U] 
                                                                               >> 0x18U)))) 
                                                                  << 2U))))))))))) 
              << 0x34U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xf0ffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xbU] 
                                                                       >> 2U)))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xbU] 
                                                                           << 4U) 
                                                                          | (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xaU] 
                                                                             >> 0x1cU))))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xaU] 
                                                                             >> 0x16U)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xaU] 
                                                                               >> 0x10U)))) 
                                                                  << 2U))))))))))) 
              << 0x38U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
        = ((0xfffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
           | ((QData)((IData)((0xfU & (IData)((0x4d5e087619ca23fbULL 
                                               >> (0x3fU 
                                                   & ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                   >> 
                                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xbU] 
                                                                    >> 0x1aU))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xbU] 
                                                                          >> 0x14U)))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xbU] 
                                                                             >> 0xeU)))) 
                                                                << 3U)) 
                                                            | (4U 
                                                               & ((IData)(
                                                                          (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices[0xbU] 
                                                                               >> 8U)))) 
                                                                  << 2U))))))))))) 
              << 0x3cU));
    __Vfunc_aes_state_to_ghash_vec__280__in[0U] = (
                                                   vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[0U] 
                                                   ^ 
                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
                                                    [0U][0U] 
                                                    & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q)))));
    __Vfunc_aes_state_to_ghash_vec__280__in[1U] = (
                                                   vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[1U] 
                                                   ^ 
                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
                                                    [0U][1U] 
                                                    & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q)))));
    __Vfunc_aes_state_to_ghash_vec__280__in[2U] = (
                                                   vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[2U] 
                                                   ^ 
                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
                                                    [0U][2U] 
                                                    & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q)))));
    __Vfunc_aes_state_to_ghash_vec__280__in[3U] = (
                                                   vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q[3U] 
                                                   ^ 
                                                   (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
                                                    [0U][3U] 
                                                    & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[3U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[3U]) 
           | (0xffffff00U & ((__Vfunc_aes_state_to_ghash_vec__280__in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_aes_state_to_ghash_vec__280__in[1U] 
                                               << 0x10U)) 
                                           | (0xff00U 
                                              & (__Vfunc_aes_state_to_ghash_vec__280__in[2U] 
                                                 << 8U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[2U] 
        = ((0xffffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[2U]) 
           | (0xffff0000U & ((0xff000000U & (__Vfunc_aes_state_to_ghash_vec__280__in[0U] 
                                             << 0x10U)) 
                             | (0xff0000U & (__Vfunc_aes_state_to_ghash_vec__280__in[1U] 
                                             << 8U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[3U]) 
           | (0xffU & __Vfunc_aes_state_to_ghash_vec__280__in[3U]));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[1U]) 
           | (0xff000000U & (__Vfunc_aes_state_to_ghash_vec__280__in[0U] 
                             << 8U)));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[2U]) 
           | (0xffffffU & ((0xff00U & __Vfunc_aes_state_to_ghash_vec__280__in[2U]) 
                           | (0xffU & (__Vfunc_aes_state_to_ghash_vec__280__in[3U] 
                                       >> 8U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[1U]) 
           | ((0xff0000U & __Vfunc_aes_state_to_ghash_vec__280__in[1U]) 
              | ((0xff00U & (__Vfunc_aes_state_to_ghash_vec__280__in[2U] 
                             >> 8U)) | (0xffU & (__Vfunc_aes_state_to_ghash_vec__280__in[3U] 
                                                 >> 0x10U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[0U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[0U]) 
           | (0xffffff00U & ((0xff000000U & __Vfunc_aes_state_to_ghash_vec__280__in[0U]) 
                             | ((0xff0000U & (__Vfunc_aes_state_to_ghash_vec__280__in[1U] 
                                              >> 8U)) 
                                | (0xff00U & (__Vfunc_aes_state_to_ghash_vec__280__in[2U] 
                                              >> 0x10U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[0U]) 
           | (__Vfunc_aes_state_to_ghash_vec__280__in[3U] 
              >> 0x18U));
    __Vfunc_aes_state_to_ghash_vec__280__out[0U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[0U];
    __Vfunc_aes_state_to_ghash_vec__280__out[1U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[1U];
    __Vfunc_aes_state_to_ghash_vec__280__out[2U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[2U];
    __Vfunc_aes_state_to_ghash_vec__280__out[3U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__280__byte_vec[3U];
    __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[0U] 
        = __Vfunc_aes_state_to_ghash_vec__280__out[0U];
    __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[1U] 
        = __Vfunc_aes_state_to_ghash_vec__280__out[1U];
    __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[2U] 
        = __Vfunc_aes_state_to_ghash_vec__280__out[2U];
    __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[3U] 
        = __Vfunc_aes_state_to_ghash_vec__280__out[3U];
    __Vfunc_aes_transpose__279__in[0U] = __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[0U];
    __Vfunc_aes_transpose__279__in[1U] = __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[1U];
    __Vfunc_aes_transpose__279__in[2U] = __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[2U];
    __Vfunc_aes_transpose__279__in[3U] = __Vfunc_aes_state_to_ghash_vec__280__Vfuncout[3U];
    __Vfunc_aes_transpose__279__transpose[0U] = 0U;
    __Vfunc_aes_transpose__279__transpose[1U] = 0U;
    __Vfunc_aes_transpose__279__transpose[2U] = 0U;
    __Vfunc_aes_transpose__279__transpose[3U] = 0U;
    __Vfunc_aes_transpose__279__transpose[0U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__279__transpose[0U]) 
                                                 | (0xffU 
                                                    & __Vfunc_aes_transpose__279__in[0U]));
    __Vfunc_aes_transpose__279__transpose[1U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__279__transpose[1U]) 
                                                 | (0xffU 
                                                    & (__Vfunc_aes_transpose__279__in[0U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__279__transpose[2U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__279__transpose[2U]) 
                                                 | (0xffU 
                                                    & (__Vfunc_aes_transpose__279__in[0U] 
                                                       >> 0x10U)));
    __Vfunc_aes_transpose__279__transpose[3U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__279__transpose[3U]) 
                                                 | (__Vfunc_aes_transpose__279__in[0U] 
                                                    >> 0x18U));
    __Vfunc_aes_transpose__279__transpose[0U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__279__transpose[0U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__279__in[1U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__279__transpose[1U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__279__transpose[1U]) 
                                                 | (0xff00U 
                                                    & __Vfunc_aes_transpose__279__in[1U]));
    __Vfunc_aes_transpose__279__transpose[2U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__279__transpose[2U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__279__in[1U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__279__transpose[3U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__279__transpose[3U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__279__in[1U] 
                                                       >> 0x10U)));
    __Vfunc_aes_transpose__279__transpose[0U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[0U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__279__in[2U] 
                                                       << 0x10U)));
    __Vfunc_aes_transpose__279__transpose[1U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[1U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__279__in[2U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__279__transpose[2U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[2U]) 
                                                 | (0xff0000U 
                                                    & __Vfunc_aes_transpose__279__in[2U]));
    __Vfunc_aes_transpose__279__transpose[3U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[3U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__279__in[2U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__279__transpose[0U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[0U]) 
                                                 | (__Vfunc_aes_transpose__279__in[3U] 
                                                    << 0x18U));
    __Vfunc_aes_transpose__279__transpose[1U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[1U]) 
                                                 | (0xff000000U 
                                                    & (__Vfunc_aes_transpose__279__in[3U] 
                                                       << 0x10U)));
    __Vfunc_aes_transpose__279__transpose[2U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[2U]) 
                                                 | (0xff000000U 
                                                    & (__Vfunc_aes_transpose__279__in[3U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__279__transpose[3U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__279__transpose[3U]) 
                                                 | (0xff000000U 
                                                    & __Vfunc_aes_transpose__279__in[3U]));
    __Vfunc_aes_transpose__279__Vfuncout[0U] = __Vfunc_aes_transpose__279__transpose[0U];
    __Vfunc_aes_transpose__279__Vfuncout[1U] = __Vfunc_aes_transpose__279__transpose[1U];
    __Vfunc_aes_transpose__279__Vfuncout[2U] = __Vfunc_aes_transpose__279__transpose[2U];
    __Vfunc_aes_transpose__279__Vfuncout[3U] = __Vfunc_aes_transpose__279__transpose[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[0U] 
        = __Vfunc_aes_transpose__279__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[1U] 
        = __Vfunc_aes_transpose__279__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[2U] 
        = __Vfunc_aes_transpose__279__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[3U] 
        = __Vfunc_aes_transpose__279__Vfuncout[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_op_b[0U][0U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][0U] & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_op_b[0U][1U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][1U] & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_op_b[0U][2U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][2U] & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_op_b[0U][3U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
           [0U][3U] & (- (IData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[0U][7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [0U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i[1U][7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q
        [1U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_manual_operation 
        = (((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_prng_reseed_rate 
        = (((7U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o 
        = ((0xfffU & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o)) 
           | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q) 
               << 0xfU) | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_q) 
                           << 0xcU)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_sideload 
        = (((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_key_len 
        = (((7U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_mode 
        = (((0x3fU & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_operation 
        = (((3U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q))) 
            != (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o 
        = ((0xf000U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o)) 
           | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q) 
               << 0xbU) | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q) 
                            << 8U) | (((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q) 
                                       << 2U) | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)))));
    vlSelf->aes_tb__DOT____Vcellinp__u_aes__edn_i = 
        (0x100000000ULL | (((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o)) 
                            << 0x21U) | (QData)((IData)(vlSelf->aes_tb__DOT__entropy_q))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xfffffff8U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | ((4U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                           >> 0x15U)))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xffffffc7U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                       >> 0xcU)) | 
                             ((0x10U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                        >> 0x16U)) 
                              | (8U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                       >> 0x12U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xfffffe3fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                        >> 0xbU)) | 
                             ((0x80U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                        >> 0x16U)) 
                              | (0x40U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                          << 3U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xfffff1ffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                        << 6U)) | (
                                                   (0x400U 
                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                       << 6U)) 
                                                   | (0x200U 
                                                      & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                         >> 9U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xffff8fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                         << 4U)) | 
                             ((0x2000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                          >> 6U)) | 
                              (0x1000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                          << 3U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xfffc7fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                          << 7U)) | 
                             ((0x10000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                           >> 6U)) 
                              | (0x8000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                            >> 2U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xffe3ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                           >> 7U)) 
                             | ((0x80000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                             >> 4U)) 
                                | (0x40000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                               << 0x10U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xff1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                           >> 2U)) 
                             | ((0x400000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                              >> 8U)) 
                                | (0x200000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                << 7U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xf8ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                            << 2U)) 
                             | ((0x2000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                               << 0xfU)) 
                                | (0x1000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                 << 2U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0xc7ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                             << 0x1cU)) 
                             | ((0x10000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                >> 1U)) 
                                | (0x8000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                 << 0x18U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U] 
        = ((0x3fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[0U]) 
           | (0xc0000000U & ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                              << 0x1fU) | (0x40000000U 
                                           & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                              << 0x11U)))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xfffffffeU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                    >> 0xcU)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xfffffff1U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xfffffffeU & ((8U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                    >> 0x13U)) | ((4U 
                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                      >> 0x18U)) 
                                                  | (2U 
                                                     & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                        >> 0x10U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xffffff8fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                       >> 0xfU)) | 
                             ((0x20U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                        >> 6U)) | (0x10U 
                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                      << 4U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xfffffc7fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                        >> 0xfU)) | 
                             ((0x100U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                         << 6U)) | 
                              (0x80U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                        >> 0xcU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xffffe3ffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                         << 0xbU)) 
                             | ((0x800U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                           >> 0x11U)) 
                                | (0x400U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                             >> 0x10U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xffff1fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                         << 5U)) | 
                             ((0x4000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                          >> 0x11U)) 
                              | (0x2000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                            << 5U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xfff8ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                          << 8U)) | 
                             ((0x20000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                           << 6U)) 
                              | (0x10000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U])))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xffc7ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                           >> 7U)) 
                             | ((0x100000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                              >> 4U)) 
                                | (0x80000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U])))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xfe3fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                            << 0x13U)) 
                             | ((0x800000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                              << 7U)) 
                                | (0x400000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                << 0x15U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0xf1ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                            << 0x10U)) 
                             | ((0x4000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                               << 5U)) 
                                | (0x2000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                 << 0xaU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0x8fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                             << 6U)) 
                             | ((0x20000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                << 2U)) 
                                | (0x10000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                  << 5U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U] 
        = ((0x7fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[1U]) 
           | (0x80000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                             << 0x10U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xfffffffcU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0x7fffffffU & ((2U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                    >> 6U)) | (1U & 
                                               (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                >> 0x17U)))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xffffffe3U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                       >> 0x10U)) | 
                             ((8U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                     >> 0xbU)) | (4U 
                                                  & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                     >> 0x17U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xffffff1fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                       >> 2U)) | ((0x40U 
                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                      >> 0x15U)) 
                                                  | (0x20U 
                                                     & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                        >> 0x19U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xfffff8ffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                        >> 0xeU)) | 
                             ((0x200U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                         >> 0x16U)) 
                              | (0x100U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                           >> 0xcU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xffffc7ffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                         << 5U)) | 
                             ((0x1000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                          >> 8U)) | 
                              (0x800U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                         >> 7U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xfffe3fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                          << 0xbU)) 
                             | ((0x8000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                            << 2U)) 
                                | (0x4000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                              >> 8U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xfff1ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                          >> 6U)) | 
                             ((0x40000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                           << 0xbU)) 
                              | (0x20000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                             >> 9U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xff8fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                           << 0x14U)) 
                             | ((0x200000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                              << 6U)) 
                                | (0x100000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                << 8U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xfc7fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                            << 0x16U)) 
                             | ((0x1000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                               >> 3U)) 
                                | (0x800000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                << 0x17U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0xe3ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                             >> 1U)) 
                             | ((0x8000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                               << 0xbU)) 
                                | (0x4000000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U])))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U] 
        = ((0x1fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[2U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                             << 0x1bU)) 
                             | ((0x40000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                << 0x12U)) 
                                | (0x20000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                  << 0x17U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xfffffff8U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | ((4U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                     >> 0xbU)) | ((2U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                           >> 4U)))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xffffffc7U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                       << 4U)) | ((0x10U 
                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                      >> 0x19U)) 
                                                  | (8U 
                                                     & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                        >> 6U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xfffffe3fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                        >> 5U)) | (
                                                   (0x80U 
                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                       >> 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                         >> 0xaU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xfffff1ffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                        << 5U)) | (
                                                   (0x400U 
                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                       >> 4U)) 
                                                   | (0x200U 
                                                      & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                         >> 0xcU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xffff8fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                         << 0xcU)) 
                             | ((0x2000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                            << 6U)) 
                                | (0x1000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                              << 4U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xfffc7fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                          << 0xbU)) 
                             | ((0x10000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                             >> 0xbU)) 
                                | (0x8000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                              << 0xaU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xffe3ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                           << 9U)) 
                             | ((0x80000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                             << 1U)) 
                                | (0x40000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                               << 3U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xff1fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                           >> 2U)) 
                             | ((0x400000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                              << 5U)) 
                                | (0x200000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                >> 9U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xf8ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                            << 8U)) 
                             | ((0x2000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                               << 0x12U)) 
                                | (0x1000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                 >> 7U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0xc7ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                             << 0xbU)) 
                             | ((0x10000000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U]) 
                                | (0x8000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                 << 0x13U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U] 
        = ((0x3fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[3U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                             << 0x11U)) 
                             | (0x40000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                               << 2U)))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xfffffffeU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (1U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                    >> 9U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xfffffff1U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xfffffffeU & ((8U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                    >> 0x10U)) | ((4U 
                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                      >> 0xeU)) 
                                                  | (2U 
                                                     & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                                        >> 0x13U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xffffff8fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                       >> 5U)) | ((0x20U 
                                                   & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                      << 5U)) 
                                                  | (0x10U 
                                                     & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U])))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xfffffc7fU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                        >> 4U)) | (
                                                   (0x100U 
                                                    & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                       << 8U)) 
                                                   | (0x80U 
                                                      & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                                         >> 8U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xffffe3ffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                         >> 0x11U)) 
                             | ((0x800U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                           >> 0xbU)) 
                                | (0x400U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                             << 4U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xffff1fffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                         << 0xbU)) 
                             | ((0x4000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                            >> 9U)) 
                                | (0x2000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                              << 5U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xfff8ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                          << 6U)) | 
                             ((0x20000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[3U] 
                                           >> 0xdU)) 
                              | (0x10000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                             >> 0xfU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xffc7ffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                           << 0x14U)) 
                             | ((0x100000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U]) 
                                | (0x80000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                               << 0xeU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xfe3fffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                            >> 4U)) 
                             | ((0x800000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                              << 0x14U)) 
                                | (0x400000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[4U] 
                                                << 0xfU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0xf1ffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                            << 0x19U)) 
                             | ((0x4000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                               >> 4U)) 
                                | (0x2000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                 << 0xdU))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0x8fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[1U] 
                                             << 0x18U)) 
                             | ((0x20000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                                                << 4U)) 
                                | (0x10000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[2U] 
                                                  << 0x19U))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U] 
        = ((0x7fffffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking[4U]) 
           | (0x80000000U & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key[0U] 
                             << 8U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[0U][7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [0U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i[1U][7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher
        [1U][7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[2U] 
        = (IData)((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[0U]))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[3U] 
        = (IData)(((((QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask[0U]))) 
                   >> 0x20U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_sel_q_raw
        [0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_sel_q_raw
        [1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_d = 0U;
    if ((0x40U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw)))) {
                                if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack_pre))) {
                                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_d = 1U;
                                }
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
                                if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack))) {
                                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 3U;
                                }
                            } else {
                                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
                            }
                        } else {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
                        }
                    } else {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we = 4U;
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__seed[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8ab1c60f__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h8ab1c60f__1, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[0U] 
            = (0x87U ^ __Vtemp_h8ab1c60f__0[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[1U] 
            = __Vtemp_h8ab1c60f__0[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[2U] 
            = __Vtemp_h8ab1c60f__0[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[3U] 
            = __Vtemp_h8ab1c60f__0[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[0U] 
            = __Vtemp_h8ab1c60f__1[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[1U] 
            = __Vtemp_h8ab1c60f__1[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[2U] 
            = __Vtemp_h8ab1c60f__1[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[3U] 
            = __Vtemp_h8ab1c60f__1[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__mult_out[3U];
    VL_EXTEND_WW(512,128, __Vtemp_h7a9235f0__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__285__Vfuncout);
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0U] 
        = __Vtemp_h7a9235f0__0[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[1U] 
        = __Vtemp_h7a9235f0__0[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[2U] 
        = __Vtemp_h7a9235f0__0[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[3U] 
        = __Vtemp_h7a9235f0__0[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[4U] 
        = __Vtemp_h7a9235f0__0[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[5U] 
        = __Vtemp_h7a9235f0__0[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[6U] 
        = __Vtemp_h7a9235f0__0[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[7U] 
        = __Vtemp_h7a9235f0__0[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[8U] 
        = __Vtemp_h7a9235f0__0[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[9U] 
        = __Vtemp_h7a9235f0__0[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xaU] 
        = __Vtemp_h7a9235f0__0[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xbU] 
        = __Vtemp_h7a9235f0__0[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xcU] 
        = __Vtemp_h7a9235f0__0[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xdU] 
        = __Vtemp_h7a9235f0__0[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xeU] 
        = __Vtemp_h7a9235f0__0[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xfU] 
        = __Vtemp_h7a9235f0__0[0xfU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec03be8b__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec03be8b__1, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U] 
            = (0x87U ^ __Vtemp_hec03be8b__0[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U] 
            = __Vtemp_hec03be8b__0[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U] 
            = __Vtemp_hec03be8b__0[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U] 
            = __Vtemp_hec03be8b__0[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U] 
            = __Vtemp_hec03be8b__1[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U] 
            = __Vtemp_hec03be8b__1[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U] 
            = __Vtemp_hec03be8b__1[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U] 
            = __Vtemp_hec03be8b__1[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[7U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec03be8b__2, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec03be8b__3, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U] 
            = (0x87U ^ __Vtemp_hec03be8b__2[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U] 
            = __Vtemp_hec03be8b__2[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U] 
            = __Vtemp_hec03be8b__2[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U] 
            = __Vtemp_hec03be8b__2[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U] 
            = __Vtemp_hec03be8b__3[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U] 
            = __Vtemp_hec03be8b__3[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U] 
            = __Vtemp_hec03be8b__3[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U] 
            = __Vtemp_hec03be8b__3[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xbU];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec03be8b__4, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec03be8b__5, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U] 
            = (0x87U ^ __Vtemp_hec03be8b__4[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U] 
            = __Vtemp_hec03be8b__4[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U] 
            = __Vtemp_hec03be8b__4[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U] 
            = __Vtemp_hec03be8b__4[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U] 
            = __Vtemp_hec03be8b__5[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U] 
            = __Vtemp_hec03be8b__5[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U] 
            = __Vtemp_hec03be8b__5[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U] 
            = __Vtemp_hec03be8b__5[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__286__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__matrix_out[0xfU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__seed[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__seed[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__seed[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__seed[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i[3U];
    VL_EXTEND_WW(512,128, __Vtemp_h68285968__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__seed);
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0U] 
        = __Vtemp_h68285968__0[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[1U] 
        = __Vtemp_h68285968__0[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[2U] 
        = __Vtemp_h68285968__0[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[3U] 
        = __Vtemp_h68285968__0[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[4U] 
        = __Vtemp_h68285968__0[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[5U] 
        = __Vtemp_h68285968__0[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[6U] 
        = __Vtemp_h68285968__0[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[7U] 
        = __Vtemp_h68285968__0[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[8U] 
        = __Vtemp_h68285968__0[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[9U] 
        = __Vtemp_h68285968__0[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xaU] 
        = __Vtemp_h68285968__0[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xbU] 
        = __Vtemp_h68285968__0[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xcU] 
        = __Vtemp_h68285968__0[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xdU] 
        = __Vtemp_h68285968__0[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xeU] 
        = __Vtemp_h68285968__0[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xfU] 
        = __Vtemp_h68285968__0[0xfU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7eee8da7__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7eee8da7__1, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U] 
            = (0x87U ^ __Vtemp_h7eee8da7__0[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U] 
            = __Vtemp_h7eee8da7__0[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U] 
            = __Vtemp_h7eee8da7__0[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U] 
            = __Vtemp_h7eee8da7__0[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U] 
            = __Vtemp_h7eee8da7__1[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U] 
            = __Vtemp_h7eee8da7__1[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U] 
            = __Vtemp_h7eee8da7__1[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U] 
            = __Vtemp_h7eee8da7__1[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[7U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7eee8da7__2, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7eee8da7__3, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U] 
            = (0x87U ^ __Vtemp_h7eee8da7__2[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U] 
            = __Vtemp_h7eee8da7__2[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U] 
            = __Vtemp_h7eee8da7__2[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U] 
            = __Vtemp_h7eee8da7__2[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U] 
            = __Vtemp_h7eee8da7__3[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U] 
            = __Vtemp_h7eee8da7__3[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U] 
            = __Vtemp_h7eee8da7__3[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U] 
            = __Vtemp_h7eee8da7__3[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xbU];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7eee8da7__4, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7eee8da7__5, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U] 
            = (0x87U ^ __Vtemp_h7eee8da7__4[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U] 
            = __Vtemp_h7eee8da7__4[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U] 
            = __Vtemp_h7eee8da7__4[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U] 
            = __Vtemp_h7eee8da7__4[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U] 
            = __Vtemp_h7eee8da7__5[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U] 
            = __Vtemp_h7eee8da7__5[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U] 
            = __Vtemp_h7eee8da7__5[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U] 
            = __Vtemp_h7eee8da7__5[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gf_mult2__288__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__matrix_out[0xfU];
    if ((0U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[1U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[2U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[3U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[4U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[5U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[6U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[7U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[8U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[8U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[9U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[9U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xaU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xaU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xbU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xbU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xcU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xcU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xdU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xdU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xeU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xeU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xfU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__283__Vfuncout[0xfU];
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[1U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[2U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[3U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[4U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[5U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[6U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[7U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[8U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[8U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[9U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[9U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xaU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xaU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xbU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xbU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xcU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xcU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xdU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xdU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xeU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xeU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix[0xfU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__gen_matrix__284__Vfuncout[0xfU];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__seed[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h99c6040c__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h99c6040c__1, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[0U] 
            = (0x87U ^ __Vtemp_h99c6040c__0[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[1U] 
            = __Vtemp_h99c6040c__0[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[2U] 
            = __Vtemp_h99c6040c__0[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[3U] 
            = __Vtemp_h99c6040c__0[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[0U] 
            = __Vtemp_h99c6040c__1[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[1U] 
            = __Vtemp_h99c6040c__1[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[2U] 
            = __Vtemp_h99c6040c__1[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[3U] 
            = __Vtemp_h99c6040c__1[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__mult_out[3U];
    VL_EXTEND_WW(512,128, __Vtemp_h2d6c8130__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__292__Vfuncout);
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0U] 
        = __Vtemp_h2d6c8130__0[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[1U] 
        = __Vtemp_h2d6c8130__0[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[2U] 
        = __Vtemp_h2d6c8130__0[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[3U] 
        = __Vtemp_h2d6c8130__0[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[4U] 
        = __Vtemp_h2d6c8130__0[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[5U] 
        = __Vtemp_h2d6c8130__0[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[6U] 
        = __Vtemp_h2d6c8130__0[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[7U] 
        = __Vtemp_h2d6c8130__0[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[8U] 
        = __Vtemp_h2d6c8130__0[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[9U] 
        = __Vtemp_h2d6c8130__0[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xaU] 
        = __Vtemp_h2d6c8130__0[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xbU] 
        = __Vtemp_h2d6c8130__0[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xcU] 
        = __Vtemp_h2d6c8130__0[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xdU] 
        = __Vtemp_h2d6c8130__0[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xeU] 
        = __Vtemp_h2d6c8130__0[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xfU] 
        = __Vtemp_h2d6c8130__0[0xfU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec88f2b7__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec88f2b7__1, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U] 
            = (0x87U ^ __Vtemp_hec88f2b7__0[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U] 
            = __Vtemp_hec88f2b7__0[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U] 
            = __Vtemp_hec88f2b7__0[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U] 
            = __Vtemp_hec88f2b7__0[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U] 
            = __Vtemp_hec88f2b7__1[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U] 
            = __Vtemp_hec88f2b7__1[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U] 
            = __Vtemp_hec88f2b7__1[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U] 
            = __Vtemp_hec88f2b7__1[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[7U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec88f2b7__2, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec88f2b7__3, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U] 
            = (0x87U ^ __Vtemp_hec88f2b7__2[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U] 
            = __Vtemp_hec88f2b7__2[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U] 
            = __Vtemp_hec88f2b7__2[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U] 
            = __Vtemp_hec88f2b7__2[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U] 
            = __Vtemp_hec88f2b7__3[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U] 
            = __Vtemp_hec88f2b7__3[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U] 
            = __Vtemp_hec88f2b7__3[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U] 
            = __Vtemp_hec88f2b7__3[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xbU];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec88f2b7__4, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hec88f2b7__5, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U] 
            = (0x87U ^ __Vtemp_hec88f2b7__4[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U] 
            = __Vtemp_hec88f2b7__4[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U] 
            = __Vtemp_hec88f2b7__4[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U] 
            = __Vtemp_hec88f2b7__4[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U] 
            = __Vtemp_hec88f2b7__5[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U] 
            = __Vtemp_hec88f2b7__5[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U] 
            = __Vtemp_hec88f2b7__5[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U] 
            = __Vtemp_hec88f2b7__5[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__293__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__matrix_out[0xfU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__seed[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__seed[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__seed[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__seed[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i[3U];
    VL_EXTEND_WW(512,128, __Vtemp_h27b8eb12__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__seed);
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0U] 
        = __Vtemp_h27b8eb12__0[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[1U] 
        = __Vtemp_h27b8eb12__0[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[2U] 
        = __Vtemp_h27b8eb12__0[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[3U] 
        = __Vtemp_h27b8eb12__0[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[4U] 
        = __Vtemp_h27b8eb12__0[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[5U] 
        = __Vtemp_h27b8eb12__0[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[6U] 
        = __Vtemp_h27b8eb12__0[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[7U] 
        = __Vtemp_h27b8eb12__0[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[8U] 
        = __Vtemp_h27b8eb12__0[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[9U] 
        = __Vtemp_h27b8eb12__0[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xaU] 
        = __Vtemp_h27b8eb12__0[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xbU] 
        = __Vtemp_h27b8eb12__0[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xcU] 
        = __Vtemp_h27b8eb12__0[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xdU] 
        = __Vtemp_h27b8eb12__0[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xeU] 
        = __Vtemp_h27b8eb12__0[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xfU] 
        = __Vtemp_h27b8eb12__0[0xfU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4375da8__0, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4375da8__1, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U] 
            = (0x87U ^ __Vtemp_hb4375da8__0[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U] 
            = __Vtemp_hb4375da8__0[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U] 
            = __Vtemp_hb4375da8__0[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U] 
            = __Vtemp_hb4375da8__0[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U] 
            = __Vtemp_hb4375da8__1[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U] 
            = __Vtemp_hb4375da8__1[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U] 
            = __Vtemp_hb4375da8__1[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U] 
            = __Vtemp_hb4375da8__1[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[7U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4375da8__2, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4375da8__3, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U] 
            = (0x87U ^ __Vtemp_hb4375da8__2[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U] 
            = __Vtemp_hb4375da8__2[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U] 
            = __Vtemp_hb4375da8__2[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U] 
            = __Vtemp_hb4375da8__2[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U] 
            = __Vtemp_hb4375da8__3[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U] 
            = __Vtemp_hb4375da8__3[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U] 
            = __Vtemp_hb4375da8__3[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U] 
            = __Vtemp_hb4375da8__3[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xbU];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4375da8__4, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4375da8__5, __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand, 1U);
    if ((__Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__operand[3U] 
         >> 0x1fU)) {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U] 
            = (0x87U ^ __Vtemp_hb4375da8__4[0U]);
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U] 
            = __Vtemp_hb4375da8__4[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U] 
            = __Vtemp_hb4375da8__4[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U] 
            = __Vtemp_hb4375da8__4[3U];
    } else {
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U] 
            = __Vtemp_hb4375da8__5[0U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U] 
            = __Vtemp_hb4375da8__5[1U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U] 
            = __Vtemp_hb4375da8__5[2U];
        __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U] 
            = __Vtemp_hb4375da8__5[3U];
    }
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__mult_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gf_mult2__295__Vfuncout[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[1U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[1U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[2U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[2U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[3U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[3U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[4U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[4U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[5U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[5U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[6U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[6U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[7U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[7U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[8U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[8U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[9U] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[9U];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xaU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xaU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xbU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xbU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xcU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xcU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xdU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xdU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xeU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xeU];
    __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xfU] 
        = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__matrix_out[0xfU];
    if ((0U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[1U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[2U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[3U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[4U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[5U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[6U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[7U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[8U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[8U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[9U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[9U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xaU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xaU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xbU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xbU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xcU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xcU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xdU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xdU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xeU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xeU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xfU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__290__Vfuncout[0xfU];
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[1U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[2U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[3U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[3U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[4U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[4U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[5U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[5U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[6U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[6U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[7U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[7U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[8U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[8U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[9U] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[9U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xaU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xaU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xbU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xbU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xcU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xcU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xdU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xdU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xeU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xeU];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix[0xfU] 
            = __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__gen_matrix__291__Vfuncout[0xfU];
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U] = (
                                                   (0xfffff800U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[0U]) 
                                                   | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (QData)((IData)(((vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                            << 0x10U) | (vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                         >> 0x10U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7effffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x20U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7dffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x21U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7bffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x22U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x77ffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x23U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x6fffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x24U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x5fffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x25U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x3fffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x26U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (0x2a00000000ULL ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o);
    __Vfunc_extract_d2h_rsp_intg__2__tl[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[0U];
    __Vfunc_extract_d2h_rsp_intg__2__tl[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[1U];
    __Vfunc_extract_d2h_rsp_intg__2__tl[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h[2U];
    __Vfunc_extract_d2h_rsp_intg__2__payload = ((0x38U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__2__tl[2U] 
                                                     << 5U) 
                                                    | (0x18U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__2__tl[1U] 
                                                          >> 0x1bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__2__tl[1U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__2__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__2__Vfuncout = __Vfunc_extract_d2h_rsp_intg__2__payload;
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__2__Vfuncout;
    vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__int_rdata = 0U;
    if (((~ (vlSelf->aes_tb__DOT__bus_req[0x25U] >> 0xbU)) 
         & (0x100U <= ((vlSelf->aes_tb__DOT__bus_req[0x27U] 
                        << 0x14U) | (vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                     >> 0xcU))))) {
        vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__int_rdata 
            = ((0x8000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                ? ((0x4000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                    ? ((0x2000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                        ? 0U : ((0x1000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                                 ? 0U : 0U)) : ((0x2000U 
                                                 & vlSelf->aes_tb__DOT__bus_req[0x26U])
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->aes_tb__DOT__bus_req[0x26U])
                                                  ? 0U
                                                  : 1U)))
                : ((0x4000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                    ? ((0x2000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                        ? 0U : ((0x1000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                                 ? 0U : 0xcafebabeU))
                    : ((0x2000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                        ? 0U : ((0x1000U & vlSelf->aes_tb__DOT__bus_req[0x26U])
                                 ? 0U : 0xdeadbeefU))));
    }
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x13U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x13U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[1U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x13U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[2U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x13U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[3U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x14U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[4U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x14U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[5U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x14U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[6U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x14U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[7U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x15U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[8U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x15U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[9U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x15U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0xaU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x15U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0xbU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x16U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0xcU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x16U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0xdU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x16U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0xeU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x16U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0xfU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x17U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0x10U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x17U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0x11U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x17U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0x12U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x17U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp[0x13U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h3882483c__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[4U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[4U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[1U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[4U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[2U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[4U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[3U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[5U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[4U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[5U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[5U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[5U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[6U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[5U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[7U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[6U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[8U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[6U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[9U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[6U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0xaU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[6U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0xbU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[7U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0xcU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[7U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0xdU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[7U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0xeU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[7U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0xfU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[8U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x10U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[8U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x11U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[8U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x12U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[8U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x13U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[9U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x14U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[9U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x15U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[9U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x16U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[9U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x17U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0xaU]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x18U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xaU] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x19U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xaU] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x1aU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0xaU] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x1bU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0xbU]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x1cU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xbU] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x1dU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xbU] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x1eU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0xbU] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x1fU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0xcU]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x20U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xcU] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x21U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xcU] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x22U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0xcU] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x23U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0xdU]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x24U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xdU] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x25U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xdU] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x26U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0xdU] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x27U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0xeU]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x28U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xeU] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x29U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xeU] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x2aU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0xeU] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x2bU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0xfU]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x2cU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xfU] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x2dU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0xfU] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x2eU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0xfU] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x2fU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x10U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x30U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x10U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x31U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x10U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x32U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x10U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x33U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x11U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x34U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x11U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x35U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x11U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x36U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x11U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x37U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & vlSelf->aes_tb__DOT__bus_req[0x12U]);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x38U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x12U] 
                    >> 8U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x39U] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (0xffU & (vlSelf->aes_tb__DOT__bus_req[0x12U] 
                    >> 0x10U));
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x3aU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0 
        = (vlSelf->aes_tb__DOT__bus_req[0x12U] >> 0x18U);
    vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp[0x3bU] 
        = aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h217768a4__0;
    __Vtemp_hbcecca61__0[0U] = (IData)((0xf00000000048001ULL 
                                        | ((QData)((IData)(
                                                           ((vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                                             << 0x14U) 
                                                            | (vlSelf->aes_tb__DOT__bus_req[0x25U] 
                                                               >> 0xcU)))) 
                                           << 0x18U)));
    __Vtemp_hbcecca61__0[1U] = ((0xf0000000U & (vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                                << 0x10U)) 
                                | (IData)(((0xf00000000048001ULL 
                                            | ((QData)((IData)(
                                                               ((vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                                                 << 0x14U) 
                                                                | (vlSelf->aes_tb__DOT__bus_req[0x25U] 
                                                                   >> 0xcU)))) 
                                               << 0x18U)) 
                                           >> 0x20U)));
    __Vtemp_hbcecca61__0[2U] = (0xfffffffU & ((0xfff0000U 
                                               & (vlSelf->aes_tb__DOT__bus_req[0x27U] 
                                                  << 0x10U)) 
                                              | (vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                                 >> 0x10U)));
    VL_EXTEND_WW(100,92, __Vtemp_h84ce321a__0, __Vtemp_hbcecca61__0);
    __Vtemp_hf6a42748__0[0U] = __Vtemp_h84ce321a__0[0U];
    __Vtemp_hf6a42748__0[1U] = __Vtemp_h84ce321a__0[1U];
    __Vtemp_hf6a42748__0[2U] = __Vtemp_h84ce321a__0[2U];
    __Vtemp_hf6a42748__0[3U] = (0x20U | __Vtemp_h84ce321a__0[3U]);
    VL_EXTEND_WW(105,102, __Vtemp_h80b53f61__0, __Vtemp_hf6a42748__0);
    vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__tl_o_pre[0U] 
        = __Vtemp_h80b53f61__0[0U];
    vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__tl_o_pre[1U] 
        = __Vtemp_h80b53f61__0[1U];
    vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__tl_o_pre[2U] 
        = __Vtemp_h80b53f61__0[2U];
    vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__tl_o_pre[3U] 
        = (((((~ (vlSelf->aes_tb__DOT__bus_req[0x25U] 
                  >> 0xbU)) & (~ (IData)(vlSelf->aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__pending_q))) 
             & (0x100U > ((vlSelf->aes_tb__DOT__bus_req[0x27U] 
                           << 0x14U) | (vlSelf->aes_tb__DOT__bus_req[0x26U] 
                                        >> 0xcU)))) 
            << 0xcU) | ((((0x1000U & vlSelf->aes_tb__DOT__bus_req[0x27U])
                           ? 0U : 4U) << 9U) | __Vtemp_h80b53f61__0[3U]));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffffffffffff8ULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                              >> 3U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                             >> 8U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x23U))))))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffffffffffffc7ULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0xcU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x1bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 5U))))))) 
              << 3U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffffffffffe3fULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x16U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x1dU))))))) 
              << 6U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffffffffff1ffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0xfU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffffffffff8fffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 9U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x24U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x14U))))))) 
              << 0xcU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffffffffc7fffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x2aU))))))) 
              << 0xfU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffffffffe3ffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x22U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x2eU))))))) 
              << 0x12U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffffffff1fffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x1aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0xdU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x26U))))))) 
              << 0x15U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffffff8ffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0xeU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x15U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x35U))))))) 
              << 0x18U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffffffc7ffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x27U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x3dU))))))) 
              << 0x1bU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffffe3fffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x2dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x3cU))))))) 
              << 0x1eU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffff1ffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x13U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffff8fffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x3eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 6U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x3bU))))))) 
              << 0x24U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfffffc7fffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x30U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x12U))))))) 
              << 0x27U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffffe3ffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x19U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x39U))))))) 
              << 0x2aU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffff1fffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x25U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x21U))))))) 
              << 0x2dU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfff8ffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x38U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x28U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x31U))))))) 
              << 0x30U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xffc7ffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0xbU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 7U))))))) 
              << 0x33U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xfe3fffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x18U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x29U))))))) 
              << 0x36U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0xf1ffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x32U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x37U))))))) 
              << 0x39U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0x8fffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                               >> 0x33U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                              >> 0x3fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                                               >> 0x1fU))))))) 
              << 0x3cU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state 
        = ((0x7fffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state) 
           | ((QData)((IData)((1U & (IData)((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out 
                                             >> 0x2cU))))) 
              << 0x3fU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [2U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [2U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [2U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i[2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in
        [2U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__spec_in_128[0U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
           [0U][3U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
           [0U][2U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__spec_in_192[0U] 
        = ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
            [0U][5U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
            [0U][1U]) ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
           [0U][0U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__spec_in_128[1U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
           [1U][3U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
           [1U][2U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__spec_in_192[1U] 
        = ((vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
            [1U][5U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
            [1U][1U]) ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i
           [1U][0U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_d 
        = ((((((((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_operation) 
                 | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_mode)) 
                | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_key_len)) 
               | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_sideload)) 
              | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_prng_reseed_rate)) 
             | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_manual_operation)) 
            | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_storage_err) 
               | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_storage_err))) 
           | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_gcm_phase) 
              | (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_num_valid_bytes)));
    vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[1U] = (
                                                   (0xfffe0001U 
                                                    & vlSelf->aes_tb__DOT__u_aes__DOT__hw2reg[1U]) 
                                                   | ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o) 
                                                      << 1U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op 
        = ((IData)((5U == (0xffU & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o))))
            ? 1U : ((IData)((6U == (0xffU & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o))))
                     ? 2U : ((IData)((9U == (0xffU 
                                             & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o))))
                              ? 1U : ((IData)((0xaU 
                                               == (0xffU 
                                                   & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o))))
                                       ? 2U : 1U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq = 1U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq = 1U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o) 
           & (IData)((vlSelf->aes_tb__DOT____Vcellinp__u_aes__edn_i 
                      >> 0x21U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq = 1U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq = 1U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_init[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_init[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_init[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_init[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    __Vtemp_h4df9d556__0[0U] = vlSelf->aes_tb__DOT__bus_req[0x18U];
    __Vtemp_h4df9d556__0[1U] = vlSelf->aes_tb__DOT__bus_req[0x19U];
    __Vtemp_h4df9d556__0[2U] = vlSelf->aes_tb__DOT__bus_req[0x1aU];
    __Vtemp_h4df9d556__0[3U] = vlSelf->aes_tb__DOT__bus_req[0x1bU];
    __Vtemp_hb019a8ec__0[0U] = vlSelf->aes_tb__DOT__bus_req[0x1cU];
    __Vtemp_hb019a8ec__0[1U] = vlSelf->aes_tb__DOT__bus_req[0x1dU];
    __Vtemp_hb019a8ec__0[2U] = vlSelf->aes_tb__DOT__bus_req[0x1eU];
    __Vtemp_hb019a8ec__0[3U] = vlSelf->aes_tb__DOT__bus_req[0x1fU];
    __Vtemp_hb019a8ec__0[4U] = vlSelf->aes_tb__DOT__bus_req[0x20U];
    __Vtemp_hb019a8ec__0[5U] = vlSelf->aes_tb__DOT__bus_req[0x21U];
    __Vtemp_hb019a8ec__0[6U] = vlSelf->aes_tb__DOT__bus_req[0x22U];
    __Vtemp_hb019a8ec__0[7U] = vlSelf->aes_tb__DOT__bus_req[0x23U];
    __Vtemp_h4aa51186__0[0U] = vlSelf->aes_tb__DOT__bus_req[0U];
    __Vtemp_h4aa51186__0[1U] = vlSelf->aes_tb__DOT__bus_req[1U];
    __Vtemp_h4aa51186__0[2U] = vlSelf->aes_tb__DOT__bus_req[2U];
    __Vtemp_h4aa51186__0[3U] = vlSelf->aes_tb__DOT__bus_req[3U];
    Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc5_TOP__aes_model_dpi_pkg(
                                                                                (&(vlSymsp->__Vscope_aes_tb__u_aes_tb_c_dpi)), 
                                                                                "src/lowrisc_dv_verilator_aes_tb_0/rtl/aes_tb_c_dpi.sv", 0xa0U, 1U, 
                                                                                (1U 
                                                                                & (vlSelf->aes_tb__DOT__bus_req[0x24U] 
                                                                                >> 0xaU)), 
                                                                                (0x3fU 
                                                                                & (vlSelf->aes_tb__DOT__bus_req[0x24U] 
                                                                                >> 3U)), __Vtemp_h4df9d556__0, 
                                                                                (7U 
                                                                                & vlSelf->aes_tb__DOT__bus_req[0x24U]), __Vtemp_hb019a8ec__0, 0x3cU, 0x14U, vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp, vlSelf->aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp, __Vtemp_h4aa51186__0, vlSelf->__Vtask_c_dpi_aes_crypt_message__Vdpioc5__298__data_o, vlSelf->__Vtask_c_dpi_aes_crypt_message__Vdpioc5__298__tag_o, vlSelf->__Vtask_c_dpi_aes_crypt_message__Vdpioc5__298__crypto_res);
}
