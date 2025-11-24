// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSDRAM__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSDRAM::VSDRAM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSDRAM__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSDRAM::VSDRAM(const char* _vcname__)
    : VSDRAM(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSDRAM::~VSDRAM() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSDRAM___024root___eval_debug_assertions(VSDRAM___024root* vlSelf);
#endif  // VL_DEBUG
void VSDRAM___024root___eval_static(VSDRAM___024root* vlSelf);
void VSDRAM___024root___eval_initial(VSDRAM___024root* vlSelf);
void VSDRAM___024root___eval_settle(VSDRAM___024root* vlSelf);
void VSDRAM___024root___eval(VSDRAM___024root* vlSelf);

void VSDRAM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSDRAM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSDRAM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSDRAM___024root___eval_static(&(vlSymsp->TOP));
        VSDRAM___024root___eval_initial(&(vlSymsp->TOP));
        VSDRAM___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSDRAM___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VSDRAM::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VSDRAM::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VSDRAM::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VSDRAM::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VSDRAM::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSDRAM___024root___eval_final(VSDRAM___024root* vlSelf);

VL_ATTR_COLD void VSDRAM::final() {
    VSDRAM___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSDRAM::hierName() const { return vlSymsp->name(); }
const char* VSDRAM::modelName() const { return "VSDRAM"; }
unsigned VSDRAM::threads() const { return 1; }
void VSDRAM::prepareClone() const { contextp()->prepareClone(); }
void VSDRAM::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSDRAM::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSDRAM___024root__trace_decl_types(VerilatedVcd* tracep);

void VSDRAM___024root__trace_init_top(VSDRAM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSDRAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSDRAM___024root*>(voidSelf);
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSDRAM___024root__trace_decl_types(tracep);
    VSDRAM___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSDRAM___024root__trace_register(VSDRAM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSDRAM::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSDRAM::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSDRAM___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
