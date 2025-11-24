// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSDRAM__Syms.h"


VL_ATTR_COLD void VSDRAM___024root__trace_init_sub__TOP____024unit__0(VSDRAM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSDRAM___024root__trace_init_sub__TOP__0(VSDRAM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    VSDRAM___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_sdram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"partial_address_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"chip_enable_not",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"write_not",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ras_not",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cas_not",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"drive_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"partial_address_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+21,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"chip_enable_not",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"write_not",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ras_not",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cas_not",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"data",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"IS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"IS_REFRESHING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"IS_ROW_SELECTED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"IS_COL_SELECTED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"IS_READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"IS_WRITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"command_refresh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"command_select_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"command_select_column",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"BURST_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+8,0,"selected_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+12,0,"remaining_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+14,0,"last_refreshed_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"row_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"col_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"output_data_register",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"input_data_register",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VSDRAM___024root__trace_init_sub__TOP____024unit__0(VSDRAM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+19,0,"get_row__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+20,0,"put_row__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void VSDRAM___024root__trace_init_top(VSDRAM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_init_top\n"); );
    // Body
    VSDRAM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSDRAM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSDRAM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSDRAM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSDRAM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSDRAM___024root__trace_register(VSDRAM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VSDRAM___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VSDRAM___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VSDRAM___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VSDRAM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSDRAM___024root__trace_const_0_sub_0(VSDRAM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSDRAM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_const_0\n"); );
    // Init
    VSDRAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSDRAM___024root*>(voidSelf);
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSDRAM___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSDRAM___024root__trace_const_0_sub_0(VSDRAM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+24,(0U),3);
    bufp->fullCData(oldp+25,(1U),3);
    bufp->fullCData(oldp+26,(2U),3);
    bufp->fullCData(oldp+27,(3U),3);
    bufp->fullCData(oldp+28,(4U),3);
    bufp->fullCData(oldp+29,(5U),3);
    bufp->fullIData(oldp+30,(4U),32);
}

VL_ATTR_COLD void VSDRAM___024root__trace_full_0_sub_0(VSDRAM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSDRAM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_full_0\n"); );
    // Init
    VSDRAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSDRAM___024root*>(voidSelf);
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSDRAM___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSDRAM___024root__trace_full_0_sub_0(VSDRAM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSDRAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSDRAM___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_sdram__DOT__partial_address_bus),4);
    bufp->fullBit(oldp+2,(vlSelf->tb_sdram__DOT__chip_enable_not));
    bufp->fullBit(oldp+3,(vlSelf->tb_sdram__DOT__write_not));
    bufp->fullBit(oldp+4,(vlSelf->tb_sdram__DOT__ras_not));
    bufp->fullBit(oldp+5,(vlSelf->tb_sdram__DOT__cas_not));
    bufp->fullCData(oldp+6,(vlSelf->tb_sdram__DOT__data_out),8);
    bufp->fullBit(oldp+7,(vlSelf->tb_sdram__DOT__drive_data));
    bufp->fullWData(oldp+8,(vlSelf->tb_sdram__DOT__dut__DOT__selected_row),128);
    bufp->fullCData(oldp+12,(vlSelf->tb_sdram__DOT__dut__DOT__remaining_bytes),8);
    bufp->fullCData(oldp+13,(vlSelf->tb_sdram__DOT__dut__DOT__state),3);
    bufp->fullCData(oldp+14,(vlSelf->tb_sdram__DOT__dut__DOT__last_refreshed_row),4);
    bufp->fullCData(oldp+15,(vlSelf->tb_sdram__DOT__dut__DOT__row_address),4);
    bufp->fullCData(oldp+16,(vlSelf->tb_sdram__DOT__dut__DOT__col_address),4);
    bufp->fullCData(oldp+17,(vlSelf->tb_sdram__DOT__dut__DOT__output_data_register),8);
    bufp->fullCData(oldp+18,(vlSelf->tb_sdram__DOT__dut__DOT__input_data_register),8);
    bufp->fullIData(oldp+19,(vlSymsp->TOP____024unit.get_row__Vstatic__i),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP____024unit.put_row__Vstatic__i),32);
    bufp->fullBit(oldp+21,(vlSelf->tb_sdram__DOT__clock));
    bufp->fullCData(oldp+22,(((((IData)(vlSelf->tb_sdram__DOT__dut__DOT____VdfgTmp_hccf8a427__0)
                                 ? 0xffU : 0U) & (IData)(vlSelf->tb_sdram__DOT__data__strong__out1)) 
                              | (((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                   ? (IData)(vlSelf->tb_sdram__DOT__data_out)
                                   : 0U) & ((IData)(vlSelf->tb_sdram__DOT__drive_data)
                                             ? 0xffU
                                             : 0U)))),8);
    bufp->fullCData(oldp+23,(vlSelf->tb_sdram__DOT__dut__DOT__command),3);
}
