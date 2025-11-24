// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSDRAM__Syms.h"


void VSDRAM___024root__trace_chg_0_sub_0(VSDRAM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSDRAM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_chg_0\n"); );
    // Init
    VSDRAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSDRAM___024root*>(voidSelf);
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSDRAM___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSDRAM___024root__trace_chg_0_sub_0(VSDRAM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_sdram__DOT__partial_address_bus),4);
        bufp->chgBit(oldp+1,(vlSelf->tb_sdram__DOT__chip_enable_not));
        bufp->chgBit(oldp+2,(vlSelf->tb_sdram__DOT__write_not));
        bufp->chgBit(oldp+3,(vlSelf->tb_sdram__DOT__ras_not));
        bufp->chgBit(oldp+4,(vlSelf->tb_sdram__DOT__cas_not));
        bufp->chgCData(oldp+5,(vlSelf->tb_sdram__DOT__data_out),8);
        bufp->chgBit(oldp+6,(vlSelf->tb_sdram__DOT__drive_data));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+7,(vlSelf->tb_sdram__DOT__dut__DOT__selected_row),128);
        bufp->chgCData(oldp+11,(vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes),8);
        bufp->chgCData(oldp+12,(vlSelf->tb_sdram__DOT__dut__DOT__state),3);
        bufp->chgCData(oldp+13,(vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row),4);
        bufp->chgCData(oldp+14,(vlSelf->tb_sdram__DOT__dut__DOT__row_address),4);
        bufp->chgCData(oldp+15,(vlSelf->tb_sdram__DOT__dut__DOT__col_address),4);
        bufp->chgCData(oldp+16,(vlSelf->tb_sdram__DOT__dut__DOT__output_data_register),8);
        bufp->chgCData(oldp+17,(vlSelf->tb_sdram__DOT__dut__DOT__input_data_register),8);
        bufp->chgIData(oldp+18,(vlSymsp->TOP____024unit.get_row__Vstatic__i),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP____024unit.put_row__Vstatic__i),32);
    }
    bufp->chgBit(oldp+20,(vlSelf->tb_sdram__DOT__clock));
    bufp->chgCData(oldp+21,(((((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                ? 0xffU : 0U) & (IData)(vlSelf->tb_sdram__DOT__data__strong__out1)) 
                             | (((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                  ? (IData)(vlSelf->tb_sdram__DOT__data_out)
                                  : 0U) & ((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->chgCData(oldp+22,(vlSelf->tb_sdram__DOT__dut__DOT__command),3);
}

void VSDRAM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_cleanup\n"); );
    // Init
    VSDRAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSDRAM___024root*>(voidSelf);
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
