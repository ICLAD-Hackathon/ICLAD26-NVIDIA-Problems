// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkmac_reduced_tb.h"
#include "Vkmac_reduced_tb__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vkmac_reduced_tb::Vkmac_reduced_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vkmac_reduced_tb__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_done_o{vlSymsp->TOP.test_done_o}
    , test_passed_o{vlSymsp->TOP.test_passed_o}
    , __PVT__digestpp_dpi_pkg{vlSymsp->TOP.__PVT__digestpp_dpi_pkg}
    , __PVT__lc_ctrl_reg_pkg{vlSymsp->TOP.__PVT__lc_ctrl_reg_pkg}
    , __PVT__csrng_reg_pkg{vlSymsp->TOP.__PVT__csrng_reg_pkg}
    , __PVT__edn_reg_pkg{vlSymsp->TOP.__PVT__edn_reg_pkg}
    , __PVT__keymgr_reg_pkg{vlSymsp->TOP.__PVT__keymgr_reg_pkg}
    , __PVT__kmac_reg_pkg{vlSymsp->TOP.__PVT__kmac_reg_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , __PVT__sha3_pkg{vlSymsp->TOP.__PVT__sha3_pkg}
    , rootp{&(vlSymsp->TOP)}
{
}

Vkmac_reduced_tb::Vkmac_reduced_tb(const char* _vcname__)
    : Vkmac_reduced_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vkmac_reduced_tb::~Vkmac_reduced_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vkmac_reduced_tb___024root___eval_initial(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___eval_settle(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___eval(Vkmac_reduced_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Vkmac_reduced_tb___024root___eval_debug_assertions(Vkmac_reduced_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vkmac_reduced_tb___024root___final(Vkmac_reduced_tb___024root* vlSelf);

static void _eval_initial_loop(Vkmac_reduced_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vkmac_reduced_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vkmac_reduced_tb___024root___eval_settle(&(vlSymsp->TOP));
        Vkmac_reduced_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vkmac_reduced_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkmac_reduced_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkmac_reduced_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vkmac_reduced_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vkmac_reduced_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vkmac_reduced_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vkmac_reduced_tb::final() {
    Vkmac_reduced_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vkmac_reduced_tb___024root__trace_init_top(Vkmac_reduced_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vkmac_reduced_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vkmac_reduced_tb___024root*>(voidSelf);
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vkmac_reduced_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vkmac_reduced_tb___024root__trace_register(Vkmac_reduced_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vkmac_reduced_tb::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vkmac_reduced_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
