// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSDRAM.h for the primary calling header

#include "VSDRAM__pch.h"
#include "VSDRAM___024root.h"

VL_ATTR_COLD void VSDRAM___024root___eval_static__TOP(VSDRAM___024root* vlSelf);

VL_ATTR_COLD void VSDRAM___024root___eval_static(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_static\n"); );
    // Body
    VSDRAM___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VSDRAM___024root___eval_static__TOP(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_sdram__DOT__clock = 0U;
    vlSelf->tb_sdram__DOT__partial_address_bus = 0U;
    vlSelf->tb_sdram__DOT__chip_enable_not = 1U;
    vlSelf->tb_sdram__DOT__write_not = 1U;
    vlSelf->tb_sdram__DOT__ras_not = 1U;
    vlSelf->tb_sdram__DOT__cas_not = 1U;
    vlSelf->tb_sdram__DOT__drive_data = 0U;
    vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes = 0U;
    vlSelf->tb_sdram__DOT__dut__DOT__state = 0U;
    vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row = 0xfU;
}

VL_ATTR_COLD void VSDRAM___024root___eval_final(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__stl(VSDRAM___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSDRAM___024root___eval_phase__stl(VSDRAM___024root* vlSelf);

VL_ATTR_COLD void VSDRAM___024root___eval_settle(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSDRAM___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/testbench.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSDRAM___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__stl(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VSDRAM___024root___act_sequent__TOP__0(VSDRAM___024root* vlSelf);

VL_ATTR_COLD void VSDRAM___024root___eval_stl(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSDRAM___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VSDRAM___024root___eval_triggers__stl(VSDRAM___024root* vlSelf);

VL_ATTR_COLD bool VSDRAM___024root___eval_phase__stl(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSDRAM___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSDRAM___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__act(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_sdram.clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSDRAM___024root___dump_triggers__nba(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_sdram.clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSDRAM___024root___ctor_var_reset(VSDRAM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_sdram__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_sdram__DOT__partial_address_bus = VL_RAND_RESET_I(4);
    vlSelf->tb_sdram__DOT__chip_enable_not = VL_RAND_RESET_I(1);
    vlSelf->tb_sdram__DOT__write_not = VL_RAND_RESET_I(1);
    vlSelf->tb_sdram__DOT__ras_not = VL_RAND_RESET_I(1);
    vlSelf->tb_sdram__DOT__cas_not = VL_RAND_RESET_I(1);
    vlSelf->tb_sdram__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->tb_sdram__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_sdram__DOT__drive_data = VL_RAND_RESET_I(1);
    vlSelf->tb_sdram__DOT__data__strong__out1 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->tb_sdram__DOT__dut__DOT__memory[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    VL_RAND_RESET_W(128, vlSelf->tb_sdram__DOT__dut__DOT__selected_row);
    vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes = VL_RAND_RESET_I(8);
    vlSelf->tb_sdram__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row = VL_RAND_RESET_I(4);
    vlSelf->tb_sdram__DOT__dut__DOT__row_address = VL_RAND_RESET_I(4);
    vlSelf->tb_sdram__DOT__dut__DOT__col_address = VL_RAND_RESET_I(4);
    vlSelf->tb_sdram__DOT__dut__DOT__output_data_register = VL_RAND_RESET_I(8);
    vlSelf->tb_sdram__DOT__dut__DOT__input_data_register = VL_RAND_RESET_I(8);
    vlSelf->tb_sdram__DOT__dut__DOT__command = VL_RAND_RESET_I(3);
    vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sdram__DOT__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
