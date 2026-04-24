// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_tb.h"
#include "Vaes_tb__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vaes_tb::Vaes_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vaes_tb__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_done_o{vlSymsp->TOP.test_done_o}
    , test_passed_o{vlSymsp->TOP.test_passed_o}
    , __PVT__lc_ctrl_reg_pkg{vlSymsp->TOP.__PVT__lc_ctrl_reg_pkg}
    , __PVT__csrng_reg_pkg{vlSymsp->TOP.__PVT__csrng_reg_pkg}
    , __PVT__edn_reg_pkg{vlSymsp->TOP.__PVT__edn_reg_pkg}
    , __PVT__keymgr_reg_pkg{vlSymsp->TOP.__PVT__keymgr_reg_pkg}
    , __PVT__aes_model_dpi_pkg{vlSymsp->TOP.__PVT__aes_model_dpi_pkg}
    , __PVT__aes_tb_pkg{vlSymsp->TOP.__PVT__aes_tb_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , __PVT__aes_reg_pkg{vlSymsp->TOP.__PVT__aes_reg_pkg}
    , __PVT__aes_sbox_canright_pkg{vlSymsp->TOP.__PVT__aes_sbox_canright_pkg}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel}
    , __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b{vlSymsp->TOP.__PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b}
    , rootp{&(vlSymsp->TOP)}
{
}

Vaes_tb::Vaes_tb(const char* _vcname__)
    : Vaes_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vaes_tb::~Vaes_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vaes_tb___024root___eval_initial(Vaes_tb___024root* vlSelf);
void Vaes_tb___024root___eval_settle(Vaes_tb___024root* vlSelf);
void Vaes_tb___024root___eval(Vaes_tb___024root* vlSelf);
QData Vaes_tb___024root___change_request(Vaes_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Vaes_tb___024root___eval_debug_assertions(Vaes_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_tb___024root___final(Vaes_tb___024root* vlSelf);

static void _eval_initial_loop(Vaes_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vaes_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vaes_tb___024root___eval_settle(&(vlSymsp->TOP));
        Vaes_tb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vaes_tb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/lowrisc_dv_verilator_aes_tb_0/rtl/aes_tb.sv", 5, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vaes_tb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vaes_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vaes_tb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vaes_tb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/lowrisc_dv_verilator_aes_tb_0/rtl/aes_tb.sv", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vaes_tb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vaes_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vaes_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vaes_tb::final() {
    Vaes_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vaes_tb___024root__trace_init_top(Vaes_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaes_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_tb___024root*>(voidSelf);
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vaes_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vaes_tb___024root__trace_register(Vaes_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vaes_tb::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaes_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
