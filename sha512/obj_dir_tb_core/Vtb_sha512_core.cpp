// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sha512_core.h"
#include "Vtb_sha512_core__Syms.h"

//============================================================
// Constructors

Vtb_sha512_core::Vtb_sha512_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtb_sha512_core__Syms(_vcontextp__, _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtb_sha512_core::Vtb_sha512_core(const char* _vcname__)
    : Vtb_sha512_core(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtb_sha512_core::~Vtb_sha512_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtb_sha512_core___024root___eval_initial(Vtb_sha512_core___024root* vlSelf);
void Vtb_sha512_core___024root___eval_settle(Vtb_sha512_core___024root* vlSelf);
void Vtb_sha512_core___024root___eval(Vtb_sha512_core___024root* vlSelf);
QData Vtb_sha512_core___024root___change_request(Vtb_sha512_core___024root* vlSelf);
#ifdef VL_DEBUG
void Vtb_sha512_core___024root___eval_debug_assertions(Vtb_sha512_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sha512_core___024root___final(Vtb_sha512_core___024root* vlSelf);

static void _eval_initial_loop(Vtb_sha512_core__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtb_sha512_core___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtb_sha512_core___024root___eval_settle(&(vlSymsp->TOP));
        Vtb_sha512_core___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtb_sha512_core___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/tb/tb_sha512_core.v", 41, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtb_sha512_core___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtb_sha512_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sha512_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sha512_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtb_sha512_core___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtb_sha512_core___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/tb/tb_sha512_core.v", 41, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtb_sha512_core___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vtb_sha512_core::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtb_sha512_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_sha512_core::final() {
    Vtb_sha512_core___024root___final(&(vlSymsp->TOP));
}
