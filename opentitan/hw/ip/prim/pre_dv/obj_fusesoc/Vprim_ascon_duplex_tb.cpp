// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprim_ascon_duplex_tb.h"
#include "Vprim_ascon_duplex_tb__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vprim_ascon_duplex_tb::Vprim_ascon_duplex_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vprim_ascon_duplex_tb__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_done_o{vlSymsp->TOP.test_done_o}
    , test_passed_o{vlSymsp->TOP.test_passed_o}
    , __PVT__lc_ctrl_reg_pkg{vlSymsp->TOP.__PVT__lc_ctrl_reg_pkg}
    , __PVT__ascon_model_dpi_pkg{vlSymsp->TOP.__PVT__ascon_model_dpi_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , rootp{&(vlSymsp->TOP)}
{
}

Vprim_ascon_duplex_tb::Vprim_ascon_duplex_tb(const char* _vcname__)
    : Vprim_ascon_duplex_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vprim_ascon_duplex_tb::~Vprim_ascon_duplex_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vprim_ascon_duplex_tb___024root___eval_initial(Vprim_ascon_duplex_tb___024root* vlSelf);
void Vprim_ascon_duplex_tb___024root___eval_settle(Vprim_ascon_duplex_tb___024root* vlSelf);
void Vprim_ascon_duplex_tb___024root___eval(Vprim_ascon_duplex_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Vprim_ascon_duplex_tb___024root___eval_debug_assertions(Vprim_ascon_duplex_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vprim_ascon_duplex_tb___024root___final(Vprim_ascon_duplex_tb___024root* vlSelf);

static void _eval_initial_loop(Vprim_ascon_duplex_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vprim_ascon_duplex_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vprim_ascon_duplex_tb___024root___eval_settle(&(vlSymsp->TOP));
        Vprim_ascon_duplex_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vprim_ascon_duplex_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprim_ascon_duplex_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprim_ascon_duplex_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vprim_ascon_duplex_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vprim_ascon_duplex_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vprim_ascon_duplex_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vprim_ascon_duplex_tb::final() {
    Vprim_ascon_duplex_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vprim_ascon_duplex_tb___024root__trace_init_top(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vprim_ascon_duplex_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprim_ascon_duplex_tb___024root*>(voidSelf);
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vprim_ascon_duplex_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root__trace_register(Vprim_ascon_duplex_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vprim_ascon_duplex_tb::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vprim_ascon_duplex_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
