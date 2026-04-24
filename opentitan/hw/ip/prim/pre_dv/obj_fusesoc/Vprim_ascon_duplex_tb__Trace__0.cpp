// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vprim_ascon_duplex_tb__Syms.h"


void Vprim_ascon_duplex_tb___024root__trace_chg_sub_0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep);

void Vprim_ascon_duplex_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vprim_ascon_duplex_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprim_ascon_duplex_tb___024root*>(voidSelf);
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vprim_ascon_duplex_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<10>/*319:0*/ Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0;

void Vprim_ascon_duplex_tb___024root__trace_chg_sub_0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<10>/*319:0*/ __Vtemp_h97546a74__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgCData(oldp+0,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[0]),8);
        tracep->chgCData(oldp+1,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[1]),8);
        tracep->chgCData(oldp+2,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[2]),8);
        tracep->chgCData(oldp+3,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[3]),8);
        tracep->chgCData(oldp+4,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[4]),8);
        tracep->chgCData(oldp+5,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[5]),8);
        tracep->chgCData(oldp+6,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[6]),8);
        tracep->chgCData(oldp+7,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[7]),8);
        tracep->chgCData(oldp+8,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[8]),8);
        tracep->chgCData(oldp+9,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[9]),8);
        tracep->chgCData(oldp+10,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[0]),8);
        tracep->chgCData(oldp+11,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[1]),8);
        tracep->chgCData(oldp+12,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[2]),8);
        tracep->chgCData(oldp+13,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[3]),8);
        tracep->chgCData(oldp+14,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[4]),8);
        tracep->chgCData(oldp+15,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[5]),8);
        tracep->chgCData(oldp+16,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[6]),8);
        tracep->chgCData(oldp+17,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[7]),8);
        tracep->chgCData(oldp+18,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[8]),8);
        tracep->chgCData(oldp+19,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[9]),8);
        tracep->chgCData(oldp+20,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[0]),8);
        tracep->chgCData(oldp+21,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[1]),8);
        tracep->chgCData(oldp+22,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[2]),8);
        tracep->chgCData(oldp+23,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[3]),8);
        tracep->chgCData(oldp+24,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[4]),8);
        tracep->chgCData(oldp+25,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[5]),8);
        tracep->chgCData(oldp+26,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[6]),8);
        tracep->chgCData(oldp+27,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[7]),8);
        tracep->chgCData(oldp+28,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[0]),8);
        tracep->chgCData(oldp+29,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[1]),8);
        tracep->chgCData(oldp+30,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[2]),8);
        tracep->chgCData(oldp+31,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[3]),8);
        tracep->chgCData(oldp+32,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[4]),8);
        tracep->chgCData(oldp+33,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[5]),8);
        tracep->chgCData(oldp+34,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[6]),8);
        tracep->chgCData(oldp+35,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[7]),8);
        tracep->chgCData(oldp+36,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[8]),8);
        tracep->chgCData(oldp+37,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[9]),8);
        tracep->chgCData(oldp+38,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[10]),8);
        tracep->chgCData(oldp+39,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[11]),8);
        tracep->chgCData(oldp+40,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[12]),8);
        tracep->chgCData(oldp+41,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[13]),8);
        tracep->chgCData(oldp+42,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[14]),8);
        tracep->chgCData(oldp+43,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[15]),8);
        tracep->chgCData(oldp+44,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[0]),8);
        tracep->chgCData(oldp+45,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[1]),8);
        tracep->chgCData(oldp+46,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[2]),8);
        tracep->chgCData(oldp+47,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[3]),8);
        tracep->chgCData(oldp+48,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[4]),8);
        tracep->chgCData(oldp+49,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[5]),8);
        tracep->chgCData(oldp+50,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[6]),8);
        tracep->chgCData(oldp+51,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[7]),8);
        tracep->chgCData(oldp+52,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[8]),8);
        tracep->chgCData(oldp+53,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[9]),8);
        tracep->chgCData(oldp+54,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[10]),8);
        tracep->chgCData(oldp+55,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[11]),8);
        tracep->chgCData(oldp+56,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[12]),8);
        tracep->chgCData(oldp+57,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[13]),8);
        tracep->chgCData(oldp+58,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[14]),8);
        tracep->chgCData(oldp+59,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[15]),8);
        tracep->chgCData(oldp+60,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[0]),8);
        tracep->chgCData(oldp+61,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[1]),8);
        tracep->chgCData(oldp+62,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[2]),8);
        tracep->chgCData(oldp+63,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[3]),8);
        tracep->chgCData(oldp+64,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[4]),8);
        tracep->chgCData(oldp+65,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[5]),8);
        tracep->chgCData(oldp+66,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[6]),8);
        tracep->chgCData(oldp+67,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[7]),8);
        tracep->chgCData(oldp+68,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[8]),8);
        tracep->chgCData(oldp+69,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[9]),8);
        tracep->chgCData(oldp+70,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[10]),8);
        tracep->chgCData(oldp+71,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[11]),8);
        tracep->chgCData(oldp+72,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[12]),8);
        tracep->chgCData(oldp+73,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[13]),8);
        tracep->chgCData(oldp+74,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[14]),8);
        tracep->chgCData(oldp+75,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[15]),8);
        tracep->chgCData(oldp+76,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[16]),8);
        tracep->chgCData(oldp+77,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[17]),8);
        tracep->chgCData(oldp+78,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[18]),8);
        tracep->chgCData(oldp+79,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[19]),8);
        tracep->chgCData(oldp+80,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[20]),8);
        tracep->chgCData(oldp+81,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[21]),8);
        tracep->chgCData(oldp+82,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[22]),8);
        tracep->chgCData(oldp+83,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[23]),8);
        tracep->chgCData(oldp+84,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[24]),8);
        tracep->chgCData(oldp+85,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[25]),8);
        tracep->chgCData(oldp+86,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[0]),8);
        tracep->chgCData(oldp+87,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[1]),8);
        tracep->chgCData(oldp+88,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[2]),8);
        tracep->chgCData(oldp+89,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[3]),8);
        tracep->chgCData(oldp+90,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[4]),8);
        tracep->chgCData(oldp+91,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[5]),8);
        tracep->chgCData(oldp+92,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[6]),8);
        tracep->chgCData(oldp+93,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[7]),8);
        tracep->chgCData(oldp+94,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[8]),8);
        tracep->chgCData(oldp+95,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[9]),8);
        tracep->chgCData(oldp+96,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[10]),8);
        tracep->chgCData(oldp+97,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[11]),8);
        tracep->chgCData(oldp+98,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[12]),8);
        tracep->chgCData(oldp+99,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[13]),8);
        tracep->chgCData(oldp+100,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[14]),8);
        tracep->chgCData(oldp+101,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[15]),8);
        tracep->chgCData(oldp+102,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[0]),8);
        tracep->chgCData(oldp+103,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[1]),8);
        tracep->chgCData(oldp+104,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[2]),8);
        tracep->chgCData(oldp+105,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[3]),8);
        tracep->chgCData(oldp+106,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[4]),8);
        tracep->chgCData(oldp+107,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[5]),8);
        tracep->chgCData(oldp+108,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[6]),8);
        tracep->chgCData(oldp+109,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[7]),8);
        tracep->chgCData(oldp+110,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[8]),8);
        tracep->chgCData(oldp+111,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[9]),8);
        tracep->chgCData(oldp+112,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[10]),8);
        tracep->chgCData(oldp+113,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[11]),8);
        tracep->chgCData(oldp+114,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[12]),8);
        tracep->chgCData(oldp+115,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[13]),8);
        tracep->chgCData(oldp+116,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[14]),8);
        tracep->chgCData(oldp+117,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[15]),8);
        tracep->chgCData(oldp+118,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[16]),8);
        tracep->chgCData(oldp+119,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[17]),8);
        tracep->chgCData(oldp+120,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[18]),8);
        tracep->chgCData(oldp+121,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[19]),8);
        tracep->chgCData(oldp+122,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[20]),8);
        tracep->chgCData(oldp+123,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[21]),8);
        tracep->chgCData(oldp+124,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[22]),8);
        tracep->chgCData(oldp+125,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[23]),8);
        tracep->chgCData(oldp+126,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[24]),8);
        tracep->chgCData(oldp+127,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[25]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+128,(vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d),32);
        tracep->chgIData(oldp+129,(vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q),32);
        tracep->chgIData(oldp+130,(vlSelf->prim_ascon_duplex_tb__DOT__tb_state),32);
        tracep->chgWData(oldp+131,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad),128);
        tracep->chgBit(oldp+135,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid));
        tracep->chgBit(oldp+136,(vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data));
        tracep->chgBit(oldp+137,(vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data));
        tracep->chgCData(oldp+138,(vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad),4);
        tracep->chgCData(oldp+139,(vlSelf->prim_ascon_duplex_tb__DOT__idle),4);
        tracep->chgBit(oldp+140,(vlSelf->prim_ascon_duplex_tb__DOT__start));
        tracep->chgBit(oldp+141,(vlSelf->prim_ascon_duplex_tb__DOT__fsm_done));
        tracep->chgIData(oldp+142,(((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__count_q)),32);
        tracep->chgIData(oldp+143,(vlSelf->prim_ascon_duplex_tb__DOT__count_q),32);
        tracep->chgBit(oldp+144,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__done_o));
        tracep->chgSData(oldp+145,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw),10);
        tracep->chgBit(oldp+146,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q));
        tracep->chgBit(oldp+147,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error));
        tracep->chgBit(oldp+148,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter));
        tracep->chgBit(oldp+149,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter));
        tracep->chgQData(oldp+150,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U])))),64);
        tracep->chgQData(oldp+152,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U])))),64);
        tracep->chgQData(oldp+154,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U])))),64);
        tracep->chgQData(oldp+156,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U])))),64);
        tracep->chgQData(oldp+158,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U])))),64);
        if (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input) {
            __Vtemp_h97546a74__0[0U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[0U];
            __Vtemp_h97546a74__0[1U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[1U];
            __Vtemp_h97546a74__0[2U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[2U];
            __Vtemp_h97546a74__0[3U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[3U];
            __Vtemp_h97546a74__0[4U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[4U];
            __Vtemp_h97546a74__0[5U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[5U];
            __Vtemp_h97546a74__0[6U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[6U];
            __Vtemp_h97546a74__0[7U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[7U];
            __Vtemp_h97546a74__0[8U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[8U];
            __Vtemp_h97546a74__0[9U] = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[9U];
        } else {
            __Vtemp_h97546a74__0[0U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U];
            __Vtemp_h97546a74__0[1U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U];
            __Vtemp_h97546a74__0[2U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U];
            __Vtemp_h97546a74__0[3U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U];
            __Vtemp_h97546a74__0[4U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U];
            __Vtemp_h97546a74__0[5U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U];
            __Vtemp_h97546a74__0[6U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U];
            __Vtemp_h97546a74__0[7U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U];
            __Vtemp_h97546a74__0[8U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U];
            __Vtemp_h97546a74__0[9U] = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U];
        }
        tracep->chgWData(oldp+160,(__Vtemp_h97546a74__0),320);
        tracep->chgWData(oldp+170,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round),320);
        tracep->chgQData(oldp+180,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U])))),64);
        tracep->chgQData(oldp+182,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U])))),64);
        tracep->chgQData(oldp+184,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U])))),64);
        tracep->chgQData(oldp+186,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U])))),64);
        tracep->chgQData(oldp+188,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U])))),64);
        tracep->chgCData(oldp+190,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset),4);
        tracep->chgCData(oldp+191,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))),4);
        tracep->chgCData(oldp+192,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding),2);
        tracep->chgCData(oldp+193,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0),2);
        tracep->chgCData(oldp+194,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1),2);
        tracep->chgCData(oldp+195,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2),2);
        tracep->chgCData(oldp+196,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3),2);
        tracep->chgCData(oldp+197,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4),2);
        tracep->chgBit(oldp+198,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1));
        tracep->chgBit(oldp+199,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2));
        tracep->chgBit(oldp+200,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3));
        tracep->chgBit(oldp+201,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input));
        tracep->chgBit(oldp+202,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep));
        tracep->chgQData(oldp+203,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep),64);
        tracep->chgCData(oldp+205,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i),8);
        tracep->chgWData(oldp+206,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w),320);
        tracep->chgWData(oldp+216,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w),320);
        tracep->chgQData(oldp+226,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[0]),64);
        tracep->chgQData(oldp+228,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[1]),64);
        tracep->chgQData(oldp+230,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[2]),64);
        tracep->chgQData(oldp+232,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[3]),64);
        tracep->chgQData(oldp+234,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[4]),64);
        tracep->chgCData(oldp+236,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0]),5);
        tracep->chgCData(oldp+237,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[1]),5);
        tracep->chgCData(oldp+238,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[2]),5);
        tracep->chgCData(oldp+239,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[3]),5);
        tracep->chgCData(oldp+240,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[4]),5);
        tracep->chgCData(oldp+241,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[5]),5);
        tracep->chgCData(oldp+242,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[6]),5);
        tracep->chgCData(oldp+243,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[7]),5);
        tracep->chgCData(oldp+244,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[8]),5);
        tracep->chgCData(oldp+245,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[9]),5);
        tracep->chgCData(oldp+246,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[10]),5);
        tracep->chgCData(oldp+247,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[11]),5);
        tracep->chgCData(oldp+248,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[12]),5);
        tracep->chgCData(oldp+249,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[13]),5);
        tracep->chgCData(oldp+250,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[14]),5);
        tracep->chgCData(oldp+251,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[15]),5);
        tracep->chgCData(oldp+252,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[16]),5);
        tracep->chgCData(oldp+253,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[17]),5);
        tracep->chgCData(oldp+254,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[18]),5);
        tracep->chgCData(oldp+255,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[19]),5);
        tracep->chgCData(oldp+256,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[20]),5);
        tracep->chgCData(oldp+257,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[21]),5);
        tracep->chgCData(oldp+258,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[22]),5);
        tracep->chgCData(oldp+259,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[23]),5);
        tracep->chgCData(oldp+260,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[24]),5);
        tracep->chgCData(oldp+261,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[25]),5);
        tracep->chgCData(oldp+262,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[26]),5);
        tracep->chgCData(oldp+263,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[27]),5);
        tracep->chgCData(oldp+264,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[28]),5);
        tracep->chgCData(oldp+265,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[29]),5);
        tracep->chgCData(oldp+266,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[30]),5);
        tracep->chgCData(oldp+267,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[31]),5);
        tracep->chgCData(oldp+268,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[32]),5);
        tracep->chgCData(oldp+269,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[33]),5);
        tracep->chgCData(oldp+270,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[34]),5);
        tracep->chgCData(oldp+271,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[35]),5);
        tracep->chgCData(oldp+272,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[36]),5);
        tracep->chgCData(oldp+273,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[37]),5);
        tracep->chgCData(oldp+274,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[38]),5);
        tracep->chgCData(oldp+275,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[39]),5);
        tracep->chgCData(oldp+276,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[40]),5);
        tracep->chgCData(oldp+277,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[41]),5);
        tracep->chgCData(oldp+278,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[42]),5);
        tracep->chgCData(oldp+279,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[43]),5);
        tracep->chgCData(oldp+280,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[44]),5);
        tracep->chgCData(oldp+281,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[45]),5);
        tracep->chgCData(oldp+282,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[46]),5);
        tracep->chgCData(oldp+283,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[47]),5);
        tracep->chgCData(oldp+284,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[48]),5);
        tracep->chgCData(oldp+285,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[49]),5);
        tracep->chgCData(oldp+286,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[50]),5);
        tracep->chgCData(oldp+287,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[51]),5);
        tracep->chgCData(oldp+288,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[52]),5);
        tracep->chgCData(oldp+289,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[53]),5);
        tracep->chgCData(oldp+290,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[54]),5);
        tracep->chgCData(oldp+291,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[55]),5);
        tracep->chgCData(oldp+292,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[56]),5);
        tracep->chgCData(oldp+293,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[57]),5);
        tracep->chgCData(oldp+294,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[58]),5);
        tracep->chgCData(oldp+295,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[59]),5);
        tracep->chgCData(oldp+296,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[60]),5);
        tracep->chgCData(oldp+297,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[61]),5);
        tracep->chgCData(oldp+298,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[62]),5);
        tracep->chgCData(oldp+299,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[63]),5);
        tracep->chgCData(oldp+300,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0]),5);
        tracep->chgCData(oldp+301,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[1]),5);
        tracep->chgCData(oldp+302,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[2]),5);
        tracep->chgCData(oldp+303,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[3]),5);
        tracep->chgCData(oldp+304,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[4]),5);
        tracep->chgCData(oldp+305,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[5]),5);
        tracep->chgCData(oldp+306,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[6]),5);
        tracep->chgCData(oldp+307,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[7]),5);
        tracep->chgCData(oldp+308,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[8]),5);
        tracep->chgCData(oldp+309,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[9]),5);
        tracep->chgCData(oldp+310,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[10]),5);
        tracep->chgCData(oldp+311,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[11]),5);
        tracep->chgCData(oldp+312,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[12]),5);
        tracep->chgCData(oldp+313,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[13]),5);
        tracep->chgCData(oldp+314,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[14]),5);
        tracep->chgCData(oldp+315,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[15]),5);
        tracep->chgCData(oldp+316,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[16]),5);
        tracep->chgCData(oldp+317,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[17]),5);
        tracep->chgCData(oldp+318,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[18]),5);
        tracep->chgCData(oldp+319,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[19]),5);
        tracep->chgCData(oldp+320,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[20]),5);
        tracep->chgCData(oldp+321,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[21]),5);
        tracep->chgCData(oldp+322,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[22]),5);
        tracep->chgCData(oldp+323,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[23]),5);
        tracep->chgCData(oldp+324,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[24]),5);
        tracep->chgCData(oldp+325,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[25]),5);
        tracep->chgCData(oldp+326,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[26]),5);
        tracep->chgCData(oldp+327,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[27]),5);
        tracep->chgCData(oldp+328,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[28]),5);
        tracep->chgCData(oldp+329,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[29]),5);
        tracep->chgCData(oldp+330,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[30]),5);
        tracep->chgCData(oldp+331,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[31]),5);
        tracep->chgCData(oldp+332,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[32]),5);
        tracep->chgCData(oldp+333,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[33]),5);
        tracep->chgCData(oldp+334,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[34]),5);
        tracep->chgCData(oldp+335,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[35]),5);
        tracep->chgCData(oldp+336,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[36]),5);
        tracep->chgCData(oldp+337,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[37]),5);
        tracep->chgCData(oldp+338,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[38]),5);
        tracep->chgCData(oldp+339,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[39]),5);
        tracep->chgCData(oldp+340,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[40]),5);
        tracep->chgCData(oldp+341,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[41]),5);
        tracep->chgCData(oldp+342,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[42]),5);
        tracep->chgCData(oldp+343,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[43]),5);
        tracep->chgCData(oldp+344,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[44]),5);
        tracep->chgCData(oldp+345,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[45]),5);
        tracep->chgCData(oldp+346,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[46]),5);
        tracep->chgCData(oldp+347,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[47]),5);
        tracep->chgCData(oldp+348,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[48]),5);
        tracep->chgCData(oldp+349,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[49]),5);
        tracep->chgCData(oldp+350,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[50]),5);
        tracep->chgCData(oldp+351,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[51]),5);
        tracep->chgCData(oldp+352,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[52]),5);
        tracep->chgCData(oldp+353,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[53]),5);
        tracep->chgCData(oldp+354,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[54]),5);
        tracep->chgCData(oldp+355,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[55]),5);
        tracep->chgCData(oldp+356,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[56]),5);
        tracep->chgCData(oldp+357,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[57]),5);
        tracep->chgCData(oldp+358,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[58]),5);
        tracep->chgCData(oldp+359,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[59]),5);
        tracep->chgCData(oldp+360,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[60]),5);
        tracep->chgCData(oldp+361,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[61]),5);
        tracep->chgCData(oldp+362,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[62]),5);
        tracep->chgCData(oldp+363,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[63]),5);
        tracep->chgQData(oldp+364,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0]),64);
        tracep->chgQData(oldp+366,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1]),64);
        tracep->chgQData(oldp+368,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2]),64);
        tracep->chgQData(oldp+370,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3]),64);
        tracep->chgQData(oldp+372,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4]),64);
        tracep->chgQData(oldp+374,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[0]),64);
        tracep->chgQData(oldp+376,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[1]),64);
        tracep->chgQData(oldp+378,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[2]),64);
        tracep->chgQData(oldp+380,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[3]),64);
        tracep->chgQData(oldp+382,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[4]),64);
        tracep->chgQData(oldp+384,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[0]),64);
        tracep->chgQData(oldp+386,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[1]),64);
        tracep->chgQData(oldp+388,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[2]),64);
        tracep->chgQData(oldp+390,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[3]),64);
        tracep->chgQData(oldp+392,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[4]),64);
        tracep->chgCData(oldp+394,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+395,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0U]),5);
        tracep->chgCData(oldp+396,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+397,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+398,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+399,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0xaU]),5);
        tracep->chgCData(oldp+400,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+401,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+402,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+403,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0xbU]),5);
        tracep->chgCData(oldp+404,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+405,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+406,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+407,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0xcU]),5);
        tracep->chgCData(oldp+408,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+409,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+410,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+411,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0xdU]),5);
        tracep->chgCData(oldp+412,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+413,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+414,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+415,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0xeU]),5);
        tracep->chgCData(oldp+416,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+417,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+418,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+419,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0xfU]),5);
        tracep->chgCData(oldp+420,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+421,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+422,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+423,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x10U]),5);
        tracep->chgCData(oldp+424,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+425,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+426,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+427,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x11U]),5);
        tracep->chgCData(oldp+428,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+429,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+430,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+431,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x12U]),5);
        tracep->chgCData(oldp+432,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+433,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+434,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+435,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x13U]),5);
        tracep->chgCData(oldp+436,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+437,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+438,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+439,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [1U]),5);
        tracep->chgCData(oldp+440,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+441,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+442,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+443,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x14U]),5);
        tracep->chgCData(oldp+444,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+445,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+446,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+447,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x15U]),5);
        tracep->chgCData(oldp+448,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+449,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+450,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+451,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x16U]),5);
        tracep->chgCData(oldp+452,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+453,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+454,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+455,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x17U]),5);
        tracep->chgCData(oldp+456,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+457,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+458,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+459,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x18U]),5);
        tracep->chgCData(oldp+460,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+461,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+462,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+463,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x19U]),5);
        tracep->chgCData(oldp+464,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+465,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+466,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+467,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x1aU]),5);
        tracep->chgCData(oldp+468,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+469,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+470,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+471,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x1bU]),5);
        tracep->chgCData(oldp+472,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+473,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+474,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+475,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x1cU]),5);
        tracep->chgCData(oldp+476,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+477,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+478,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+479,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x1dU]),5);
        tracep->chgCData(oldp+480,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+481,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+482,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+483,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [2U]),5);
        tracep->chgCData(oldp+484,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+485,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+486,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+487,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x1eU]),5);
        tracep->chgCData(oldp+488,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+489,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+490,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+491,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x1fU]),5);
        tracep->chgCData(oldp+492,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+493,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+494,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+495,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x20U]),5);
        tracep->chgCData(oldp+496,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+497,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+498,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+499,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x21U]),5);
        tracep->chgCData(oldp+500,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+501,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+502,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+503,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x22U]),5);
        tracep->chgCData(oldp+504,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+505,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+506,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+507,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x23U]),5);
        tracep->chgCData(oldp+508,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+509,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+510,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+511,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x24U]),5);
        tracep->chgCData(oldp+512,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+513,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+514,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+515,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x25U]),5);
        tracep->chgCData(oldp+516,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+517,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+518,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+519,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x26U]),5);
        tracep->chgCData(oldp+520,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+521,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+522,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+523,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x27U]),5);
        tracep->chgCData(oldp+524,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+525,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+526,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+527,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [3U]),5);
        tracep->chgCData(oldp+528,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+529,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+530,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+531,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x28U]),5);
        tracep->chgCData(oldp+532,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+533,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+534,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+535,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x29U]),5);
        tracep->chgCData(oldp+536,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+537,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+538,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+539,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x2aU]),5);
        tracep->chgCData(oldp+540,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+541,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+542,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+543,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x2bU]),5);
        tracep->chgCData(oldp+544,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+545,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+546,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+547,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x2cU]),5);
        tracep->chgCData(oldp+548,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+549,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+550,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+551,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x2dU]),5);
        tracep->chgCData(oldp+552,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+553,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+554,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+555,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x2eU]),5);
        tracep->chgCData(oldp+556,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+557,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+558,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+559,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x2fU]),5);
        tracep->chgCData(oldp+560,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+561,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+562,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+563,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x30U]),5);
        tracep->chgCData(oldp+564,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+565,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+566,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+567,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x31U]),5);
        tracep->chgCData(oldp+568,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+569,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+570,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+571,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [4U]),5);
        tracep->chgCData(oldp+572,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+573,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+574,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+575,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x32U]),5);
        tracep->chgCData(oldp+576,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+577,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+578,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+579,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x33U]),5);
        tracep->chgCData(oldp+580,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+581,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+582,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+583,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x34U]),5);
        tracep->chgCData(oldp+584,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+585,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+586,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+587,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x35U]),5);
        tracep->chgCData(oldp+588,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+589,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+590,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+591,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x36U]),5);
        tracep->chgCData(oldp+592,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+593,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+594,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+595,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x37U]),5);
        tracep->chgCData(oldp+596,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+597,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+598,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+599,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x38U]),5);
        tracep->chgCData(oldp+600,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+601,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+602,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+603,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x39U]),5);
        tracep->chgCData(oldp+604,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+605,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+606,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+607,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x3aU]),5);
        tracep->chgCData(oldp+608,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+609,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+610,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+611,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x3bU]),5);
        tracep->chgCData(oldp+612,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+613,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+614,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+615,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [5U]),5);
        tracep->chgCData(oldp+616,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+617,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+618,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+619,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x3cU]),5);
        tracep->chgCData(oldp+620,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+621,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+622,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+623,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x3dU]),5);
        tracep->chgCData(oldp+624,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+625,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+626,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+627,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x3eU]),5);
        tracep->chgCData(oldp+628,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+629,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+630,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+631,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [0x3fU]),5);
        tracep->chgCData(oldp+632,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+633,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+634,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+635,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [6U]),5);
        tracep->chgCData(oldp+636,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+637,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+638,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+639,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [7U]),5);
        tracep->chgCData(oldp+640,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+641,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+642,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+643,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [8U]),5);
        tracep->chgCData(oldp+644,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+645,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+646,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                    | ((8U & (VL_REDXOR_4(
                                                          (0xcU 
                                                           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                   ^ 
                                                   ((2U 
                                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          >> 4U))))))))),5);
        tracep->chgCData(oldp+647,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                   [9U]),5);
        tracep->chgCData(oldp+648,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
        tracep->chgCData(oldp+649,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
        tracep->chgCData(oldp+650,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d))),4);
        tracep->chgCData(oldp+651,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d))),4);
        tracep->chgCData(oldp+652,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d) 
                                            >> 4U))),4);
        tracep->chgCData(oldp+653,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed))),4);
        tracep->chgCData(oldp+654,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                                            >> 4U))),4);
        tracep->chgCData(oldp+655,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))),4);
        tracep->chgCData(oldp+656,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                            >> 4U))),4);
        tracep->chgCData(oldp+657,((0x1fU & ((0xfU 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                             + (0xfU 
                                                & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                                   >> 4U))))),5);
        tracep->chgBit(oldp+658,((0xfU != (0x1fU & 
                                           ((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                            + (0xfU 
                                               & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                                  >> 4U)))))));
        tracep->chgCData(oldp+659,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt),5);
        tracep->chgBit(oldp+660,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                     >> 4U))));
        tracep->chgCData(oldp+661,((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                        >> 4U)) ? 0xfU
                                     : (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))),4);
        tracep->chgBit(oldp+662,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                  & (~ (IData)((0xfU 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))))))));
        tracep->chgCData(oldp+663,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),4);
        tracep->chgCData(oldp+664,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed))),4);
        tracep->chgCData(oldp+665,((0xfU & ((IData)(0xfU) 
                                            - (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset)))),4);
        tracep->chgCData(oldp+666,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt),5);
        tracep->chgBit(oldp+667,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                     >> 4U))));
        tracep->chgCData(oldp+668,((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                     & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                        >> 4U)) ? 0U
                                     : (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))),4);
        tracep->chgBit(oldp+669,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                  & (0U != (0xfU & 
                                            ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                             >> 4U))))));
        tracep->chgCData(oldp+670,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),4);
        tracep->chgCData(oldp+671,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                                            >> 4U))),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+672,((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q) 
                                   | (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error)) 
                                  | (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error))));
        tracep->chgQData(oldp+673,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U])))),64);
        tracep->chgQData(oldp+675,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U])))),64);
        tracep->chgQData(oldp+677,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U])))),64);
        tracep->chgQData(oldp+679,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U])))),64);
        tracep->chgQData(oldp+681,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[8U])))),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+683,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0]),8);
        tracep->chgCData(oldp+684,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[1]),8);
        tracep->chgCData(oldp+685,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[2]),8);
        tracep->chgCData(oldp+686,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[3]),8);
        tracep->chgCData(oldp+687,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[4]),8);
        tracep->chgCData(oldp+688,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[5]),8);
        tracep->chgCData(oldp+689,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[6]),8);
        tracep->chgCData(oldp+690,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[7]),8);
        tracep->chgCData(oldp+691,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[8]),8);
        tracep->chgCData(oldp+692,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[9]),8);
        tracep->chgCData(oldp+693,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[10]),8);
        tracep->chgCData(oldp+694,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[11]),8);
        tracep->chgCData(oldp+695,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[12]),8);
        tracep->chgCData(oldp+696,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[13]),8);
        tracep->chgCData(oldp+697,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[14]),8);
        tracep->chgCData(oldp+698,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[15]),8);
        tracep->chgCData(oldp+699,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[16]),8);
        tracep->chgCData(oldp+700,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[17]),8);
        tracep->chgCData(oldp+701,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[18]),8);
        tracep->chgCData(oldp+702,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[19]),8);
        tracep->chgCData(oldp+703,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[20]),8);
        tracep->chgCData(oldp+704,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[21]),8);
        tracep->chgCData(oldp+705,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[22]),8);
        tracep->chgCData(oldp+706,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[23]),8);
        tracep->chgCData(oldp+707,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[24]),8);
        tracep->chgCData(oldp+708,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[25]),8);
        tracep->chgCData(oldp+709,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[0]),8);
        tracep->chgCData(oldp+710,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[1]),8);
        tracep->chgCData(oldp+711,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[2]),8);
        tracep->chgCData(oldp+712,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[3]),8);
        tracep->chgCData(oldp+713,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[4]),8);
        tracep->chgCData(oldp+714,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[5]),8);
        tracep->chgCData(oldp+715,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[6]),8);
        tracep->chgCData(oldp+716,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[7]),8);
        tracep->chgCData(oldp+717,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[8]),8);
        tracep->chgCData(oldp+718,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[9]),8);
        tracep->chgCData(oldp+719,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0]),8);
        tracep->chgCData(oldp+720,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[1]),8);
        tracep->chgCData(oldp+721,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[2]),8);
        tracep->chgCData(oldp+722,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[3]),8);
        tracep->chgCData(oldp+723,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[4]),8);
        tracep->chgCData(oldp+724,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[5]),8);
        tracep->chgCData(oldp+725,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[6]),8);
        tracep->chgCData(oldp+726,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[7]),8);
        tracep->chgCData(oldp+727,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[8]),8);
        tracep->chgCData(oldp+728,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[9]),8);
        tracep->chgCData(oldp+729,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[10]),8);
        tracep->chgCData(oldp+730,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[11]),8);
        tracep->chgCData(oldp+731,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[12]),8);
        tracep->chgCData(oldp+732,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[13]),8);
        tracep->chgCData(oldp+733,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[14]),8);
        tracep->chgCData(oldp+734,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[15]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgIData(oldp+735,(vlSelf->prim_ascon_duplex_tb__DOT__msg_count_d),32);
        tracep->chgIData(oldp+736,(vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q),32);
        tracep->chgIData(oldp+737,(vlSelf->prim_ascon_duplex_tb__DOT__ct_count_d),32);
        tracep->chgIData(oldp+738,(vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q),32);
        tracep->chgIData(oldp+739,(vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state),32);
        tracep->chgWData(oldp+740,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data),128);
        tracep->chgWData(oldp+744,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg),128);
        tracep->chgWData(oldp+748,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct),128);
        tracep->chgCData(oldp+752,(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes),5);
        tracep->chgWData(oldp+753,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out),128);
        tracep->chgBit(oldp+757,(vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid));
        tracep->chgWData(oldp+758,(vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag),128);
        tracep->chgBit(oldp+762,(vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid));
        tracep->chgCData(oldp+763,(vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg),4);
        tracep->chgQData(oldp+764,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[0U])))),64);
        tracep->chgQData(oldp+766,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[2U])))),64);
        tracep->chgQData(oldp+768,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[4U])))),64);
        tracep->chgQData(oldp+770,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[6U])))),64);
        tracep->chgQData(oldp+772,((((QData)((IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[9U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[8U])))),64);
        tracep->chgSData(oldp+774,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d),10);
        tracep->chgCData(oldp+775,(((8U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes))
                                     ? 6U : 9U)),4);
        tracep->chgWData(oldp+776,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask),128);
        tracep->chgWData(oldp+780,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask),128);
        tracep->chgWData(oldp+784,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes),128);
        tracep->chgWData(oldp+788,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded),128);
        tracep->chgWData(oldp+792,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded),128);
        tracep->chgWData(oldp+796,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex),128);
        tracep->chgBit(oldp+800,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error));
    }
    tracep->chgBit(oldp+801,(vlSelf->clk_i));
    tracep->chgBit(oldp+802,(vlSelf->rst_ni));
    tracep->chgBit(oldp+803,(vlSelf->test_done_o));
    tracep->chgBit(oldp+804,(vlSelf->test_passed_o));
}

void Vprim_ascon_duplex_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_cleanup\n"); );
    // Init
    Vprim_ascon_duplex_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprim_ascon_duplex_tb___024root*>(voidSelf);
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
