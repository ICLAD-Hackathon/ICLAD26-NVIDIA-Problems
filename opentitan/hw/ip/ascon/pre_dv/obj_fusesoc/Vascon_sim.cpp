// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vascon_sim.h"
#include "Vascon_sim__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vascon_sim::Vascon_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vascon_sim__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , test_done_o{vlSymsp->TOP.test_done_o}
    , test_passed_o{vlSymsp->TOP.test_passed_o}
    , __PVT__lc_ctrl_reg_pkg{vlSymsp->TOP.__PVT__lc_ctrl_reg_pkg}
    , __PVT__csrng_reg_pkg{vlSymsp->TOP.__PVT__csrng_reg_pkg}
    , __PVT__edn_reg_pkg{vlSymsp->TOP.__PVT__edn_reg_pkg}
    , __PVT__keymgr_reg_pkg{vlSymsp->TOP.__PVT__keymgr_reg_pkg}
    , __PVT__ascon_reg_pkg{vlSymsp->TOP.__PVT__ascon_reg_pkg}
    , __PVT__prim_sha2_pkg{vlSymsp->TOP.__PVT__prim_sha2_pkg}
    , rootp{&(vlSymsp->TOP)}
{
}

Vascon_sim::Vascon_sim(const char* _vcname__)
    : Vascon_sim(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vascon_sim::~Vascon_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vascon_sim___024root___eval_initial(Vascon_sim___024root* vlSelf);
void Vascon_sim___024root___eval_settle(Vascon_sim___024root* vlSelf);
void Vascon_sim___024root___eval(Vascon_sim___024root* vlSelf);
#ifdef VL_DEBUG
void Vascon_sim___024root___eval_debug_assertions(Vascon_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vascon_sim___024root___final(Vascon_sim___024root* vlSelf);

static void _eval_initial_loop(Vascon_sim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vascon_sim___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vascon_sim___024root___eval_settle(&(vlSymsp->TOP));
        Vascon_sim___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vascon_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vascon_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vascon_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vascon_sim___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vascon_sim::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vascon_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vascon_sim::final() {
    Vascon_sim___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vascon_sim___024root__trace_init_top(Vascon_sim___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vascon_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_sim___024root*>(voidSelf);
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vascon_sim___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vascon_sim___024root__trace_register(Vascon_sim___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vascon_sim::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vascon_sim___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
