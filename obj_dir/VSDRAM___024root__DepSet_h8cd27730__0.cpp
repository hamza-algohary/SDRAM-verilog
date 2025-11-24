// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSDRAM.h for the primary calling header

#include "VSDRAM__pch.h"
#include "VSDRAM___024root.h"

VlCoroutine VSDRAM___024root___eval_initial__TOP__Vtiming__0(VSDRAM___024root* vlSelf);
VlCoroutine VSDRAM___024root___eval_initial__TOP__Vtiming__1(VSDRAM___024root* vlSelf);

void VSDRAM___024root___eval_initial(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VSDRAM___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VSDRAM___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_sdram__DOT__clock__0 
        = vlSelf->tb_sdram__DOT__clock;
}

VL_INLINE_OPT VlCoroutine VSDRAM___024root___eval_initial__TOP__Vtiming__1(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "src/testbench.v", 
                                           31);
        vlSelf->tb_sdram__DOT__clock = (1U & (~ (IData)(vlSelf->tb_sdram__DOT__clock)));
    }
}

VL_INLINE_OPT void VSDRAM___024root___act_sequent__TOP__0(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_sdram__DOT__dut__DOT__command = (((IData)(vlSelf->tb_sdram__DOT__ras_not) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->tb_sdram__DOT__cas_not) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->tb_sdram__DOT__chip_enable_not)));
    vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0 
        = ((~ (IData)(vlSelf->tb_sdram__DOT__chip_enable_not)) 
           & (IData)(vlSelf->tb_sdram__DOT__write_not));
    vlSelf->tb_sdram__DOT__data__strong__out1 = (((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                                   ? (IData)(vlSelf->tb_sdram__DOT__dut__DOT__output_data_register)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                                     ? 0xffU
                                                     : 0U));
    vlSelf->tb_sdram__DOT__data = ((((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                      ? 0xffU : 0U) 
                                    & (IData)(vlSelf->tb_sdram__DOT__data__strong__out1)) 
                                   | (((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                        ? (IData)(vlSelf->tb_sdram__DOT__data_out)
                                        : 0U) & ((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                                  ? 0xffU
                                                  : 0U)));
}

void VSDRAM___024root___eval_act(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VSDRAM___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VSDRAM___024root___nba_sequent__TOP__0(VSDRAM___024root* vlSelf);

void VSDRAM___024root___eval_nba(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSDRAM___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VSDRAM___024root___timing_resume(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc3102cc0__0.resume("@(posedge tb_sdram.clock)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VSDRAM___024root___timing_commit(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc3102cc0__0.commit("@(posedge tb_sdram.clock)");
    }
}

void VSDRAM___024root___eval_triggers__act(VSDRAM___024root* vlSelf);

bool VSDRAM___024root___eval_phase__act(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSDRAM___024root___eval_triggers__act(vlSelf);
    VSDRAM___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSDRAM___024root___timing_resume(vlSelf);
        VSDRAM___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSDRAM___024root___eval_phase__nba(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSDRAM___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__nba(VSDRAM___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__act(VSDRAM___024root* vlSelf);
#endif  // VL_DEBUG

void VSDRAM___024root___eval(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSDRAM___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/testbench.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSDRAM___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/testbench.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSDRAM___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSDRAM___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSDRAM___024root___eval_debug_assertions(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
