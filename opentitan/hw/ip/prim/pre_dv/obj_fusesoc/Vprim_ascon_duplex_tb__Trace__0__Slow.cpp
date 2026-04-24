// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vprim_ascon_duplex_tb__Syms.h"


VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"test_done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"test_passed_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("prim_ascon_duplex_tb ");
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"test_done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"test_passed_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+806,"NUMB_RUNS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"ASCON_ENC", "ASCON_DEC", "ASCON_HASH"};
        const char* __VenumItemValues[]
        = {"1", "10", "100"};
        tracep->declDTypeEnum(1, "prim_ascon_pkg::duplex_op_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+807,"OPERATION",1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    {
        const char* __VenumItemNames[]
        = {"ASCON_128", "ASCON_128A"};
        const char* __VenumItemValues[]
        = {"1", "10"};
        tracep->declDTypeEnum(2, "prim_ascon_pkg::duplex_variant_e", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+808,"VARIANT",2, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+809,"BLOCKSIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+810,"STIMULUS_MSG_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+811,"EXPECTED_CT_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,"stimulus_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+810,"STIMULUS_CT_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+810,"EXPECTED_MSG_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+11+i*1,"stimulus_ct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+812,"STIMULUS_AD_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+21+i*1,"stimulus_ad",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declArray(c+813,"key",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+817,"nonce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+29+i*1,"c_key",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+45+i*1,"c_nonce",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 26; ++i) {
        tracep->declBus(c+61+i*1,"expected_ct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 26; ++i) {
        tracep->declBus(c+684+i*1,"actual_ct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+821+i*1,"expected_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+710+i*1,"actual_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+720+i*1,"actual_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+87+i*1,"expected_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 26; ++i) {
        tracep->declBus(c+103+i*1,"ct_tag_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+129,"ad_count_d",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+130,"ad_count_q",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+736,"msg_count_d",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+737,"msg_count_q",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+738,"ct_count_d",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+739,"ct_count_q",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"Idle", "SendAD", "WaitADRead", "SendMSG", 
                                "CheckMSGLen", "WaitMSGRead", 
                                "ReceiveTag", "CheckCTLen", 
                                "SendCT", "WaitCTRead", 
                                "VerifyTag", "WaitForEver"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011"};
        tracep->declDTypeEnum(3, "prim_ascon_duplex_tb_pkg::fsm_tb_state_e", 12, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+131,"tb_state",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,"nxt_tb_state",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+741,"dut_input_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+132,"dut_input_data_ad",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+745,"dut_input_data_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+749,"dut_input_data_ct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBit(c+136,"dut_input_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+753,"dut_data_valid_bytes",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+137,"dut_ready_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"dut_read_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+754,"dut_response_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBit(c+758,"dut_response_data_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+759,"dut_response_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBit(c+763,"dut_response_tag_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"MuBi4True", "MuBi4False"};
        const char* __VenumItemValues[]
        = {"110", "1001"};
        tracep->declDTypeEnum(4, "prim_mubi_pkg::mubi4_t", 2, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+831,"dut_no_msg",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+831,"dut_no_ad",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,"dut_last_block_ad",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+764,"dut_last_block_msg",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+140,"idle",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+141,"start",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"fsm_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+143,"count_d",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->declBus(c+144,"count_q",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->pushNamePrefix("ascon_duplex ");
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+808,"ascon_variant",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+807,"ascon_operation",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+141,"start_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"idle_o",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+832,"no_ad_i",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+833,"no_msg_i",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declArray(c+813,"key_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declArray(c+817,"nonce_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declArray(c+741,"data_in_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBus(c+753,"data_in_valid_bytes_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+139,"last_block_ad_i",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+764,"last_block_msg_i",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+136,"data_in_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"data_in_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+754,"data_out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBit(c+834,"data_out_ready_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+758,"data_out_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+759,"tag_out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBit(c+763,"tag_out_valid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"Idle", "Init", "PermInit", "Xor0Key", "AbsorbAD", 
                                "PermAD", "XorDomSep", 
                                "AbsorbMSG", "PermMSG", 
                                "AbsorbMSGEmpty", "XorKey0", 
                                "PermFinal", "SqueezeTagXorKey", 
                                "PermADLast", "AbsorbADEmpty", 
                                "PermMSGEmpty", "PermADEmpty", 
                                "Error"};
        const char* __VenumItemValues[]
        = {"1010101110", "110000110", "1011110110", 
                                "1010011", "1110010000", 
                                "1101101101", "100110010", 
                                "11100011", "1001100", 
                                "100101100", "1000011011", 
                                "11010000", "1111010111", 
                                "1010000010", "1101111011", 
                                "1011111000", "10111100", 
                                "100011110"};
        tracep->declDTypeEnum(5, "prim_ascon_pkg::duplex_fsm_state_e", 18, 10, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+146,"fsm_state_o",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+673,"err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"unused_data_out_ready_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"round_count_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+148,"sparse_fsm_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"set_round_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"inc_round_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ascon_state_q");
    tracep->declQuad(c+151,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,"[2]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+157,"[3]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,"[4]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ascon_state_d");
    tracep->declQuad(c+765,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+767,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+769,"[2]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+771,"[3]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+773,"[4]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->declArray(c+161,"state_to_round",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 319,0);
    tracep->declArray(c+171,"state_from_round",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 319,0);
    tracep->pushNamePrefix("round_to_mux");
    tracep->declQuad(c+181,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+183,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+185,"[2]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+187,"[3]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+189,"[4]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+775,"fsm_state_d",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+146,"fsm_state_q",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    {
        const char* __VenumItemNames[]
        = {"P12", "P8", "P6"};
        const char* __VenumItemValues[]
        = {"0", "100", "110"};
        tracep->declDTypeEnum(6, "prim_ascon_pkg::perm_offset_e", 3, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+191,"perm_offset",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declQuad(c+835,"iv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+776,"complete_block",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declArray(c+837,"empty_padding",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+777,"valid_bytes_bit_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+781,"padding_byte_bit_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+785,"data_in_valid_bytes",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+754,"data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+789,"data_in_padded",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declArray(c+793,"data_out_padded",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBus(c+192,"current_round",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    {
        const char* __VenumItemNames[]
        = {"DATA_IN_PAD", "DATA_OUT_PAD", "EMPTY_PAD"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(7, "prim_ascon_pkg::padding_mux_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+193,"sel_padding",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    {
        const char* __VenumItemNames[]
        = {"INIT", "ABSORB", "KEEP", "ROUND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(8, "prim_ascon_pkg::ascon_word_mux_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+194,"sel_mux_word0",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+195,"sel_mux_word1",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+196,"sel_mux_word2",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,"sel_mux_word3",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+198,"sel_mux_word4",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    {
        const char* __VenumItemNames[]
        = {"WORD", "KEY"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(9, "prim_ascon_pkg::word_low_key_hi_mux_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+199,"sel_mux_key_word1",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    {
        const char* __VenumItemNames[]
        = {"KEY_LOW", "KEY_HI"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(10, "prim_ascon_pkg::key_hi_low_mux_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+200,"sel_mux_key_word2",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+201,"sel_mux_key_word3",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    {
        const char* __VenumItemNames[]
        = {"STATE", "BLINDING"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(11, "prim_ascon_pkg::ascon_round_input_mux_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+202,"sel_round_input",11, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+203,"set_dom_sep",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("xor_with_state");
    tracep->declQuad(c+674,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+676,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+678,"[2]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+680,"[3]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+682,"[4]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+204,"word4_dom_sep",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declArray(c+797,"data_to_duplex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBit(c+801,"mubi_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("u_prim_ascon_round ");
    tracep->declArray(c+171,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 319,0);
    tracep->declArray(c+161,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 319,0);
    tracep->declBus(c+206,"rcon_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declArray(c+207,"ark_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 319,0);
    tracep->declArray(c+217,"sbox_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 319,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+227+i*2,"x_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+237+i*1,"xtranspose_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 4,0);
    }
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+301+i*1,"ytranspose_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+365+i*2,"y_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+375+i*2,"xl_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+385+i*2,"yl_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);
    }
    tracep->pushNamePrefix("gen_sbox_transpose ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_sbox_transpose[0] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+395,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+396,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+396,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+397,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+398,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+395,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[10] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+399,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+400,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+400,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+401,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+402,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+399,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[11] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+403,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+404,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+404,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+405,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+406,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+403,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[12] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+407,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+408,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+408,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+409,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+410,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+407,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[13] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+411,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+412,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+412,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+413,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+414,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+411,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[14] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+415,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+416,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+416,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+417,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+418,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+415,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[15] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+419,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+420,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+420,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+421,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+422,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+419,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[16] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+423,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+424,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+424,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+425,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+426,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+423,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[17] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+427,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+428,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+428,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+429,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+430,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+427,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[18] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+431,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+432,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+432,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+433,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+434,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+431,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[19] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+435,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+436,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+436,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+437,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+438,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+435,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[1] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+439,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+440,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+440,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+441,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+442,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+439,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[20] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+443,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+444,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+444,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+445,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+446,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+443,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[21] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+447,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+448,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+448,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+449,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+450,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+447,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[22] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+451,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+452,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+452,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+453,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+454,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+451,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[23] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+455,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+456,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+456,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+457,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+458,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+455,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[24] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+459,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+460,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+460,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+461,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+462,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+459,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[25] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+463,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+464,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+464,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+465,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+466,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+463,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[26] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+467,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+468,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+468,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+469,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+470,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+467,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[27] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+471,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+472,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+472,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+473,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+474,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+471,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[28] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+475,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+476,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+476,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+477,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+478,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+475,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[29] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+479,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+480,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+480,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+481,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+482,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+479,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[2] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+483,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+484,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+484,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+485,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+486,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+483,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[30] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+487,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+488,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+488,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+489,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+490,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+487,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[31] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+491,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+492,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+492,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+493,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+494,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+491,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[32] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+495,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+496,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+496,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+497,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+498,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+495,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[33] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+499,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+500,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+500,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+501,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+502,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+499,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[34] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+503,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+504,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+504,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+505,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+506,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+503,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[35] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+507,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+508,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+508,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+509,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+510,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[36] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+511,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+512,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+512,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+513,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+514,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+511,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[37] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+515,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+516,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+516,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+517,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+518,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+515,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[38] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+519,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+520,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+520,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+521,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+522,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+519,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[39] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+523,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+524,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+524,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+525,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+526,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+523,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[3] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+527,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+528,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+528,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+529,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+530,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+527,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[40] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+531,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+532,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+532,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+533,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+534,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+531,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[41] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+535,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+536,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+536,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+537,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+538,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+535,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[42] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+539,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+540,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+540,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+541,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+542,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+539,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[43] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+543,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+544,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+544,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+545,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+546,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+543,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[44] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+547,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+548,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+548,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+549,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+550,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+547,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[45] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+551,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+552,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+552,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+553,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+554,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+551,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[46] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+555,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+556,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+556,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+557,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+558,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+555,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[47] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+559,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+560,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+560,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+561,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+559,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[48] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+563,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+564,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+564,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+565,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+566,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+563,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[49] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+567,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+568,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+568,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+569,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+570,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+567,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[4] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+571,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+572,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+572,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+573,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+574,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+571,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[50] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+575,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+576,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+576,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+577,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+578,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+575,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[51] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+579,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+580,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+580,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+581,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+582,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+579,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[52] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+583,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+584,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+584,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+585,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+586,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+583,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[53] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+587,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+588,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+588,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+589,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+590,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+587,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[54] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+591,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+592,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+592,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+593,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+594,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+591,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[55] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+595,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+596,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+596,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+597,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+598,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+595,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[56] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+599,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+600,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+600,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+601,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+602,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+599,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[57] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+603,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+604,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+604,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+605,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+606,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+603,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[58] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+607,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+608,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+608,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+609,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+610,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+607,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[59] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+611,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+612,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+612,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+613,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+614,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+611,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[5] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+615,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+616,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+616,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+617,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+618,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+615,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[60] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+619,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+620,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+620,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+621,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+622,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+619,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[61] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+623,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+624,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+624,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+625,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+626,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+623,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[62] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+627,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+628,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+628,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+629,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+630,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+627,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[63] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+631,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+632,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+632,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+633,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+634,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+631,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[6] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+635,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+636,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+636,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+637,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+638,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+635,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[7] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+639,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+640,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+640,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+641,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+642,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+639,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[8] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+643,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+644,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+644,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+645,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+646,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+643,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_sbox_transpose[9] ");
    tracep->pushNamePrefix("u_sbox ");
    tracep->declBus(c+647,"state_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+648,"state_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+648,"temp_w(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+649,"temp_w(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+650,"temp_w(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+647,"temp_w(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_round_counter ");
    tracep->declBus(c+841,"Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+842,"ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+843,"EnableAlertTriggerSVA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBus(c+844,"PossibleActions",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"clr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"set_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"set_cnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+150,"incr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"decr_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+846,"step_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+834,"commit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+192,"cnt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+651,"cnt_after_commit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+147,"err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+847,"NumCnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("ResetValues");
    tracep->declBus(c+842,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cnt_d");
    tracep->declBus(c+652,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+653,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cnt_d_committed");
    tracep->declBus(c+654,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+655,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cnt_q");
    tracep->declBus(c+656,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+657,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fpv_force");
    tracep->declBus(c+842,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+842,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+658,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+659,"err_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"err_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("gen_cnts ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_cnts[0] ");
    tracep->declBit(c+150,"incr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+845,"decr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+191,"set_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+660,"ext_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+845,"uflow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+661,"oflow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+662,"cnt_sat",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+663,"cnt_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+664,"cnt_unforced_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("u_cnt_flop ");
    tracep->declBus(c+841,"Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+842,"ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+665,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+664,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_cnts[1] ");
    tracep->declBit(c+845,"incr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"decr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+666,"set_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+667,"ext_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+668,"uflow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+845,"oflow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+669,"cnt_sat",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+670,"cnt_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+671,"cnt_unforced_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("u_cnt_flop ");
    tracep->declBus(c+841,"Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+848,"ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+672,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+671,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_state_regs ");
    tracep->declBus(c+810,"Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+849,"ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBit(c+843,"EnableAlertTriggerSVA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+775,"state_i",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+146,"state_o",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+845,"unused_err_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+146,"state_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("u_state_flop ");
    tracep->declBus(c+810,"Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+849,"ResetValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBit(c+802,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+775,"d_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+146,"q_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("g_ct_tag_input1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_ct_tag_input2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_dut_input ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_dut_response_data ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_dut_response_tag ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("g_key_array ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__top_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__top_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+850,"TL_AW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"TL_DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"TL_AIW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+851,"TL_DIW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+852,"TL_AUW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+853,"TL_DUW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+841,"TL_DBW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"TL_SZW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+854,"AlertSkewCycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+855,"SecVolatileRawUnlockEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_cipher_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_cipher_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("PRINCE_SBOX4");
    tracep->declBus(c+856,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+857,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+858,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+859,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+860,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+861,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+862,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+863,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+864,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+865,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+842,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+866,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+867,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+868,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+869,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRINCE_SBOX4_INV");
    tracep->declBus(c+856,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+864,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+857,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+858,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+868,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+865,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+861,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+859,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+863,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+869,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+842,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+867,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+866,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+860,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+862,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRINCE_SHIFT_ROWS64");
    tracep->declBus(c+869,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+861,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+866,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+857,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+865,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+868,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+858,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+864,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+860,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+862,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+863,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+856,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+842,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+867,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+859,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRINCE_SHIFT_ROWS64_INV");
    tracep->declBus(c+860,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+861,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+863,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+857,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+842,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+868,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+859,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+864,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+869,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+862,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+866,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+856,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+865,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+867,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+858,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRINCE_ROUND_CONST");
    tracep->declQuad(c+870,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+872,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+874,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+876,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+878,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+880,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+882,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+884,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+886,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+888,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+890,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+892,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+892,"PRINCE_ALPHA_CONST",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+894,"PRINCE_SHIFT_ROWS_CONST0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+895,"PRINCE_SHIFT_ROWS_CONST1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+896,"PRINCE_SHIFT_ROWS_CONST2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+897,"PRINCE_SHIFT_ROWS_CONST3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->pushNamePrefix("PRESENT_SBOX4");
    tracep->declBus(c+860,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+867,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+863,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+856,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+861,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+842,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+859,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+868,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+857,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+866,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+865,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+869,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+864,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+862,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+858,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRESENT_SBOX4_INV");
    tracep->declBus(c+867,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+866,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+848,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+865,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+860,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+862,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+858,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+868,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+856,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+869,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+863,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+857,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+842,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+864,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+861,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+859,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRESENT_PERM32");
    tracep->declBus(c+898,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+899,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+900,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+901,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+902,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+903,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+904,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+905,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+906,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+907,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+908,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+909,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+910,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+911,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+912,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+913,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+914,"[16]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+915,"[17]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+916,"[18]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+917,"[19]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+918,"[20]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+919,"[21]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+920,"[22]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+921,"[23]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+922,"[24]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+923,"[25]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+924,"[26]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+925,"[27]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+926,"[28]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+927,"[29]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+928,"[30]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+929,"[31]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRESENT_PERM32_INV");
    tracep->declBus(c+898,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+914,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+899,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+915,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+900,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+916,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+901,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+917,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+902,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+918,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+903,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+919,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+904,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+920,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+905,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+921,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+906,"[16]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+922,"[17]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+907,"[18]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+923,"[19]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+908,"[20]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+924,"[21]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+909,"[22]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+925,"[23]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+910,"[24]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+926,"[25]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+911,"[26]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+927,"[27]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+912,"[28]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+928,"[29]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+913,"[30]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+929,"[31]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRESENT_PERM64");
    tracep->declBus(c+930,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+931,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+932,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+933,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+934,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+935,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+936,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+937,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+938,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+939,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+940,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+941,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+942,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+943,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+944,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+945,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+946,"[16]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+947,"[17]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+948,"[18]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+949,"[19]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+950,"[20]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+951,"[21]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+952,"[22]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+953,"[23]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+954,"[24]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+955,"[25]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+956,"[26]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+957,"[27]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+958,"[28]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+959,"[29]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+960,"[30]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+961,"[31]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+962,"[32]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+963,"[33]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+964,"[34]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+965,"[35]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+966,"[36]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+967,"[37]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+968,"[38]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+969,"[39]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+970,"[40]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+971,"[41]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+972,"[42]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+973,"[43]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+974,"[44]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+975,"[45]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+976,"[46]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+977,"[47]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+978,"[48]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+979,"[49]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+980,"[50]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+981,"[51]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+982,"[52]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+983,"[53]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+984,"[54]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+985,"[55]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+986,"[56]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+987,"[57]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+988,"[58]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+989,"[59]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+990,"[60]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+991,"[61]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+992,"[62]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+993,"[63]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PRESENT_PERM64_INV");
    tracep->declBus(c+930,"[0]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+946,"[1]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+962,"[2]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+978,"[3]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+931,"[4]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+947,"[5]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+963,"[6]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+979,"[7]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+932,"[8]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+948,"[9]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+964,"[10]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+980,"[11]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+933,"[12]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+949,"[13]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+965,"[14]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+981,"[15]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+934,"[16]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+950,"[17]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+966,"[18]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+982,"[19]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+935,"[20]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+951,"[21]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+967,"[22]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+983,"[23]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+936,"[24]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+952,"[25]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+968,"[26]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+984,"[27]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+937,"[28]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+953,"[29]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+969,"[30]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+985,"[31]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+938,"[32]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+954,"[33]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+970,"[34]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+986,"[35]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+939,"[36]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+955,"[37]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+971,"[38]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+987,"[39]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+940,"[40]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+956,"[41]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+972,"[42]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+988,"[43]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+941,"[44]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+957,"[45]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+973,"[46]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+989,"[47]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+942,"[48]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+958,"[49]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+974,"[50]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+990,"[51]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+943,"[52]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+959,"[53]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+975,"[54]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+991,"[55]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+944,"[56]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+960,"[57]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+976,"[58]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+992,"[59]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+945,"[60]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+961,"[61]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+977,"[62]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+993,"[63]",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_secded_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_secded_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+930,"Secded2216ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+994,"Secded2216ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 21,0);
    tracep->declBus(c+930,"Secded2822ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+995,"Secded2822ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 27,0);
    tracep->declBus(c+996,"Secded3932ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declQuad(c+997,"Secded3932ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 38,0);
    tracep->declBus(c+996,"Secded6457ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declQuad(c+870,"Secded6457ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+999,"Secded7264ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declArray(c+1000,"Secded7264ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 71,0);
    tracep->declBus(c+930,"SecdedHamming2216ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+994,"SecdedHamming2216ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 21,0);
    tracep->declBus(c+996,"SecdedHamming3932ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declQuad(c+997,"SecdedHamming3932ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 38,0);
    tracep->declBus(c+999,"SecdedHamming7264ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declArray(c+1000,"SecdedHamming7264ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 71,0);
    tracep->declBus(c+999,"SecdedHamming7668ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declArray(c+1003,"SecdedHamming7668ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 75,0);
    tracep->declBus(c+972,"SecdedInv2216ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+1006,"SecdedInv2216ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 21,0);
    tracep->declBus(c+972,"SecdedInv2822ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+1007,"SecdedInv2822ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 27,0);
    tracep->declBus(c+1008,"SecdedInv3932ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declQuad(c+1009,"SecdedInv3932ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 38,0);
    tracep->declBus(c+1008,"SecdedInv6457ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declQuad(c+1011,"SecdedInv6457ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+1013,"SecdedInv7264ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declArray(c+1014,"SecdedInv7264ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 71,0);
    tracep->declBus(c+972,"SecdedInvHamming2216ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 5,0);
    tracep->declBus(c+1006,"SecdedInvHamming2216ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 21,0);
    tracep->declBus(c+1008,"SecdedInvHamming3932ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declQuad(c+1009,"SecdedInvHamming3932ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 38,0);
    tracep->declBus(c+1013,"SecdedInvHamming7264ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declArray(c+1014,"SecdedInvHamming7264ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 71,0);
    tracep->declBus(c+1013,"SecdedInvHamming7668ZeroEcc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declArray(c+1017,"SecdedInvHamming7668ZeroWord",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 75,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__tlul_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__tlul_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1020,"ArbiterImpl",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 23,0);
    tracep->declBus(c+1021,"H2DCmdMaxWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1022,"H2DCmdIntgWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1023,"H2DCmdFullWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1021,"D2HRspMaxWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1022,"D2HRspIntgWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1023,"D2HRspFullWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"DataMaxWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1022,"DataIntgWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1024,"DataFullWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1025,"RsvdWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"DataWhenInstrError",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1027,"DataWhenError",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("TL_A_USER_DEFAULT\206 ");
    tracep->declBus(c+1028,"rsvd",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+831,"instr_type",4, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1029,"cmd_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1030,"data_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1027,"BlankedAData",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("TL_H2D_DEFAULT\206 ");
    tracep->declBit(c+1031,"a_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    {
        const char* __VenumItemNames[]
        = {"PutFullData", "PutPartialData", "Get"};
        const char* __VenumItemValues[]
        = {"0", "1", "100"};
        tracep->declDTypeEnum(12, "tlul_pkg::tl_a_op_e", 3, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+1032,"a_opcode",12, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1033,"a_param",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1034,"a_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1035,"a_source",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1036,"a_address",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1037,"a_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1038,"a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("a_user\206 ");
    tracep->declBus(c+1028,"rsvd",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+831,"instr_type",4, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1029,"cmd_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1030,"data_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1039,"d_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TL_D_USER_DEFAULT\206 ");
    tracep->declBus(c+1040,"rsp_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1041,"data_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TL_D2H_DEFAULT\206 ");
    tracep->declBit(c+1042,"d_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    {
        const char* __VenumItemNames[]
        = {"AccessAck", "AccessAckData"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(13, "tlul_pkg::tl_d_op_e", 2, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+1043,"d_opcode",13, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1044,"d_param",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1045,"d_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1046,"d_source",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1047,"d_sink",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1048,"d_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("d_user\206 ");
    tracep->declBus(c+1040,"rsp_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1041,"data_intg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1049,"d_error",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1050,"a_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_reg_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_reg_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1051,"SiliconCreatorIdWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1051,"ProductIdWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"RevisionIdWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+841,"NumTokenWords",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1052,"CsrLcStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1025,"CsrLcCountWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"CsrLcIdStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"CsrOtpTestCtrlWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"CsrOtpTestStatusWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"NumDeviceIdWords",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"NumManufStateWords",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1053,"NumAlerts",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"RegsAw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1054,"DmiAw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1055,"NumRegsRegs",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+855,"NumRegsDmi",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+999,"LC_CTRL_ALERT_TEST_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1056,"LC_CTRL_STATUS_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1057,"LC_CTRL_CLAIM_TRANSITION_IF_REGWEN_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1058,"LC_CTRL_CLAIM_TRANSITION_IF_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1059,"LC_CTRL_TRANSITION_REGWEN_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1060,"LC_CTRL_TRANSITION_CMD_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1061,"LC_CTRL_TRANSITION_CTRL_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1062,"LC_CTRL_TRANSITION_TOKEN_0_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1063,"LC_CTRL_TRANSITION_TOKEN_1_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1064,"LC_CTRL_TRANSITION_TOKEN_2_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1065,"LC_CTRL_TRANSITION_TOKEN_3_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1066,"LC_CTRL_TRANSITION_TARGET_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1067,"LC_CTRL_OTP_VENDOR_TEST_CTRL_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1068,"LC_CTRL_OTP_VENDOR_TEST_STATUS_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1069,"LC_CTRL_LC_STATE_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1070,"LC_CTRL_LC_TRANSITION_CNT_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1071,"LC_CTRL_LC_ID_STATE_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1072,"LC_CTRL_HW_REVISION0_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1073,"LC_CTRL_HW_REVISION1_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1074,"LC_CTRL_DEVICE_ID_0_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1075,"LC_CTRL_DEVICE_ID_1_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1076,"LC_CTRL_DEVICE_ID_2_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1077,"LC_CTRL_DEVICE_ID_3_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1078,"LC_CTRL_DEVICE_ID_4_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1079,"LC_CTRL_DEVICE_ID_5_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1080,"LC_CTRL_DEVICE_ID_6_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1081,"LC_CTRL_DEVICE_ID_7_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1082,"LC_CTRL_MANUF_STATE_0_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1083,"LC_CTRL_MANUF_STATE_1_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1084,"LC_CTRL_MANUF_STATE_2_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1085,"LC_CTRL_MANUF_STATE_3_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1086,"LC_CTRL_MANUF_STATE_4_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1087,"LC_CTRL_MANUF_STATE_5_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1088,"LC_CTRL_MANUF_STATE_6_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1089,"LC_CTRL_MANUF_STATE_7_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1090,"LC_CTRL_ALERT_TEST_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1091,"LC_CTRL_ALERT_TEST_FATAL_PROG_ERROR_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1091,"LC_CTRL_ALERT_TEST_FATAL_STATE_ERROR_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1091,"LC_CTRL_ALERT_TEST_FATAL_BUS_INTEG_ERROR_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1092,"LC_CTRL_STATUS_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+1093,"LC_CTRL_CLAIM_TRANSITION_IF_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1093,"LC_CTRL_CLAIM_TRANSITION_IF_MUTEX_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 7,0);
    tracep->declBus(c+1091,"LC_CTRL_TRANSITION_REGWEN_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1091,"LC_CTRL_TRANSITION_REGWEN_TRANSITION_REGWEN_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1091,"LC_CTRL_TRANSITION_CMD_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1094,"LC_CTRL_TRANSITION_CTRL_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1026,"LC_CTRL_TRANSITION_TOKEN_0_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_TRANSITION_TOKEN_1_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_TRANSITION_TOKEN_2_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_TRANSITION_TOKEN_3_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1095,"LC_CTRL_TRANSITION_TARGET_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 29,0);
    tracep->declBus(c+1026,"LC_CTRL_OTP_VENDOR_TEST_CTRL_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_OTP_VENDOR_TEST_STATUS_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1095,"LC_CTRL_LC_STATE_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 29,0);
    tracep->declBus(c+898,"LC_CTRL_LC_TRANSITION_CNT_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1026,"LC_CTRL_LC_ID_STATE_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_HW_REVISION0_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_HW_REVISION1_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1096,"LC_CTRL_HW_REVISION1_RESERVED_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 23,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_0_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_1_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_2_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_3_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_4_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_5_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_6_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_DEVICE_ID_7_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_0_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_1_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_2_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_3_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_4_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_5_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_6_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1026,"LC_CTRL_MANUF_STATE_7_RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 35; ++i) {
        tracep->declBus(c+1097+i*1,"LC_CTRL_REGS_PERMIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 3,0);
    }
    tracep->declBus(c+1092,"LC_CTRL_DMI_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+1132,"LC_CTRL_DMI_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1133,"LC_CTRL_DMI_IDX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("PWR_LC_RSP_DEFAULT\206 ");
    tracep->declBit(c+1134,"lc_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1135,"lc_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1136,"NumTokens",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1053,"TokenIdxWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1137,"TokenMuxBits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+841,"TxWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"On", "Off"};
        const char* __VenumItemValues[]
        = {"101", "1010"};
        tracep->declDTypeEnum(14, "lc_ctrl_pkg::lc_tx_t", 2, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+1138,"LC_TX_DEFAULT",14, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+850,"RmaSeedWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1139,"LC_NVM_RMA_SEED_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1140,"LcKeymgrDivWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1051,"FsmStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("TransTokenIdxMatrix");
    tracep->pushNamePrefix("[0]");
    {
        const char* __VenumItemNames[]
        = {"ZeroTokenIdx", "RawUnlockTokenIdx", "TestUnlockTokenIdx", 
                                "TestExitTokenIdx", 
                                "RmaTokenIdx", "InvalidTokenIdx"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(15, "lc_ctrl_pkg::token_idx_e", 6, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1142,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[8]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[9]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[10]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[11]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[12]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[13]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[14]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1145,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[15]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1144,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[16]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1146,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[17]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1146,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[18]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[19]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1143,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[20]");
    tracep->declBus(c+1141,"[0]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[1]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[2]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[3]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[4]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[5]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[6]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[7]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[8]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[9]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[10]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[11]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[12]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[13]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[14]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[15]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[16]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[17]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[18]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[19]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1141,"[20]",15, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_pad_wrapper_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_pad_wrapper_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+841,"DriveStrDw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"SlewRateDw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+853,"AttrDw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"PokDw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_state_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_state_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1051,"LcValueWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1147,"NumLcStateValues",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1148,"LcStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1149,"NumLcStates",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1025,"DecLcStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"NumSocDbgStateValues",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"SocDbgStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"NumOwnershipStateValues",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1140,"OwnershipStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"NumAuthStateValues",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"AuthStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1136,"DecLcStateNumRep",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1052,"ExtDecLcStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1150,"NumLcCountValues",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1151,"LcCountWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1152,"NumLcCountStates",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1025,"DecLcCountWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"NumLcIdStates",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"DecLcIdStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1051,"DecLcIdStateNumRep",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"ExtDecLcIdStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1153,"A0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1154,"B0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1155,"A1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1156,"B1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1157,"A2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1158,"B2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1159,"A3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1160,"B3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1161,"A4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1162,"B4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1163,"A5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1164,"B5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1165,"A6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1166,"B6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1167,"A7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1168,"B7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1169,"A8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1170,"B8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1171,"A9",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1172,"B9",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1173,"A10",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1174,"B10",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1175,"A11",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1176,"B11",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1177,"A12",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1178,"B12",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1179,"A13",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1180,"B13",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1181,"A14",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1182,"B14",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1183,"A15",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1184,"B15",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1185,"A16",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1186,"B16",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1187,"A17",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1188,"B17",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1189,"A18",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1190,"B18",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1191,"A19",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1192,"B19",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1193,"C0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1194,"D0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1195,"C1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1196,"D1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1197,"C2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1198,"D2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1199,"C3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1200,"D3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1201,"C4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1202,"D4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1203,"C5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1204,"D5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1205,"C6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1206,"D6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1207,"C7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1208,"D7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1209,"C8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1210,"D8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1211,"C9",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1212,"D9",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1213,"C10",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1214,"D10",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1215,"C11",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1216,"D11",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1217,"C12",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1218,"D12",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1219,"C13",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1220,"D13",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1221,"C14",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1222,"D14",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1223,"C15",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1224,"D15",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1225,"C16",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1226,"D16",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1227,"C17",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1228,"D17",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1229,"C18",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1230,"D18",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1231,"C19",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1232,"D19",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1233,"C20",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1234,"D20",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1235,"C21",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1236,"D21",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1237,"C22",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1238,"D22",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1239,"C23",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1240,"D23",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1241,"E0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1242,"F0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1243,"E1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1244,"F1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1245,"G0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1246,"H0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1247,"G1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1248,"H1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1249,"G2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1250,"H2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1251,"G3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1252,"H3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1253,"G4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1254,"H4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1255,"G5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1256,"H5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1257,"G6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1258,"H6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1259,"G7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1260,"H7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1261,"I0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1262,"J0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1263,"I1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1264,"J1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1265,"ZRO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
    tracep->declBus(c+1266,"SOC_DBG_STATE_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1140,"LcTokenWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_alert_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_alert_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ALERT_TX_DEFAULT\206 ");
    tracep->declBit(c+1267,"alert_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1268,"alert_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALERT_RX_DEFAULT\206 ");
    tracep->declBit(c+1269,"ping_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1270,"ping_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1271,"ack_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1272,"ack_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_esc_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_esc_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ESC_TX_DEFAULT\206 ");
    tracep->declBit(c+1273,"esc_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1274,"esc_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ESC_RX_DEFAULT\206 ");
    tracep->declBit(c+1275,"resp_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1276,"resp_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_ascon_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_ascon_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+841,"AsconRoundCountW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1053,"DUPLEX_OP_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"DUPLEX_VARIANT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+835,"IV_128",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declQuad(c+1277,"IV_128A",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+856,"ROUND_MAX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+851,"KEY_HI_LOW_MUX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+851,"WORD_LOW_KEY_HI_MUX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"ASCON_WORD_MUX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+851,"ROUND_INPUT_MUX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+847,"PADDING_MUX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+810,"AsconDuplexFSMStateWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_sha2_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_sha2_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1023,"NumRound256",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1279,"NumRound512",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+841,"WordByte32",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"WordByte64",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1280+i*1,"InitHash_256",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1288+i*2,"InitHash_384",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1304+i*2,"InitHash_512",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 63,0);
    }
    for (int i = 0; i < 64; ++i) {
        tracep->declBus(c+1320+i*1,"CubicRootPrime256",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 31,0);
    }
    for (int i = 0; i < 80; ++i) {
        tracep->declQuad(c+1384+i*2,"CubicRootPrime512",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 63,0);
    }
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_mubi_pkg__0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_mubi_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+841,"MuBi4Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+812,"MuBi8Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1054,"MuBi12Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1051,"MuBi16Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1147,"MuBi20Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1150,"MuBi24Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1544,"MuBi28Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+850,"MuBi32Width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_init_top(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_init_top\n"); );
    // Body
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("lc_ctrl_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lc_ctrl_reg_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_reg_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lc_ctrl_state_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__lc_ctrl_state_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_alert_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_alert_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_ascon_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_ascon_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_cipher_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_cipher_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_esc_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_esc_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_mubi_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_mubi_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_pad_wrapper_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_pad_wrapper_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_secded_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_secded_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("prim_sha2_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__prim_sha2_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlul_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__tlul_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top_pkg ");
    Vprim_ascon_duplex_tb___024root__trace_init_sub__TOP__top_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void Vprim_ascon_duplex_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void Vprim_ascon_duplex_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_register(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vprim_ascon_duplex_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vprim_ascon_duplex_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vprim_ascon_duplex_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_full_sub_0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_full_top_0\n"); );
    // Init
    Vprim_ascon_duplex_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprim_ascon_duplex_tb___024root*>(voidSelf);
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprim_ascon_duplex_tb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<10>/*319:0*/ Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0;

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_full_sub_0(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<10>/*319:0*/ __Vtemp_h97546a74__0;
    VlWide<4>/*127:0*/ __Vtemp_h5bb2eb74__0;
    VlWide<4>/*127:0*/ __Vtemp_h6e924560__0;
    VlWide<4>/*127:0*/ __Vtemp_h29180254__0;
    VlWide<3>/*95:0*/ __Vtemp_h60d92c90__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d97dc07__0;
    VlWide<3>/*95:0*/ __Vtemp_h60d852ba__0;
    VlWide<3>/*95:0*/ __Vtemp_h7da46fff__0;
    // Body
    tracep->fullCData(oldp+1,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[0]),8);
    tracep->fullCData(oldp+2,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[1]),8);
    tracep->fullCData(oldp+3,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[2]),8);
    tracep->fullCData(oldp+4,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[3]),8);
    tracep->fullCData(oldp+5,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[4]),8);
    tracep->fullCData(oldp+6,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[5]),8);
    tracep->fullCData(oldp+7,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[6]),8);
    tracep->fullCData(oldp+8,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[7]),8);
    tracep->fullCData(oldp+9,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[8]),8);
    tracep->fullCData(oldp+10,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[9]),8);
    tracep->fullCData(oldp+11,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[0]),8);
    tracep->fullCData(oldp+12,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[1]),8);
    tracep->fullCData(oldp+13,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[2]),8);
    tracep->fullCData(oldp+14,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[3]),8);
    tracep->fullCData(oldp+15,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[4]),8);
    tracep->fullCData(oldp+16,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[5]),8);
    tracep->fullCData(oldp+17,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[6]),8);
    tracep->fullCData(oldp+18,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[7]),8);
    tracep->fullCData(oldp+19,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[8]),8);
    tracep->fullCData(oldp+20,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[9]),8);
    tracep->fullCData(oldp+21,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[0]),8);
    tracep->fullCData(oldp+22,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[1]),8);
    tracep->fullCData(oldp+23,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[2]),8);
    tracep->fullCData(oldp+24,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[3]),8);
    tracep->fullCData(oldp+25,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[4]),8);
    tracep->fullCData(oldp+26,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[5]),8);
    tracep->fullCData(oldp+27,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[6]),8);
    tracep->fullCData(oldp+28,(vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[7]),8);
    tracep->fullCData(oldp+29,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[0]),8);
    tracep->fullCData(oldp+30,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[1]),8);
    tracep->fullCData(oldp+31,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[2]),8);
    tracep->fullCData(oldp+32,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[3]),8);
    tracep->fullCData(oldp+33,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[4]),8);
    tracep->fullCData(oldp+34,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[5]),8);
    tracep->fullCData(oldp+35,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[6]),8);
    tracep->fullCData(oldp+36,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[7]),8);
    tracep->fullCData(oldp+37,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[8]),8);
    tracep->fullCData(oldp+38,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[9]),8);
    tracep->fullCData(oldp+39,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[10]),8);
    tracep->fullCData(oldp+40,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[11]),8);
    tracep->fullCData(oldp+41,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[12]),8);
    tracep->fullCData(oldp+42,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[13]),8);
    tracep->fullCData(oldp+43,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[14]),8);
    tracep->fullCData(oldp+44,(vlSelf->prim_ascon_duplex_tb__DOT__c_key[15]),8);
    tracep->fullCData(oldp+45,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[0]),8);
    tracep->fullCData(oldp+46,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[1]),8);
    tracep->fullCData(oldp+47,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[2]),8);
    tracep->fullCData(oldp+48,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[3]),8);
    tracep->fullCData(oldp+49,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[4]),8);
    tracep->fullCData(oldp+50,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[5]),8);
    tracep->fullCData(oldp+51,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[6]),8);
    tracep->fullCData(oldp+52,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[7]),8);
    tracep->fullCData(oldp+53,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[8]),8);
    tracep->fullCData(oldp+54,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[9]),8);
    tracep->fullCData(oldp+55,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[10]),8);
    tracep->fullCData(oldp+56,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[11]),8);
    tracep->fullCData(oldp+57,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[12]),8);
    tracep->fullCData(oldp+58,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[13]),8);
    tracep->fullCData(oldp+59,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[14]),8);
    tracep->fullCData(oldp+60,(vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[15]),8);
    tracep->fullCData(oldp+61,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[0]),8);
    tracep->fullCData(oldp+62,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[1]),8);
    tracep->fullCData(oldp+63,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[2]),8);
    tracep->fullCData(oldp+64,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[3]),8);
    tracep->fullCData(oldp+65,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[4]),8);
    tracep->fullCData(oldp+66,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[5]),8);
    tracep->fullCData(oldp+67,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[6]),8);
    tracep->fullCData(oldp+68,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[7]),8);
    tracep->fullCData(oldp+69,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[8]),8);
    tracep->fullCData(oldp+70,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[9]),8);
    tracep->fullCData(oldp+71,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[10]),8);
    tracep->fullCData(oldp+72,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[11]),8);
    tracep->fullCData(oldp+73,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[12]),8);
    tracep->fullCData(oldp+74,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[13]),8);
    tracep->fullCData(oldp+75,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[14]),8);
    tracep->fullCData(oldp+76,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[15]),8);
    tracep->fullCData(oldp+77,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[16]),8);
    tracep->fullCData(oldp+78,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[17]),8);
    tracep->fullCData(oldp+79,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[18]),8);
    tracep->fullCData(oldp+80,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[19]),8);
    tracep->fullCData(oldp+81,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[20]),8);
    tracep->fullCData(oldp+82,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[21]),8);
    tracep->fullCData(oldp+83,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[22]),8);
    tracep->fullCData(oldp+84,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[23]),8);
    tracep->fullCData(oldp+85,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[24]),8);
    tracep->fullCData(oldp+86,(vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[25]),8);
    tracep->fullCData(oldp+87,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[0]),8);
    tracep->fullCData(oldp+88,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[1]),8);
    tracep->fullCData(oldp+89,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[2]),8);
    tracep->fullCData(oldp+90,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[3]),8);
    tracep->fullCData(oldp+91,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[4]),8);
    tracep->fullCData(oldp+92,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[5]),8);
    tracep->fullCData(oldp+93,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[6]),8);
    tracep->fullCData(oldp+94,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[7]),8);
    tracep->fullCData(oldp+95,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[8]),8);
    tracep->fullCData(oldp+96,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[9]),8);
    tracep->fullCData(oldp+97,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[10]),8);
    tracep->fullCData(oldp+98,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[11]),8);
    tracep->fullCData(oldp+99,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[12]),8);
    tracep->fullCData(oldp+100,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[13]),8);
    tracep->fullCData(oldp+101,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[14]),8);
    tracep->fullCData(oldp+102,(vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[15]),8);
    tracep->fullCData(oldp+103,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[0]),8);
    tracep->fullCData(oldp+104,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[1]),8);
    tracep->fullCData(oldp+105,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[2]),8);
    tracep->fullCData(oldp+106,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[3]),8);
    tracep->fullCData(oldp+107,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[4]),8);
    tracep->fullCData(oldp+108,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[5]),8);
    tracep->fullCData(oldp+109,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[6]),8);
    tracep->fullCData(oldp+110,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[7]),8);
    tracep->fullCData(oldp+111,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[8]),8);
    tracep->fullCData(oldp+112,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[9]),8);
    tracep->fullCData(oldp+113,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[10]),8);
    tracep->fullCData(oldp+114,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[11]),8);
    tracep->fullCData(oldp+115,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[12]),8);
    tracep->fullCData(oldp+116,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[13]),8);
    tracep->fullCData(oldp+117,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[14]),8);
    tracep->fullCData(oldp+118,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[15]),8);
    tracep->fullCData(oldp+119,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[16]),8);
    tracep->fullCData(oldp+120,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[17]),8);
    tracep->fullCData(oldp+121,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[18]),8);
    tracep->fullCData(oldp+122,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[19]),8);
    tracep->fullCData(oldp+123,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[20]),8);
    tracep->fullCData(oldp+124,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[21]),8);
    tracep->fullCData(oldp+125,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[22]),8);
    tracep->fullCData(oldp+126,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[23]),8);
    tracep->fullCData(oldp+127,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[24]),8);
    tracep->fullCData(oldp+128,(vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[25]),8);
    tracep->fullIData(oldp+129,(vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d),32);
    tracep->fullIData(oldp+130,(vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q),32);
    tracep->fullIData(oldp+131,(vlSelf->prim_ascon_duplex_tb__DOT__tb_state),32);
    tracep->fullWData(oldp+132,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad),128);
    tracep->fullBit(oldp+136,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid));
    tracep->fullBit(oldp+137,(vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data));
    tracep->fullBit(oldp+138,(vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data));
    tracep->fullCData(oldp+139,(vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad),4);
    tracep->fullCData(oldp+140,(vlSelf->prim_ascon_duplex_tb__DOT__idle),4);
    tracep->fullBit(oldp+141,(vlSelf->prim_ascon_duplex_tb__DOT__start));
    tracep->fullBit(oldp+142,(vlSelf->prim_ascon_duplex_tb__DOT__fsm_done));
    tracep->fullIData(oldp+143,(((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__count_q)),32);
    tracep->fullIData(oldp+144,(vlSelf->prim_ascon_duplex_tb__DOT__count_q),32);
    tracep->fullBit(oldp+145,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__done_o));
    tracep->fullSData(oldp+146,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw),10);
    tracep->fullBit(oldp+147,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q));
    tracep->fullBit(oldp+148,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error));
    tracep->fullBit(oldp+149,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter));
    tracep->fullBit(oldp+150,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter));
    tracep->fullQData(oldp+151,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U])))),64);
    tracep->fullQData(oldp+153,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U])))),64);
    tracep->fullQData(oldp+155,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U])))),64);
    tracep->fullQData(oldp+157,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U])))),64);
    tracep->fullQData(oldp+159,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
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
    tracep->fullWData(oldp+161,(__Vtemp_h97546a74__0),320);
    tracep->fullWData(oldp+171,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round),320);
    tracep->fullQData(oldp+181,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U])))),64);
    tracep->fullQData(oldp+183,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U])))),64);
    tracep->fullQData(oldp+185,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U])))),64);
    tracep->fullQData(oldp+187,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U])))),64);
    tracep->fullQData(oldp+189,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U])))),64);
    tracep->fullCData(oldp+191,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset),4);
    tracep->fullCData(oldp+192,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))),4);
    tracep->fullCData(oldp+193,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding),2);
    tracep->fullCData(oldp+194,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0),2);
    tracep->fullCData(oldp+195,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1),2);
    tracep->fullCData(oldp+196,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2),2);
    tracep->fullCData(oldp+197,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3),2);
    tracep->fullCData(oldp+198,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4),2);
    tracep->fullBit(oldp+199,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1));
    tracep->fullBit(oldp+200,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2));
    tracep->fullBit(oldp+201,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3));
    tracep->fullBit(oldp+202,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input));
    tracep->fullBit(oldp+203,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep));
    tracep->fullQData(oldp+204,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep),64);
    tracep->fullCData(oldp+206,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i),8);
    tracep->fullWData(oldp+207,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w),320);
    tracep->fullWData(oldp+217,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w),320);
    tracep->fullQData(oldp+227,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[0]),64);
    tracep->fullQData(oldp+229,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[1]),64);
    tracep->fullQData(oldp+231,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[2]),64);
    tracep->fullQData(oldp+233,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[3]),64);
    tracep->fullQData(oldp+235,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[4]),64);
    tracep->fullCData(oldp+237,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0]),5);
    tracep->fullCData(oldp+238,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[1]),5);
    tracep->fullCData(oldp+239,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[2]),5);
    tracep->fullCData(oldp+240,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[3]),5);
    tracep->fullCData(oldp+241,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[4]),5);
    tracep->fullCData(oldp+242,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[5]),5);
    tracep->fullCData(oldp+243,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[6]),5);
    tracep->fullCData(oldp+244,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[7]),5);
    tracep->fullCData(oldp+245,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[8]),5);
    tracep->fullCData(oldp+246,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[9]),5);
    tracep->fullCData(oldp+247,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[10]),5);
    tracep->fullCData(oldp+248,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[11]),5);
    tracep->fullCData(oldp+249,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[12]),5);
    tracep->fullCData(oldp+250,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[13]),5);
    tracep->fullCData(oldp+251,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[14]),5);
    tracep->fullCData(oldp+252,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[15]),5);
    tracep->fullCData(oldp+253,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[16]),5);
    tracep->fullCData(oldp+254,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[17]),5);
    tracep->fullCData(oldp+255,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[18]),5);
    tracep->fullCData(oldp+256,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[19]),5);
    tracep->fullCData(oldp+257,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[20]),5);
    tracep->fullCData(oldp+258,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[21]),5);
    tracep->fullCData(oldp+259,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[22]),5);
    tracep->fullCData(oldp+260,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[23]),5);
    tracep->fullCData(oldp+261,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[24]),5);
    tracep->fullCData(oldp+262,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[25]),5);
    tracep->fullCData(oldp+263,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[26]),5);
    tracep->fullCData(oldp+264,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[27]),5);
    tracep->fullCData(oldp+265,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[28]),5);
    tracep->fullCData(oldp+266,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[29]),5);
    tracep->fullCData(oldp+267,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[30]),5);
    tracep->fullCData(oldp+268,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[31]),5);
    tracep->fullCData(oldp+269,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[32]),5);
    tracep->fullCData(oldp+270,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[33]),5);
    tracep->fullCData(oldp+271,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[34]),5);
    tracep->fullCData(oldp+272,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[35]),5);
    tracep->fullCData(oldp+273,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[36]),5);
    tracep->fullCData(oldp+274,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[37]),5);
    tracep->fullCData(oldp+275,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[38]),5);
    tracep->fullCData(oldp+276,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[39]),5);
    tracep->fullCData(oldp+277,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[40]),5);
    tracep->fullCData(oldp+278,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[41]),5);
    tracep->fullCData(oldp+279,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[42]),5);
    tracep->fullCData(oldp+280,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[43]),5);
    tracep->fullCData(oldp+281,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[44]),5);
    tracep->fullCData(oldp+282,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[45]),5);
    tracep->fullCData(oldp+283,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[46]),5);
    tracep->fullCData(oldp+284,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[47]),5);
    tracep->fullCData(oldp+285,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[48]),5);
    tracep->fullCData(oldp+286,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[49]),5);
    tracep->fullCData(oldp+287,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[50]),5);
    tracep->fullCData(oldp+288,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[51]),5);
    tracep->fullCData(oldp+289,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[52]),5);
    tracep->fullCData(oldp+290,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[53]),5);
    tracep->fullCData(oldp+291,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[54]),5);
    tracep->fullCData(oldp+292,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[55]),5);
    tracep->fullCData(oldp+293,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[56]),5);
    tracep->fullCData(oldp+294,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[57]),5);
    tracep->fullCData(oldp+295,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[58]),5);
    tracep->fullCData(oldp+296,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[59]),5);
    tracep->fullCData(oldp+297,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[60]),5);
    tracep->fullCData(oldp+298,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[61]),5);
    tracep->fullCData(oldp+299,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[62]),5);
    tracep->fullCData(oldp+300,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[63]),5);
    tracep->fullCData(oldp+301,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0]),5);
    tracep->fullCData(oldp+302,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[1]),5);
    tracep->fullCData(oldp+303,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[2]),5);
    tracep->fullCData(oldp+304,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[3]),5);
    tracep->fullCData(oldp+305,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[4]),5);
    tracep->fullCData(oldp+306,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[5]),5);
    tracep->fullCData(oldp+307,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[6]),5);
    tracep->fullCData(oldp+308,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[7]),5);
    tracep->fullCData(oldp+309,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[8]),5);
    tracep->fullCData(oldp+310,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[9]),5);
    tracep->fullCData(oldp+311,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[10]),5);
    tracep->fullCData(oldp+312,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[11]),5);
    tracep->fullCData(oldp+313,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[12]),5);
    tracep->fullCData(oldp+314,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[13]),5);
    tracep->fullCData(oldp+315,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[14]),5);
    tracep->fullCData(oldp+316,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[15]),5);
    tracep->fullCData(oldp+317,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[16]),5);
    tracep->fullCData(oldp+318,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[17]),5);
    tracep->fullCData(oldp+319,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[18]),5);
    tracep->fullCData(oldp+320,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[19]),5);
    tracep->fullCData(oldp+321,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[20]),5);
    tracep->fullCData(oldp+322,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[21]),5);
    tracep->fullCData(oldp+323,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[22]),5);
    tracep->fullCData(oldp+324,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[23]),5);
    tracep->fullCData(oldp+325,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[24]),5);
    tracep->fullCData(oldp+326,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[25]),5);
    tracep->fullCData(oldp+327,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[26]),5);
    tracep->fullCData(oldp+328,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[27]),5);
    tracep->fullCData(oldp+329,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[28]),5);
    tracep->fullCData(oldp+330,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[29]),5);
    tracep->fullCData(oldp+331,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[30]),5);
    tracep->fullCData(oldp+332,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[31]),5);
    tracep->fullCData(oldp+333,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[32]),5);
    tracep->fullCData(oldp+334,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[33]),5);
    tracep->fullCData(oldp+335,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[34]),5);
    tracep->fullCData(oldp+336,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[35]),5);
    tracep->fullCData(oldp+337,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[36]),5);
    tracep->fullCData(oldp+338,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[37]),5);
    tracep->fullCData(oldp+339,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[38]),5);
    tracep->fullCData(oldp+340,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[39]),5);
    tracep->fullCData(oldp+341,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[40]),5);
    tracep->fullCData(oldp+342,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[41]),5);
    tracep->fullCData(oldp+343,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[42]),5);
    tracep->fullCData(oldp+344,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[43]),5);
    tracep->fullCData(oldp+345,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[44]),5);
    tracep->fullCData(oldp+346,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[45]),5);
    tracep->fullCData(oldp+347,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[46]),5);
    tracep->fullCData(oldp+348,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[47]),5);
    tracep->fullCData(oldp+349,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[48]),5);
    tracep->fullCData(oldp+350,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[49]),5);
    tracep->fullCData(oldp+351,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[50]),5);
    tracep->fullCData(oldp+352,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[51]),5);
    tracep->fullCData(oldp+353,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[52]),5);
    tracep->fullCData(oldp+354,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[53]),5);
    tracep->fullCData(oldp+355,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[54]),5);
    tracep->fullCData(oldp+356,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[55]),5);
    tracep->fullCData(oldp+357,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[56]),5);
    tracep->fullCData(oldp+358,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[57]),5);
    tracep->fullCData(oldp+359,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[58]),5);
    tracep->fullCData(oldp+360,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[59]),5);
    tracep->fullCData(oldp+361,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[60]),5);
    tracep->fullCData(oldp+362,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[61]),5);
    tracep->fullCData(oldp+363,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[62]),5);
    tracep->fullCData(oldp+364,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[63]),5);
    tracep->fullQData(oldp+365,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0]),64);
    tracep->fullQData(oldp+367,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1]),64);
    tracep->fullQData(oldp+369,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2]),64);
    tracep->fullQData(oldp+371,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3]),64);
    tracep->fullQData(oldp+373,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4]),64);
    tracep->fullQData(oldp+375,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[0]),64);
    tracep->fullQData(oldp+377,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[1]),64);
    tracep->fullQData(oldp+379,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[2]),64);
    tracep->fullQData(oldp+381,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[3]),64);
    tracep->fullQData(oldp+383,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[4]),64);
    tracep->fullQData(oldp+385,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[0]),64);
    tracep->fullQData(oldp+387,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[1]),64);
    tracep->fullQData(oldp+389,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[2]),64);
    tracep->fullQData(oldp+391,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[3]),64);
    tracep->fullQData(oldp+393,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[4]),64);
    tracep->fullCData(oldp+395,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+396,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0U]),5);
    tracep->fullCData(oldp+397,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+398,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+399,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+400,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0xaU]),5);
    tracep->fullCData(oldp+401,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+402,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+403,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+404,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0xbU]),5);
    tracep->fullCData(oldp+405,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+406,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+407,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+408,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0xcU]),5);
    tracep->fullCData(oldp+409,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+410,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+411,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+412,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0xdU]),5);
    tracep->fullCData(oldp+413,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+414,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+415,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+416,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0xeU]),5);
    tracep->fullCData(oldp+417,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+418,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+419,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+420,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0xfU]),5);
    tracep->fullCData(oldp+421,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+422,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+423,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+424,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x10U]),5);
    tracep->fullCData(oldp+425,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+426,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+427,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+428,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x11U]),5);
    tracep->fullCData(oldp+429,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+430,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+431,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+432,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x12U]),5);
    tracep->fullCData(oldp+433,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+434,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+435,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+436,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x13U]),5);
    tracep->fullCData(oldp+437,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+438,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+439,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+440,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [1U]),5);
    tracep->fullCData(oldp+441,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+442,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+443,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+444,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x14U]),5);
    tracep->fullCData(oldp+445,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+446,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+447,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+448,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x15U]),5);
    tracep->fullCData(oldp+449,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+450,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+451,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+452,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x16U]),5);
    tracep->fullCData(oldp+453,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+454,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+455,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+456,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x17U]),5);
    tracep->fullCData(oldp+457,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+458,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+459,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+460,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x18U]),5);
    tracep->fullCData(oldp+461,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+462,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+463,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+464,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x19U]),5);
    tracep->fullCData(oldp+465,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+466,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+467,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+468,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x1aU]),5);
    tracep->fullCData(oldp+469,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+470,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+471,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+472,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x1bU]),5);
    tracep->fullCData(oldp+473,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+474,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+475,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+476,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x1cU]),5);
    tracep->fullCData(oldp+477,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+478,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+479,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+480,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x1dU]),5);
    tracep->fullCData(oldp+481,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+482,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+483,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+484,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [2U]),5);
    tracep->fullCData(oldp+485,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+486,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+487,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+488,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x1eU]),5);
    tracep->fullCData(oldp+489,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+490,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+491,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+492,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x1fU]),5);
    tracep->fullCData(oldp+493,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+494,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+495,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+496,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x20U]),5);
    tracep->fullCData(oldp+497,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+498,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+499,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+500,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x21U]),5);
    tracep->fullCData(oldp+501,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+502,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+503,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+504,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x22U]),5);
    tracep->fullCData(oldp+505,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+506,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+507,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+508,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x23U]),5);
    tracep->fullCData(oldp+509,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+510,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+511,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+512,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x24U]),5);
    tracep->fullCData(oldp+513,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+514,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+515,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+516,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x25U]),5);
    tracep->fullCData(oldp+517,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+518,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+519,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+520,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x26U]),5);
    tracep->fullCData(oldp+521,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+522,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+523,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+524,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x27U]),5);
    tracep->fullCData(oldp+525,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+526,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+527,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+528,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [3U]),5);
    tracep->fullCData(oldp+529,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+530,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+531,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+532,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x28U]),5);
    tracep->fullCData(oldp+533,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+534,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+535,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+536,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x29U]),5);
    tracep->fullCData(oldp+537,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+538,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+539,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+540,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x2aU]),5);
    tracep->fullCData(oldp+541,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+542,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+543,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+544,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x2bU]),5);
    tracep->fullCData(oldp+545,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+546,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+547,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+548,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x2cU]),5);
    tracep->fullCData(oldp+549,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+550,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+551,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+552,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x2dU]),5);
    tracep->fullCData(oldp+553,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+554,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+555,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+556,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x2eU]),5);
    tracep->fullCData(oldp+557,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+558,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+559,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+560,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x2fU]),5);
    tracep->fullCData(oldp+561,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+562,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+563,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+564,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x30U]),5);
    tracep->fullCData(oldp+565,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+566,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+567,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+568,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x31U]),5);
    tracep->fullCData(oldp+569,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+570,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+571,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+572,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [4U]),5);
    tracep->fullCData(oldp+573,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+574,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+575,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+576,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x32U]),5);
    tracep->fullCData(oldp+577,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+578,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+579,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+580,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x33U]),5);
    tracep->fullCData(oldp+581,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+582,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+583,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+584,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x34U]),5);
    tracep->fullCData(oldp+585,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+586,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+587,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+588,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x35U]),5);
    tracep->fullCData(oldp+589,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+590,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+591,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+592,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x36U]),5);
    tracep->fullCData(oldp+593,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+594,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+595,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+596,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x37U]),5);
    tracep->fullCData(oldp+597,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+598,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+599,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+600,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x38U]),5);
    tracep->fullCData(oldp+601,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+602,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+603,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+604,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x39U]),5);
    tracep->fullCData(oldp+605,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+606,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+607,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+608,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x3aU]),5);
    tracep->fullCData(oldp+609,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+610,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+611,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+612,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x3bU]),5);
    tracep->fullCData(oldp+613,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+614,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+615,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+616,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [5U]),5);
    tracep->fullCData(oldp+617,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+618,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+619,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+620,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x3cU]),5);
    tracep->fullCData(oldp+621,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+622,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+623,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+624,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x3dU]),5);
    tracep->fullCData(oldp+625,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+626,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+627,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+628,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x3eU]),5);
    tracep->fullCData(oldp+629,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+630,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+631,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+632,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [0x3fU]),5);
    tracep->fullCData(oldp+633,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+634,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+635,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+636,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [6U]),5);
    tracep->fullCData(oldp+637,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+638,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+639,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+640,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [7U]),5);
    tracep->fullCData(oldp+641,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+642,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+643,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+644,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [8U]),5);
    tracep->fullCData(oldp+645,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+646,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+647,(((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
                                 | ((8U & (VL_REDXOR_4(
                                                       (0xcU 
                                                        & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                                           << 3U)) 
                                    | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                  >> 2U)) 
                                              << 2U)) 
                                       | (3U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                ^ (
                                                   (2U 
                                                    & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                         >> 4U))))))))),5);
    tracep->fullCData(oldp+648,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                [9U]),5);
    tracep->fullCData(oldp+649,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029),5);
    tracep->fullCData(oldp+650,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029),5);
    tracep->fullCData(oldp+651,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d))),4);
    tracep->fullCData(oldp+652,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d))),4);
    tracep->fullCData(oldp+653,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d) 
                                         >> 4U))),4);
    tracep->fullCData(oldp+654,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed))),4);
    tracep->fullCData(oldp+655,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                                         >> 4U))),4);
    tracep->fullCData(oldp+656,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))),4);
    tracep->fullCData(oldp+657,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                         >> 4U))),4);
    tracep->fullCData(oldp+658,((0x1fU & ((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                          + (0xfU & 
                                             ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                              >> 4U))))),5);
    tracep->fullBit(oldp+659,((0xfU != (0x1fU & ((0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                                 + 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                                     >> 4U)))))));
    tracep->fullCData(oldp+660,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt),5);
    tracep->fullBit(oldp+661,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                               & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                  >> 4U))));
    tracep->fullCData(oldp+662,((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                     >> 4U)) ? 0xfU
                                  : (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)))),4);
    tracep->fullBit(oldp+663,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                               & (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))))))));
    tracep->fullCData(oldp+664,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q),4);
    tracep->fullCData(oldp+665,((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed))),4);
    tracep->fullCData(oldp+666,((0xfU & ((IData)(0xfU) 
                                         - (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset)))),4);
    tracep->fullCData(oldp+667,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt),5);
    tracep->fullBit(oldp+668,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                               & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                  >> 4U))));
    tracep->fullCData(oldp+669,((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                     >> 4U)) ? 0U : 
                                 (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)))),4);
    tracep->fullBit(oldp+670,(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                               & (0U != (0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                                 >> 4U))))));
    tracep->fullCData(oldp+671,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q),4);
    tracep->fullCData(oldp+672,((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                                         >> 4U))),4);
    tracep->fullBit(oldp+673,((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q) 
                                | (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error)) 
                               | (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error))));
    tracep->fullQData(oldp+674,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U])))),64);
    tracep->fullQData(oldp+676,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U])))),64);
    tracep->fullQData(oldp+678,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U])))),64);
    tracep->fullQData(oldp+680,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U])))),64);
    tracep->fullQData(oldp+682,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[8U])))),64);
    tracep->fullCData(oldp+684,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[0]),8);
    tracep->fullCData(oldp+685,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[1]),8);
    tracep->fullCData(oldp+686,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[2]),8);
    tracep->fullCData(oldp+687,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[3]),8);
    tracep->fullCData(oldp+688,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[4]),8);
    tracep->fullCData(oldp+689,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[5]),8);
    tracep->fullCData(oldp+690,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[6]),8);
    tracep->fullCData(oldp+691,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[7]),8);
    tracep->fullCData(oldp+692,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[8]),8);
    tracep->fullCData(oldp+693,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[9]),8);
    tracep->fullCData(oldp+694,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[10]),8);
    tracep->fullCData(oldp+695,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[11]),8);
    tracep->fullCData(oldp+696,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[12]),8);
    tracep->fullCData(oldp+697,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[13]),8);
    tracep->fullCData(oldp+698,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[14]),8);
    tracep->fullCData(oldp+699,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[15]),8);
    tracep->fullCData(oldp+700,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[16]),8);
    tracep->fullCData(oldp+701,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[17]),8);
    tracep->fullCData(oldp+702,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[18]),8);
    tracep->fullCData(oldp+703,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[19]),8);
    tracep->fullCData(oldp+704,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[20]),8);
    tracep->fullCData(oldp+705,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[21]),8);
    tracep->fullCData(oldp+706,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[22]),8);
    tracep->fullCData(oldp+707,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[23]),8);
    tracep->fullCData(oldp+708,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[24]),8);
    tracep->fullCData(oldp+709,(vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[25]),8);
    tracep->fullCData(oldp+710,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[0]),8);
    tracep->fullCData(oldp+711,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[1]),8);
    tracep->fullCData(oldp+712,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[2]),8);
    tracep->fullCData(oldp+713,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[3]),8);
    tracep->fullCData(oldp+714,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[4]),8);
    tracep->fullCData(oldp+715,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[5]),8);
    tracep->fullCData(oldp+716,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[6]),8);
    tracep->fullCData(oldp+717,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[7]),8);
    tracep->fullCData(oldp+718,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[8]),8);
    tracep->fullCData(oldp+719,(vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[9]),8);
    tracep->fullCData(oldp+720,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[0]),8);
    tracep->fullCData(oldp+721,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[1]),8);
    tracep->fullCData(oldp+722,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[2]),8);
    tracep->fullCData(oldp+723,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[3]),8);
    tracep->fullCData(oldp+724,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[4]),8);
    tracep->fullCData(oldp+725,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[5]),8);
    tracep->fullCData(oldp+726,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[6]),8);
    tracep->fullCData(oldp+727,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[7]),8);
    tracep->fullCData(oldp+728,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[8]),8);
    tracep->fullCData(oldp+729,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[9]),8);
    tracep->fullCData(oldp+730,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[10]),8);
    tracep->fullCData(oldp+731,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[11]),8);
    tracep->fullCData(oldp+732,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[12]),8);
    tracep->fullCData(oldp+733,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[13]),8);
    tracep->fullCData(oldp+734,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[14]),8);
    tracep->fullCData(oldp+735,(vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[15]),8);
    tracep->fullIData(oldp+736,(vlSelf->prim_ascon_duplex_tb__DOT__msg_count_d),32);
    tracep->fullIData(oldp+737,(vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q),32);
    tracep->fullIData(oldp+738,(vlSelf->prim_ascon_duplex_tb__DOT__ct_count_d),32);
    tracep->fullIData(oldp+739,(vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q),32);
    tracep->fullIData(oldp+740,(vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state),32);
    tracep->fullWData(oldp+741,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data),128);
    tracep->fullWData(oldp+745,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg),128);
    tracep->fullWData(oldp+749,(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct),128);
    tracep->fullCData(oldp+753,(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes),5);
    tracep->fullWData(oldp+754,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out),128);
    tracep->fullBit(oldp+758,(vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid));
    tracep->fullWData(oldp+759,(vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag),128);
    tracep->fullBit(oldp+763,(vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid));
    tracep->fullCData(oldp+764,(vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg),4);
    tracep->fullQData(oldp+765,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[0U])))),64);
    tracep->fullQData(oldp+767,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[2U])))),64);
    tracep->fullQData(oldp+769,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[4U])))),64);
    tracep->fullQData(oldp+771,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[6U])))),64);
    tracep->fullQData(oldp+773,((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[8U])))),64);
    tracep->fullSData(oldp+775,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d),10);
    tracep->fullCData(oldp+776,(((8U == (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes))
                                  ? 6U : 9U)),4);
    tracep->fullWData(oldp+777,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask),128);
    tracep->fullWData(oldp+781,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask),128);
    tracep->fullWData(oldp+785,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes),128);
    tracep->fullWData(oldp+789,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded),128);
    tracep->fullWData(oldp+793,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded),128);
    tracep->fullWData(oldp+797,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex),128);
    tracep->fullBit(oldp+801,(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error));
    tracep->fullBit(oldp+802,(vlSelf->clk_i));
    tracep->fullBit(oldp+803,(vlSelf->rst_ni));
    tracep->fullBit(oldp+804,(vlSelf->test_done_o));
    tracep->fullBit(oldp+805,(vlSelf->test_passed_o));
    tracep->fullIData(oldp+806,(0x64U),32);
    tracep->fullCData(oldp+807,(1U),3);
    tracep->fullCData(oldp+808,(1U),2);
    tracep->fullIData(oldp+809,(8U),32);
    tracep->fullIData(oldp+810,(0xaU),32);
    tracep->fullIData(oldp+811,(0x1aU),32);
    tracep->fullIData(oldp+812,(8U),32);
    __Vtemp_h5bb2eb74__0[0U] = 0U;
    __Vtemp_h5bb2eb74__0[1U] = 0U;
    __Vtemp_h5bb2eb74__0[2U] = 0xcafef00dU;
    __Vtemp_h5bb2eb74__0[3U] = 0xdeadbeefU;
    tracep->fullWData(oldp+813,(__Vtemp_h5bb2eb74__0),128);
    __Vtemp_h6e924560__0[0U] = 0xcafef00dU;
    __Vtemp_h6e924560__0[1U] = 0xdeadbeefU;
    __Vtemp_h6e924560__0[2U] = 0U;
    __Vtemp_h6e924560__0[3U] = 0U;
    tracep->fullWData(oldp+817,(__Vtemp_h6e924560__0),128);
    tracep->fullCData(oldp+821,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[0]),8);
    tracep->fullCData(oldp+822,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[1]),8);
    tracep->fullCData(oldp+823,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[2]),8);
    tracep->fullCData(oldp+824,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[3]),8);
    tracep->fullCData(oldp+825,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[4]),8);
    tracep->fullCData(oldp+826,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[5]),8);
    tracep->fullCData(oldp+827,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[6]),8);
    tracep->fullCData(oldp+828,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[7]),8);
    tracep->fullCData(oldp+829,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[8]),8);
    tracep->fullCData(oldp+830,(vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[9]),8);
    tracep->fullCData(oldp+831,(9U),4);
    tracep->fullCData(oldp+832,(9U),4);
    tracep->fullCData(oldp+833,(9U),4);
    tracep->fullBit(oldp+834,(1U));
    tracep->fullQData(oldp+835,(0x80400c0600000000ULL),64);
    __Vtemp_h29180254__0[0U] = 0U;
    __Vtemp_h29180254__0[1U] = 0U;
    __Vtemp_h29180254__0[2U] = 0U;
    __Vtemp_h29180254__0[3U] = 0x80000000U;
    tracep->fullWData(oldp+837,(__Vtemp_h29180254__0),128);
    tracep->fullIData(oldp+841,(4U),32);
    tracep->fullCData(oldp+842,(0U),4);
    tracep->fullBit(oldp+843,(1U));
    tracep->fullCData(oldp+844,(0xfU),4);
    tracep->fullBit(oldp+845,(0U));
    tracep->fullCData(oldp+846,(1U),4);
    tracep->fullIData(oldp+847,(2U),32);
    tracep->fullCData(oldp+848,(0xfU),4);
    tracep->fullSData(oldp+849,(0x2aeU),10);
    tracep->fullIData(oldp+850,(0x20U),32);
    tracep->fullIData(oldp+851,(1U),32);
    tracep->fullIData(oldp+852,(0x17U),32);
    tracep->fullIData(oldp+853,(0xeU),32);
    tracep->fullIData(oldp+854,(1U),32);
    tracep->fullIData(oldp+855,(0U),32);
    tracep->fullCData(oldp+856,(0xbU),4);
    tracep->fullCData(oldp+857,(3U),4);
    tracep->fullCData(oldp+858,(2U),4);
    tracep->fullCData(oldp+859,(0xaU),4);
    tracep->fullCData(oldp+860,(0xcU),4);
    tracep->fullCData(oldp+861,(9U),4);
    tracep->fullCData(oldp+862,(1U),4);
    tracep->fullCData(oldp+863,(6U),4);
    tracep->fullCData(oldp+864,(7U),4);
    tracep->fullCData(oldp+865,(8U),4);
    tracep->fullCData(oldp+866,(0xeU),4);
    tracep->fullCData(oldp+867,(5U),4);
    tracep->fullCData(oldp+868,(0xdU),4);
    tracep->fullCData(oldp+869,(4U),4);
    tracep->fullQData(oldp+870,(0ULL),64);
    tracep->fullQData(oldp+872,(0x13198a2e03707344ULL),64);
    tracep->fullQData(oldp+874,(0xa4093822299f31d0ULL),64);
    tracep->fullQData(oldp+876,(0x82efa98ec4e6c89ULL),64);
    tracep->fullQData(oldp+878,(0x452821e638d01377ULL),64);
    tracep->fullQData(oldp+880,(0xbe5466cf34e90c6cULL),64);
    tracep->fullQData(oldp+882,(0x7ef84f78fd955cb1ULL),64);
    tracep->fullQData(oldp+884,(0x85840851f1ac43aaULL),64);
    tracep->fullQData(oldp+886,(0xc882d32f25323c54ULL),64);
    tracep->fullQData(oldp+888,(0x64a51195e0e3610dULL),64);
    tracep->fullQData(oldp+890,(0xd3b5a399ca0c2399ULL),64);
    tracep->fullQData(oldp+892,(0xc0ac29b7c97c50ddULL),64);
    tracep->fullSData(oldp+894,(0x7bdeU),16);
    tracep->fullSData(oldp+895,(0xbde7U),16);
    tracep->fullSData(oldp+896,(0xde7bU),16);
    tracep->fullSData(oldp+897,(0xe7bdU),16);
    tracep->fullCData(oldp+898,(0U),5);
    tracep->fullCData(oldp+899,(8U),5);
    tracep->fullCData(oldp+900,(0x10U),5);
    tracep->fullCData(oldp+901,(0x18U),5);
    tracep->fullCData(oldp+902,(1U),5);
    tracep->fullCData(oldp+903,(9U),5);
    tracep->fullCData(oldp+904,(0x11U),5);
    tracep->fullCData(oldp+905,(0x19U),5);
    tracep->fullCData(oldp+906,(2U),5);
    tracep->fullCData(oldp+907,(0xaU),5);
    tracep->fullCData(oldp+908,(0x12U),5);
    tracep->fullCData(oldp+909,(0x1aU),5);
    tracep->fullCData(oldp+910,(3U),5);
    tracep->fullCData(oldp+911,(0xbU),5);
    tracep->fullCData(oldp+912,(0x13U),5);
    tracep->fullCData(oldp+913,(0x1bU),5);
    tracep->fullCData(oldp+914,(4U),5);
    tracep->fullCData(oldp+915,(0xcU),5);
    tracep->fullCData(oldp+916,(0x14U),5);
    tracep->fullCData(oldp+917,(0x1cU),5);
    tracep->fullCData(oldp+918,(5U),5);
    tracep->fullCData(oldp+919,(0xdU),5);
    tracep->fullCData(oldp+920,(0x15U),5);
    tracep->fullCData(oldp+921,(0x1dU),5);
    tracep->fullCData(oldp+922,(6U),5);
    tracep->fullCData(oldp+923,(0xeU),5);
    tracep->fullCData(oldp+924,(0x16U),5);
    tracep->fullCData(oldp+925,(0x1eU),5);
    tracep->fullCData(oldp+926,(7U),5);
    tracep->fullCData(oldp+927,(0xfU),5);
    tracep->fullCData(oldp+928,(0x17U),5);
    tracep->fullCData(oldp+929,(0x1fU),5);
    tracep->fullCData(oldp+930,(0U),6);
    tracep->fullCData(oldp+931,(0x10U),6);
    tracep->fullCData(oldp+932,(0x20U),6);
    tracep->fullCData(oldp+933,(0x30U),6);
    tracep->fullCData(oldp+934,(1U),6);
    tracep->fullCData(oldp+935,(0x11U),6);
    tracep->fullCData(oldp+936,(0x21U),6);
    tracep->fullCData(oldp+937,(0x31U),6);
    tracep->fullCData(oldp+938,(2U),6);
    tracep->fullCData(oldp+939,(0x12U),6);
    tracep->fullCData(oldp+940,(0x22U),6);
    tracep->fullCData(oldp+941,(0x32U),6);
    tracep->fullCData(oldp+942,(3U),6);
    tracep->fullCData(oldp+943,(0x13U),6);
    tracep->fullCData(oldp+944,(0x23U),6);
    tracep->fullCData(oldp+945,(0x33U),6);
    tracep->fullCData(oldp+946,(4U),6);
    tracep->fullCData(oldp+947,(0x14U),6);
    tracep->fullCData(oldp+948,(0x24U),6);
    tracep->fullCData(oldp+949,(0x34U),6);
    tracep->fullCData(oldp+950,(5U),6);
    tracep->fullCData(oldp+951,(0x15U),6);
    tracep->fullCData(oldp+952,(0x25U),6);
    tracep->fullCData(oldp+953,(0x35U),6);
    tracep->fullCData(oldp+954,(6U),6);
    tracep->fullCData(oldp+955,(0x16U),6);
    tracep->fullCData(oldp+956,(0x26U),6);
    tracep->fullCData(oldp+957,(0x36U),6);
    tracep->fullCData(oldp+958,(7U),6);
    tracep->fullCData(oldp+959,(0x17U),6);
    tracep->fullCData(oldp+960,(0x27U),6);
    tracep->fullCData(oldp+961,(0x37U),6);
    tracep->fullCData(oldp+962,(8U),6);
    tracep->fullCData(oldp+963,(0x18U),6);
    tracep->fullCData(oldp+964,(0x28U),6);
    tracep->fullCData(oldp+965,(0x38U),6);
    tracep->fullCData(oldp+966,(9U),6);
    tracep->fullCData(oldp+967,(0x19U),6);
    tracep->fullCData(oldp+968,(0x29U),6);
    tracep->fullCData(oldp+969,(0x39U),6);
    tracep->fullCData(oldp+970,(0xaU),6);
    tracep->fullCData(oldp+971,(0x1aU),6);
    tracep->fullCData(oldp+972,(0x2aU),6);
    tracep->fullCData(oldp+973,(0x3aU),6);
    tracep->fullCData(oldp+974,(0xbU),6);
    tracep->fullCData(oldp+975,(0x1bU),6);
    tracep->fullCData(oldp+976,(0x2bU),6);
    tracep->fullCData(oldp+977,(0x3bU),6);
    tracep->fullCData(oldp+978,(0xcU),6);
    tracep->fullCData(oldp+979,(0x1cU),6);
    tracep->fullCData(oldp+980,(0x2cU),6);
    tracep->fullCData(oldp+981,(0x3cU),6);
    tracep->fullCData(oldp+982,(0xdU),6);
    tracep->fullCData(oldp+983,(0x1dU),6);
    tracep->fullCData(oldp+984,(0x2dU),6);
    tracep->fullCData(oldp+985,(0x3dU),6);
    tracep->fullCData(oldp+986,(0xeU),6);
    tracep->fullCData(oldp+987,(0x1eU),6);
    tracep->fullCData(oldp+988,(0x2eU),6);
    tracep->fullCData(oldp+989,(0x3eU),6);
    tracep->fullCData(oldp+990,(0xfU),6);
    tracep->fullCData(oldp+991,(0x1fU),6);
    tracep->fullCData(oldp+992,(0x2fU),6);
    tracep->fullCData(oldp+993,(0x3fU),6);
    tracep->fullIData(oldp+994,(0U),22);
    tracep->fullIData(oldp+995,(0U),28);
    tracep->fullCData(oldp+996,(0U),7);
    tracep->fullQData(oldp+997,(0ULL),39);
    tracep->fullCData(oldp+999,(0U),8);
    __Vtemp_h60d92c90__0[0U] = 0U;
    __Vtemp_h60d92c90__0[1U] = 0U;
    __Vtemp_h60d92c90__0[2U] = 0U;
    tracep->fullWData(oldp+1000,(__Vtemp_h60d92c90__0),72);
    __Vtemp_h7d97dc07__0[0U] = 0U;
    __Vtemp_h7d97dc07__0[1U] = 0U;
    __Vtemp_h7d97dc07__0[2U] = 0U;
    tracep->fullWData(oldp+1003,(__Vtemp_h7d97dc07__0),76);
    tracep->fullIData(oldp+1006,(0x2a0000U),22);
    tracep->fullIData(oldp+1007,(0xa800000U),28);
    tracep->fullCData(oldp+1008,(0x2aU),7);
    tracep->fullQData(oldp+1009,(0x2a00000000ULL),39);
    tracep->fullQData(oldp+1011,(0x5400000000000000ULL),64);
    tracep->fullCData(oldp+1013,(0xaaU),8);
    __Vtemp_h60d852ba__0[0U] = 0U;
    __Vtemp_h60d852ba__0[1U] = 0U;
    __Vtemp_h60d852ba__0[2U] = 0xaaU;
    tracep->fullWData(oldp+1014,(__Vtemp_h60d852ba__0),72);
    __Vtemp_h7da46fff__0[0U] = 0U;
    __Vtemp_h7da46fff__0[1U] = 0U;
    __Vtemp_h7da46fff__0[2U] = 0xaa0U;
    tracep->fullWData(oldp+1017,(__Vtemp_h7da46fff__0),76);
    tracep->fullIData(oldp+1020,(0x505043U),24);
    tracep->fullIData(oldp+1021,(0x39U),32);
    tracep->fullIData(oldp+1022,(7U),32);
    tracep->fullIData(oldp+1023,(0x40U),32);
    tracep->fullIData(oldp+1024,(0x27U),32);
    tracep->fullIData(oldp+1025,(5U),32);
    tracep->fullIData(oldp+1026,(0U),32);
    tracep->fullIData(oldp+1027,(0xffffffffU),32);
    tracep->fullCData(oldp+1028,(0U),5);
    tracep->fullCData(oldp+1029,(0x7fU),7);
    tracep->fullCData(oldp+1030,(0x7fU),7);
    tracep->fullBit(oldp+1031,(0U));
    tracep->fullCData(oldp+1032,(0U),3);
    tracep->fullCData(oldp+1033,(0U),3);
    tracep->fullCData(oldp+1034,(0U),2);
    tracep->fullCData(oldp+1035,(0U),8);
    tracep->fullIData(oldp+1036,(0U),32);
    tracep->fullCData(oldp+1037,(0U),4);
    tracep->fullIData(oldp+1038,(0xffffffffU),32);
    tracep->fullBit(oldp+1039,(1U));
    tracep->fullCData(oldp+1040,(0x7fU),7);
    tracep->fullCData(oldp+1041,(0x7fU),7);
    tracep->fullBit(oldp+1042,(0U));
    tracep->fullCData(oldp+1043,(0U),3);
    tracep->fullCData(oldp+1044,(0U),3);
    tracep->fullCData(oldp+1045,(0U),2);
    tracep->fullCData(oldp+1046,(0U),8);
    tracep->fullBit(oldp+1047,(0U));
    tracep->fullIData(oldp+1048,(0U),32);
    tracep->fullBit(oldp+1049,(0U));
    tracep->fullBit(oldp+1050,(1U));
    tracep->fullIData(oldp+1051,(0x10U),32);
    tracep->fullIData(oldp+1052,(0x1eU),32);
    tracep->fullIData(oldp+1053,(3U),32);
    tracep->fullIData(oldp+1054,(0xcU),32);
    tracep->fullIData(oldp+1055,(0x23U),32);
    tracep->fullCData(oldp+1056,(4U),8);
    tracep->fullCData(oldp+1057,(8U),8);
    tracep->fullCData(oldp+1058,(0xcU),8);
    tracep->fullCData(oldp+1059,(0x10U),8);
    tracep->fullCData(oldp+1060,(0x14U),8);
    tracep->fullCData(oldp+1061,(0x18U),8);
    tracep->fullCData(oldp+1062,(0x1cU),8);
    tracep->fullCData(oldp+1063,(0x20U),8);
    tracep->fullCData(oldp+1064,(0x24U),8);
    tracep->fullCData(oldp+1065,(0x28U),8);
    tracep->fullCData(oldp+1066,(0x2cU),8);
    tracep->fullCData(oldp+1067,(0x30U),8);
    tracep->fullCData(oldp+1068,(0x34U),8);
    tracep->fullCData(oldp+1069,(0x38U),8);
    tracep->fullCData(oldp+1070,(0x3cU),8);
    tracep->fullCData(oldp+1071,(0x40U),8);
    tracep->fullCData(oldp+1072,(0x44U),8);
    tracep->fullCData(oldp+1073,(0x48U),8);
    tracep->fullCData(oldp+1074,(0x4cU),8);
    tracep->fullCData(oldp+1075,(0x50U),8);
    tracep->fullCData(oldp+1076,(0x54U),8);
    tracep->fullCData(oldp+1077,(0x58U),8);
    tracep->fullCData(oldp+1078,(0x5cU),8);
    tracep->fullCData(oldp+1079,(0x60U),8);
    tracep->fullCData(oldp+1080,(0x64U),8);
    tracep->fullCData(oldp+1081,(0x68U),8);
    tracep->fullCData(oldp+1082,(0x6cU),8);
    tracep->fullCData(oldp+1083,(0x70U),8);
    tracep->fullCData(oldp+1084,(0x74U),8);
    tracep->fullCData(oldp+1085,(0x78U),8);
    tracep->fullCData(oldp+1086,(0x7cU),8);
    tracep->fullCData(oldp+1087,(0x80U),8);
    tracep->fullCData(oldp+1088,(0x84U),8);
    tracep->fullCData(oldp+1089,(0x88U),8);
    tracep->fullCData(oldp+1090,(0U),3);
    tracep->fullBit(oldp+1091,(0U));
    tracep->fullSData(oldp+1092,(0U),12);
    tracep->fullCData(oldp+1093,(0x69U),8);
    tracep->fullCData(oldp+1094,(0U),2);
    tracep->fullIData(oldp+1095,(0U),30);
    tracep->fullIData(oldp+1096,(0U),24);
    tracep->fullCData(oldp+1097,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[0]),4);
    tracep->fullCData(oldp+1098,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[1]),4);
    tracep->fullCData(oldp+1099,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[2]),4);
    tracep->fullCData(oldp+1100,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[3]),4);
    tracep->fullCData(oldp+1101,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[4]),4);
    tracep->fullCData(oldp+1102,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[5]),4);
    tracep->fullCData(oldp+1103,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[6]),4);
    tracep->fullCData(oldp+1104,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[7]),4);
    tracep->fullCData(oldp+1105,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[8]),4);
    tracep->fullCData(oldp+1106,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[9]),4);
    tracep->fullCData(oldp+1107,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[10]),4);
    tracep->fullCData(oldp+1108,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[11]),4);
    tracep->fullCData(oldp+1109,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[12]),4);
    tracep->fullCData(oldp+1110,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[13]),4);
    tracep->fullCData(oldp+1111,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[14]),4);
    tracep->fullCData(oldp+1112,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[15]),4);
    tracep->fullCData(oldp+1113,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[16]),4);
    tracep->fullCData(oldp+1114,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[17]),4);
    tracep->fullCData(oldp+1115,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[18]),4);
    tracep->fullCData(oldp+1116,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[19]),4);
    tracep->fullCData(oldp+1117,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[20]),4);
    tracep->fullCData(oldp+1118,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[21]),4);
    tracep->fullCData(oldp+1119,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[22]),4);
    tracep->fullCData(oldp+1120,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[23]),4);
    tracep->fullCData(oldp+1121,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[24]),4);
    tracep->fullCData(oldp+1122,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[25]),4);
    tracep->fullCData(oldp+1123,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[26]),4);
    tracep->fullCData(oldp+1124,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[27]),4);
    tracep->fullCData(oldp+1125,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[28]),4);
    tracep->fullCData(oldp+1126,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[29]),4);
    tracep->fullCData(oldp+1127,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[30]),4);
    tracep->fullCData(oldp+1128,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[31]),4);
    tracep->fullCData(oldp+1129,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[32]),4);
    tracep->fullCData(oldp+1130,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[33]),4);
    tracep->fullCData(oldp+1131,(vlSymsp->TOP__lc_ctrl_reg_pkg.__PVT__LC_CTRL_REGS_PERMIT[34]),4);
    tracep->fullIData(oldp+1132,(0x1000U),32);
    tracep->fullIData(oldp+1133,(0U),32);
    tracep->fullBit(oldp+1134,(1U));
    tracep->fullBit(oldp+1135,(1U));
    tracep->fullIData(oldp+1136,(6U),32);
    tracep->fullIData(oldp+1137,(0x400U),32);
    tracep->fullCData(oldp+1138,(0xaU),4);
    tracep->fullIData(oldp+1139,(0U),32);
    tracep->fullIData(oldp+1140,(0x80U),32);
    tracep->fullCData(oldp+1141,(5U),3);
    tracep->fullCData(oldp+1142,(1U),3);
    tracep->fullCData(oldp+1143,(0U),3);
    tracep->fullCData(oldp+1144,(3U),3);
    tracep->fullCData(oldp+1145,(2U),3);
    tracep->fullCData(oldp+1146,(4U),3);
    tracep->fullIData(oldp+1147,(0x14U),32);
    tracep->fullIData(oldp+1148,(0x140U),32);
    tracep->fullIData(oldp+1149,(0x15U),32);
    tracep->fullIData(oldp+1150,(0x18U),32);
    tracep->fullIData(oldp+1151,(0x180U),32);
    tracep->fullIData(oldp+1152,(0x19U),32);
    tracep->fullSData(oldp+1153,(0xa352U),16);
    tracep->fullSData(oldp+1154,(0xb35aU),16);
    tracep->fullSData(oldp+1155,(0x7181U),16);
    tracep->fullSData(oldp+1156,(0xfbd1U),16);
    tracep->fullSData(oldp+1157,(0x39caU),16);
    tracep->fullSData(oldp+1158,(0x3ddbU),16);
    tracep->fullSData(oldp+1159,(0x406bU),16);
    tracep->fullSData(oldp+1160,(0x40ffU),16);
    tracep->fullSData(oldp+1161,(0x7070U),16);
    tracep->fullSData(oldp+1162,(0xfcf2U),16);
    tracep->fullSData(oldp+1163,(0x6a88U),16);
    tracep->fullSData(oldp+1164,(0xfb9eU),16);
    tracep->fullSData(oldp+1165,(0x960eU),16);
    tracep->fullSData(oldp+1166,(0xf6ffU),16);
    tracep->fullSData(oldp+1167,(0x79e0U),16);
    tracep->fullSData(oldp+1168,(0x7df5U),16);
    tracep->fullSData(oldp+1169,(0x5cd4U),16);
    tracep->fullSData(oldp+1170,(0xfdd4U),16);
    tracep->fullSData(oldp+1171,(0x9489U),16);
    tracep->fullSData(oldp+1172,(0xb5a9U),16);
    tracep->fullSData(oldp+1173,(0xc6e5U),16);
    tracep->fullSData(oldp+1174,(0xc7fdU),16);
    tracep->fullSData(oldp+1175,(0x97e4U),16);
    tracep->fullSData(oldp+1176,(0xbfedU),16);
    tracep->fullSData(oldp+1177,(0xb403U),16);
    tracep->fullSData(oldp+1178,(0xb763U),16);
    tracep->fullSData(oldp+1179,(0x5e90U),16);
    tracep->fullSData(oldp+1180,(0xfe9dU),16);
    tracep->fullSData(oldp+1181,(0x8c7cU),16);
    tracep->fullSData(oldp+1182,(0xeefcU),16);
    tracep->fullSData(oldp+1183,(0xaab0U),16);
    tracep->fullSData(oldp+1184,(0xaffcU),16);
    tracep->fullSData(oldp+1185,(0x24cdU),16);
    tracep->fullSData(oldp+1186,(0x75efU),16);
    tracep->fullSData(oldp+1187,(0x5618U),16);
    tracep->fullSData(oldp+1188,(0x5ebdU),16);
    tracep->fullSData(oldp+1189,(0xdb21U),16);
    tracep->fullSData(oldp+1190,(0xdf3fU),16);
    tracep->fullSData(oldp+1191,(0xc949U),16);
    tracep->fullSData(oldp+1192,(0xf97dU),16);
    tracep->fullSData(oldp+1193,(0x3399U),16);
    tracep->fullSData(oldp+1194,(0x73fbU),16);
    tracep->fullSData(oldp+1195,(0x2e0dU),16);
    tracep->fullSData(oldp+1196,(0xaf6fU),16);
    tracep->fullSData(oldp+1197,(0x10f5U),16);
    tracep->fullSData(oldp+1198,(0xb1fdU),16);
    tracep->fullSData(oldp+1199,(0x386aU),16);
    tracep->fullSData(oldp+1200,(0x387fU),16);
    tracep->fullSData(oldp+1201,(0xf4b0U),16);
    tracep->fullSData(oldp+1202,(0xfef7U),16);
    tracep->fullSData(oldp+1203,(0x463dU),16);
    tracep->fullSData(oldp+1204,(0xe6bdU),16);
    tracep->fullSData(oldp+1205,(0x6612U),16);
    tracep->fullSData(oldp+1206,(0x7732U),16);
    tracep->fullSData(oldp+1207,(0x2945U),16);
    tracep->fullSData(oldp+1208,(0xe97fU),16);
    tracep->fullSData(oldp+1209,(0x3230U),16);
    tracep->fullSData(oldp+1210,(0xfaf4U),16);
    tracep->fullSData(oldp+1211,(0x418cU),16);
    tracep->fullSData(oldp+1212,(0x59fcU),16);
    tracep->fullSData(oldp+1213,(0x7bb0U),16);
    tracep->fullSData(oldp+1214,(0x7ff8U),16);
    tracep->fullSData(oldp+1215,(0x11d8U),16);
    tracep->fullSData(oldp+1216,(0xd5dbU),16);
    tracep->fullSData(oldp+1217,(0x3c40U),16);
    tracep->fullSData(oldp+1218,(0xfd68U),16);
    tracep->fullSData(oldp+1219,(0xe92aU),16);
    tracep->fullSData(oldp+1220,(0xef7bU),16);
    tracep->fullSData(oldp+1221,(0x14ecU),16);
    tracep->fullSData(oldp+1222,(0xb6feU),16);
    tracep->fullSData(oldp+1223,(0x5622U),16);
    tracep->fullSData(oldp+1224,(0x567bU),16);
    tracep->fullSData(oldp+1225,(0xa506U),16);
    tracep->fullSData(oldp+1226,(0xafc6U),16);
    tracep->fullSData(oldp+1227,(0x131bU),16);
    tracep->fullSData(oldp+1228,(0x9bbfU),16);
    tracep->fullSData(oldp+1229,(0x6883U),16);
    tracep->fullSData(oldp+1230,(0x6bdfU),16);
    tracep->fullSData(oldp+1231,(0x3938U),16);
    tracep->fullSData(oldp+1232,(0x3f3eU),16);
    tracep->fullSData(oldp+1233,(0x28d2U),16);
    tracep->fullSData(oldp+1234,(0x3ed7U),16);
    tracep->fullSData(oldp+1235,(0x7c8U),16);
    tracep->fullSData(oldp+1236,(0x57cdU),16);
    tracep->fullSData(oldp+1237,(0x4c44U),16);
    tracep->fullSData(oldp+1238,(0x6cccU),16);
    tracep->fullSData(oldp+1239,(0x13e9U),16);
    tracep->fullSData(oldp+1240,(0x5fffU),16);
    tracep->fullSData(oldp+1241,(0x9d03U),16);
    tracep->fullSData(oldp+1242,(0xff83U),16);
    tracep->fullSData(oldp+1243,(0x1a17U),16);
    tracep->fullSData(oldp+1244,(0x7b57U),16);
    tracep->fullSData(oldp+1245,(0x251dU),16);
    tracep->fullSData(oldp+1246,(0xb79fU),16);
    tracep->fullSData(oldp+1247,(0xc0c3U),16);
    tracep->fullSData(oldp+1248,(0xc7c3U),16);
    tracep->fullSData(oldp+1249,(0x2a29U),16);
    tracep->fullSData(oldp+1250,(0x7a2fU),16);
    tracep->fullSData(oldp+1251,(0x56c0U),16);
    tracep->fullSData(oldp+1252,(0xdee2U),16);
    tracep->fullSData(oldp+1253,(0x3694U),16);
    tracep->fullSData(oldp+1254,(0xbeb7U),16);
    tracep->fullSData(oldp+1255,(0x43e0U),16);
    tracep->fullSData(oldp+1256,(0xd3eaU),16);
    tracep->fullSData(oldp+1257,(0xf223U),16);
    tracep->fullSData(oldp+1258,(0xfe2bU),16);
    tracep->fullSData(oldp+1259,(0x4314U),16);
    tracep->fullSData(oldp+1260,(0xd757U),16);
    tracep->fullSData(oldp+1261,(0x1e98U),16);
    tracep->fullSData(oldp+1262,(0x3fbfU),16);
    tracep->fullSData(oldp+1263,(0xe84bU),16);
    tracep->fullSData(oldp+1264,(0xedefU),16);
    tracep->fullSData(oldp+1265,(0U),16);
    tracep->fullIData(oldp+1266,(0U),32);
    tracep->fullBit(oldp+1267,(0U));
    tracep->fullBit(oldp+1268,(1U));
    tracep->fullBit(oldp+1269,(0U));
    tracep->fullBit(oldp+1270,(1U));
    tracep->fullBit(oldp+1271,(0U));
    tracep->fullBit(oldp+1272,(1U));
    tracep->fullBit(oldp+1273,(0U));
    tracep->fullBit(oldp+1274,(1U));
    tracep->fullBit(oldp+1275,(0U));
    tracep->fullBit(oldp+1276,(1U));
    tracep->fullQData(oldp+1277,(0x80800c0800000000ULL),64);
    tracep->fullIData(oldp+1279,(0x50U),32);
    tracep->fullIData(oldp+1280,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[0]),32);
    tracep->fullIData(oldp+1281,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[1]),32);
    tracep->fullIData(oldp+1282,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[2]),32);
    tracep->fullIData(oldp+1283,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[3]),32);
    tracep->fullIData(oldp+1284,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[4]),32);
    tracep->fullIData(oldp+1285,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[5]),32);
    tracep->fullIData(oldp+1286,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[6]),32);
    tracep->fullIData(oldp+1287,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_256[7]),32);
    tracep->fullQData(oldp+1288,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[0]),64);
    tracep->fullQData(oldp+1290,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[1]),64);
    tracep->fullQData(oldp+1292,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[2]),64);
    tracep->fullQData(oldp+1294,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[3]),64);
    tracep->fullQData(oldp+1296,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[4]),64);
    tracep->fullQData(oldp+1298,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[5]),64);
    tracep->fullQData(oldp+1300,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[6]),64);
    tracep->fullQData(oldp+1302,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_384[7]),64);
    tracep->fullQData(oldp+1304,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[0]),64);
    tracep->fullQData(oldp+1306,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[1]),64);
    tracep->fullQData(oldp+1308,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[2]),64);
    tracep->fullQData(oldp+1310,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[3]),64);
    tracep->fullQData(oldp+1312,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[4]),64);
    tracep->fullQData(oldp+1314,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[5]),64);
    tracep->fullQData(oldp+1316,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[6]),64);
    tracep->fullQData(oldp+1318,(vlSymsp->TOP__prim_sha2_pkg.__PVT__InitHash_512[7]),64);
    tracep->fullIData(oldp+1320,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[0]),32);
    tracep->fullIData(oldp+1321,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[1]),32);
    tracep->fullIData(oldp+1322,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[2]),32);
    tracep->fullIData(oldp+1323,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[3]),32);
    tracep->fullIData(oldp+1324,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[4]),32);
    tracep->fullIData(oldp+1325,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[5]),32);
    tracep->fullIData(oldp+1326,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[6]),32);
    tracep->fullIData(oldp+1327,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[7]),32);
    tracep->fullIData(oldp+1328,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[8]),32);
    tracep->fullIData(oldp+1329,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[9]),32);
    tracep->fullIData(oldp+1330,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[10]),32);
    tracep->fullIData(oldp+1331,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[11]),32);
    tracep->fullIData(oldp+1332,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[12]),32);
    tracep->fullIData(oldp+1333,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[13]),32);
    tracep->fullIData(oldp+1334,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[14]),32);
    tracep->fullIData(oldp+1335,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[15]),32);
    tracep->fullIData(oldp+1336,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[16]),32);
    tracep->fullIData(oldp+1337,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[17]),32);
    tracep->fullIData(oldp+1338,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[18]),32);
    tracep->fullIData(oldp+1339,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[19]),32);
    tracep->fullIData(oldp+1340,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[20]),32);
    tracep->fullIData(oldp+1341,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[21]),32);
    tracep->fullIData(oldp+1342,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[22]),32);
    tracep->fullIData(oldp+1343,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[23]),32);
    tracep->fullIData(oldp+1344,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[24]),32);
    tracep->fullIData(oldp+1345,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[25]),32);
    tracep->fullIData(oldp+1346,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[26]),32);
    tracep->fullIData(oldp+1347,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[27]),32);
    tracep->fullIData(oldp+1348,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[28]),32);
    tracep->fullIData(oldp+1349,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[29]),32);
    tracep->fullIData(oldp+1350,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[30]),32);
    tracep->fullIData(oldp+1351,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[31]),32);
    tracep->fullIData(oldp+1352,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[32]),32);
    tracep->fullIData(oldp+1353,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[33]),32);
    tracep->fullIData(oldp+1354,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[34]),32);
    tracep->fullIData(oldp+1355,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[35]),32);
    tracep->fullIData(oldp+1356,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[36]),32);
    tracep->fullIData(oldp+1357,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[37]),32);
    tracep->fullIData(oldp+1358,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[38]),32);
    tracep->fullIData(oldp+1359,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[39]),32);
    tracep->fullIData(oldp+1360,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[40]),32);
    tracep->fullIData(oldp+1361,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[41]),32);
    tracep->fullIData(oldp+1362,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[42]),32);
    tracep->fullIData(oldp+1363,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[43]),32);
    tracep->fullIData(oldp+1364,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[44]),32);
    tracep->fullIData(oldp+1365,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[45]),32);
    tracep->fullIData(oldp+1366,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[46]),32);
    tracep->fullIData(oldp+1367,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[47]),32);
    tracep->fullIData(oldp+1368,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[48]),32);
    tracep->fullIData(oldp+1369,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[49]),32);
    tracep->fullIData(oldp+1370,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[50]),32);
    tracep->fullIData(oldp+1371,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[51]),32);
    tracep->fullIData(oldp+1372,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[52]),32);
    tracep->fullIData(oldp+1373,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[53]),32);
    tracep->fullIData(oldp+1374,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[54]),32);
    tracep->fullIData(oldp+1375,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[55]),32);
    tracep->fullIData(oldp+1376,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[56]),32);
    tracep->fullIData(oldp+1377,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[57]),32);
    tracep->fullIData(oldp+1378,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[58]),32);
    tracep->fullIData(oldp+1379,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[59]),32);
    tracep->fullIData(oldp+1380,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[60]),32);
    tracep->fullIData(oldp+1381,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[61]),32);
    tracep->fullIData(oldp+1382,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[62]),32);
    tracep->fullIData(oldp+1383,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime256[63]),32);
    tracep->fullQData(oldp+1384,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[0]),64);
    tracep->fullQData(oldp+1386,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[1]),64);
    tracep->fullQData(oldp+1388,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[2]),64);
    tracep->fullQData(oldp+1390,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[3]),64);
    tracep->fullQData(oldp+1392,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[4]),64);
    tracep->fullQData(oldp+1394,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[5]),64);
    tracep->fullQData(oldp+1396,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[6]),64);
    tracep->fullQData(oldp+1398,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[7]),64);
    tracep->fullQData(oldp+1400,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[8]),64);
    tracep->fullQData(oldp+1402,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[9]),64);
    tracep->fullQData(oldp+1404,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[10]),64);
    tracep->fullQData(oldp+1406,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[11]),64);
    tracep->fullQData(oldp+1408,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[12]),64);
    tracep->fullQData(oldp+1410,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[13]),64);
    tracep->fullQData(oldp+1412,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[14]),64);
    tracep->fullQData(oldp+1414,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[15]),64);
    tracep->fullQData(oldp+1416,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[16]),64);
    tracep->fullQData(oldp+1418,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[17]),64);
    tracep->fullQData(oldp+1420,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[18]),64);
    tracep->fullQData(oldp+1422,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[19]),64);
    tracep->fullQData(oldp+1424,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[20]),64);
    tracep->fullQData(oldp+1426,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[21]),64);
    tracep->fullQData(oldp+1428,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[22]),64);
    tracep->fullQData(oldp+1430,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[23]),64);
    tracep->fullQData(oldp+1432,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[24]),64);
    tracep->fullQData(oldp+1434,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[25]),64);
    tracep->fullQData(oldp+1436,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[26]),64);
    tracep->fullQData(oldp+1438,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[27]),64);
    tracep->fullQData(oldp+1440,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[28]),64);
    tracep->fullQData(oldp+1442,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[29]),64);
    tracep->fullQData(oldp+1444,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[30]),64);
    tracep->fullQData(oldp+1446,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[31]),64);
    tracep->fullQData(oldp+1448,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[32]),64);
    tracep->fullQData(oldp+1450,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[33]),64);
    tracep->fullQData(oldp+1452,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[34]),64);
    tracep->fullQData(oldp+1454,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[35]),64);
    tracep->fullQData(oldp+1456,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[36]),64);
    tracep->fullQData(oldp+1458,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[37]),64);
    tracep->fullQData(oldp+1460,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[38]),64);
    tracep->fullQData(oldp+1462,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[39]),64);
    tracep->fullQData(oldp+1464,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[40]),64);
    tracep->fullQData(oldp+1466,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[41]),64);
    tracep->fullQData(oldp+1468,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[42]),64);
    tracep->fullQData(oldp+1470,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[43]),64);
    tracep->fullQData(oldp+1472,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[44]),64);
    tracep->fullQData(oldp+1474,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[45]),64);
    tracep->fullQData(oldp+1476,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[46]),64);
    tracep->fullQData(oldp+1478,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[47]),64);
    tracep->fullQData(oldp+1480,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[48]),64);
    tracep->fullQData(oldp+1482,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[49]),64);
    tracep->fullQData(oldp+1484,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[50]),64);
    tracep->fullQData(oldp+1486,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[51]),64);
    tracep->fullQData(oldp+1488,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[52]),64);
    tracep->fullQData(oldp+1490,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[53]),64);
    tracep->fullQData(oldp+1492,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[54]),64);
    tracep->fullQData(oldp+1494,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[55]),64);
    tracep->fullQData(oldp+1496,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[56]),64);
    tracep->fullQData(oldp+1498,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[57]),64);
    tracep->fullQData(oldp+1500,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[58]),64);
    tracep->fullQData(oldp+1502,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[59]),64);
    tracep->fullQData(oldp+1504,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[60]),64);
    tracep->fullQData(oldp+1506,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[61]),64);
    tracep->fullQData(oldp+1508,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[62]),64);
    tracep->fullQData(oldp+1510,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[63]),64);
    tracep->fullQData(oldp+1512,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[64]),64);
    tracep->fullQData(oldp+1514,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[65]),64);
    tracep->fullQData(oldp+1516,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[66]),64);
    tracep->fullQData(oldp+1518,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[67]),64);
    tracep->fullQData(oldp+1520,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[68]),64);
    tracep->fullQData(oldp+1522,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[69]),64);
    tracep->fullQData(oldp+1524,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[70]),64);
    tracep->fullQData(oldp+1526,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[71]),64);
    tracep->fullQData(oldp+1528,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[72]),64);
    tracep->fullQData(oldp+1530,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[73]),64);
    tracep->fullQData(oldp+1532,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[74]),64);
    tracep->fullQData(oldp+1534,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[75]),64);
    tracep->fullQData(oldp+1536,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[76]),64);
    tracep->fullQData(oldp+1538,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[77]),64);
    tracep->fullQData(oldp+1540,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[78]),64);
    tracep->fullQData(oldp+1542,(vlSymsp->TOP__prim_sha2_pkg.__PVT__CubicRootPrime512[79]),64);
    tracep->fullIData(oldp+1544,(0x1cU),32);
}
