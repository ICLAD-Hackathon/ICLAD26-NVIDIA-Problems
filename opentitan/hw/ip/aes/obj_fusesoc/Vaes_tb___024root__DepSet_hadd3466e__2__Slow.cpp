// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb___024root.h"

VL_ATTR_COLD void Vaes_tb___024root___settle__TOP__6(Vaes_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_tb___024root___settle__TOP__6\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__12__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__12__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__12__transpose;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__270__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__270__out;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__273__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__273__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__273__out;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__274__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__274__in;
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__274__transpose;
    // Body
    vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[1U]) 
           | ((0xff0000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[1U]) 
              | ((0xff00U & (vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[2U] 
                             >> 8U)) | (0xffU & (vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[3U] 
                                                 >> 0x10U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[0U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[0U]) 
           | (0xffffff00U & ((0xff000000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[0U]) 
                             | ((0xff0000U & (vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[1U] 
                                              >> 8U)) 
                                | (0xff00U & (vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[2U] 
                                              >> 0x10U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[0U]) 
           | (vlSelf->__Vfunc_aes_state_to_ghash_vec__270__in[3U] 
              >> 0x18U));
    __Vfunc_aes_state_to_ghash_vec__270__out[0U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[0U];
    __Vfunc_aes_state_to_ghash_vec__270__out[1U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[1U];
    __Vfunc_aes_state_to_ghash_vec__270__out[2U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[2U];
    __Vfunc_aes_state_to_ghash_vec__270__out[3U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__270__byte_vec[3U];
    __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[0U] 
        = __Vfunc_aes_state_to_ghash_vec__270__out[0U];
    __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[1U] 
        = __Vfunc_aes_state_to_ghash_vec__270__out[1U];
    __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[2U] 
        = __Vfunc_aes_state_to_ghash_vec__270__out[2U];
    __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[3U] 
        = __Vfunc_aes_state_to_ghash_vec__270__out[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done[1U][0U] 
        = __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done[1U][1U] 
        = __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done[1U][2U] 
        = __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done[1U][3U] 
        = __Vfunc_aes_state_to_ghash_vec__270__Vfuncout[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[4U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[5U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[6U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[7U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done
        [1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[4U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[5U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[6U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[7U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[0U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [0U][0U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [1U][0U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[1U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [0U][1U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [1U][1U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[2U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [0U][2U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [1U][2U]);
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[3U] 
        = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [0U][3U] ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf
           [1U][3U]);
    __Vfunc_aes_transpose__12__in[0U] = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[0U] 
                                         ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_out[0U]);
    __Vfunc_aes_transpose__12__in[1U] = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[1U] 
                                         ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_out[1U]);
    __Vfunc_aes_transpose__12__in[2U] = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[2U] 
                                         ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_out[2U]);
    __Vfunc_aes_transpose__12__in[3U] = (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[3U] 
                                         ^ vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_out[3U]);
    __Vfunc_aes_transpose__12__transpose[0U] = 0U;
    __Vfunc_aes_transpose__12__transpose[1U] = 0U;
    __Vfunc_aes_transpose__12__transpose[2U] = 0U;
    __Vfunc_aes_transpose__12__transpose[3U] = 0U;
    __Vfunc_aes_transpose__12__transpose[0U] = ((0xffffff00U 
                                                 & __Vfunc_aes_transpose__12__transpose[0U]) 
                                                | (0xffU 
                                                   & __Vfunc_aes_transpose__12__in[0U]));
    __Vfunc_aes_transpose__12__transpose[1U] = ((0xffffff00U 
                                                 & __Vfunc_aes_transpose__12__transpose[1U]) 
                                                | (0xffU 
                                                   & (__Vfunc_aes_transpose__12__in[0U] 
                                                      >> 8U)));
    __Vfunc_aes_transpose__12__transpose[2U] = ((0xffffff00U 
                                                 & __Vfunc_aes_transpose__12__transpose[2U]) 
                                                | (0xffU 
                                                   & (__Vfunc_aes_transpose__12__in[0U] 
                                                      >> 0x10U)));
    __Vfunc_aes_transpose__12__transpose[3U] = ((0xffffff00U 
                                                 & __Vfunc_aes_transpose__12__transpose[3U]) 
                                                | (__Vfunc_aes_transpose__12__in[0U] 
                                                   >> 0x18U));
    __Vfunc_aes_transpose__12__transpose[0U] = ((0xffff00ffU 
                                                 & __Vfunc_aes_transpose__12__transpose[0U]) 
                                                | (0xff00U 
                                                   & (__Vfunc_aes_transpose__12__in[1U] 
                                                      << 8U)));
    __Vfunc_aes_transpose__12__transpose[1U] = ((0xffff00ffU 
                                                 & __Vfunc_aes_transpose__12__transpose[1U]) 
                                                | (0xff00U 
                                                   & __Vfunc_aes_transpose__12__in[1U]));
    __Vfunc_aes_transpose__12__transpose[2U] = ((0xffff00ffU 
                                                 & __Vfunc_aes_transpose__12__transpose[2U]) 
                                                | (0xff00U 
                                                   & (__Vfunc_aes_transpose__12__in[1U] 
                                                      >> 8U)));
    __Vfunc_aes_transpose__12__transpose[3U] = ((0xffff00ffU 
                                                 & __Vfunc_aes_transpose__12__transpose[3U]) 
                                                | (0xff00U 
                                                   & (__Vfunc_aes_transpose__12__in[1U] 
                                                      >> 0x10U)));
    __Vfunc_aes_transpose__12__transpose[0U] = ((0xff00ffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[0U]) 
                                                | (0xff0000U 
                                                   & (__Vfunc_aes_transpose__12__in[2U] 
                                                      << 0x10U)));
    __Vfunc_aes_transpose__12__transpose[1U] = ((0xff00ffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[1U]) 
                                                | (0xff0000U 
                                                   & (__Vfunc_aes_transpose__12__in[2U] 
                                                      << 8U)));
    __Vfunc_aes_transpose__12__transpose[2U] = ((0xff00ffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[2U]) 
                                                | (0xff0000U 
                                                   & __Vfunc_aes_transpose__12__in[2U]));
    __Vfunc_aes_transpose__12__transpose[3U] = ((0xff00ffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[3U]) 
                                                | (0xff0000U 
                                                   & (__Vfunc_aes_transpose__12__in[2U] 
                                                      >> 8U)));
    __Vfunc_aes_transpose__12__transpose[0U] = ((0xffffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[0U]) 
                                                | (__Vfunc_aes_transpose__12__in[3U] 
                                                   << 0x18U));
    __Vfunc_aes_transpose__12__transpose[1U] = ((0xffffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[1U]) 
                                                | (0xff000000U 
                                                   & (__Vfunc_aes_transpose__12__in[3U] 
                                                      << 0x10U)));
    __Vfunc_aes_transpose__12__transpose[2U] = ((0xffffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[2U]) 
                                                | (0xff000000U 
                                                   & (__Vfunc_aes_transpose__12__in[3U] 
                                                      << 8U)));
    __Vfunc_aes_transpose__12__transpose[3U] = ((0xffffffU 
                                                 & __Vfunc_aes_transpose__12__transpose[3U]) 
                                                | (0xff000000U 
                                                   & __Vfunc_aes_transpose__12__in[3U]));
    __Vfunc_aes_transpose__12__Vfuncout[0U] = __Vfunc_aes_transpose__12__transpose[0U];
    __Vfunc_aes_transpose__12__Vfuncout[1U] = __Vfunc_aes_transpose__12__transpose[1U];
    __Vfunc_aes_transpose__12__Vfuncout[2U] = __Vfunc_aes_transpose__12__transpose[2U];
    __Vfunc_aes_transpose__12__Vfuncout[3U] = __Vfunc_aes_transpose__12__transpose[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[0U] 
        = __Vfunc_aes_transpose__12__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[1U] 
        = __Vfunc_aes_transpose__12__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[2U] 
        = __Vfunc_aes_transpose__12__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[3U] 
        = __Vfunc_aes_transpose__12__Vfuncout[3U];
    if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_sel_ctrl))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[3U];
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o[3U];
    }
    __Vfunc_aes_transpose__274__in[0U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[0U];
    __Vfunc_aes_transpose__274__in[1U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[1U];
    __Vfunc_aes_transpose__274__in[2U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[2U];
    __Vfunc_aes_transpose__274__in[3U] = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out[3U];
    __Vfunc_aes_transpose__274__transpose[0U] = 0U;
    __Vfunc_aes_transpose__274__transpose[1U] = 0U;
    __Vfunc_aes_transpose__274__transpose[2U] = 0U;
    __Vfunc_aes_transpose__274__transpose[3U] = 0U;
    __Vfunc_aes_transpose__274__transpose[0U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__274__transpose[0U]) 
                                                 | (0xffU 
                                                    & __Vfunc_aes_transpose__274__in[0U]));
    __Vfunc_aes_transpose__274__transpose[1U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__274__transpose[1U]) 
                                                 | (0xffU 
                                                    & (__Vfunc_aes_transpose__274__in[0U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__274__transpose[2U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__274__transpose[2U]) 
                                                 | (0xffU 
                                                    & (__Vfunc_aes_transpose__274__in[0U] 
                                                       >> 0x10U)));
    __Vfunc_aes_transpose__274__transpose[3U] = ((0xffffff00U 
                                                  & __Vfunc_aes_transpose__274__transpose[3U]) 
                                                 | (__Vfunc_aes_transpose__274__in[0U] 
                                                    >> 0x18U));
    __Vfunc_aes_transpose__274__transpose[0U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__274__transpose[0U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__274__in[1U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__274__transpose[1U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__274__transpose[1U]) 
                                                 | (0xff00U 
                                                    & __Vfunc_aes_transpose__274__in[1U]));
    __Vfunc_aes_transpose__274__transpose[2U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__274__transpose[2U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__274__in[1U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__274__transpose[3U] = ((0xffff00ffU 
                                                  & __Vfunc_aes_transpose__274__transpose[3U]) 
                                                 | (0xff00U 
                                                    & (__Vfunc_aes_transpose__274__in[1U] 
                                                       >> 0x10U)));
    __Vfunc_aes_transpose__274__transpose[0U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[0U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__274__in[2U] 
                                                       << 0x10U)));
    __Vfunc_aes_transpose__274__transpose[1U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[1U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__274__in[2U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__274__transpose[2U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[2U]) 
                                                 | (0xff0000U 
                                                    & __Vfunc_aes_transpose__274__in[2U]));
    __Vfunc_aes_transpose__274__transpose[3U] = ((0xff00ffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[3U]) 
                                                 | (0xff0000U 
                                                    & (__Vfunc_aes_transpose__274__in[2U] 
                                                       >> 8U)));
    __Vfunc_aes_transpose__274__transpose[0U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[0U]) 
                                                 | (__Vfunc_aes_transpose__274__in[3U] 
                                                    << 0x18U));
    __Vfunc_aes_transpose__274__transpose[1U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[1U]) 
                                                 | (0xff000000U 
                                                    & (__Vfunc_aes_transpose__274__in[3U] 
                                                       << 0x10U)));
    __Vfunc_aes_transpose__274__transpose[2U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[2U]) 
                                                 | (0xff000000U 
                                                    & (__Vfunc_aes_transpose__274__in[3U] 
                                                       << 8U)));
    __Vfunc_aes_transpose__274__transpose[3U] = ((0xffffffU 
                                                  & __Vfunc_aes_transpose__274__transpose[3U]) 
                                                 | (0xff000000U 
                                                    & __Vfunc_aes_transpose__274__in[3U]));
    __Vfunc_aes_transpose__274__Vfuncout[0U] = __Vfunc_aes_transpose__274__transpose[0U];
    __Vfunc_aes_transpose__274__Vfuncout[1U] = __Vfunc_aes_transpose__274__transpose[1U];
    __Vfunc_aes_transpose__274__Vfuncout[2U] = __Vfunc_aes_transpose__274__transpose[2U];
    __Vfunc_aes_transpose__274__Vfuncout[3U] = __Vfunc_aes_transpose__274__transpose[3U];
    __Vfunc_aes_state_to_ghash_vec__273__in[0U] = __Vfunc_aes_transpose__274__Vfuncout[0U];
    __Vfunc_aes_state_to_ghash_vec__273__in[1U] = __Vfunc_aes_transpose__274__Vfuncout[1U];
    __Vfunc_aes_state_to_ghash_vec__273__in[2U] = __Vfunc_aes_transpose__274__Vfuncout[2U];
    __Vfunc_aes_state_to_ghash_vec__273__in[3U] = __Vfunc_aes_transpose__274__Vfuncout[3U];
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[3U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[3U]) 
           | (0xffffff00U & ((__Vfunc_aes_state_to_ghash_vec__273__in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_aes_state_to_ghash_vec__273__in[1U] 
                                               << 0x10U)) 
                                           | (0xff00U 
                                              & (__Vfunc_aes_state_to_ghash_vec__273__in[2U] 
                                                 << 8U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[2U] 
        = ((0xffffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[2U]) 
           | (0xffff0000U & ((0xff000000U & (__Vfunc_aes_state_to_ghash_vec__273__in[0U] 
                                             << 0x10U)) 
                             | (0xff0000U & (__Vfunc_aes_state_to_ghash_vec__273__in[1U] 
                                             << 8U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[3U]) 
           | (0xffU & __Vfunc_aes_state_to_ghash_vec__273__in[3U]));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[1U]) 
           | (0xff000000U & (__Vfunc_aes_state_to_ghash_vec__273__in[0U] 
                             << 8U)));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[2U]) 
           | (0xffffffU & ((0xff00U & __Vfunc_aes_state_to_ghash_vec__273__in[2U]) 
                           | (0xffU & (__Vfunc_aes_state_to_ghash_vec__273__in[3U] 
                                       >> 8U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[1U]) 
           | ((0xff0000U & __Vfunc_aes_state_to_ghash_vec__273__in[1U]) 
              | ((0xff00U & (__Vfunc_aes_state_to_ghash_vec__273__in[2U] 
                             >> 8U)) | (0xffU & (__Vfunc_aes_state_to_ghash_vec__273__in[3U] 
                                                 >> 0x10U)))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[0U] 
        = ((0xffU & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[0U]) 
           | (0xffffff00U & ((0xff000000U & __Vfunc_aes_state_to_ghash_vec__273__in[0U]) 
                             | ((0xff0000U & (__Vfunc_aes_state_to_ghash_vec__273__in[1U] 
                                              >> 8U)) 
                                | (0xff00U & (__Vfunc_aes_state_to_ghash_vec__273__in[2U] 
                                              >> 0x10U))))));
    vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[0U]) 
           | (__Vfunc_aes_state_to_ghash_vec__273__in[3U] 
              >> 0x18U));
    __Vfunc_aes_state_to_ghash_vec__273__out[0U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[0U];
    __Vfunc_aes_state_to_ghash_vec__273__out[1U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[1U];
    __Vfunc_aes_state_to_ghash_vec__273__out[2U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[2U];
    __Vfunc_aes_state_to_ghash_vec__273__out[3U] = 
        vlSelf->__Vfunc_aes_state_to_ghash_vec__273__byte_vec[3U];
    __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[0U] 
        = __Vfunc_aes_state_to_ghash_vec__273__out[0U];
    __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[1U] 
        = __Vfunc_aes_state_to_ghash_vec__273__out[1U];
    __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[2U] 
        = __Vfunc_aes_state_to_ghash_vec__273__out[2U];
    __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[3U] 
        = __Vfunc_aes_state_to_ghash_vec__273__out[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[0U] 
        = __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[1U] 
        = __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[2U] 
        = __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[3U] 
        = __Vfunc_aes_state_to_ghash_vec__273__Vfuncout[3U];
    if ((0x20U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
        if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
            if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                    if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                                [0U][0U];
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                                [0U][1U];
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                                [0U][2U];
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                                [0U][3U];
                        } else {
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_o[0U];
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_o[1U];
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_o[2U];
                            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_o[3U];
                        }
                    } else {
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                            [0U][0U];
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                            [0U][1U];
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                            [0U][2U];
                        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                            [0U][3U];
                    }
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][0U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][1U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][2U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][3U];
                }
            } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][3U];
            } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][3U];
            } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][3U];
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d[3U];
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][3U];
        }
    } else if ((0x10U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
        if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
            if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][0U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][1U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][2U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][3U];
                } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv[0U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv[1U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv[2U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv[3U];
                } else {
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][0U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][1U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][2U];
                    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                        [0U][3U];
                }
            } else {
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][0U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][1U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][2U];
                vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                    = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                    [0U][3U];
            }
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][3U];
        }
    } else if ((8U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
        if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][3U];
        } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][3U];
        } else if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][3U];
        } else {
            vlSelf->__Vfunc_aes_transpose__7__in[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[0U];
            vlSelf->__Vfunc_aes_transpose__7__in[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[1U];
            vlSelf->__Vfunc_aes_transpose__7__in[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[2U];
            vlSelf->__Vfunc_aes_transpose__7__in[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out[3U];
            vlSelf->__Vfunc_aes_transpose__7__transpose[0U] = 0U;
            vlSelf->__Vfunc_aes_transpose__7__transpose[1U] = 0U;
            vlSelf->__Vfunc_aes_transpose__7__transpose[2U] = 0U;
            vlSelf->__Vfunc_aes_transpose__7__transpose[3U] = 0U;
            vlSelf->__Vfunc_aes_transpose__7__transpose[0U] 
                = ((0xffffff00U & vlSelf->__Vfunc_aes_transpose__7__transpose[0U]) 
                   | (0xffU & vlSelf->__Vfunc_aes_transpose__7__in[0U]));
            vlSelf->__Vfunc_aes_transpose__7__transpose[1U] 
                = ((0xffffff00U & vlSelf->__Vfunc_aes_transpose__7__transpose[1U]) 
                   | (0xffU & (vlSelf->__Vfunc_aes_transpose__7__in[0U] 
                               >> 8U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[2U] 
                = ((0xffffff00U & vlSelf->__Vfunc_aes_transpose__7__transpose[2U]) 
                   | (0xffU & (vlSelf->__Vfunc_aes_transpose__7__in[0U] 
                               >> 0x10U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[3U] 
                = ((0xffffff00U & vlSelf->__Vfunc_aes_transpose__7__transpose[3U]) 
                   | (vlSelf->__Vfunc_aes_transpose__7__in[0U] 
                      >> 0x18U));
            vlSelf->__Vfunc_aes_transpose__7__transpose[0U] 
                = ((0xffff00ffU & vlSelf->__Vfunc_aes_transpose__7__transpose[0U]) 
                   | (0xff00U & (vlSelf->__Vfunc_aes_transpose__7__in[1U] 
                                 << 8U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[1U] 
                = ((0xffff00ffU & vlSelf->__Vfunc_aes_transpose__7__transpose[1U]) 
                   | (0xff00U & vlSelf->__Vfunc_aes_transpose__7__in[1U]));
            vlSelf->__Vfunc_aes_transpose__7__transpose[2U] 
                = ((0xffff00ffU & vlSelf->__Vfunc_aes_transpose__7__transpose[2U]) 
                   | (0xff00U & (vlSelf->__Vfunc_aes_transpose__7__in[1U] 
                                 >> 8U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[3U] 
                = ((0xffff00ffU & vlSelf->__Vfunc_aes_transpose__7__transpose[3U]) 
                   | (0xff00U & (vlSelf->__Vfunc_aes_transpose__7__in[1U] 
                                 >> 0x10U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[0U] 
                = ((0xff00ffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[0U]) 
                   | (0xff0000U & (vlSelf->__Vfunc_aes_transpose__7__in[2U] 
                                   << 0x10U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[1U] 
                = ((0xff00ffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[1U]) 
                   | (0xff0000U & (vlSelf->__Vfunc_aes_transpose__7__in[2U] 
                                   << 8U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[2U] 
                = ((0xff00ffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[2U]) 
                   | (0xff0000U & vlSelf->__Vfunc_aes_transpose__7__in[2U]));
            vlSelf->__Vfunc_aes_transpose__7__transpose[3U] 
                = ((0xff00ffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[3U]) 
                   | (0xff0000U & (vlSelf->__Vfunc_aes_transpose__7__in[2U] 
                                   >> 8U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[0U] 
                = ((0xffffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[0U]) 
                   | (vlSelf->__Vfunc_aes_transpose__7__in[3U] 
                      << 0x18U));
            vlSelf->__Vfunc_aes_transpose__7__transpose[1U] 
                = ((0xffffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[1U]) 
                   | (0xff000000U & (vlSelf->__Vfunc_aes_transpose__7__in[3U] 
                                     << 0x10U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[2U] 
                = ((0xffffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[2U]) 
                   | (0xff000000U & (vlSelf->__Vfunc_aes_transpose__7__in[3U] 
                                     << 8U)));
            vlSelf->__Vfunc_aes_transpose__7__transpose[3U] 
                = ((0xffffffU & vlSelf->__Vfunc_aes_transpose__7__transpose[3U]) 
                   | (0xff000000U & vlSelf->__Vfunc_aes_transpose__7__in[3U]));
            vlSelf->__Vfunc_aes_transpose__7__Vfuncout[0U] 
                = vlSelf->__Vfunc_aes_transpose__7__transpose[0U];
            vlSelf->__Vfunc_aes_transpose__7__Vfuncout[1U] 
                = vlSelf->__Vfunc_aes_transpose__7__transpose[1U];
            vlSelf->__Vfunc_aes_transpose__7__Vfuncout[2U] 
                = vlSelf->__Vfunc_aes_transpose__7__transpose[2U];
            vlSelf->__Vfunc_aes_transpose__7__Vfuncout[3U] 
                = vlSelf->__Vfunc_aes_transpose__7__transpose[3U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->__Vfunc_aes_transpose__7__Vfuncout[0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->__Vfunc_aes_transpose__7__Vfuncout[1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->__Vfunc_aes_transpose__7__Vfuncout[2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->__Vfunc_aes_transpose__7__Vfuncout[3U];
        }
    } else if ((4U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][3U];
    } else if ((2U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
        if ((1U & (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl))) {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q[3U];
        } else {
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][0U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][1U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][2U];
            vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
                = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
                [0U][3U];
        }
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128
            [0U][3U];
    }
    if ((3U == (IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_sel))) {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev[3U];
    } else {
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[0U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[0U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[1U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[1U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[2U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[2U];
        vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[3U] 
            = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out[3U];
    }
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[3U] 
        = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[3U]) 
           | (0xffff0000U & ((((0U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                               >> 6U)))
                                ? (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[3U] 
                                   >> 0x18U) : 0U) 
                              << 0x18U) | (((1U < (0x1fU 
                                                   & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                      >> 6U)))
                                             ? (0xffU 
                                                & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[3U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           << 0x10U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[3U] 
        = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[3U]) 
           | ((((2U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                >> 6U))) ? (0xffU & 
                                            (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[3U] 
                                             >> 8U))
                 : 0U) << 8U) | ((3U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                 >> 6U)))
                                  ? (0xffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[3U])
                                  : 0U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[2U] 
        = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[2U]) 
           | (0xffff0000U & ((((4U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                               >> 6U)))
                                ? (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[2U] 
                                   >> 0x18U) : 0U) 
                              << 0x18U) | (((5U < (0x1fU 
                                                   & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                      >> 6U)))
                                             ? (0xffU 
                                                & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[2U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           << 0x10U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[2U] 
        = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[2U]) 
           | ((((6U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                >> 6U))) ? (0xffU & 
                                            (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[2U] 
                                             >> 8U))
                 : 0U) << 8U) | ((7U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                 >> 6U)))
                                  ? (0xffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[2U])
                                  : 0U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[1U] 
        = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[1U]) 
           | (0xffff0000U & ((((8U < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                               >> 6U)))
                                ? (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[1U] 
                                   >> 0x18U) : 0U) 
                              << 0x18U) | (((9U < (0x1fU 
                                                   & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                      >> 6U)))
                                             ? (0xffU 
                                                & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[1U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           << 0x10U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[1U] 
        = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[1U]) 
           | ((((0xaU < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                  >> 6U))) ? (0xffU 
                                              & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[1U] 
                                                 >> 8U))
                 : 0U) << 8U) | ((0xbU < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                   >> 6U)))
                                  ? (0xffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[1U])
                                  : 0U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[0U] 
        = ((0xffffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[0U]) 
           | (0xffff0000U & ((((0xcU < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                 >> 6U)))
                                ? (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[0U] 
                                   >> 0x18U) : 0U) 
                              << 0x18U) | (((0xdU < 
                                             (0x1fU 
                                              & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                 >> 6U)))
                                             ? (0xffU 
                                                & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[0U] 
                                                   >> 0x10U))
                                             : 0U) 
                                           << 0x10U))));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[0U] 
        = ((0xffff0000U & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[0U]) 
           | ((((0xeU < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                  >> 6U))) ? (0xffU 
                                              & (vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[0U] 
                                                 >> 8U))
                 : 0U) << 8U) | ((0xfU < (0x1fU & ((IData)(vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o) 
                                                   >> 6U)))
                                  ? (0xffU & vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in[0U])
                                  : 0U)));
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[0U][0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in[1U][0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid[3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][2U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][2U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][2U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [0U][2U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][0U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][0U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][0U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][0U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][1U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][1U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][1U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][1U][3U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][2U][0U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][2U][1U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][2U][2U];
    vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i[2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in
        [1U][2U][3U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][0U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][1U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][2U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][3U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][0U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][1U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][2U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][3U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][0U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][1U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][2U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][3U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][0U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][1U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][2U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[0U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [0U][3U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][0U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][1U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][2U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[1U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [1U][3U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][0U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][0U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][1U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][1U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][2U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][2U];
    vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in.in_i[2U][3U] 
        = vlSelf->aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i
        [2U][3U];
}

VL_ATTR_COLD void Vaes_tb___024root___initial__TOP__1(Vaes_tb___024root* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_tb_pkg___initial__TOP__aes_tb_pkg__1(Vaes_tb_aes_tb_pkg* vlSelf);

VL_ATTR_COLD void Vaes_tb___024root___eval_initial(Vaes_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_tb___024root___eval_initial\n"); );
    // Body
    Vaes_tb___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vaes_tb_aes_tb_pkg___initial__TOP__aes_tb_pkg__1((&vlSymsp->TOP__aes_tb_pkg));
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vaes_tb___024root___settle__TOP__2(Vaes_tb___024root* vlSelf);
VL_ATTR_COLD void Vaes_tb___024root___settle__TOP__3(Vaes_tb___024root* vlSelf);
VL_ATTR_COLD void Vaes_tb___024root___settle__TOP__4(Vaes_tb___024root* vlSelf);
void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel__1(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__2(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__3(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__4(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__5(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__6(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__7(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__8(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__9(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__10(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__11(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__12(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__13(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__14(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__15(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__16(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__17(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__18(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__19(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__20(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__21(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__22(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__23(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__24(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__25(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__26(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__27(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__28(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__29(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__30(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__31(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__32(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__33(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__34(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__35(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__36(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__37(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__38(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__39(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__40(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel__2(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf);
void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel__3(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf);
void Vaes_tb_prim_onehot_mux__W80_I3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__1(Vaes_tb_prim_onehot_mux__W80_I3* vlSelf);
VL_ATTR_COLD void Vaes_tb___024root___settle__TOP__5(Vaes_tb___024root* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__41(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__42(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__43(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__44(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__45(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__46(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__47(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__48(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__49(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__50(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__51(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__52(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__53(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__54(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__55(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__56(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__57(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__58(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__59(Vaes_tb_aes_sbox__S4* vlSelf);
VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__60(Vaes_tb_aes_sbox__S4* vlSelf);
void Vaes_tb_prim_onehot_mux__W80_I3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__2(Vaes_tb_prim_onehot_mux__W80_I3* vlSelf);
void Vaes_tb_prim_onehot_mux__W80_I3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__3(Vaes_tb_prim_onehot_mux__W80_I3* vlSelf);
void Vaes_tb___024root___settle__TOP__7(Vaes_tb___024root* vlSelf);

VL_ATTR_COLD void Vaes_tb___024root___eval_settle(Vaes_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_tb___024root___eval_settle\n"); );
    // Body
    Vaes_tb___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vaes_tb___024root___settle__TOP__3(vlSelf);
    Vaes_tb___024root___settle__TOP__4(vlSelf);
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel__1((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__2((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__3((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__4((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__5((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__6((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__7((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__8((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__9((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__10((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__11((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__12((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__13((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__14((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__15((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__16((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__17((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__18((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__19((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__20((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__21((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__22((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__23((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__24((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__25((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__26((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__27((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__28((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__29((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__30((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__31((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__32((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__33((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__34((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__35((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__36((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__37((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__38((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__39((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__40((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i));
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel__2((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel));
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel__3((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel));
    Vaes_tb_prim_onehot_mux__W80_I3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__1((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b));
    Vaes_tb___024root___settle__TOP__5(vlSelf);
    Vaes_tb___024root___settle__TOP__6(vlSelf);
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__41((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__42((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__43((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__44((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__45((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__46((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__47((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__48((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__49((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__50((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__51((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__52((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__53((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__54((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__55((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__56((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__57((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__58((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__59((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i));
    Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__60((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i));
    Vaes_tb_prim_onehot_mux__W80_I3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__2((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in));
    Vaes_tb_prim_onehot_mux__W80_I3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__3((&vlSymsp->TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in));
    Vaes_tb___024root___settle__TOP__7(vlSelf);
}
